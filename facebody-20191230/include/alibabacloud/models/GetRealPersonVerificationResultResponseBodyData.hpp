// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREALPERSONVERIFICATIONRESULTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETREALPERSONVERIFICATIONRESULTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class GetRealPersonVerificationResultResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRealPersonVerificationResultResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Passed, passed_);
    };
    friend void from_json(const Darabonba::Json& j, GetRealPersonVerificationResultResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Passed, passed_);
    };
    GetRealPersonVerificationResultResponseBodyData() = default ;
    GetRealPersonVerificationResultResponseBodyData(const GetRealPersonVerificationResultResponseBodyData &) = default ;
    GetRealPersonVerificationResultResponseBodyData(GetRealPersonVerificationResultResponseBodyData &&) = default ;
    GetRealPersonVerificationResultResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRealPersonVerificationResultResponseBodyData() = default ;
    GetRealPersonVerificationResultResponseBodyData& operator=(const GetRealPersonVerificationResultResponseBodyData &) = default ;
    GetRealPersonVerificationResultResponseBodyData& operator=(GetRealPersonVerificationResultResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->passed_ == nullptr; };
    // passed Field Functions 
    bool hasPassed() const { return this->passed_ != nullptr;};
    void deletePassed() { this->passed_ = nullptr;};
    inline bool passed() const { DARABONBA_PTR_GET_DEFAULT(passed_, false) };
    inline GetRealPersonVerificationResultResponseBodyData& setPassed(bool passed) { DARABONBA_PTR_SET_VALUE(passed_, passed) };


  protected:
    std::shared_ptr<bool> passed_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
