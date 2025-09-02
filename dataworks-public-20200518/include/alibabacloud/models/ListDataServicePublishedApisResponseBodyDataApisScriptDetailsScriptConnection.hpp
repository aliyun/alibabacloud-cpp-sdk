// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEPUBLISHEDAPISRESPONSEBODYDATAAPISSCRIPTDETAILSSCRIPTCONNECTION_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEPUBLISHEDAPISRESPONSEBODYDATAAPISSCRIPTDETAILSSCRIPTCONNECTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionId, connectionId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection() = default ;
    ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection(const ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection &) = default ;
    ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection(ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection &&) = default ;
    ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection() = default ;
    ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection& operator=(const ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection &) = default ;
    ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection& operator=(ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection &&) = default ;
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
    inline ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection& setConnectionId(int64_t connectionId) { DARABONBA_PTR_SET_VALUE(connectionId_, connectionId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListDataServicePublishedApisResponseBodyDataApisScriptDetailsScriptConnection& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The data source ID.
    std::shared_ptr<int64_t> connectionId_ = nullptr;
    // The name of the table in the data source.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
