// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_RDS-DATA20220330_H_
#define ALIBABACLOUD_RDS-DATA20220330_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Rds-data20220330 {
class Field : public Darabonba::Model {
public:
  shared_ptr<string> arrayValue{};
  shared_ptr<string> blobValue{};
  shared_ptr<bool> booleanValue{};
  shared_ptr<bool> isNull{};
  shared_ptr<long> longValue{};
  shared_ptr<string> stringValue{};

  Field() {}

  explicit Field(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayValue) {
      res["ArrayValue"] = boost::any(*arrayValue);
    }
    if (blobValue) {
      res["BlobValue"] = boost::any(*blobValue);
    }
    if (booleanValue) {
      res["BooleanValue"] = boost::any(*booleanValue);
    }
    if (isNull) {
      res["IsNull"] = boost::any(*isNull);
    }
    if (longValue) {
      res["LongValue"] = boost::any(*longValue);
    }
    if (stringValue) {
      res["StringValue"] = boost::any(*stringValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayValue") != m.end() && !m["ArrayValue"].empty()) {
      arrayValue = make_shared<string>(boost::any_cast<string>(m["ArrayValue"]));
    }
    if (m.find("BlobValue") != m.end() && !m["BlobValue"].empty()) {
      blobValue = make_shared<string>(boost::any_cast<string>(m["BlobValue"]));
    }
    if (m.find("BooleanValue") != m.end() && !m["BooleanValue"].empty()) {
      booleanValue = make_shared<bool>(boost::any_cast<bool>(m["BooleanValue"]));
    }
    if (m.find("IsNull") != m.end() && !m["IsNull"].empty()) {
      isNull = make_shared<bool>(boost::any_cast<bool>(m["IsNull"]));
    }
    if (m.find("LongValue") != m.end() && !m["LongValue"].empty()) {
      longValue = make_shared<long>(boost::any_cast<long>(m["LongValue"]));
    }
    if (m.find("StringValue") != m.end() && !m["StringValue"].empty()) {
      stringValue = make_shared<string>(boost::any_cast<string>(m["StringValue"]));
    }
  }


  virtual ~Field() = default;
};
class BatchExecuteStatementResult : public Darabonba::Model {
public:
  shared_ptr<vector<vector<Field>>> generatedFieldsList{};

  BatchExecuteStatementResult() {}

  explicit BatchExecuteStatementResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generatedFieldsList) {
      vector<boost::any> temp1;
      for(auto item1:*generatedFieldsList){
        vector<boost::any> temp2;
        for(auto item2:item1){
          temp2.push_back(boost::any(item2.toMap()));
        }
        temp1 = boost::any(temp2);
      }
      res["GeneratedFieldsList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GeneratedFieldsList") != m.end() && !m["GeneratedFieldsList"].empty()) {
      if (typeid(vector<boost::any>) == m["GeneratedFieldsList"].type()) {
        vector<vector<Field>> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GeneratedFieldsList"])){
          if (typeid(vector<boost::any>) == item1.type()) {
            vector<Field> expect2;
            for(auto item2:boost::any_cast<vector<boost::any>>(item1)){
              if (typeid(map<string, boost::any>) == item2.type()) {
                Field model3;
                model3.fromMap(boost::any_cast<map<string, boost::any>>(item2));
                expect2.push_back(model3);
              }
            }
            expect1.push_back(expect2);
          }
        }
        generatedFieldsList = make_shared<vector<vector<Field>>>(expect1);
      }
    }
  }


  virtual ~BatchExecuteStatementResult() = default;
};
class BeginTransactionResult : public Darabonba::Model {
public:
  shared_ptr<string> transactionId{};

  BeginTransactionResult() {}

  explicit BeginTransactionResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~BeginTransactionResult() = default;
};
class ColumnMetadata : public Darabonba::Model {
public:
  shared_ptr<long> arrayBaseColumnType{};
  shared_ptr<bool> isAutoIncrement{};
  shared_ptr<bool> isCaseSensitive{};
  shared_ptr<bool> isCurrency{};
  shared_ptr<bool> isSigned{};
  shared_ptr<string> label{};
  shared_ptr<string> name{};
  shared_ptr<long> nullable{};
  shared_ptr<long> precision{};
  shared_ptr<long> scale{};
  shared_ptr<string> schemaName{};
  shared_ptr<string> tableName{};
  shared_ptr<long> type{};
  shared_ptr<string> typeName_{};

  ColumnMetadata() {}

  explicit ColumnMetadata(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (arrayBaseColumnType) {
      res["ArrayBaseColumnType"] = boost::any(*arrayBaseColumnType);
    }
    if (isAutoIncrement) {
      res["IsAutoIncrement"] = boost::any(*isAutoIncrement);
    }
    if (isCaseSensitive) {
      res["IsCaseSensitive"] = boost::any(*isCaseSensitive);
    }
    if (isCurrency) {
      res["IsCurrency"] = boost::any(*isCurrency);
    }
    if (isSigned) {
      res["IsSigned"] = boost::any(*isSigned);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nullable) {
      res["Nullable"] = boost::any(*nullable);
    }
    if (precision) {
      res["Precision"] = boost::any(*precision);
    }
    if (scale) {
      res["Scale"] = boost::any(*scale);
    }
    if (schemaName) {
      res["SchemaName"] = boost::any(*schemaName);
    }
    if (tableName) {
      res["TableName"] = boost::any(*tableName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (typeName_) {
      res["TypeName"] = boost::any(*typeName_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArrayBaseColumnType") != m.end() && !m["ArrayBaseColumnType"].empty()) {
      arrayBaseColumnType = make_shared<long>(boost::any_cast<long>(m["ArrayBaseColumnType"]));
    }
    if (m.find("IsAutoIncrement") != m.end() && !m["IsAutoIncrement"].empty()) {
      isAutoIncrement = make_shared<bool>(boost::any_cast<bool>(m["IsAutoIncrement"]));
    }
    if (m.find("IsCaseSensitive") != m.end() && !m["IsCaseSensitive"].empty()) {
      isCaseSensitive = make_shared<bool>(boost::any_cast<bool>(m["IsCaseSensitive"]));
    }
    if (m.find("IsCurrency") != m.end() && !m["IsCurrency"].empty()) {
      isCurrency = make_shared<bool>(boost::any_cast<bool>(m["IsCurrency"]));
    }
    if (m.find("IsSigned") != m.end() && !m["IsSigned"].empty()) {
      isSigned = make_shared<bool>(boost::any_cast<bool>(m["IsSigned"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Nullable") != m.end() && !m["Nullable"].empty()) {
      nullable = make_shared<long>(boost::any_cast<long>(m["Nullable"]));
    }
    if (m.find("Precision") != m.end() && !m["Precision"].empty()) {
      precision = make_shared<long>(boost::any_cast<long>(m["Precision"]));
    }
    if (m.find("Scale") != m.end() && !m["Scale"].empty()) {
      scale = make_shared<long>(boost::any_cast<long>(m["Scale"]));
    }
    if (m.find("SchemaName") != m.end() && !m["SchemaName"].empty()) {
      schemaName = make_shared<string>(boost::any_cast<string>(m["SchemaName"]));
    }
    if (m.find("TableName") != m.end() && !m["TableName"].empty()) {
      tableName = make_shared<string>(boost::any_cast<string>(m["TableName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("TypeName") != m.end() && !m["TypeName"].empty()) {
      typeName_ = make_shared<string>(boost::any_cast<string>(m["TypeName"]));
    }
  }


  virtual ~ColumnMetadata() = default;
};
class CommitTransactionResult : public Darabonba::Model {
public:
  shared_ptr<string> transactionStatus{};

  CommitTransactionResult() {}

  explicit CommitTransactionResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (transactionStatus) {
      res["TransactionStatus"] = boost::any(*transactionStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TransactionStatus") != m.end() && !m["TransactionStatus"].empty()) {
      transactionStatus = make_shared<string>(boost::any_cast<string>(m["TransactionStatus"]));
    }
  }


  virtual ~CommitTransactionResult() = default;
};
class DeleteResult : public Darabonba::Model {
public:
  shared_ptr<long> numberOfRecordsUpdated{};

  DeleteResult() {}

  explicit DeleteResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (numberOfRecordsUpdated) {
      res["NumberOfRecordsUpdated"] = boost::any(*numberOfRecordsUpdated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NumberOfRecordsUpdated") != m.end() && !m["NumberOfRecordsUpdated"].empty()) {
      numberOfRecordsUpdated = make_shared<long>(boost::any_cast<long>(m["NumberOfRecordsUpdated"]));
    }
  }


  virtual ~DeleteResult() = default;
};
class ExecuteStatementResult : public Darabonba::Model {
public:
  shared_ptr<vector<ColumnMetadata>> columnMetadata{};
  shared_ptr<string> formattedRecords{};
  shared_ptr<vector<Field>> generatedFields{};
  shared_ptr<long> numberOfRecordsUpdated{};
  shared_ptr<vector<vector<Field>>> records{};

  ExecuteStatementResult() {}

  explicit ExecuteStatementResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columnMetadata) {
      vector<boost::any> temp1;
      for(auto item1:*columnMetadata){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ColumnMetadata"] = boost::any(temp1);
    }
    if (formattedRecords) {
      res["FormattedRecords"] = boost::any(*formattedRecords);
    }
    if (generatedFields) {
      vector<boost::any> temp1;
      for(auto item1:*generatedFields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GeneratedFields"] = boost::any(temp1);
    }
    if (numberOfRecordsUpdated) {
      res["NumberOfRecordsUpdated"] = boost::any(*numberOfRecordsUpdated);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        vector<boost::any> temp2;
        for(auto item2:item1){
          temp2.push_back(boost::any(item2.toMap()));
        }
        temp1 = boost::any(temp2);
      }
      res["Records"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ColumnMetadata") != m.end() && !m["ColumnMetadata"].empty()) {
      if (typeid(vector<boost::any>) == m["ColumnMetadata"].type()) {
        vector<ColumnMetadata> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ColumnMetadata"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ColumnMetadata model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columnMetadata = make_shared<vector<ColumnMetadata>>(expect1);
      }
    }
    if (m.find("FormattedRecords") != m.end() && !m["FormattedRecords"].empty()) {
      formattedRecords = make_shared<string>(boost::any_cast<string>(m["FormattedRecords"]));
    }
    if (m.find("GeneratedFields") != m.end() && !m["GeneratedFields"].empty()) {
      if (typeid(vector<boost::any>) == m["GeneratedFields"].type()) {
        vector<Field> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GeneratedFields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Field model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        generatedFields = make_shared<vector<Field>>(expect1);
      }
    }
    if (m.find("NumberOfRecordsUpdated") != m.end() && !m["NumberOfRecordsUpdated"].empty()) {
      numberOfRecordsUpdated = make_shared<long>(boost::any_cast<long>(m["NumberOfRecordsUpdated"]));
    }
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<vector<Field>> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Records"])){
          if (typeid(vector<boost::any>) == item1.type()) {
            vector<Field> expect2;
            for(auto item2:boost::any_cast<vector<boost::any>>(item1)){
              if (typeid(map<string, boost::any>) == item2.type()) {
                Field model3;
                model3.fromMap(boost::any_cast<map<string, boost::any>>(item2));
                expect2.push_back(model3);
              }
            }
            expect1.push_back(expect2);
          }
        }
        records = make_shared<vector<vector<Field>>>(expect1);
      }
    }
  }


  virtual ~ExecuteStatementResult() = default;
};
class InsertListResult : public Darabonba::Model {
public:
  shared_ptr<vector<long>> autoIncrementKeys{};
  shared_ptr<long> numberOfRecordsUpdated{};

  InsertListResult() {}

  explicit InsertListResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoIncrementKeys) {
      res["AutoIncrementKeys"] = boost::any(*autoIncrementKeys);
    }
    if (numberOfRecordsUpdated) {
      res["NumberOfRecordsUpdated"] = boost::any(*numberOfRecordsUpdated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoIncrementKeys") != m.end() && !m["AutoIncrementKeys"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AutoIncrementKeys"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AutoIncrementKeys"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      autoIncrementKeys = make_shared<vector<long>>(toVec1);
    }
    if (m.find("NumberOfRecordsUpdated") != m.end() && !m["NumberOfRecordsUpdated"].empty()) {
      numberOfRecordsUpdated = make_shared<long>(boost::any_cast<long>(m["NumberOfRecordsUpdated"]));
    }
  }


  virtual ~InsertListResult() = default;
};
class InsertResult : public Darabonba::Model {
public:
  shared_ptr<long> autoIncrementKey{};
  shared_ptr<long> numberOfRecordsUpdated{};

  InsertResult() {}

  explicit InsertResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoIncrementKey) {
      res["AutoIncrementKey"] = boost::any(*autoIncrementKey);
    }
    if (numberOfRecordsUpdated) {
      res["NumberOfRecordsUpdated"] = boost::any(*numberOfRecordsUpdated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoIncrementKey") != m.end() && !m["AutoIncrementKey"].empty()) {
      autoIncrementKey = make_shared<long>(boost::any_cast<long>(m["AutoIncrementKey"]));
    }
    if (m.find("NumberOfRecordsUpdated") != m.end() && !m["NumberOfRecordsUpdated"].empty()) {
      numberOfRecordsUpdated = make_shared<long>(boost::any_cast<long>(m["NumberOfRecordsUpdated"]));
    }
  }


  virtual ~InsertResult() = default;
};
class ResultSetOptions : public Darabonba::Model {
public:
  shared_ptr<string> decimalReturnType{};
  shared_ptr<string> longReturnType{};

  ResultSetOptions() {}

  explicit ResultSetOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (decimalReturnType) {
      res["DecimalReturnType"] = boost::any(*decimalReturnType);
    }
    if (longReturnType) {
      res["LongReturnType"] = boost::any(*longReturnType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DecimalReturnType") != m.end() && !m["DecimalReturnType"].empty()) {
      decimalReturnType = make_shared<string>(boost::any_cast<string>(m["DecimalReturnType"]));
    }
    if (m.find("LongReturnType") != m.end() && !m["LongReturnType"].empty()) {
      longReturnType = make_shared<string>(boost::any_cast<string>(m["LongReturnType"]));
    }
  }


  virtual ~ResultSetOptions() = default;
};
class RollbackTransactionResult : public Darabonba::Model {
public:
  shared_ptr<string> transactionStatus{};

  RollbackTransactionResult() {}

  explicit RollbackTransactionResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (transactionStatus) {
      res["TransactionStatus"] = boost::any(*transactionStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TransactionStatus") != m.end() && !m["TransactionStatus"].empty()) {
      transactionStatus = make_shared<string>(boost::any_cast<string>(m["TransactionStatus"]));
    }
  }


  virtual ~RollbackTransactionResult() = default;
};
class SelectResult : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> records{};

  SelectResult() {}

  explicit SelectResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (records) {
      res["Records"] = boost::any(*records);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Records"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      records = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~SelectResult() = default;
};
class Selector : public Darabonba::Model {
public:
  shared_ptr<string> eq{};
  shared_ptr<string> ge{};
  shared_ptr<string> gt{};
  shared_ptr<string> le{};
  shared_ptr<string> like{};
  shared_ptr<string> lt{};
  shared_ptr<string> ne{};

  Selector() {}

  explicit Selector(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eq) {
      res["Eq"] = boost::any(*eq);
    }
    if (ge) {
      res["Ge"] = boost::any(*ge);
    }
    if (gt) {
      res["Gt"] = boost::any(*gt);
    }
    if (le) {
      res["Le"] = boost::any(*le);
    }
    if (like) {
      res["Like"] = boost::any(*like);
    }
    if (lt) {
      res["Lt"] = boost::any(*lt);
    }
    if (ne) {
      res["Ne"] = boost::any(*ne);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Eq") != m.end() && !m["Eq"].empty()) {
      eq = make_shared<string>(boost::any_cast<string>(m["Eq"]));
    }
    if (m.find("Ge") != m.end() && !m["Ge"].empty()) {
      ge = make_shared<string>(boost::any_cast<string>(m["Ge"]));
    }
    if (m.find("Gt") != m.end() && !m["Gt"].empty()) {
      gt = make_shared<string>(boost::any_cast<string>(m["Gt"]));
    }
    if (m.find("Le") != m.end() && !m["Le"].empty()) {
      le = make_shared<string>(boost::any_cast<string>(m["Le"]));
    }
    if (m.find("Like") != m.end() && !m["Like"].empty()) {
      like = make_shared<string>(boost::any_cast<string>(m["Like"]));
    }
    if (m.find("Lt") != m.end() && !m["Lt"].empty()) {
      lt = make_shared<string>(boost::any_cast<string>(m["Lt"]));
    }
    if (m.find("Ne") != m.end() && !m["Ne"].empty()) {
      ne = make_shared<string>(boost::any_cast<string>(m["Ne"]));
    }
  }


  virtual ~Selector() = default;
};
class SqlParameter : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> typeHint{};
  shared_ptr<Field> value{};

  SqlParameter() {}

  explicit SqlParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (typeHint) {
      res["TypeHint"] = boost::any(*typeHint);
    }
    if (value) {
      res["Value"] = value ? boost::any(value->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TypeHint") != m.end() && !m["TypeHint"].empty()) {
      typeHint = make_shared<string>(boost::any_cast<string>(m["TypeHint"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      if (typeid(map<string, boost::any>) == m["Value"].type()) {
        Field model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Value"]));
        value = make_shared<Field>(model1);
      }
    }
  }


  virtual ~SqlParameter() = default;
};
class UpdateResult : public Darabonba::Model {
public:
  shared_ptr<long> numberOfRecordsUpdated{};

  UpdateResult() {}

  explicit UpdateResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (numberOfRecordsUpdated) {
      res["NumberOfRecordsUpdated"] = boost::any(*numberOfRecordsUpdated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NumberOfRecordsUpdated") != m.end() && !m["NumberOfRecordsUpdated"].empty()) {
      numberOfRecordsUpdated = make_shared<long>(boost::any_cast<long>(m["NumberOfRecordsUpdated"]));
    }
  }


  virtual ~UpdateResult() = default;
};
class BatchExecuteStatementRequest : public Darabonba::Model {
public:
  shared_ptr<string> database{};
  shared_ptr<vector<vector<SqlParameter>>> parameterSets{};
  shared_ptr<string> resourceArn{};
  shared_ptr<string> secretArn{};
  shared_ptr<string> sql{};
  shared_ptr<string> transactionId{};

  BatchExecuteStatementRequest() {}

  explicit BatchExecuteStatementRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (parameterSets) {
      vector<boost::any> temp1;
      for(auto item1:*parameterSets){
        vector<boost::any> temp2;
        for(auto item2:item1){
          temp2.push_back(boost::any(item2.toMap()));
        }
        temp1 = boost::any(temp2);
      }
      res["ParameterSets"] = boost::any(temp1);
    }
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    if (secretArn) {
      res["SecretArn"] = boost::any(*secretArn);
    }
    if (sql) {
      res["Sql"] = boost::any(*sql);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("ParameterSets") != m.end() && !m["ParameterSets"].empty()) {
      if (typeid(vector<boost::any>) == m["ParameterSets"].type()) {
        vector<vector<SqlParameter>> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ParameterSets"])){
          if (typeid(vector<boost::any>) == item1.type()) {
            vector<SqlParameter> expect2;
            for(auto item2:boost::any_cast<vector<boost::any>>(item1)){
              if (typeid(map<string, boost::any>) == item2.type()) {
                SqlParameter model3;
                model3.fromMap(boost::any_cast<map<string, boost::any>>(item2));
                expect2.push_back(model3);
              }
            }
            expect1.push_back(expect2);
          }
        }
        parameterSets = make_shared<vector<vector<SqlParameter>>>(expect1);
      }
    }
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
    if (m.find("SecretArn") != m.end() && !m["SecretArn"].empty()) {
      secretArn = make_shared<string>(boost::any_cast<string>(m["SecretArn"]));
    }
    if (m.find("Sql") != m.end() && !m["Sql"].empty()) {
      sql = make_shared<string>(boost::any_cast<string>(m["Sql"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~BatchExecuteStatementRequest() = default;
};
class BatchExecuteStatementShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> database{};
  shared_ptr<string> parameterSetsShrink{};
  shared_ptr<string> resourceArn{};
  shared_ptr<string> secretArn{};
  shared_ptr<string> sql{};
  shared_ptr<string> transactionId{};

  BatchExecuteStatementShrinkRequest() {}

  explicit BatchExecuteStatementShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (parameterSetsShrink) {
      res["ParameterSets"] = boost::any(*parameterSetsShrink);
    }
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    if (secretArn) {
      res["SecretArn"] = boost::any(*secretArn);
    }
    if (sql) {
      res["Sql"] = boost::any(*sql);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("ParameterSets") != m.end() && !m["ParameterSets"].empty()) {
      parameterSetsShrink = make_shared<string>(boost::any_cast<string>(m["ParameterSets"]));
    }
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
    if (m.find("SecretArn") != m.end() && !m["SecretArn"].empty()) {
      secretArn = make_shared<string>(boost::any_cast<string>(m["SecretArn"]));
    }
    if (m.find("Sql") != m.end() && !m["Sql"].empty()) {
      sql = make_shared<string>(boost::any_cast<string>(m["Sql"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~BatchExecuteStatementShrinkRequest() = default;
};
class BatchExecuteStatementResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<BatchExecuteStatementResult> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BatchExecuteStatementResponseBody() {}

  explicit BatchExecuteStatementResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        BatchExecuteStatementResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<BatchExecuteStatementResult>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~BatchExecuteStatementResponseBody() = default;
};
class BatchExecuteStatementResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchExecuteStatementResponseBody> body{};

  BatchExecuteStatementResponse() {}

  explicit BatchExecuteStatementResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BatchExecuteStatementResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchExecuteStatementResponseBody>(model1);
      }
    }
  }


  virtual ~BatchExecuteStatementResponse() = default;
};
class BeginTransactionRequest : public Darabonba::Model {
public:
  shared_ptr<string> database{};
  shared_ptr<string> resourceArn{};
  shared_ptr<string> secretArn{};

  BeginTransactionRequest() {}

  explicit BeginTransactionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    if (secretArn) {
      res["SecretArn"] = boost::any(*secretArn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
    if (m.find("SecretArn") != m.end() && !m["SecretArn"].empty()) {
      secretArn = make_shared<string>(boost::any_cast<string>(m["SecretArn"]));
    }
  }


  virtual ~BeginTransactionRequest() = default;
};
class BeginTransactionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<BeginTransactionResult> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BeginTransactionResponseBody() {}

  explicit BeginTransactionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        BeginTransactionResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<BeginTransactionResult>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~BeginTransactionResponseBody() = default;
};
class BeginTransactionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BeginTransactionResponseBody> body{};

  BeginTransactionResponse() {}

  explicit BeginTransactionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BeginTransactionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BeginTransactionResponseBody>(model1);
      }
    }
  }


  virtual ~BeginTransactionResponse() = default;
};
class CommitTransactionRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceArn{};
  shared_ptr<string> secretArn{};
  shared_ptr<string> transactionId{};

  CommitTransactionRequest() {}

  explicit CommitTransactionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    if (secretArn) {
      res["SecretArn"] = boost::any(*secretArn);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
    if (m.find("SecretArn") != m.end() && !m["SecretArn"].empty()) {
      secretArn = make_shared<string>(boost::any_cast<string>(m["SecretArn"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~CommitTransactionRequest() = default;
};
class CommitTransactionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CommitTransactionResult> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CommitTransactionResponseBody() {}

  explicit CommitTransactionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CommitTransactionResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CommitTransactionResult>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CommitTransactionResponseBody() = default;
};
class CommitTransactionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CommitTransactionResponseBody> body{};

  CommitTransactionResponse() {}

  explicit CommitTransactionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CommitTransactionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CommitTransactionResponseBody>(model1);
      }
    }
  }


  virtual ~CommitTransactionResponse() = default;
};
class DeleteRequest : public Darabonba::Model {
public:
  shared_ptr<string> database{};
  shared_ptr<map<string, Selector>> filter{};
  shared_ptr<string> resourceArn{};
  shared_ptr<string> secretArn{};
  shared_ptr<string> table{};
  shared_ptr<string> transactionId{};

  DeleteRequest() {}

  explicit DeleteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (filter) {
      map<string, boost::any> temp1;
      for(auto item1:*filter){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["Filter"] = boost::any(temp1);
    }
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    if (secretArn) {
      res["SecretArn"] = boost::any(*secretArn);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(map<string, boost::any>) == m["Filter"].type()) {
        map<string, Selector> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            Selector model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        filter = make_shared<map<string, Selector>>(expect1);
      }
    }
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
    if (m.find("SecretArn") != m.end() && !m["SecretArn"].empty()) {
      secretArn = make_shared<string>(boost::any_cast<string>(m["SecretArn"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~DeleteRequest() = default;
};
class DeleteShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> database{};
  shared_ptr<string> filterShrink{};
  shared_ptr<string> resourceArn{};
  shared_ptr<string> secretArn{};
  shared_ptr<string> table{};
  shared_ptr<string> transactionId{};

  DeleteShrinkRequest() {}

  explicit DeleteShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (filterShrink) {
      res["Filter"] = boost::any(*filterShrink);
    }
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    if (secretArn) {
      res["SecretArn"] = boost::any(*secretArn);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filterShrink = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
    if (m.find("SecretArn") != m.end() && !m["SecretArn"].empty()) {
      secretArn = make_shared<string>(boost::any_cast<string>(m["SecretArn"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~DeleteShrinkRequest() = default;
};
class DeleteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DeleteResult> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteResponseBody() {}

  explicit DeleteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteResult>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteResponseBody() = default;
};
class DeleteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteResponseBody> body{};

  DeleteResponse() {}

  explicit DeleteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteResponse() = default;
};
class ExecuteStatementRequestResultSetOptions : public Darabonba::Model {
public:
  shared_ptr<string> decimalReturnType{};
  shared_ptr<string> longReturnType{};

  ExecuteStatementRequestResultSetOptions() {}

  explicit ExecuteStatementRequestResultSetOptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (decimalReturnType) {
      res["DecimalReturnType"] = boost::any(*decimalReturnType);
    }
    if (longReturnType) {
      res["LongReturnType"] = boost::any(*longReturnType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DecimalReturnType") != m.end() && !m["DecimalReturnType"].empty()) {
      decimalReturnType = make_shared<string>(boost::any_cast<string>(m["DecimalReturnType"]));
    }
    if (m.find("LongReturnType") != m.end() && !m["LongReturnType"].empty()) {
      longReturnType = make_shared<string>(boost::any_cast<string>(m["LongReturnType"]));
    }
  }


  virtual ~ExecuteStatementRequestResultSetOptions() = default;
};
class ExecuteStatementRequest : public Darabonba::Model {
public:
  shared_ptr<bool> continueAfterTimeout{};
  shared_ptr<string> database{};
  shared_ptr<string> formatRecordsAs{};
  shared_ptr<bool> includeResultMetadata{};
  shared_ptr<vector<SqlParameter>> parameters{};
  shared_ptr<string> resourceArn{};
  shared_ptr<ExecuteStatementRequestResultSetOptions> resultSetOptions{};
  shared_ptr<string> secretArn{};
  shared_ptr<string> sql{};
  shared_ptr<string> transactionId{};

  ExecuteStatementRequest() {}

  explicit ExecuteStatementRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (continueAfterTimeout) {
      res["ContinueAfterTimeout"] = boost::any(*continueAfterTimeout);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (formatRecordsAs) {
      res["FormatRecordsAs"] = boost::any(*formatRecordsAs);
    }
    if (includeResultMetadata) {
      res["IncludeResultMetadata"] = boost::any(*includeResultMetadata);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    if (resultSetOptions) {
      res["ResultSetOptions"] = resultSetOptions ? boost::any(resultSetOptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (secretArn) {
      res["SecretArn"] = boost::any(*secretArn);
    }
    if (sql) {
      res["Sql"] = boost::any(*sql);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContinueAfterTimeout") != m.end() && !m["ContinueAfterTimeout"].empty()) {
      continueAfterTimeout = make_shared<bool>(boost::any_cast<bool>(m["ContinueAfterTimeout"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("FormatRecordsAs") != m.end() && !m["FormatRecordsAs"].empty()) {
      formatRecordsAs = make_shared<string>(boost::any_cast<string>(m["FormatRecordsAs"]));
    }
    if (m.find("IncludeResultMetadata") != m.end() && !m["IncludeResultMetadata"].empty()) {
      includeResultMetadata = make_shared<bool>(boost::any_cast<bool>(m["IncludeResultMetadata"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<SqlParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SqlParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<SqlParameter>>(expect1);
      }
    }
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
    if (m.find("ResultSetOptions") != m.end() && !m["ResultSetOptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultSetOptions"].type()) {
        ExecuteStatementRequestResultSetOptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultSetOptions"]));
        resultSetOptions = make_shared<ExecuteStatementRequestResultSetOptions>(model1);
      }
    }
    if (m.find("SecretArn") != m.end() && !m["SecretArn"].empty()) {
      secretArn = make_shared<string>(boost::any_cast<string>(m["SecretArn"]));
    }
    if (m.find("Sql") != m.end() && !m["Sql"].empty()) {
      sql = make_shared<string>(boost::any_cast<string>(m["Sql"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~ExecuteStatementRequest() = default;
};
class ExecuteStatementShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<bool> continueAfterTimeout{};
  shared_ptr<string> database{};
  shared_ptr<string> formatRecordsAs{};
  shared_ptr<bool> includeResultMetadata{};
  shared_ptr<string> parametersShrink{};
  shared_ptr<string> resourceArn{};
  shared_ptr<string> resultSetOptionsShrink{};
  shared_ptr<string> secretArn{};
  shared_ptr<string> sql{};
  shared_ptr<string> transactionId{};

  ExecuteStatementShrinkRequest() {}

  explicit ExecuteStatementShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (continueAfterTimeout) {
      res["ContinueAfterTimeout"] = boost::any(*continueAfterTimeout);
    }
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (formatRecordsAs) {
      res["FormatRecordsAs"] = boost::any(*formatRecordsAs);
    }
    if (includeResultMetadata) {
      res["IncludeResultMetadata"] = boost::any(*includeResultMetadata);
    }
    if (parametersShrink) {
      res["Parameters"] = boost::any(*parametersShrink);
    }
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    if (resultSetOptionsShrink) {
      res["ResultSetOptions"] = boost::any(*resultSetOptionsShrink);
    }
    if (secretArn) {
      res["SecretArn"] = boost::any(*secretArn);
    }
    if (sql) {
      res["Sql"] = boost::any(*sql);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContinueAfterTimeout") != m.end() && !m["ContinueAfterTimeout"].empty()) {
      continueAfterTimeout = make_shared<bool>(boost::any_cast<bool>(m["ContinueAfterTimeout"]));
    }
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("FormatRecordsAs") != m.end() && !m["FormatRecordsAs"].empty()) {
      formatRecordsAs = make_shared<string>(boost::any_cast<string>(m["FormatRecordsAs"]));
    }
    if (m.find("IncludeResultMetadata") != m.end() && !m["IncludeResultMetadata"].empty()) {
      includeResultMetadata = make_shared<bool>(boost::any_cast<bool>(m["IncludeResultMetadata"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parametersShrink = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
    if (m.find("ResultSetOptions") != m.end() && !m["ResultSetOptions"].empty()) {
      resultSetOptionsShrink = make_shared<string>(boost::any_cast<string>(m["ResultSetOptions"]));
    }
    if (m.find("SecretArn") != m.end() && !m["SecretArn"].empty()) {
      secretArn = make_shared<string>(boost::any_cast<string>(m["SecretArn"]));
    }
    if (m.find("Sql") != m.end() && !m["Sql"].empty()) {
      sql = make_shared<string>(boost::any_cast<string>(m["Sql"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~ExecuteStatementShrinkRequest() = default;
};
class ExecuteStatementResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ExecuteStatementResult> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExecuteStatementResponseBody() {}

  explicit ExecuteStatementResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ExecuteStatementResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ExecuteStatementResult>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ExecuteStatementResponseBody() = default;
};
class ExecuteStatementResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteStatementResponseBody> body{};

  ExecuteStatementResponse() {}

  explicit ExecuteStatementResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ExecuteStatementResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteStatementResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteStatementResponse() = default;
};
class InsertRequest : public Darabonba::Model {
public:
  shared_ptr<string> database{};
  shared_ptr<map<string, boost::any>> record{};
  shared_ptr<string> resourceArn{};
  shared_ptr<string> secretArn{};
  shared_ptr<string> table{};
  shared_ptr<string> transactionId{};

  InsertRequest() {}

  explicit InsertRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (record) {
      res["Record"] = boost::any(*record);
    }
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    if (secretArn) {
      res["SecretArn"] = boost::any(*secretArn);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("Record") != m.end() && !m["Record"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Record"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      record = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
    if (m.find("SecretArn") != m.end() && !m["SecretArn"].empty()) {
      secretArn = make_shared<string>(boost::any_cast<string>(m["SecretArn"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~InsertRequest() = default;
};
class InsertShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> database{};
  shared_ptr<string> recordShrink{};
  shared_ptr<string> resourceArn{};
  shared_ptr<string> secretArn{};
  shared_ptr<string> table{};
  shared_ptr<string> transactionId{};

  InsertShrinkRequest() {}

  explicit InsertShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (recordShrink) {
      res["Record"] = boost::any(*recordShrink);
    }
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    if (secretArn) {
      res["SecretArn"] = boost::any(*secretArn);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("Record") != m.end() && !m["Record"].empty()) {
      recordShrink = make_shared<string>(boost::any_cast<string>(m["Record"]));
    }
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
    if (m.find("SecretArn") != m.end() && !m["SecretArn"].empty()) {
      secretArn = make_shared<string>(boost::any_cast<string>(m["SecretArn"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~InsertShrinkRequest() = default;
};
class InsertResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<InsertResult> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  InsertResponseBody() {}

  explicit InsertResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        InsertResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<InsertResult>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~InsertResponseBody() = default;
};
class InsertResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InsertResponseBody> body{};

  InsertResponse() {}

  explicit InsertResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        InsertResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InsertResponseBody>(model1);
      }
    }
  }


  virtual ~InsertResponse() = default;
};
class InsertListRequest : public Darabonba::Model {
public:
  shared_ptr<string> database{};
  shared_ptr<vector<map<string, boost::any>>> records{};
  shared_ptr<string> resourceArn{};
  shared_ptr<string> secretArn{};
  shared_ptr<string> table{};
  shared_ptr<string> transactionId{};

  InsertListRequest() {}

  explicit InsertListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (records) {
      res["Records"] = boost::any(*records);
    }
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    if (secretArn) {
      res["SecretArn"] = boost::any(*secretArn);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Records"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Records"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      records = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
    if (m.find("SecretArn") != m.end() && !m["SecretArn"].empty()) {
      secretArn = make_shared<string>(boost::any_cast<string>(m["SecretArn"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~InsertListRequest() = default;
};
class InsertListShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> database{};
  shared_ptr<string> recordsShrink{};
  shared_ptr<string> resourceArn{};
  shared_ptr<string> secretArn{};
  shared_ptr<string> table{};
  shared_ptr<string> transactionId{};

  InsertListShrinkRequest() {}

  explicit InsertListShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (recordsShrink) {
      res["Records"] = boost::any(*recordsShrink);
    }
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    if (secretArn) {
      res["SecretArn"] = boost::any(*secretArn);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("Records") != m.end() && !m["Records"].empty()) {
      recordsShrink = make_shared<string>(boost::any_cast<string>(m["Records"]));
    }
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
    if (m.find("SecretArn") != m.end() && !m["SecretArn"].empty()) {
      secretArn = make_shared<string>(boost::any_cast<string>(m["SecretArn"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~InsertListShrinkRequest() = default;
};
class InsertListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<InsertListResult> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  InsertListResponseBody() {}

  explicit InsertListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        InsertListResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<InsertListResult>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~InsertListResponseBody() = default;
};
class InsertListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InsertListResponseBody> body{};

  InsertListResponse() {}

  explicit InsertListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        InsertListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InsertListResponseBody>(model1);
      }
    }
  }


  virtual ~InsertListResponse() = default;
};
class RollbackTransactionRequest : public Darabonba::Model {
public:
  shared_ptr<string> resourceArn{};
  shared_ptr<string> secretArn{};
  shared_ptr<string> transactionId{};

  RollbackTransactionRequest() {}

  explicit RollbackTransactionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    if (secretArn) {
      res["SecretArn"] = boost::any(*secretArn);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
    if (m.find("SecretArn") != m.end() && !m["SecretArn"].empty()) {
      secretArn = make_shared<string>(boost::any_cast<string>(m["SecretArn"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~RollbackTransactionRequest() = default;
};
class RollbackTransactionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<RollbackTransactionResult> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RollbackTransactionResponseBody() {}

  explicit RollbackTransactionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RollbackTransactionResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RollbackTransactionResult>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RollbackTransactionResponseBody() = default;
};
class RollbackTransactionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RollbackTransactionResponseBody> body{};

  RollbackTransactionResponse() {}

  explicit RollbackTransactionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RollbackTransactionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RollbackTransactionResponseBody>(model1);
      }
    }
  }


  virtual ~RollbackTransactionResponse() = default;
};
class SelectRequest : public Darabonba::Model {
public:
  shared_ptr<string> database{};
  shared_ptr<map<string, Selector>> filter{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceArn{};
  shared_ptr<string> secretArn{};
  shared_ptr<string> table{};
  shared_ptr<string> transactionId{};

  SelectRequest() {}

  explicit SelectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (filter) {
      map<string, boost::any> temp1;
      for(auto item1:*filter){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["Filter"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    if (secretArn) {
      res["SecretArn"] = boost::any(*secretArn);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(map<string, boost::any>) == m["Filter"].type()) {
        map<string, Selector> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            Selector model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        filter = make_shared<map<string, Selector>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
    if (m.find("SecretArn") != m.end() && !m["SecretArn"].empty()) {
      secretArn = make_shared<string>(boost::any_cast<string>(m["SecretArn"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~SelectRequest() = default;
};
class SelectShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> database{};
  shared_ptr<string> filterShrink{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceArn{};
  shared_ptr<string> secretArn{};
  shared_ptr<string> table{};
  shared_ptr<string> transactionId{};

  SelectShrinkRequest() {}

  explicit SelectShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (filterShrink) {
      res["Filter"] = boost::any(*filterShrink);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    if (secretArn) {
      res["SecretArn"] = boost::any(*secretArn);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filterShrink = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
    if (m.find("SecretArn") != m.end() && !m["SecretArn"].empty()) {
      secretArn = make_shared<string>(boost::any_cast<string>(m["SecretArn"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~SelectShrinkRequest() = default;
};
class SelectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SelectResult> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SelectResponseBody() {}

  explicit SelectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SelectResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SelectResult>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SelectResponseBody() = default;
};
class SelectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SelectResponseBody> body{};

  SelectResponse() {}

  explicit SelectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SelectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SelectResponseBody>(model1);
      }
    }
  }


  virtual ~SelectResponse() = default;
};
class UpdateRequest : public Darabonba::Model {
public:
  shared_ptr<string> database{};
  shared_ptr<map<string, Selector>> filter{};
  shared_ptr<map<string, boost::any>> record{};
  shared_ptr<string> resourceArn{};
  shared_ptr<string> secretArn{};
  shared_ptr<string> table{};
  shared_ptr<string> transactionId{};

  UpdateRequest() {}

  explicit UpdateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (filter) {
      map<string, boost::any> temp1;
      for(auto item1:*filter){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["Filter"] = boost::any(temp1);
    }
    if (record) {
      res["Record"] = boost::any(*record);
    }
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    if (secretArn) {
      res["SecretArn"] = boost::any(*secretArn);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(map<string, boost::any>) == m["Filter"].type()) {
        map<string, Selector> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            Selector model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        filter = make_shared<map<string, Selector>>(expect1);
      }
    }
    if (m.find("Record") != m.end() && !m["Record"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Record"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      record = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
    if (m.find("SecretArn") != m.end() && !m["SecretArn"].empty()) {
      secretArn = make_shared<string>(boost::any_cast<string>(m["SecretArn"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~UpdateRequest() = default;
};
class UpdateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> database{};
  shared_ptr<string> filterShrink{};
  shared_ptr<string> recordShrink{};
  shared_ptr<string> resourceArn{};
  shared_ptr<string> secretArn{};
  shared_ptr<string> table{};
  shared_ptr<string> transactionId{};

  UpdateShrinkRequest() {}

  explicit UpdateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (database) {
      res["Database"] = boost::any(*database);
    }
    if (filterShrink) {
      res["Filter"] = boost::any(*filterShrink);
    }
    if (recordShrink) {
      res["Record"] = boost::any(*recordShrink);
    }
    if (resourceArn) {
      res["ResourceArn"] = boost::any(*resourceArn);
    }
    if (secretArn) {
      res["SecretArn"] = boost::any(*secretArn);
    }
    if (table) {
      res["Table"] = boost::any(*table);
    }
    if (transactionId) {
      res["TransactionId"] = boost::any(*transactionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Database") != m.end() && !m["Database"].empty()) {
      database = make_shared<string>(boost::any_cast<string>(m["Database"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      filterShrink = make_shared<string>(boost::any_cast<string>(m["Filter"]));
    }
    if (m.find("Record") != m.end() && !m["Record"].empty()) {
      recordShrink = make_shared<string>(boost::any_cast<string>(m["Record"]));
    }
    if (m.find("ResourceArn") != m.end() && !m["ResourceArn"].empty()) {
      resourceArn = make_shared<string>(boost::any_cast<string>(m["ResourceArn"]));
    }
    if (m.find("SecretArn") != m.end() && !m["SecretArn"].empty()) {
      secretArn = make_shared<string>(boost::any_cast<string>(m["SecretArn"]));
    }
    if (m.find("Table") != m.end() && !m["Table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["Table"]));
    }
    if (m.find("TransactionId") != m.end() && !m["TransactionId"].empty()) {
      transactionId = make_shared<string>(boost::any_cast<string>(m["TransactionId"]));
    }
  }


  virtual ~UpdateShrinkRequest() = default;
};
class UpdateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<UpdateResult> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateResponseBody() {}

  explicit UpdateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateResult>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateResponseBody() = default;
};
class UpdateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateResponseBody> body{};

  UpdateResponse() {}

  explicit UpdateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  BatchExecuteStatementResponse batchExecuteStatementWithOptions(shared_ptr<BatchExecuteStatementRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchExecuteStatementResponse batchExecuteStatement(shared_ptr<BatchExecuteStatementRequest> request);
  BeginTransactionResponse beginTransactionWithOptions(shared_ptr<BeginTransactionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BeginTransactionResponse beginTransaction(shared_ptr<BeginTransactionRequest> request);
  CommitTransactionResponse commitTransactionWithOptions(shared_ptr<CommitTransactionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CommitTransactionResponse commitTransaction(shared_ptr<CommitTransactionRequest> request);
  DeleteResponse deleteWithOptions(shared_ptr<DeleteRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteResponse delete_(shared_ptr<DeleteRequest> request);
  ExecuteStatementResponse executeStatementWithOptions(shared_ptr<ExecuteStatementRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteStatementResponse executeStatement(shared_ptr<ExecuteStatementRequest> request);
  InsertResponse insertWithOptions(shared_ptr<InsertRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InsertResponse insert(shared_ptr<InsertRequest> request);
  InsertListResponse insertListWithOptions(shared_ptr<InsertListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InsertListResponse insertList(shared_ptr<InsertListRequest> request);
  RollbackTransactionResponse rollbackTransactionWithOptions(shared_ptr<RollbackTransactionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RollbackTransactionResponse rollbackTransaction(shared_ptr<RollbackTransactionRequest> request);
  SelectResponse selectWithOptions(shared_ptr<SelectRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SelectResponse select(shared_ptr<SelectRequest> request);
  UpdateResponse updateWithOptions(shared_ptr<UpdateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResponse update(shared_ptr<UpdateRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Rds-data20220330

#endif
