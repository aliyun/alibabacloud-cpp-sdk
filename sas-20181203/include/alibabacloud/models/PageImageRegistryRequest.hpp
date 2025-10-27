// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAGEIMAGEREGISTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PAGEIMAGEREGISTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class PageImageRegistryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PageImageRegistryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegistryNameLike, registryNameLike_);
      DARABONBA_PTR_TO_JSON(RegistryTypeInList, registryTypeInList_);
      DARABONBA_PTR_TO_JSON(RegistryTypeNotInList, registryTypeNotInList_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, PageImageRegistryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegistryNameLike, registryNameLike_);
      DARABONBA_PTR_FROM_JSON(RegistryTypeInList, registryTypeInList_);
      DARABONBA_PTR_FROM_JSON(RegistryTypeNotInList, registryTypeNotInList_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    PageImageRegistryRequest() = default ;
    PageImageRegistryRequest(const PageImageRegistryRequest &) = default ;
    PageImageRegistryRequest(PageImageRegistryRequest &&) = default ;
    PageImageRegistryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PageImageRegistryRequest() = default ;
    PageImageRegistryRequest& operator=(const PageImageRegistryRequest &) = default ;
    PageImageRegistryRequest& operator=(PageImageRegistryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->pageSize_ == nullptr && return this->registryNameLike_ == nullptr && return this->registryTypeInList_ == nullptr && return this->registryTypeNotInList_ == nullptr && return this->sourceIp_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline PageImageRegistryRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline PageImageRegistryRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // registryNameLike Field Functions 
    bool hasRegistryNameLike() const { return this->registryNameLike_ != nullptr;};
    void deleteRegistryNameLike() { this->registryNameLike_ = nullptr;};
    inline string registryNameLike() const { DARABONBA_PTR_GET_DEFAULT(registryNameLike_, "") };
    inline PageImageRegistryRequest& setRegistryNameLike(string registryNameLike) { DARABONBA_PTR_SET_VALUE(registryNameLike_, registryNameLike) };


    // registryTypeInList Field Functions 
    bool hasRegistryTypeInList() const { return this->registryTypeInList_ != nullptr;};
    void deleteRegistryTypeInList() { this->registryTypeInList_ = nullptr;};
    inline const vector<string> & registryTypeInList() const { DARABONBA_PTR_GET_CONST(registryTypeInList_, vector<string>) };
    inline vector<string> registryTypeInList() { DARABONBA_PTR_GET(registryTypeInList_, vector<string>) };
    inline PageImageRegistryRequest& setRegistryTypeInList(const vector<string> & registryTypeInList) { DARABONBA_PTR_SET_VALUE(registryTypeInList_, registryTypeInList) };
    inline PageImageRegistryRequest& setRegistryTypeInList(vector<string> && registryTypeInList) { DARABONBA_PTR_SET_RVALUE(registryTypeInList_, registryTypeInList) };


    // registryTypeNotInList Field Functions 
    bool hasRegistryTypeNotInList() const { return this->registryTypeNotInList_ != nullptr;};
    void deleteRegistryTypeNotInList() { this->registryTypeNotInList_ = nullptr;};
    inline const vector<string> & registryTypeNotInList() const { DARABONBA_PTR_GET_CONST(registryTypeNotInList_, vector<string>) };
    inline vector<string> registryTypeNotInList() { DARABONBA_PTR_GET(registryTypeNotInList_, vector<string>) };
    inline PageImageRegistryRequest& setRegistryTypeNotInList(const vector<string> & registryTypeNotInList) { DARABONBA_PTR_SET_VALUE(registryTypeNotInList_, registryTypeNotInList) };
    inline PageImageRegistryRequest& setRegistryTypeNotInList(vector<string> && registryTypeNotInList) { DARABONBA_PTR_SET_RVALUE(registryTypeNotInList_, registryTypeNotInList) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline PageImageRegistryRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The number of the page to return.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries to return on each page. Default value: 20.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The name of the image repository. Fuzzy match is supported.
    std::shared_ptr<string> registryNameLike_ = nullptr;
    // The types of image repositories.
    std::shared_ptr<vector<string>> registryTypeInList_ = nullptr;
    // The types of excluded image repositories.
    std::shared_ptr<vector<string>> registryTypeNotInList_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
