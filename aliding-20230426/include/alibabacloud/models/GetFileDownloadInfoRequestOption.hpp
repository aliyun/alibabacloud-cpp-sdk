// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEDOWNLOADINFOREQUESTOPTION_HPP_
#define ALIBABACLOUD_MODELS_GETFILEDOWNLOADINFOREQUESTOPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetFileDownloadInfoRequestOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileDownloadInfoRequestOption& obj) { 
      DARABONBA_PTR_TO_JSON(PreferIntranet, preferIntranet_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileDownloadInfoRequestOption& obj) { 
      DARABONBA_PTR_FROM_JSON(PreferIntranet, preferIntranet_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetFileDownloadInfoRequestOption() = default ;
    GetFileDownloadInfoRequestOption(const GetFileDownloadInfoRequestOption &) = default ;
    GetFileDownloadInfoRequestOption(GetFileDownloadInfoRequestOption &&) = default ;
    GetFileDownloadInfoRequestOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileDownloadInfoRequestOption() = default ;
    GetFileDownloadInfoRequestOption& operator=(const GetFileDownloadInfoRequestOption &) = default ;
    GetFileDownloadInfoRequestOption& operator=(GetFileDownloadInfoRequestOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->preferIntranet_ == nullptr
        && return this->version_ == nullptr; };
    // preferIntranet Field Functions 
    bool hasPreferIntranet() const { return this->preferIntranet_ != nullptr;};
    void deletePreferIntranet() { this->preferIntranet_ = nullptr;};
    inline bool preferIntranet() const { DARABONBA_PTR_GET_DEFAULT(preferIntranet_, false) };
    inline GetFileDownloadInfoRequestOption& setPreferIntranet(bool preferIntranet) { DARABONBA_PTR_SET_VALUE(preferIntranet_, preferIntranet) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline GetFileDownloadInfoRequestOption& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<bool> preferIntranet_ = nullptr;
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
