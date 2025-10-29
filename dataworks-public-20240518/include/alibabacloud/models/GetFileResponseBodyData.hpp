// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETFILERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetFileResponseBodyDataFile.hpp>
#include <alibabacloud/models/GetFileResponseBodyDataNodeConfiguration.hpp>
#include <alibabacloud/models/GetFileResponseBodyDataResourceDownloadLink.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetFileResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(File, file_);
      DARABONBA_PTR_TO_JSON(NodeConfiguration, nodeConfiguration_);
      DARABONBA_PTR_TO_JSON(ResourceDownloadLink, resourceDownloadLink_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(File, file_);
      DARABONBA_PTR_FROM_JSON(NodeConfiguration, nodeConfiguration_);
      DARABONBA_PTR_FROM_JSON(ResourceDownloadLink, resourceDownloadLink_);
    };
    GetFileResponseBodyData() = default ;
    GetFileResponseBodyData(const GetFileResponseBodyData &) = default ;
    GetFileResponseBodyData(GetFileResponseBodyData &&) = default ;
    GetFileResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileResponseBodyData() = default ;
    GetFileResponseBodyData& operator=(const GetFileResponseBodyData &) = default ;
    GetFileResponseBodyData& operator=(GetFileResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->file_ == nullptr
        && return this->nodeConfiguration_ == nullptr && return this->resourceDownloadLink_ == nullptr; };
    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline const Models::GetFileResponseBodyDataFile & file() const { DARABONBA_PTR_GET_CONST(file_, Models::GetFileResponseBodyDataFile) };
    inline Models::GetFileResponseBodyDataFile file() { DARABONBA_PTR_GET(file_, Models::GetFileResponseBodyDataFile) };
    inline GetFileResponseBodyData& setFile(const Models::GetFileResponseBodyDataFile & file) { DARABONBA_PTR_SET_VALUE(file_, file) };
    inline GetFileResponseBodyData& setFile(Models::GetFileResponseBodyDataFile && file) { DARABONBA_PTR_SET_RVALUE(file_, file) };


    // nodeConfiguration Field Functions 
    bool hasNodeConfiguration() const { return this->nodeConfiguration_ != nullptr;};
    void deleteNodeConfiguration() { this->nodeConfiguration_ = nullptr;};
    inline const Models::GetFileResponseBodyDataNodeConfiguration & nodeConfiguration() const { DARABONBA_PTR_GET_CONST(nodeConfiguration_, Models::GetFileResponseBodyDataNodeConfiguration) };
    inline Models::GetFileResponseBodyDataNodeConfiguration nodeConfiguration() { DARABONBA_PTR_GET(nodeConfiguration_, Models::GetFileResponseBodyDataNodeConfiguration) };
    inline GetFileResponseBodyData& setNodeConfiguration(const Models::GetFileResponseBodyDataNodeConfiguration & nodeConfiguration) { DARABONBA_PTR_SET_VALUE(nodeConfiguration_, nodeConfiguration) };
    inline GetFileResponseBodyData& setNodeConfiguration(Models::GetFileResponseBodyDataNodeConfiguration && nodeConfiguration) { DARABONBA_PTR_SET_RVALUE(nodeConfiguration_, nodeConfiguration) };


    // resourceDownloadLink Field Functions 
    bool hasResourceDownloadLink() const { return this->resourceDownloadLink_ != nullptr;};
    void deleteResourceDownloadLink() { this->resourceDownloadLink_ = nullptr;};
    inline const Models::GetFileResponseBodyDataResourceDownloadLink & resourceDownloadLink() const { DARABONBA_PTR_GET_CONST(resourceDownloadLink_, Models::GetFileResponseBodyDataResourceDownloadLink) };
    inline Models::GetFileResponseBodyDataResourceDownloadLink resourceDownloadLink() { DARABONBA_PTR_GET(resourceDownloadLink_, Models::GetFileResponseBodyDataResourceDownloadLink) };
    inline GetFileResponseBodyData& setResourceDownloadLink(const Models::GetFileResponseBodyDataResourceDownloadLink & resourceDownloadLink) { DARABONBA_PTR_SET_VALUE(resourceDownloadLink_, resourceDownloadLink) };
    inline GetFileResponseBodyData& setResourceDownloadLink(Models::GetFileResponseBodyDataResourceDownloadLink && resourceDownloadLink) { DARABONBA_PTR_SET_RVALUE(resourceDownloadLink_, resourceDownloadLink) };


  protected:
    // The basic information about the file.
    std::shared_ptr<Models::GetFileResponseBodyDataFile> file_ = nullptr;
    // The scheduling configurations of the file.
    std::shared_ptr<Models::GetFileResponseBodyDataNodeConfiguration> nodeConfiguration_ = nullptr;
    // The download URL of the resource.
    std::shared_ptr<Models::GetFileResponseBodyDataResourceDownloadLink> resourceDownloadLink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
