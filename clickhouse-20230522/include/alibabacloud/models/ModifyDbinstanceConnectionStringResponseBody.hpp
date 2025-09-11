// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCECONNECTIONSTRINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCECONNECTIONSTRINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyDBInstanceConnectionStringResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ModifyDBInstanceConnectionStringResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceConnectionStringResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceConnectionStringResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyDBInstanceConnectionStringResponseBody() = default ;
    ModifyDBInstanceConnectionStringResponseBody(const ModifyDBInstanceConnectionStringResponseBody &) = default ;
    ModifyDBInstanceConnectionStringResponseBody(ModifyDBInstanceConnectionStringResponseBody &&) = default ;
    ModifyDBInstanceConnectionStringResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceConnectionStringResponseBody() = default ;
    ModifyDBInstanceConnectionStringResponseBody& operator=(const ModifyDBInstanceConnectionStringResponseBody &) = default ;
    ModifyDBInstanceConnectionStringResponseBody& operator=(ModifyDBInstanceConnectionStringResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ModifyDBInstanceConnectionStringResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, ModifyDBInstanceConnectionStringResponseBodyData) };
    inline ModifyDBInstanceConnectionStringResponseBodyData data() { DARABONBA_PTR_GET(data_, ModifyDBInstanceConnectionStringResponseBodyData) };
    inline ModifyDBInstanceConnectionStringResponseBody& setData(const ModifyDBInstanceConnectionStringResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ModifyDBInstanceConnectionStringResponseBody& setData(ModifyDBInstanceConnectionStringResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDBInstanceConnectionStringResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    std::shared_ptr<ModifyDBInstanceConnectionStringResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
