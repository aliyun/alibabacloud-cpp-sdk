// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNACOSMCPSERVERRESPONSEBODYDATAALLVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_GETNACOSMCPSERVERRESPONSEBODYDATAALLVERSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetNacosMcpServerResponseBodyDataAllVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNacosMcpServerResponseBodyDataAllVersions& obj) { 
      DARABONBA_PTR_TO_JSON(Is_latest, isLatest_);
      DARABONBA_PTR_TO_JSON(Release_date, releaseDate_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetNacosMcpServerResponseBodyDataAllVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(Is_latest, isLatest_);
      DARABONBA_PTR_FROM_JSON(Release_date, releaseDate_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetNacosMcpServerResponseBodyDataAllVersions() = default ;
    GetNacosMcpServerResponseBodyDataAllVersions(const GetNacosMcpServerResponseBodyDataAllVersions &) = default ;
    GetNacosMcpServerResponseBodyDataAllVersions(GetNacosMcpServerResponseBodyDataAllVersions &&) = default ;
    GetNacosMcpServerResponseBodyDataAllVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNacosMcpServerResponseBodyDataAllVersions() = default ;
    GetNacosMcpServerResponseBodyDataAllVersions& operator=(const GetNacosMcpServerResponseBodyDataAllVersions &) = default ;
    GetNacosMcpServerResponseBodyDataAllVersions& operator=(GetNacosMcpServerResponseBodyDataAllVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isLatest_ != nullptr
        && this->releaseDate_ != nullptr && this->version_ != nullptr; };
    // isLatest Field Functions 
    bool hasIsLatest() const { return this->isLatest_ != nullptr;};
    void deleteIsLatest() { this->isLatest_ = nullptr;};
    inline bool isLatest() const { DARABONBA_PTR_GET_DEFAULT(isLatest_, false) };
    inline GetNacosMcpServerResponseBodyDataAllVersions& setIsLatest(bool isLatest) { DARABONBA_PTR_SET_VALUE(isLatest_, isLatest) };


    // releaseDate Field Functions 
    bool hasReleaseDate() const { return this->releaseDate_ != nullptr;};
    void deleteReleaseDate() { this->releaseDate_ = nullptr;};
    inline string releaseDate() const { DARABONBA_PTR_GET_DEFAULT(releaseDate_, "") };
    inline GetNacosMcpServerResponseBodyDataAllVersions& setReleaseDate(string releaseDate) { DARABONBA_PTR_SET_VALUE(releaseDate_, releaseDate) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetNacosMcpServerResponseBodyDataAllVersions& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<bool> isLatest_ = nullptr;
    std::shared_ptr<string> releaseDate_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
