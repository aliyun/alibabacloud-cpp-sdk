// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETYZDINSTANCETASKRESULTRESPONSEBODYDATADOWNLOADURLS_HPP_
#define ALIBABACLOUD_MODELS_GETYZDINSTANCETASKRESULTRESPONSEBODYDATADOWNLOADURLS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class GetYzdInstanceTaskResultResponseBodyDataDownloadUrls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetYzdInstanceTaskResultResponseBodyDataDownloadUrls& obj) { 
      DARABONBA_PTR_TO_JSON(pwd, pwd_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetYzdInstanceTaskResultResponseBodyDataDownloadUrls& obj) { 
      DARABONBA_PTR_FROM_JSON(pwd, pwd_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    GetYzdInstanceTaskResultResponseBodyDataDownloadUrls() = default ;
    GetYzdInstanceTaskResultResponseBodyDataDownloadUrls(const GetYzdInstanceTaskResultResponseBodyDataDownloadUrls &) = default ;
    GetYzdInstanceTaskResultResponseBodyDataDownloadUrls(GetYzdInstanceTaskResultResponseBodyDataDownloadUrls &&) = default ;
    GetYzdInstanceTaskResultResponseBodyDataDownloadUrls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetYzdInstanceTaskResultResponseBodyDataDownloadUrls() = default ;
    GetYzdInstanceTaskResultResponseBodyDataDownloadUrls& operator=(const GetYzdInstanceTaskResultResponseBodyDataDownloadUrls &) = default ;
    GetYzdInstanceTaskResultResponseBodyDataDownloadUrls& operator=(GetYzdInstanceTaskResultResponseBodyDataDownloadUrls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pwd_ != nullptr
        && this->url_ != nullptr; };
    // pwd Field Functions 
    bool hasPwd() const { return this->pwd_ != nullptr;};
    void deletePwd() { this->pwd_ = nullptr;};
    inline string pwd() const { DARABONBA_PTR_GET_DEFAULT(pwd_, "") };
    inline GetYzdInstanceTaskResultResponseBodyDataDownloadUrls& setPwd(string pwd) { DARABONBA_PTR_SET_VALUE(pwd_, pwd) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetYzdInstanceTaskResultResponseBodyDataDownloadUrls& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> pwd_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
