// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINNOLISTSEARCHREQUESTOPTION_HPP_
#define ALIBABACLOUD_MODELS_TRAINNOLISTSEARCHREQUESTOPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainNoListSearchRequestOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainNoListSearchRequestOption& obj) { 
      DARABONBA_PTR_TO_JSON(need_transfer, needTransfer_);
    };
    friend void from_json(const Darabonba::Json& j, TrainNoListSearchRequestOption& obj) { 
      DARABONBA_PTR_FROM_JSON(need_transfer, needTransfer_);
    };
    TrainNoListSearchRequestOption() = default ;
    TrainNoListSearchRequestOption(const TrainNoListSearchRequestOption &) = default ;
    TrainNoListSearchRequestOption(TrainNoListSearchRequestOption &&) = default ;
    TrainNoListSearchRequestOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainNoListSearchRequestOption() = default ;
    TrainNoListSearchRequestOption& operator=(const TrainNoListSearchRequestOption &) = default ;
    TrainNoListSearchRequestOption& operator=(TrainNoListSearchRequestOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->needTransfer_ != nullptr; };
    // needTransfer Field Functions 
    bool hasNeedTransfer() const { return this->needTransfer_ != nullptr;};
    void deleteNeedTransfer() { this->needTransfer_ = nullptr;};
    inline bool needTransfer() const { DARABONBA_PTR_GET_DEFAULT(needTransfer_, false) };
    inline TrainNoListSearchRequestOption& setNeedTransfer(bool needTransfer) { DARABONBA_PTR_SET_VALUE(needTransfer_, needTransfer) };


  protected:
    std::shared_ptr<bool> needTransfer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
