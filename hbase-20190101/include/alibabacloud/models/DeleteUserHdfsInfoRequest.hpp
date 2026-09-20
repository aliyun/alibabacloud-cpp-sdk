// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERHDFSINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERHDFSINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DeleteUserHdfsInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserHdfsInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(NameService, nameService_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserHdfsInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(NameService, nameService_);
    };
    DeleteUserHdfsInfoRequest() = default ;
    DeleteUserHdfsInfoRequest(const DeleteUserHdfsInfoRequest &) = default ;
    DeleteUserHdfsInfoRequest(DeleteUserHdfsInfoRequest &&) = default ;
    DeleteUserHdfsInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserHdfsInfoRequest() = default ;
    DeleteUserHdfsInfoRequest& operator=(const DeleteUserHdfsInfoRequest &) = default ;
    DeleteUserHdfsInfoRequest& operator=(DeleteUserHdfsInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->nameService_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DeleteUserHdfsInfoRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // nameService Field Functions 
    bool hasNameService() const { return this->nameService_ != nullptr;};
    void deleteNameService() { this->nameService_ = nullptr;};
    inline string getNameService() const { DARABONBA_PTR_GET_DEFAULT(nameService_, "") };
    inline DeleteUserHdfsInfoRequest& setNameService(string nameService) { DARABONBA_PTR_SET_VALUE(nameService_, nameService) };


  protected:
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The value of dfs.nameservices in addUserHdfsInfo. This value is returned when you call the [QueryXpackRelateDB](https://help.aliyun.com/document_detail/144509.html) operation with relateDB set to hdfs.
    // 
    // This parameter is required.
    shared_ptr<string> nameService_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
