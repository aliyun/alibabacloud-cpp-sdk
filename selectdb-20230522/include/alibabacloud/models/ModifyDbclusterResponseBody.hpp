// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyDBClusterResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Selectdb20230522
{
namespace Models
{
  class ModifyDBClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyDBClusterResponseBody() = default ;
    ModifyDBClusterResponseBody(const ModifyDBClusterResponseBody &) = default ;
    ModifyDBClusterResponseBody(ModifyDBClusterResponseBody &&) = default ;
    ModifyDBClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterResponseBody() = default ;
    ModifyDBClusterResponseBody& operator=(const ModifyDBClusterResponseBody &) = default ;
    ModifyDBClusterResponseBody& operator=(ModifyDBClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceId_ != nullptr
        && this->data_ != nullptr && this->requestId_ != nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBClusterResponseBody& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifyDBClusterResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ModifyDBClusterResponseBodyData) };
    inline ModifyDBClusterResponseBodyData data() { DARABONBA_PTR_GET(data_, ModifyDBClusterResponseBodyData) };
    inline ModifyDBClusterResponseBody& setData(const ModifyDBClusterResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifyDBClusterResponseBody& setData(ModifyDBClusterResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDBClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // 代表资源一级ID的资源属性字段
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<ModifyDBClusterResponseBodyData> data_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Selectdb20230522
#endif
