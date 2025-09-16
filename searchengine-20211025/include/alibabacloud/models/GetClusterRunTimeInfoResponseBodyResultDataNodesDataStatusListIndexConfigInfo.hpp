// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERRUNTIMEINFORESPONSEBODYRESULTDATANODESDATASTATUSLISTINDEXCONFIGINFO_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERRUNTIMEINFORESPONSEBODYRESULTDATANODESDATASTATUSLISTINDEXCONFIGINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo& obj) { 
      DARABONBA_PTR_TO_JSON(configMetaName, configMetaName_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(configMetaName, configMetaName_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo() = default ;
    GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo(const GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo &) = default ;
    GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo(GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo &&) = default ;
    GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo() = default ;
    GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo& operator=(const GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo &) = default ;
    GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo& operator=(GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configMetaName_ != nullptr
        && this->version_ != nullptr; };
    // configMetaName Field Functions 
    bool hasConfigMetaName() const { return this->configMetaName_ != nullptr;};
    void deleteConfigMetaName() { this->configMetaName_ = nullptr;};
    inline string configMetaName() const { DARABONBA_PTR_GET_DEFAULT(configMetaName_, "") };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo& setConfigMetaName(string configMetaName) { DARABONBA_PTR_SET_VALUE(configMetaName_, configMetaName) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int64_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0L) };
    inline GetClusterRunTimeInfoResponseBodyResultDataNodesDataStatusListIndexConfigInfo& setVersion(int64_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The name of the index configuration.
    std::shared_ptr<string> configMetaName_ = nullptr;
    // The version of the index template.
    std::shared_ptr<int64_t> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
