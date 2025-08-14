// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNACOSMCPSERVERRESPONSEBODYDATAVERSIONDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETNACOSMCPSERVERRESPONSEBODYDATAVERSIONDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetNacosMcpServerResponseBodyDataVersionDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNacosMcpServerResponseBodyDataVersionDetail& obj) { 
      DARABONBA_PTR_TO_JSON(IsLatest, isLatest_);
      DARABONBA_PTR_TO_JSON(ReleaseDate, releaseDate_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetNacosMcpServerResponseBodyDataVersionDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(IsLatest, isLatest_);
      DARABONBA_PTR_FROM_JSON(ReleaseDate, releaseDate_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetNacosMcpServerResponseBodyDataVersionDetail() = default ;
    GetNacosMcpServerResponseBodyDataVersionDetail(const GetNacosMcpServerResponseBodyDataVersionDetail &) = default ;
    GetNacosMcpServerResponseBodyDataVersionDetail(GetNacosMcpServerResponseBodyDataVersionDetail &&) = default ;
    GetNacosMcpServerResponseBodyDataVersionDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNacosMcpServerResponseBodyDataVersionDetail() = default ;
    GetNacosMcpServerResponseBodyDataVersionDetail& operator=(const GetNacosMcpServerResponseBodyDataVersionDetail &) = default ;
    GetNacosMcpServerResponseBodyDataVersionDetail& operator=(GetNacosMcpServerResponseBodyDataVersionDetail &&) = default ;
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
    inline GetNacosMcpServerResponseBodyDataVersionDetail& setIsLatest(bool isLatest) { DARABONBA_PTR_SET_VALUE(isLatest_, isLatest) };


    // releaseDate Field Functions 
    bool hasReleaseDate() const { return this->releaseDate_ != nullptr;};
    void deleteReleaseDate() { this->releaseDate_ = nullptr;};
    inline string releaseDate() const { DARABONBA_PTR_GET_DEFAULT(releaseDate_, "") };
    inline GetNacosMcpServerResponseBodyDataVersionDetail& setReleaseDate(string releaseDate) { DARABONBA_PTR_SET_VALUE(releaseDate_, releaseDate) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetNacosMcpServerResponseBodyDataVersionDetail& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<bool> isLatest_ = nullptr;
    std::shared_ptr<string> releaseDate_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
