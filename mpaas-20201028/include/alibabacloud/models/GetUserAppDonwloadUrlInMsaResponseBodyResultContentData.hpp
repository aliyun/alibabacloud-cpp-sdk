// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERAPPDONWLOADURLINMSARESPONSEBODYRESULTCONTENTDATA_HPP_
#define ALIBABACLOUD_MODELS_GETUSERAPPDONWLOADURLINMSARESPONSEBODYRESULTCONTENTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetUserAppDonwloadUrlInMsaResponseBodyResultContentData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserAppDonwloadUrlInMsaResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_TO_JSON(Filename, filename_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserAppDonwloadUrlInMsaResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_FROM_JSON(Filename, filename_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetUserAppDonwloadUrlInMsaResponseBodyResultContentData() = default ;
    GetUserAppDonwloadUrlInMsaResponseBodyResultContentData(const GetUserAppDonwloadUrlInMsaResponseBodyResultContentData &) = default ;
    GetUserAppDonwloadUrlInMsaResponseBodyResultContentData(GetUserAppDonwloadUrlInMsaResponseBodyResultContentData &&) = default ;
    GetUserAppDonwloadUrlInMsaResponseBodyResultContentData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserAppDonwloadUrlInMsaResponseBodyResultContentData() = default ;
    GetUserAppDonwloadUrlInMsaResponseBodyResultContentData& operator=(const GetUserAppDonwloadUrlInMsaResponseBodyResultContentData &) = default ;
    GetUserAppDonwloadUrlInMsaResponseBodyResultContentData& operator=(GetUserAppDonwloadUrlInMsaResponseBodyResultContentData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filename_ != nullptr
        && this->url_ != nullptr; };
    // filename Field Functions 
    bool hasFilename() const { return this->filename_ != nullptr;};
    void deleteFilename() { this->filename_ = nullptr;};
    inline string filename() const { DARABONBA_PTR_GET_DEFAULT(filename_, "") };
    inline GetUserAppDonwloadUrlInMsaResponseBodyResultContentData& setFilename(string filename) { DARABONBA_PTR_SET_VALUE(filename_, filename) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetUserAppDonwloadUrlInMsaResponseBodyResultContentData& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> filename_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
