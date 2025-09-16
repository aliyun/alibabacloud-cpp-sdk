// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEINDEXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEINDEXREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class DeleteIndexRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIndexRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dataSource, dataSource_);
      DARABONBA_PTR_TO_JSON(deleteDataSource, deleteDataSource_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIndexRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dataSource, dataSource_);
      DARABONBA_PTR_FROM_JSON(deleteDataSource, deleteDataSource_);
    };
    DeleteIndexRequest() = default ;
    DeleteIndexRequest(const DeleteIndexRequest &) = default ;
    DeleteIndexRequest(DeleteIndexRequest &&) = default ;
    DeleteIndexRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIndexRequest() = default ;
    DeleteIndexRequest& operator=(const DeleteIndexRequest &) = default ;
    DeleteIndexRequest& operator=(DeleteIndexRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSource_ != nullptr
        && this->deleteDataSource_ != nullptr; };
    // dataSource Field Functions 
    bool hasDataSource() const { return this->dataSource_ != nullptr;};
    void deleteDataSource() { this->dataSource_ = nullptr;};
    inline string dataSource() const { DARABONBA_PTR_GET_DEFAULT(dataSource_, "") };
    inline DeleteIndexRequest& setDataSource(string dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };


    // deleteDataSource Field Functions 
    bool hasDeleteDataSource() const { return this->deleteDataSource_ != nullptr;};
    void deleteDeleteDataSource() { this->deleteDataSource_ = nullptr;};
    inline bool deleteDataSource() const { DARABONBA_PTR_GET_DEFAULT(deleteDataSource_, false) };
    inline DeleteIndexRequest& setDeleteDataSource(bool deleteDataSource) { DARABONBA_PTR_SET_VALUE(deleteDataSource_, deleteDataSource) };


  protected:
    // The data source.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataSource_ = nullptr;
    // Specifies whether to delete the data source.
    std::shared_ptr<bool> deleteDataSource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
