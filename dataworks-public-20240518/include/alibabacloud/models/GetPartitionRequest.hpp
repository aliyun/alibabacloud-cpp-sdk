// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPARTITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPARTITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetPartitionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPartitionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(TableId, tableId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPartitionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(TableId, tableId_);
    };
    GetPartitionRequest() = default ;
    GetPartitionRequest(const GetPartitionRequest &) = default ;
    GetPartitionRequest(GetPartitionRequest &&) = default ;
    GetPartitionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPartitionRequest() = default ;
    GetPartitionRequest& operator=(const GetPartitionRequest &) = default ;
    GetPartitionRequest& operator=(GetPartitionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->tableId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetPartitionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline string tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
    inline GetPartitionRequest& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


  protected:
    // The partition name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The table ID. You can refer to the result returned by the ListTables operation and [Concepts related to metadata entities](https://help.aliyun.com/document_detail/2880092.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> tableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
