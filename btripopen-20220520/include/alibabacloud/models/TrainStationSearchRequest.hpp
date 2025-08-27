// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINSTATIONSEARCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAINSTATIONSEARCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainStationSearchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainStationSearchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
    };
    friend void from_json(const Darabonba::Json& j, TrainStationSearchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
    };
    TrainStationSearchRequest() = default ;
    TrainStationSearchRequest(const TrainStationSearchRequest &) = default ;
    TrainStationSearchRequest(TrainStationSearchRequest &&) = default ;
    TrainStationSearchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainStationSearchRequest() = default ;
    TrainStationSearchRequest& operator=(const TrainStationSearchRequest &) = default ;
    TrainStationSearchRequest& operator=(TrainStationSearchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyword_ != nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline TrainStationSearchRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> keyword_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
