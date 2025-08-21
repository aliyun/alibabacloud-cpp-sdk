// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISTAPPLICATIONDATARESPONSEBODYDISTRESULTSDISTRESULT_HPP_
#define ALIBABACLOUD_MODELS_DISTAPPLICATIONDATARESPONSEBODYDISTRESULTSDISTRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DistApplicationDataResponseBodyDistResultsDistResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DistApplicationDataResponseBodyDistResultsDistResult& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_TO_JSON(ResultDescrip, resultDescrip_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DistApplicationDataResponseBodyDistResultsDistResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
      DARABONBA_PTR_FROM_JSON(ResultDescrip, resultDescrip_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DistApplicationDataResponseBodyDistResultsDistResult() = default ;
    DistApplicationDataResponseBodyDistResultsDistResult(const DistApplicationDataResponseBodyDistResultsDistResult &) = default ;
    DistApplicationDataResponseBodyDistResultsDistResult(DistApplicationDataResponseBodyDistResultsDistResult &&) = default ;
    DistApplicationDataResponseBodyDistResultsDistResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DistApplicationDataResponseBodyDistResultsDistResult() = default ;
    DistApplicationDataResponseBodyDistResultsDistResult& operator=(const DistApplicationDataResponseBodyDistResultsDistResult &) = default ;
    DistApplicationDataResponseBodyDistResultsDistResult& operator=(DistApplicationDataResponseBodyDistResultsDistResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->resultCode_ != nullptr && this->resultDescrip_ != nullptr && this->version_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DistApplicationDataResponseBodyDistResultsDistResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resultCode Field Functions 
    bool hasResultCode() const { return this->resultCode_ != nullptr;};
    void deleteResultCode() { this->resultCode_ = nullptr;};
    inline int32_t resultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, 0) };
    inline DistApplicationDataResponseBodyDistResultsDistResult& setResultCode(int32_t resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


    // resultDescrip Field Functions 
    bool hasResultDescrip() const { return this->resultDescrip_ != nullptr;};
    void deleteResultDescrip() { this->resultDescrip_ = nullptr;};
    inline string resultDescrip() const { DARABONBA_PTR_GET_DEFAULT(resultDescrip_, "") };
    inline DistApplicationDataResponseBodyDistResultsDistResult& setResultDescrip(string resultDescrip) { DARABONBA_PTR_SET_VALUE(resultDescrip_, resultDescrip) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DistApplicationDataResponseBodyDistResultsDistResult& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The name of the data file.
    std::shared_ptr<string> name_ = nullptr;
    // The error code. The value is of the enumerated data type.
    std::shared_ptr<int32_t> resultCode_ = nullptr;
    // The description of the distribution result.
    std::shared_ptr<string> resultDescrip_ = nullptr;
    // The version number of the data file.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
