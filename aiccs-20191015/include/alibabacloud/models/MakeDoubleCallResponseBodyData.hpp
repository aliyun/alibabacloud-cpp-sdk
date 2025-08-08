// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MAKEDOUBLECALLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_MAKEDOUBLECALLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class MakeDoubleCallResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MakeDoubleCallResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Acid, acid_);
    };
    friend void from_json(const Darabonba::Json& j, MakeDoubleCallResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Acid, acid_);
    };
    MakeDoubleCallResponseBodyData() = default ;
    MakeDoubleCallResponseBodyData(const MakeDoubleCallResponseBodyData &) = default ;
    MakeDoubleCallResponseBodyData(MakeDoubleCallResponseBodyData &&) = default ;
    MakeDoubleCallResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MakeDoubleCallResponseBodyData() = default ;
    MakeDoubleCallResponseBodyData& operator=(const MakeDoubleCallResponseBodyData &) = default ;
    MakeDoubleCallResponseBodyData& operator=(MakeDoubleCallResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acid_ != nullptr; };
    // acid Field Functions 
    bool hasAcid() const { return this->acid_ != nullptr;};
    void deleteAcid() { this->acid_ = nullptr;};
    inline string acid() const { DARABONBA_PTR_GET_DEFAULT(acid_, "") };
    inline MakeDoubleCallResponseBodyData& setAcid(string acid) { DARABONBA_PTR_SET_VALUE(acid_, acid) };


  protected:
    std::shared_ptr<string> acid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
