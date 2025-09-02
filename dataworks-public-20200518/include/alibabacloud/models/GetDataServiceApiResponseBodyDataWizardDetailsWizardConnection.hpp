// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPIRESPONSEBODYDATAWIZARDDETAILSWIZARDCONNECTION_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPIRESPONSEBODYDATAWIZARDDETAILSWIZARDCONNECTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection() = default ;
    GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection(const GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection &) = default ;
    GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection(GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection &&) = default ;
    GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection() = default ;
    GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection& operator=(const GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection &) = default ;
    GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection& operator=(GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionId_ != nullptr
        && this->tableName_ != nullptr; };
    // connectionId Field Functions 
    bool hasConnectionId() const { return this->connectionId_ != nullptr;};
    void deleteConnectionId() { this->connectionId_ = nullptr;};
    inline int64_t connectionId() const { DARABONBA_PTR_GET_DEFAULT(connectionId_, 0L) };
    inline GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection& setConnectionId(int64_t connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetDataServiceApiResponseBodyDataWizardDetailsWizardConnection& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The ID of the data source.
    std::shared_ptr<int64_t> connectionId_ = nullptr;
    // The name of the table in the data source.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
