// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASOURCEMETARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDATASOURCEMETARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDataSourceMetaResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataSourceMetaResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Meta, meta_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataSourceMetaResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Meta, meta_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetDataSourceMetaResponseBodyData() = default ;
    GetDataSourceMetaResponseBodyData(const GetDataSourceMetaResponseBodyData &) = default ;
    GetDataSourceMetaResponseBodyData(GetDataSourceMetaResponseBodyData &&) = default ;
    GetDataSourceMetaResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataSourceMetaResponseBodyData() = default ;
    GetDataSourceMetaResponseBodyData& operator=(const GetDataSourceMetaResponseBodyData &) = default ;
    GetDataSourceMetaResponseBodyData& operator=(GetDataSourceMetaResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->message_ != nullptr
        && this->meta_ != nullptr && this->status_ != nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDataSourceMetaResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // meta Field Functions 
    bool hasMeta() const { return this->meta_ != nullptr;};
    void deleteMeta() { this->meta_ = nullptr;};
    inline string meta() const { DARABONBA_PTR_GET_DEFAULT(meta_, "") };
    inline GetDataSourceMetaResponseBodyData& setMeta(string meta) { DARABONBA_PTR_SET_VALUE(meta_, meta) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDataSourceMetaResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The reason why the metadata of the data source fails to be obtained. If the metadata of the data source is obtained, no value is returned for this parameter.
    std::shared_ptr<string> message_ = nullptr;
    // The returned metadata of the data source. The returned metadata is in the JSON format.
    // 
    // `{"dbTables":[{"dbName":"testdb","schema":[{"tableInfos":[{"dbName":"testdb","enable":true,"table":"table1","tableName":"table1"}]},{"tableInfos":[{"dbName":"testdb","enable":true,"table":"table2","tableName":"table2"}]}]}]}`
    // 
    // Parameter description:
    // 
    // *   dbName: the name of the database in which the data source resides.
    // *   schema: the schema of the database.
    // *   enable: indicates whether the database is available. The valid values are true and false. The value true indicates that the database is available. The value false indicates that the database is unavailable.
    // *   tableName: the name of the table in the database.
    // *   tableInfos: the information about the table in the database.
    std::shared_ptr<string> meta_ = nullptr;
    // Indicates whether the metadata of the data source is obtained. Valid values:
    // 
    // *   success: The metadata of the data source is obtained.
    // *   fail: The metadata of the data source failed to be obtained. You can troubleshoot issues based on the Message parameter.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
