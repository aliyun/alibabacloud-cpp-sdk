// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMMSDATASOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMMSDATASOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListMmsDataSourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMmsDataSourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListMmsDataSourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListMmsDataSourcesRequest() = default ;
    ListMmsDataSourcesRequest(const ListMmsDataSourcesRequest &) = default ;
    ListMmsDataSourcesRequest(ListMmsDataSourcesRequest &&) = default ;
    ListMmsDataSourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMmsDataSourcesRequest() = default ;
    ListMmsDataSourcesRequest& operator=(const ListMmsDataSourcesRequest &) = default ;
    ListMmsDataSourcesRequest& operator=(ListMmsDataSourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->region_ != nullptr && this->type_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListMmsDataSourcesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListMmsDataSourcesRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMmsDataSourcesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListMmsDataSourcesRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListMmsDataSourcesRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
