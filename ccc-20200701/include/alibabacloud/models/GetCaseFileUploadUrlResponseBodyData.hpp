// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCASEFILEUPLOADURLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCASEFILEUPLOADURLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetCaseFileUploadUrlResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCaseFileUploadUrlResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CaseFileKey, caseFileKey_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetCaseFileUploadUrlResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CaseFileKey, caseFileKey_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetCaseFileUploadUrlResponseBodyData() = default ;
    GetCaseFileUploadUrlResponseBodyData(const GetCaseFileUploadUrlResponseBodyData &) = default ;
    GetCaseFileUploadUrlResponseBodyData(GetCaseFileUploadUrlResponseBodyData &&) = default ;
    GetCaseFileUploadUrlResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCaseFileUploadUrlResponseBodyData() = default ;
    GetCaseFileUploadUrlResponseBodyData& operator=(const GetCaseFileUploadUrlResponseBodyData &) = default ;
    GetCaseFileUploadUrlResponseBodyData& operator=(GetCaseFileUploadUrlResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->caseFileKey_ != nullptr
        && this->url_ != nullptr; };
    // caseFileKey Field Functions 
    bool hasCaseFileKey() const { return this->caseFileKey_ != nullptr;};
    void deleteCaseFileKey() { this->caseFileKey_ = nullptr;};
    inline string caseFileKey() const { DARABONBA_PTR_GET_DEFAULT(caseFileKey_, "") };
    inline GetCaseFileUploadUrlResponseBodyData& setCaseFileKey(string caseFileKey) { DARABONBA_PTR_SET_VALUE(caseFileKey_, caseFileKey) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetCaseFileUploadUrlResponseBodyData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> caseFileKey_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
