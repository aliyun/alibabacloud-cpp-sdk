// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEINPUTOROUTPUTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEINPUTOROUTPUTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListNodeInputOrOutputResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeInputOrOutputResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeInputOrOutputResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    ListNodeInputOrOutputResponseBodyData() = default ;
    ListNodeInputOrOutputResponseBodyData(const ListNodeInputOrOutputResponseBodyData &) = default ;
    ListNodeInputOrOutputResponseBodyData(ListNodeInputOrOutputResponseBodyData &&) = default ;
    ListNodeInputOrOutputResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeInputOrOutputResponseBodyData() = default ;
    ListNodeInputOrOutputResponseBodyData& operator=(const ListNodeInputOrOutputResponseBodyData &) = default ;
    ListNodeInputOrOutputResponseBodyData& operator=(ListNodeInputOrOutputResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->nodeId_ != nullptr && this->tableName_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline ListNodeInputOrOutputResponseBodyData& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline ListNodeInputOrOutputResponseBodyData& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListNodeInputOrOutputResponseBodyData& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The name of the ancestor or descendant node.
    std::shared_ptr<string> data_ = nullptr;
    // The node ID.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // This parameter does not take effect. You cannot obtain the parameter settings.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
