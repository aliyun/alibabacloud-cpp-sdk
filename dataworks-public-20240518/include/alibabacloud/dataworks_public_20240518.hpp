// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_DATAWORKS-PUBLIC20240518_H_
#define ALIBABACLOUD_DATAWORKS-PUBLIC20240518_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Dataworks-public20240518 {
class AbolishDeploymentRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  AbolishDeploymentRequest() {}

  explicit AbolishDeploymentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~AbolishDeploymentRequest() = default;
};
class AbolishDeploymentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AbolishDeploymentResponseBody() {}

  explicit AbolishDeploymentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AbolishDeploymentResponseBody() = default;
};
class AbolishDeploymentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AbolishDeploymentResponseBody> body{};

  AbolishDeploymentResponse() {}

  explicit AbolishDeploymentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        AbolishDeploymentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AbolishDeploymentResponseBody>(model1);
      }
    }
  }


  virtual ~AbolishDeploymentResponse() = default;
};
class CloneDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> cloneDataSourceName{};
  shared_ptr<long> id{};

  CloneDataSourceRequest() {}

  explicit CloneDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloneDataSourceName) {
      res["CloneDataSourceName"] = boost::any(*cloneDataSourceName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CloneDataSourceName") != m.end() && !m["CloneDataSourceName"].empty()) {
      cloneDataSourceName = make_shared<string>(boost::any_cast<string>(m["CloneDataSourceName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~CloneDataSourceRequest() = default;
};
class CloneDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> requestId{};

  CloneDataSourceResponseBody() {}

  explicit CloneDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CloneDataSourceResponseBody() = default;
};
class CloneDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CloneDataSourceResponseBody> body{};

  CloneDataSourceResponse() {}

  explicit CloneDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        CloneDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloneDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~CloneDataSourceResponse() = default;
};
class CreateDIJobRequestDestinationDataSourceSettings : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceName{};

  CreateDIJobRequestDestinationDataSourceSettings() {}

  explicit CreateDIJobRequestDestinationDataSourceSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceName) {
      res["DataSourceName"] = boost::any(*dataSourceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceName") != m.end() && !m["DataSourceName"].empty()) {
      dataSourceName = make_shared<string>(boost::any_cast<string>(m["DataSourceName"]));
    }
  }


  virtual ~CreateDIJobRequestDestinationDataSourceSettings() = default;
};
class CreateDIJobRequestJobSettingsColumnDataTypeSettings : public Darabonba::Model {
public:
  shared_ptr<string> destinationDataType{};
  shared_ptr<string> sourceDataType{};

  CreateDIJobRequestJobSettingsColumnDataTypeSettings() {}

  explicit CreateDIJobRequestJobSettingsColumnDataTypeSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationDataType) {
      res["DestinationDataType"] = boost::any(*destinationDataType);
    }
    if (sourceDataType) {
      res["SourceDataType"] = boost::any(*sourceDataType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationDataType") != m.end() && !m["DestinationDataType"].empty()) {
      destinationDataType = make_shared<string>(boost::any_cast<string>(m["DestinationDataType"]));
    }
    if (m.find("SourceDataType") != m.end() && !m["SourceDataType"].empty()) {
      sourceDataType = make_shared<string>(boost::any_cast<string>(m["SourceDataType"]));
    }
  }


  virtual ~CreateDIJobRequestJobSettingsColumnDataTypeSettings() = default;
};
class CreateDIJobRequestJobSettingsCycleScheduleSettings : public Darabonba::Model {
public:
  shared_ptr<string> cycleMigrationType{};
  shared_ptr<string> scheduleParameters{};

  CreateDIJobRequestJobSettingsCycleScheduleSettings() {}

  explicit CreateDIJobRequestJobSettingsCycleScheduleSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cycleMigrationType) {
      res["CycleMigrationType"] = boost::any(*cycleMigrationType);
    }
    if (scheduleParameters) {
      res["ScheduleParameters"] = boost::any(*scheduleParameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CycleMigrationType") != m.end() && !m["CycleMigrationType"].empty()) {
      cycleMigrationType = make_shared<string>(boost::any_cast<string>(m["CycleMigrationType"]));
    }
    if (m.find("ScheduleParameters") != m.end() && !m["ScheduleParameters"].empty()) {
      scheduleParameters = make_shared<string>(boost::any_cast<string>(m["ScheduleParameters"]));
    }
  }


  virtual ~CreateDIJobRequestJobSettingsCycleScheduleSettings() = default;
};
class CreateDIJobRequestJobSettingsDdlHandlingSettings : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> type{};

  CreateDIJobRequestJobSettingsDdlHandlingSettings() {}

  explicit CreateDIJobRequestJobSettingsDdlHandlingSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateDIJobRequestJobSettingsDdlHandlingSettings() = default;
};
class CreateDIJobRequestJobSettingsRuntimeSettings : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  CreateDIJobRequestJobSettingsRuntimeSettings() {}

  explicit CreateDIJobRequestJobSettingsRuntimeSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateDIJobRequestJobSettingsRuntimeSettings() = default;
};
class CreateDIJobRequestJobSettings : public Darabonba::Model {
public:
  shared_ptr<string> channelSettings{};
  shared_ptr<vector<CreateDIJobRequestJobSettingsColumnDataTypeSettings>> columnDataTypeSettings{};
  shared_ptr<CreateDIJobRequestJobSettingsCycleScheduleSettings> cycleScheduleSettings{};
  shared_ptr<vector<CreateDIJobRequestJobSettingsDdlHandlingSettings>> ddlHandlingSettings{};
  shared_ptr<vector<CreateDIJobRequestJobSettingsRuntimeSettings>> runtimeSettings{};

  CreateDIJobRequestJobSettings() {}

  explicit CreateDIJobRequestJobSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelSettings) {
      res["ChannelSettings"] = boost::any(*channelSettings);
    }
    if (columnDataTypeSettings) {
      vector<boost::any> temp1;
      for(auto item1:*columnDataTypeSettings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ColumnDataTypeSettings"] = boost::any(temp1);
    }
    if (cycleScheduleSettings) {
      res["CycleScheduleSettings"] = cycleScheduleSettings ? boost::any(cycleScheduleSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ddlHandlingSettings) {
      vector<boost::any> temp1;
      for(auto item1:*ddlHandlingSettings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DdlHandlingSettings"] = boost::any(temp1);
    }
    if (runtimeSettings) {
      vector<boost::any> temp1;
      for(auto item1:*runtimeSettings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuntimeSettings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelSettings") != m.end() && !m["ChannelSettings"].empty()) {
      channelSettings = make_shared<string>(boost::any_cast<string>(m["ChannelSettings"]));
    }
    if (m.find("ColumnDataTypeSettings") != m.end() && !m["ColumnDataTypeSettings"].empty()) {
      if (typeid(vector<boost::any>) == m["ColumnDataTypeSettings"].type()) {
        vector<CreateDIJobRequestJobSettingsColumnDataTypeSettings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ColumnDataTypeSettings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDIJobRequestJobSettingsColumnDataTypeSettings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columnDataTypeSettings = make_shared<vector<CreateDIJobRequestJobSettingsColumnDataTypeSettings>>(expect1);
      }
    }
    if (m.find("CycleScheduleSettings") != m.end() && !m["CycleScheduleSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["CycleScheduleSettings"].type()) {
        CreateDIJobRequestJobSettingsCycleScheduleSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CycleScheduleSettings"]));
        cycleScheduleSettings = make_shared<CreateDIJobRequestJobSettingsCycleScheduleSettings>(model1);
      }
    }
    if (m.find("DdlHandlingSettings") != m.end() && !m["DdlHandlingSettings"].empty()) {
      if (typeid(vector<boost::any>) == m["DdlHandlingSettings"].type()) {
        vector<CreateDIJobRequestJobSettingsDdlHandlingSettings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DdlHandlingSettings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDIJobRequestJobSettingsDdlHandlingSettings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ddlHandlingSettings = make_shared<vector<CreateDIJobRequestJobSettingsDdlHandlingSettings>>(expect1);
      }
    }
    if (m.find("RuntimeSettings") != m.end() && !m["RuntimeSettings"].empty()) {
      if (typeid(vector<boost::any>) == m["RuntimeSettings"].type()) {
        vector<CreateDIJobRequestJobSettingsRuntimeSettings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuntimeSettings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDIJobRequestJobSettingsRuntimeSettings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        runtimeSettings = make_shared<vector<CreateDIJobRequestJobSettingsRuntimeSettings>>(expect1);
      }
    }
  }


  virtual ~CreateDIJobRequestJobSettings() = default;
};
class CreateDIJobRequestResourceSettingsOfflineResourceSettings : public Darabonba::Model {
public:
  shared_ptr<double> requestedCu{};
  shared_ptr<string> resourceGroupIdentifier{};

  CreateDIJobRequestResourceSettingsOfflineResourceSettings() {}

  explicit CreateDIJobRequestResourceSettingsOfflineResourceSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestedCu) {
      res["RequestedCu"] = boost::any(*requestedCu);
    }
    if (resourceGroupIdentifier) {
      res["ResourceGroupIdentifier"] = boost::any(*resourceGroupIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestedCu") != m.end() && !m["RequestedCu"].empty()) {
      requestedCu = make_shared<double>(boost::any_cast<double>(m["RequestedCu"]));
    }
    if (m.find("ResourceGroupIdentifier") != m.end() && !m["ResourceGroupIdentifier"].empty()) {
      resourceGroupIdentifier = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdentifier"]));
    }
  }


  virtual ~CreateDIJobRequestResourceSettingsOfflineResourceSettings() = default;
};
class CreateDIJobRequestResourceSettingsRealtimeResourceSettings : public Darabonba::Model {
public:
  shared_ptr<double> requestedCu{};
  shared_ptr<string> resourceGroupIdentifier{};

  CreateDIJobRequestResourceSettingsRealtimeResourceSettings() {}

  explicit CreateDIJobRequestResourceSettingsRealtimeResourceSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestedCu) {
      res["RequestedCu"] = boost::any(*requestedCu);
    }
    if (resourceGroupIdentifier) {
      res["ResourceGroupIdentifier"] = boost::any(*resourceGroupIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestedCu") != m.end() && !m["RequestedCu"].empty()) {
      requestedCu = make_shared<double>(boost::any_cast<double>(m["RequestedCu"]));
    }
    if (m.find("ResourceGroupIdentifier") != m.end() && !m["ResourceGroupIdentifier"].empty()) {
      resourceGroupIdentifier = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdentifier"]));
    }
  }


  virtual ~CreateDIJobRequestResourceSettingsRealtimeResourceSettings() = default;
};
class CreateDIJobRequestResourceSettingsScheduleResourceSettings : public Darabonba::Model {
public:
  shared_ptr<double> requestedCu{};
  shared_ptr<string> resourceGroupIdentifier{};

  CreateDIJobRequestResourceSettingsScheduleResourceSettings() {}

  explicit CreateDIJobRequestResourceSettingsScheduleResourceSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestedCu) {
      res["RequestedCu"] = boost::any(*requestedCu);
    }
    if (resourceGroupIdentifier) {
      res["ResourceGroupIdentifier"] = boost::any(*resourceGroupIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestedCu") != m.end() && !m["RequestedCu"].empty()) {
      requestedCu = make_shared<double>(boost::any_cast<double>(m["RequestedCu"]));
    }
    if (m.find("ResourceGroupIdentifier") != m.end() && !m["ResourceGroupIdentifier"].empty()) {
      resourceGroupIdentifier = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdentifier"]));
    }
  }


  virtual ~CreateDIJobRequestResourceSettingsScheduleResourceSettings() = default;
};
class CreateDIJobRequestResourceSettings : public Darabonba::Model {
public:
  shared_ptr<CreateDIJobRequestResourceSettingsOfflineResourceSettings> offlineResourceSettings{};
  shared_ptr<CreateDIJobRequestResourceSettingsRealtimeResourceSettings> realtimeResourceSettings{};
  shared_ptr<CreateDIJobRequestResourceSettingsScheduleResourceSettings> scheduleResourceSettings{};

  CreateDIJobRequestResourceSettings() {}

  explicit CreateDIJobRequestResourceSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offlineResourceSettings) {
      res["OfflineResourceSettings"] = offlineResourceSettings ? boost::any(offlineResourceSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (realtimeResourceSettings) {
      res["RealtimeResourceSettings"] = realtimeResourceSettings ? boost::any(realtimeResourceSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleResourceSettings) {
      res["ScheduleResourceSettings"] = scheduleResourceSettings ? boost::any(scheduleResourceSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OfflineResourceSettings") != m.end() && !m["OfflineResourceSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["OfflineResourceSettings"].type()) {
        CreateDIJobRequestResourceSettingsOfflineResourceSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OfflineResourceSettings"]));
        offlineResourceSettings = make_shared<CreateDIJobRequestResourceSettingsOfflineResourceSettings>(model1);
      }
    }
    if (m.find("RealtimeResourceSettings") != m.end() && !m["RealtimeResourceSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["RealtimeResourceSettings"].type()) {
        CreateDIJobRequestResourceSettingsRealtimeResourceSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RealtimeResourceSettings"]));
        realtimeResourceSettings = make_shared<CreateDIJobRequestResourceSettingsRealtimeResourceSettings>(model1);
      }
    }
    if (m.find("ScheduleResourceSettings") != m.end() && !m["ScheduleResourceSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScheduleResourceSettings"].type()) {
        CreateDIJobRequestResourceSettingsScheduleResourceSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScheduleResourceSettings"]));
        scheduleResourceSettings = make_shared<CreateDIJobRequestResourceSettingsScheduleResourceSettings>(model1);
      }
    }
  }


  virtual ~CreateDIJobRequestResourceSettings() = default;
};
class CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties : public Darabonba::Model {
public:
  shared_ptr<string> encoding{};
  shared_ptr<string> timezone{};

  CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties() {}

  explicit CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encoding) {
      res["Encoding"] = boost::any(*encoding);
    }
    if (timezone) {
      res["Timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Encoding") != m.end() && !m["Encoding"].empty()) {
      encoding = make_shared<string>(boost::any_cast<string>(m["Encoding"]));
    }
    if (m.find("Timezone") != m.end() && !m["Timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["Timezone"]));
    }
  }


  virtual ~CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties() = default;
};
class CreateDIJobRequestSourceDataSourceSettings : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceName{};
  shared_ptr<CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties> dataSourceProperties{};

  CreateDIJobRequestSourceDataSourceSettings() {}

  explicit CreateDIJobRequestSourceDataSourceSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceName) {
      res["DataSourceName"] = boost::any(*dataSourceName);
    }
    if (dataSourceProperties) {
      res["DataSourceProperties"] = dataSourceProperties ? boost::any(dataSourceProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceName") != m.end() && !m["DataSourceName"].empty()) {
      dataSourceName = make_shared<string>(boost::any_cast<string>(m["DataSourceName"]));
    }
    if (m.find("DataSourceProperties") != m.end() && !m["DataSourceProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSourceProperties"].type()) {
        CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSourceProperties"]));
        dataSourceProperties = make_shared<CreateDIJobRequestSourceDataSourceSettingsDataSourceProperties>(model1);
      }
    }
  }


  virtual ~CreateDIJobRequestSourceDataSourceSettings() = default;
};
class CreateDIJobRequestTableMappingsSourceObjectSelectionRules : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> expression{};
  shared_ptr<string> expressionType{};
  shared_ptr<string> objectType{};

  CreateDIJobRequestTableMappingsSourceObjectSelectionRules() {}

  explicit CreateDIJobRequestTableMappingsSourceObjectSelectionRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (expression) {
      res["Expression"] = boost::any(*expression);
    }
    if (expressionType) {
      res["ExpressionType"] = boost::any(*expressionType);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["Expression"]));
    }
    if (m.find("ExpressionType") != m.end() && !m["ExpressionType"].empty()) {
      expressionType = make_shared<string>(boost::any_cast<string>(m["ExpressionType"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
  }


  virtual ~CreateDIJobRequestTableMappingsSourceObjectSelectionRules() = default;
};
class CreateDIJobRequestTableMappingsTransformationRules : public Darabonba::Model {
public:
  shared_ptr<string> ruleActionType{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleTargetType{};

  CreateDIJobRequestTableMappingsTransformationRules() {}

  explicit CreateDIJobRequestTableMappingsTransformationRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleActionType) {
      res["RuleActionType"] = boost::any(*ruleActionType);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleTargetType) {
      res["RuleTargetType"] = boost::any(*ruleTargetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleActionType") != m.end() && !m["RuleActionType"].empty()) {
      ruleActionType = make_shared<string>(boost::any_cast<string>(m["RuleActionType"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleTargetType") != m.end() && !m["RuleTargetType"].empty()) {
      ruleTargetType = make_shared<string>(boost::any_cast<string>(m["RuleTargetType"]));
    }
  }


  virtual ~CreateDIJobRequestTableMappingsTransformationRules() = default;
};
class CreateDIJobRequestTableMappings : public Darabonba::Model {
public:
  shared_ptr<vector<CreateDIJobRequestTableMappingsSourceObjectSelectionRules>> sourceObjectSelectionRules{};
  shared_ptr<vector<CreateDIJobRequestTableMappingsTransformationRules>> transformationRules{};

  CreateDIJobRequestTableMappings() {}

  explicit CreateDIJobRequestTableMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceObjectSelectionRules) {
      vector<boost::any> temp1;
      for(auto item1:*sourceObjectSelectionRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceObjectSelectionRules"] = boost::any(temp1);
    }
    if (transformationRules) {
      vector<boost::any> temp1;
      for(auto item1:*transformationRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TransformationRules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceObjectSelectionRules") != m.end() && !m["SourceObjectSelectionRules"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceObjectSelectionRules"].type()) {
        vector<CreateDIJobRequestTableMappingsSourceObjectSelectionRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceObjectSelectionRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDIJobRequestTableMappingsSourceObjectSelectionRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceObjectSelectionRules = make_shared<vector<CreateDIJobRequestTableMappingsSourceObjectSelectionRules>>(expect1);
      }
    }
    if (m.find("TransformationRules") != m.end() && !m["TransformationRules"].empty()) {
      if (typeid(vector<boost::any>) == m["TransformationRules"].type()) {
        vector<CreateDIJobRequestTableMappingsTransformationRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TransformationRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDIJobRequestTableMappingsTransformationRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transformationRules = make_shared<vector<CreateDIJobRequestTableMappingsTransformationRules>>(expect1);
      }
    }
  }


  virtual ~CreateDIJobRequestTableMappings() = default;
};
class CreateDIJobRequestTransformationRules : public Darabonba::Model {
public:
  shared_ptr<string> ruleActionType{};
  shared_ptr<string> ruleExpression{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleTargetType{};

  CreateDIJobRequestTransformationRules() {}

  explicit CreateDIJobRequestTransformationRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleActionType) {
      res["RuleActionType"] = boost::any(*ruleActionType);
    }
    if (ruleExpression) {
      res["RuleExpression"] = boost::any(*ruleExpression);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleTargetType) {
      res["RuleTargetType"] = boost::any(*ruleTargetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleActionType") != m.end() && !m["RuleActionType"].empty()) {
      ruleActionType = make_shared<string>(boost::any_cast<string>(m["RuleActionType"]));
    }
    if (m.find("RuleExpression") != m.end() && !m["RuleExpression"].empty()) {
      ruleExpression = make_shared<string>(boost::any_cast<string>(m["RuleExpression"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleTargetType") != m.end() && !m["RuleTargetType"].empty()) {
      ruleTargetType = make_shared<string>(boost::any_cast<string>(m["RuleTargetType"]));
    }
  }


  virtual ~CreateDIJobRequestTransformationRules() = default;
};
class CreateDIJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<vector<CreateDIJobRequestDestinationDataSourceSettings>> destinationDataSourceSettings{};
  shared_ptr<string> destinationDataSourceType{};
  shared_ptr<string> jobName{};
  shared_ptr<CreateDIJobRequestJobSettings> jobSettings{};
  shared_ptr<string> migrationType{};
  shared_ptr<long> projectId{};
  shared_ptr<CreateDIJobRequestResourceSettings> resourceSettings{};
  shared_ptr<vector<CreateDIJobRequestSourceDataSourceSettings>> sourceDataSourceSettings{};
  shared_ptr<string> sourceDataSourceType{};
  shared_ptr<vector<CreateDIJobRequestTableMappings>> tableMappings{};
  shared_ptr<vector<CreateDIJobRequestTransformationRules>> transformationRules{};

  CreateDIJobRequest() {}

  explicit CreateDIJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destinationDataSourceSettings) {
      vector<boost::any> temp1;
      for(auto item1:*destinationDataSourceSettings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DestinationDataSourceSettings"] = boost::any(temp1);
    }
    if (destinationDataSourceType) {
      res["DestinationDataSourceType"] = boost::any(*destinationDataSourceType);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (jobSettings) {
      res["JobSettings"] = jobSettings ? boost::any(jobSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (migrationType) {
      res["MigrationType"] = boost::any(*migrationType);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (resourceSettings) {
      res["ResourceSettings"] = resourceSettings ? boost::any(resourceSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceDataSourceSettings) {
      vector<boost::any> temp1;
      for(auto item1:*sourceDataSourceSettings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceDataSourceSettings"] = boost::any(temp1);
    }
    if (sourceDataSourceType) {
      res["SourceDataSourceType"] = boost::any(*sourceDataSourceType);
    }
    if (tableMappings) {
      vector<boost::any> temp1;
      for(auto item1:*tableMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TableMappings"] = boost::any(temp1);
    }
    if (transformationRules) {
      vector<boost::any> temp1;
      for(auto item1:*transformationRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TransformationRules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestinationDataSourceSettings") != m.end() && !m["DestinationDataSourceSettings"].empty()) {
      if (typeid(vector<boost::any>) == m["DestinationDataSourceSettings"].type()) {
        vector<CreateDIJobRequestDestinationDataSourceSettings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DestinationDataSourceSettings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDIJobRequestDestinationDataSourceSettings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        destinationDataSourceSettings = make_shared<vector<CreateDIJobRequestDestinationDataSourceSettings>>(expect1);
      }
    }
    if (m.find("DestinationDataSourceType") != m.end() && !m["DestinationDataSourceType"].empty()) {
      destinationDataSourceType = make_shared<string>(boost::any_cast<string>(m["DestinationDataSourceType"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("JobSettings") != m.end() && !m["JobSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["JobSettings"].type()) {
        CreateDIJobRequestJobSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["JobSettings"]));
        jobSettings = make_shared<CreateDIJobRequestJobSettings>(model1);
      }
    }
    if (m.find("MigrationType") != m.end() && !m["MigrationType"].empty()) {
      migrationType = make_shared<string>(boost::any_cast<string>(m["MigrationType"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("ResourceSettings") != m.end() && !m["ResourceSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceSettings"].type()) {
        CreateDIJobRequestResourceSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSettings"]));
        resourceSettings = make_shared<CreateDIJobRequestResourceSettings>(model1);
      }
    }
    if (m.find("SourceDataSourceSettings") != m.end() && !m["SourceDataSourceSettings"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceDataSourceSettings"].type()) {
        vector<CreateDIJobRequestSourceDataSourceSettings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceDataSourceSettings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDIJobRequestSourceDataSourceSettings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceDataSourceSettings = make_shared<vector<CreateDIJobRequestSourceDataSourceSettings>>(expect1);
      }
    }
    if (m.find("SourceDataSourceType") != m.end() && !m["SourceDataSourceType"].empty()) {
      sourceDataSourceType = make_shared<string>(boost::any_cast<string>(m["SourceDataSourceType"]));
    }
    if (m.find("TableMappings") != m.end() && !m["TableMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["TableMappings"].type()) {
        vector<CreateDIJobRequestTableMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TableMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDIJobRequestTableMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableMappings = make_shared<vector<CreateDIJobRequestTableMappings>>(expect1);
      }
    }
    if (m.find("TransformationRules") != m.end() && !m["TransformationRules"].empty()) {
      if (typeid(vector<boost::any>) == m["TransformationRules"].type()) {
        vector<CreateDIJobRequestTransformationRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TransformationRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateDIJobRequestTransformationRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transformationRules = make_shared<vector<CreateDIJobRequestTransformationRules>>(expect1);
      }
    }
  }


  virtual ~CreateDIJobRequest() = default;
};
class CreateDIJobShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> destinationDataSourceSettingsShrink{};
  shared_ptr<string> destinationDataSourceType{};
  shared_ptr<string> jobName{};
  shared_ptr<string> jobSettingsShrink{};
  shared_ptr<string> migrationType{};
  shared_ptr<long> projectId{};
  shared_ptr<string> resourceSettingsShrink{};
  shared_ptr<string> sourceDataSourceSettingsShrink{};
  shared_ptr<string> sourceDataSourceType{};
  shared_ptr<string> tableMappingsShrink{};
  shared_ptr<string> transformationRulesShrink{};

  CreateDIJobShrinkRequest() {}

  explicit CreateDIJobShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destinationDataSourceSettingsShrink) {
      res["DestinationDataSourceSettings"] = boost::any(*destinationDataSourceSettingsShrink);
    }
    if (destinationDataSourceType) {
      res["DestinationDataSourceType"] = boost::any(*destinationDataSourceType);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (jobSettingsShrink) {
      res["JobSettings"] = boost::any(*jobSettingsShrink);
    }
    if (migrationType) {
      res["MigrationType"] = boost::any(*migrationType);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (resourceSettingsShrink) {
      res["ResourceSettings"] = boost::any(*resourceSettingsShrink);
    }
    if (sourceDataSourceSettingsShrink) {
      res["SourceDataSourceSettings"] = boost::any(*sourceDataSourceSettingsShrink);
    }
    if (sourceDataSourceType) {
      res["SourceDataSourceType"] = boost::any(*sourceDataSourceType);
    }
    if (tableMappingsShrink) {
      res["TableMappings"] = boost::any(*tableMappingsShrink);
    }
    if (transformationRulesShrink) {
      res["TransformationRules"] = boost::any(*transformationRulesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestinationDataSourceSettings") != m.end() && !m["DestinationDataSourceSettings"].empty()) {
      destinationDataSourceSettingsShrink = make_shared<string>(boost::any_cast<string>(m["DestinationDataSourceSettings"]));
    }
    if (m.find("DestinationDataSourceType") != m.end() && !m["DestinationDataSourceType"].empty()) {
      destinationDataSourceType = make_shared<string>(boost::any_cast<string>(m["DestinationDataSourceType"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("JobSettings") != m.end() && !m["JobSettings"].empty()) {
      jobSettingsShrink = make_shared<string>(boost::any_cast<string>(m["JobSettings"]));
    }
    if (m.find("MigrationType") != m.end() && !m["MigrationType"].empty()) {
      migrationType = make_shared<string>(boost::any_cast<string>(m["MigrationType"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("ResourceSettings") != m.end() && !m["ResourceSettings"].empty()) {
      resourceSettingsShrink = make_shared<string>(boost::any_cast<string>(m["ResourceSettings"]));
    }
    if (m.find("SourceDataSourceSettings") != m.end() && !m["SourceDataSourceSettings"].empty()) {
      sourceDataSourceSettingsShrink = make_shared<string>(boost::any_cast<string>(m["SourceDataSourceSettings"]));
    }
    if (m.find("SourceDataSourceType") != m.end() && !m["SourceDataSourceType"].empty()) {
      sourceDataSourceType = make_shared<string>(boost::any_cast<string>(m["SourceDataSourceType"]));
    }
    if (m.find("TableMappings") != m.end() && !m["TableMappings"].empty()) {
      tableMappingsShrink = make_shared<string>(boost::any_cast<string>(m["TableMappings"]));
    }
    if (m.find("TransformationRules") != m.end() && !m["TransformationRules"].empty()) {
      transformationRulesShrink = make_shared<string>(boost::any_cast<string>(m["TransformationRules"]));
    }
  }


  virtual ~CreateDIJobShrinkRequest() = default;
};
class CreateDIJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> DIJobId{};
  shared_ptr<string> requestId{};

  CreateDIJobResponseBody() {}

  explicit CreateDIJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DIJobId) {
      res["DIJobId"] = boost::any(*DIJobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DIJobId") != m.end() && !m["DIJobId"].empty()) {
      DIJobId = make_shared<long>(boost::any_cast<long>(m["DIJobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDIJobResponseBody() = default;
};
class CreateDIJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDIJobResponseBody> body{};

  CreateDIJobResponse() {}

  explicit CreateDIJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        CreateDIJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDIJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDIJobResponse() = default;
};
class CreateDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionProperties{};
  shared_ptr<string> connectionPropertiesMode{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<long> projectId{};
  shared_ptr<string> type{};

  CreateDataSourceRequest() {}

  explicit CreateDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionProperties) {
      res["ConnectionProperties"] = boost::any(*connectionProperties);
    }
    if (connectionPropertiesMode) {
      res["ConnectionPropertiesMode"] = boost::any(*connectionPropertiesMode);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionProperties") != m.end() && !m["ConnectionProperties"].empty()) {
      connectionProperties = make_shared<string>(boost::any_cast<string>(m["ConnectionProperties"]));
    }
    if (m.find("ConnectionPropertiesMode") != m.end() && !m["ConnectionPropertiesMode"].empty()) {
      connectionPropertiesMode = make_shared<string>(boost::any_cast<string>(m["ConnectionPropertiesMode"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateDataSourceRequest() = default;
};
class CreateDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> requestId{};

  CreateDataSourceResponseBody() {}

  explicit CreateDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDataSourceResponseBody() = default;
};
class CreateDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDataSourceResponseBody> body{};

  CreateDataSourceResponse() {}

  explicit CreateDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        CreateDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDataSourceResponse() = default;
};
class CreateDataSourceSharedRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> dataSourceId{};
  shared_ptr<string> envType{};
  shared_ptr<string> sharedUser{};
  shared_ptr<long> targetProjectId{};

  CreateDataSourceSharedRuleRequest() {}

  explicit CreateDataSourceSharedRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (sharedUser) {
      res["SharedUser"] = boost::any(*sharedUser);
    }
    if (targetProjectId) {
      res["TargetProjectId"] = boost::any(*targetProjectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<long>(boost::any_cast<long>(m["DataSourceId"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("SharedUser") != m.end() && !m["SharedUser"].empty()) {
      sharedUser = make_shared<string>(boost::any_cast<string>(m["SharedUser"]));
    }
    if (m.find("TargetProjectId") != m.end() && !m["TargetProjectId"].empty()) {
      targetProjectId = make_shared<long>(boost::any_cast<long>(m["TargetProjectId"]));
    }
  }


  virtual ~CreateDataSourceSharedRuleRequest() = default;
};
class CreateDataSourceSharedRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> requestId{};

  CreateDataSourceSharedRuleResponseBody() {}

  explicit CreateDataSourceSharedRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDataSourceSharedRuleResponseBody() = default;
};
class CreateDataSourceSharedRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDataSourceSharedRuleResponseBody> body{};

  CreateDataSourceSharedRuleResponse() {}

  explicit CreateDataSourceSharedRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        CreateDataSourceSharedRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDataSourceSharedRuleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDataSourceSharedRuleResponse() = default;
};
class CreateDeploymentRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<vector<string>> objectIds{};
  shared_ptr<string> projectId{};
  shared_ptr<string> type{};

  CreateDeploymentRequest() {}

  explicit CreateDeploymentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (objectIds) {
      res["ObjectIds"] = boost::any(*objectIds);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ObjectIds") != m.end() && !m["ObjectIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ObjectIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ObjectIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      objectIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateDeploymentRequest() = default;
};
class CreateDeploymentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> objectIdsShrink{};
  shared_ptr<string> projectId{};
  shared_ptr<string> type{};

  CreateDeploymentShrinkRequest() {}

  explicit CreateDeploymentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (objectIdsShrink) {
      res["ObjectIds"] = boost::any(*objectIdsShrink);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ObjectIds") != m.end() && !m["ObjectIds"].empty()) {
      objectIdsShrink = make_shared<string>(boost::any_cast<string>(m["ObjectIds"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~CreateDeploymentShrinkRequest() = default;
};
class CreateDeploymentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreateDeploymentResponseBody() {}

  explicit CreateDeploymentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDeploymentResponseBody() = default;
};
class CreateDeploymentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDeploymentResponseBody> body{};

  CreateDeploymentResponse() {}

  explicit CreateDeploymentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        CreateDeploymentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDeploymentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDeploymentResponse() = default;
};
class CreateFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};
  shared_ptr<string> spec{};

  CreateFunctionRequest() {}

  explicit CreateFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~CreateFunctionRequest() = default;
};
class CreateFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreateFunctionResponseBody() {}

  explicit CreateFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateFunctionResponseBody() = default;
};
class CreateFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFunctionResponseBody> body{};

  CreateFunctionResponse() {}

  explicit CreateFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        CreateFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFunctionResponse() = default;
};
class CreateNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> containerId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> scene{};
  shared_ptr<string> spec{};

  CreateNodeRequest() {}

  explicit CreateNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerId) {
      res["ContainerId"] = boost::any(*containerId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerId") != m.end() && !m["ContainerId"].empty()) {
      containerId = make_shared<string>(boost::any_cast<string>(m["ContainerId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~CreateNodeRequest() = default;
};
class CreateNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreateNodeResponseBody() {}

  explicit CreateNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateNodeResponseBody() = default;
};
class CreateNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateNodeResponseBody> body{};

  CreateNodeResponse() {}

  explicit CreateNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        CreateNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateNodeResponseBody>(model1);
      }
    }
  }


  virtual ~CreateNodeResponse() = default;
};
class CreateProjectRequestAliyunResourceTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  CreateProjectRequestAliyunResourceTags() {}

  explicit CreateProjectRequestAliyunResourceTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateProjectRequestAliyunResourceTags() = default;
};
class CreateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunResourceGroupId{};
  shared_ptr<vector<CreateProjectRequestAliyunResourceTags>> aliyunResourceTags{};
  shared_ptr<string> description{};
  shared_ptr<bool> devEnvironmentEnabled{};
  shared_ptr<bool> devRoleDisabled{};
  shared_ptr<string> displayName{};
  shared_ptr<string> name{};
  shared_ptr<bool> paiTaskEnabled{};

  CreateProjectRequest() {}

  explicit CreateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunResourceGroupId) {
      res["AliyunResourceGroupId"] = boost::any(*aliyunResourceGroupId);
    }
    if (aliyunResourceTags) {
      vector<boost::any> temp1;
      for(auto item1:*aliyunResourceTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AliyunResourceTags"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (devEnvironmentEnabled) {
      res["DevEnvironmentEnabled"] = boost::any(*devEnvironmentEnabled);
    }
    if (devRoleDisabled) {
      res["DevRoleDisabled"] = boost::any(*devRoleDisabled);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (paiTaskEnabled) {
      res["PaiTaskEnabled"] = boost::any(*paiTaskEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunResourceGroupId") != m.end() && !m["AliyunResourceGroupId"].empty()) {
      aliyunResourceGroupId = make_shared<string>(boost::any_cast<string>(m["AliyunResourceGroupId"]));
    }
    if (m.find("AliyunResourceTags") != m.end() && !m["AliyunResourceTags"].empty()) {
      if (typeid(vector<boost::any>) == m["AliyunResourceTags"].type()) {
        vector<CreateProjectRequestAliyunResourceTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AliyunResourceTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateProjectRequestAliyunResourceTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aliyunResourceTags = make_shared<vector<CreateProjectRequestAliyunResourceTags>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DevEnvironmentEnabled") != m.end() && !m["DevEnvironmentEnabled"].empty()) {
      devEnvironmentEnabled = make_shared<bool>(boost::any_cast<bool>(m["DevEnvironmentEnabled"]));
    }
    if (m.find("DevRoleDisabled") != m.end() && !m["DevRoleDisabled"].empty()) {
      devRoleDisabled = make_shared<bool>(boost::any_cast<bool>(m["DevRoleDisabled"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PaiTaskEnabled") != m.end() && !m["PaiTaskEnabled"].empty()) {
      paiTaskEnabled = make_shared<bool>(boost::any_cast<bool>(m["PaiTaskEnabled"]));
    }
  }


  virtual ~CreateProjectRequest() = default;
};
class CreateProjectShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunResourceGroupId{};
  shared_ptr<string> aliyunResourceTagsShrink{};
  shared_ptr<string> description{};
  shared_ptr<bool> devEnvironmentEnabled{};
  shared_ptr<bool> devRoleDisabled{};
  shared_ptr<string> displayName{};
  shared_ptr<string> name{};
  shared_ptr<bool> paiTaskEnabled{};

  CreateProjectShrinkRequest() {}

  explicit CreateProjectShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunResourceGroupId) {
      res["AliyunResourceGroupId"] = boost::any(*aliyunResourceGroupId);
    }
    if (aliyunResourceTagsShrink) {
      res["AliyunResourceTags"] = boost::any(*aliyunResourceTagsShrink);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (devEnvironmentEnabled) {
      res["DevEnvironmentEnabled"] = boost::any(*devEnvironmentEnabled);
    }
    if (devRoleDisabled) {
      res["DevRoleDisabled"] = boost::any(*devRoleDisabled);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (paiTaskEnabled) {
      res["PaiTaskEnabled"] = boost::any(*paiTaskEnabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunResourceGroupId") != m.end() && !m["AliyunResourceGroupId"].empty()) {
      aliyunResourceGroupId = make_shared<string>(boost::any_cast<string>(m["AliyunResourceGroupId"]));
    }
    if (m.find("AliyunResourceTags") != m.end() && !m["AliyunResourceTags"].empty()) {
      aliyunResourceTagsShrink = make_shared<string>(boost::any_cast<string>(m["AliyunResourceTags"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DevEnvironmentEnabled") != m.end() && !m["DevEnvironmentEnabled"].empty()) {
      devEnvironmentEnabled = make_shared<bool>(boost::any_cast<bool>(m["DevEnvironmentEnabled"]));
    }
    if (m.find("DevRoleDisabled") != m.end() && !m["DevRoleDisabled"].empty()) {
      devRoleDisabled = make_shared<bool>(boost::any_cast<bool>(m["DevRoleDisabled"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PaiTaskEnabled") != m.end() && !m["PaiTaskEnabled"].empty()) {
      paiTaskEnabled = make_shared<bool>(boost::any_cast<bool>(m["PaiTaskEnabled"]));
    }
  }


  virtual ~CreateProjectShrinkRequest() = default;
};
class CreateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> projectId{};
  shared_ptr<string> requestId{};

  CreateProjectResponseBody() {}

  explicit CreateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateProjectResponseBody() = default;
};
class CreateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProjectResponseBody> body{};

  CreateProjectResponse() {}

  explicit CreateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        CreateProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProjectResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProjectResponse() = default;
};
class CreateResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};
  shared_ptr<string> spec{};

  CreateResourceRequest() {}

  explicit CreateResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~CreateResourceRequest() = default;
};
class CreateResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreateResourceResponseBody() {}

  explicit CreateResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateResourceResponseBody() = default;
};
class CreateResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateResourceResponseBody> body{};

  CreateResourceResponse() {}

  explicit CreateResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        CreateResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateResourceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateResourceResponse() = default;
};
class CreateWorkflowDefinitionRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};
  shared_ptr<string> spec{};

  CreateWorkflowDefinitionRequest() {}

  explicit CreateWorkflowDefinitionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~CreateWorkflowDefinitionRequest() = default;
};
class CreateWorkflowDefinitionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> requestId{};

  CreateWorkflowDefinitionResponseBody() {}

  explicit CreateWorkflowDefinitionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateWorkflowDefinitionResponseBody() = default;
};
class CreateWorkflowDefinitionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateWorkflowDefinitionResponseBody> body{};

  CreateWorkflowDefinitionResponse() {}

  explicit CreateWorkflowDefinitionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        CreateWorkflowDefinitionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateWorkflowDefinitionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateWorkflowDefinitionResponse() = default;
};
class DeleteDIJobRequest : public Darabonba::Model {
public:
  shared_ptr<long> DIJobId{};

  DeleteDIJobRequest() {}

  explicit DeleteDIJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DIJobId) {
      res["DIJobId"] = boost::any(*DIJobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DIJobId") != m.end() && !m["DIJobId"].empty()) {
      DIJobId = make_shared<long>(boost::any_cast<long>(m["DIJobId"]));
    }
  }


  virtual ~DeleteDIJobRequest() = default;
};
class DeleteDIJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteDIJobResponseBody() {}

  explicit DeleteDIJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteDIJobResponseBody() = default;
};
class DeleteDIJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDIJobResponseBody> body{};

  DeleteDIJobResponse() {}

  explicit DeleteDIJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        DeleteDIJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDIJobResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDIJobResponse() = default;
};
class DeleteDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};

  DeleteDataSourceRequest() {}

  explicit DeleteDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DeleteDataSourceRequest() = default;
};
class DeleteDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteDataSourceResponseBody() {}

  explicit DeleteDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteDataSourceResponseBody() = default;
};
class DeleteDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDataSourceResponseBody> body{};

  DeleteDataSourceResponse() {}

  explicit DeleteDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        DeleteDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDataSourceResponse() = default;
};
class DeleteDataSourceSharedRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};

  DeleteDataSourceSharedRuleRequest() {}

  explicit DeleteDataSourceSharedRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DeleteDataSourceSharedRuleRequest() = default;
};
class DeleteDataSourceSharedRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteDataSourceSharedRuleResponseBody() {}

  explicit DeleteDataSourceSharedRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteDataSourceSharedRuleResponseBody() = default;
};
class DeleteDataSourceSharedRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDataSourceSharedRuleResponseBody> body{};

  DeleteDataSourceSharedRuleResponse() {}

  explicit DeleteDataSourceSharedRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        DeleteDataSourceSharedRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDataSourceSharedRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDataSourceSharedRuleResponse() = default;
};
class DeleteFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  DeleteFunctionRequest() {}

  explicit DeleteFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~DeleteFunctionRequest() = default;
};
class DeleteFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteFunctionResponseBody() {}

  explicit DeleteFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteFunctionResponseBody() = default;
};
class DeleteFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFunctionResponseBody> body{};

  DeleteFunctionResponse() {}

  explicit DeleteFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        DeleteFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFunctionResponse() = default;
};
class DeleteNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  DeleteNodeRequest() {}

  explicit DeleteNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~DeleteNodeRequest() = default;
};
class DeleteNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteNodeResponseBody() {}

  explicit DeleteNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteNodeResponseBody() = default;
};
class DeleteNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteNodeResponseBody> body{};

  DeleteNodeResponse() {}

  explicit DeleteNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        DeleteNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteNodeResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteNodeResponse() = default;
};
class DeleteProjectRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};

  DeleteProjectRequest() {}

  explicit DeleteProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~DeleteProjectRequest() = default;
};
class DeleteProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteProjectResponseBody() {}

  explicit DeleteProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteProjectResponseBody() = default;
};
class DeleteProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteProjectResponseBody> body{};

  DeleteProjectResponse() {}

  explicit DeleteProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        DeleteProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProjectResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProjectResponse() = default;
};
class DeleteResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  DeleteResourceRequest() {}

  explicit DeleteResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~DeleteResourceRequest() = default;
};
class DeleteResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteResourceResponseBody() {}

  explicit DeleteResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteResourceResponseBody() = default;
};
class DeleteResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteResourceResponseBody> body{};

  DeleteResourceResponse() {}

  explicit DeleteResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        DeleteResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteResourceResponse() = default;
};
class DeleteWorkflowDefinitionRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  DeleteWorkflowDefinitionRequest() {}

  explicit DeleteWorkflowDefinitionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~DeleteWorkflowDefinitionRequest() = default;
};
class DeleteWorkflowDefinitionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteWorkflowDefinitionResponseBody() {}

  explicit DeleteWorkflowDefinitionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteWorkflowDefinitionResponseBody() = default;
};
class DeleteWorkflowDefinitionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteWorkflowDefinitionResponseBody> body{};

  DeleteWorkflowDefinitionResponse() {}

  explicit DeleteWorkflowDefinitionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        DeleteWorkflowDefinitionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteWorkflowDefinitionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteWorkflowDefinitionResponse() = default;
};
class ExecDeploymentStageRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  ExecDeploymentStageRequest() {}

  explicit ExecDeploymentStageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~ExecDeploymentStageRequest() = default;
};
class ExecDeploymentStageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExecDeploymentStageResponseBody() {}

  explicit ExecDeploymentStageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ExecDeploymentStageResponseBody() = default;
};
class ExecDeploymentStageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecDeploymentStageResponseBody> body{};

  ExecDeploymentStageResponse() {}

  explicit ExecDeploymentStageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        ExecDeploymentStageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecDeploymentStageResponseBody>(model1);
      }
    }
  }


  virtual ~ExecDeploymentStageResponse() = default;
};
class GetDIJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> DIJobId{};
  shared_ptr<bool> withDetails{};

  GetDIJobRequest() {}

  explicit GetDIJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DIJobId) {
      res["DIJobId"] = boost::any(*DIJobId);
    }
    if (withDetails) {
      res["WithDetails"] = boost::any(*withDetails);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DIJobId") != m.end() && !m["DIJobId"].empty()) {
      DIJobId = make_shared<string>(boost::any_cast<string>(m["DIJobId"]));
    }
    if (m.find("WithDetails") != m.end() && !m["WithDetails"].empty()) {
      withDetails = make_shared<bool>(boost::any_cast<bool>(m["WithDetails"]));
    }
  }


  virtual ~GetDIJobRequest() = default;
};
class GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceName{};

  GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings() {}

  explicit GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceName) {
      res["DataSourceName"] = boost::any(*dataSourceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceName") != m.end() && !m["DataSourceName"].empty()) {
      dataSourceName = make_shared<string>(boost::any_cast<string>(m["DataSourceName"]));
    }
  }


  virtual ~GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings() = default;
};
class GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings : public Darabonba::Model {
public:
  shared_ptr<string> destinationDataType{};
  shared_ptr<string> sourceDataType{};

  GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings() {}

  explicit GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationDataType) {
      res["DestinationDataType"] = boost::any(*destinationDataType);
    }
    if (sourceDataType) {
      res["SourceDataType"] = boost::any(*sourceDataType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationDataType") != m.end() && !m["DestinationDataType"].empty()) {
      destinationDataType = make_shared<string>(boost::any_cast<string>(m["DestinationDataType"]));
    }
    if (m.find("SourceDataType") != m.end() && !m["SourceDataType"].empty()) {
      sourceDataType = make_shared<string>(boost::any_cast<string>(m["SourceDataType"]));
    }
  }


  virtual ~GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings() = default;
};
class GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings : public Darabonba::Model {
public:
  shared_ptr<string> cycleMigrationType{};
  shared_ptr<string> scheduleParameters{};

  GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings() {}

  explicit GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cycleMigrationType) {
      res["CycleMigrationType"] = boost::any(*cycleMigrationType);
    }
    if (scheduleParameters) {
      res["ScheduleParameters"] = boost::any(*scheduleParameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CycleMigrationType") != m.end() && !m["CycleMigrationType"].empty()) {
      cycleMigrationType = make_shared<string>(boost::any_cast<string>(m["CycleMigrationType"]));
    }
    if (m.find("ScheduleParameters") != m.end() && !m["ScheduleParameters"].empty()) {
      scheduleParameters = make_shared<string>(boost::any_cast<string>(m["ScheduleParameters"]));
    }
  }


  virtual ~GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings() = default;
};
class GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> type{};

  GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings() {}

  explicit GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings() = default;
};
class GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings() {}

  explicit GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings() = default;
};
class GetDIJobResponseBodyPagingInfoJobSettings : public Darabonba::Model {
public:
  shared_ptr<string> channelSettings{};
  shared_ptr<vector<GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings>> columnDataTypeSettings{};
  shared_ptr<GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings> cycleScheduleSettings{};
  shared_ptr<vector<GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings>> ddlHandlingSettings{};
  shared_ptr<vector<GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings>> runtimeSettings{};

  GetDIJobResponseBodyPagingInfoJobSettings() {}

  explicit GetDIJobResponseBodyPagingInfoJobSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelSettings) {
      res["ChannelSettings"] = boost::any(*channelSettings);
    }
    if (columnDataTypeSettings) {
      vector<boost::any> temp1;
      for(auto item1:*columnDataTypeSettings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ColumnDataTypeSettings"] = boost::any(temp1);
    }
    if (cycleScheduleSettings) {
      res["CycleScheduleSettings"] = cycleScheduleSettings ? boost::any(cycleScheduleSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ddlHandlingSettings) {
      vector<boost::any> temp1;
      for(auto item1:*ddlHandlingSettings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DdlHandlingSettings"] = boost::any(temp1);
    }
    if (runtimeSettings) {
      vector<boost::any> temp1;
      for(auto item1:*runtimeSettings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuntimeSettings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelSettings") != m.end() && !m["ChannelSettings"].empty()) {
      channelSettings = make_shared<string>(boost::any_cast<string>(m["ChannelSettings"]));
    }
    if (m.find("ColumnDataTypeSettings") != m.end() && !m["ColumnDataTypeSettings"].empty()) {
      if (typeid(vector<boost::any>) == m["ColumnDataTypeSettings"].type()) {
        vector<GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ColumnDataTypeSettings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columnDataTypeSettings = make_shared<vector<GetDIJobResponseBodyPagingInfoJobSettingsColumnDataTypeSettings>>(expect1);
      }
    }
    if (m.find("CycleScheduleSettings") != m.end() && !m["CycleScheduleSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["CycleScheduleSettings"].type()) {
        GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CycleScheduleSettings"]));
        cycleScheduleSettings = make_shared<GetDIJobResponseBodyPagingInfoJobSettingsCycleScheduleSettings>(model1);
      }
    }
    if (m.find("DdlHandlingSettings") != m.end() && !m["DdlHandlingSettings"].empty()) {
      if (typeid(vector<boost::any>) == m["DdlHandlingSettings"].type()) {
        vector<GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DdlHandlingSettings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ddlHandlingSettings = make_shared<vector<GetDIJobResponseBodyPagingInfoJobSettingsDdlHandlingSettings>>(expect1);
      }
    }
    if (m.find("RuntimeSettings") != m.end() && !m["RuntimeSettings"].empty()) {
      if (typeid(vector<boost::any>) == m["RuntimeSettings"].type()) {
        vector<GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuntimeSettings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        runtimeSettings = make_shared<vector<GetDIJobResponseBodyPagingInfoJobSettingsRuntimeSettings>>(expect1);
      }
    }
  }


  virtual ~GetDIJobResponseBodyPagingInfoJobSettings() = default;
};
class GetDIJobResponseBodyPagingInfoResourceSettingsOfflineResourceSettings : public Darabonba::Model {
public:
  shared_ptr<double> requestedCu{};
  shared_ptr<string> resourceGroupIdentifier{};

  GetDIJobResponseBodyPagingInfoResourceSettingsOfflineResourceSettings() {}

  explicit GetDIJobResponseBodyPagingInfoResourceSettingsOfflineResourceSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestedCu) {
      res["RequestedCu"] = boost::any(*requestedCu);
    }
    if (resourceGroupIdentifier) {
      res["ResourceGroupIdentifier"] = boost::any(*resourceGroupIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestedCu") != m.end() && !m["RequestedCu"].empty()) {
      requestedCu = make_shared<double>(boost::any_cast<double>(m["RequestedCu"]));
    }
    if (m.find("ResourceGroupIdentifier") != m.end() && !m["ResourceGroupIdentifier"].empty()) {
      resourceGroupIdentifier = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdentifier"]));
    }
  }


  virtual ~GetDIJobResponseBodyPagingInfoResourceSettingsOfflineResourceSettings() = default;
};
class GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings : public Darabonba::Model {
public:
  shared_ptr<double> requestedCu{};
  shared_ptr<string> resourceGroupIdentifier{};

  GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings() {}

  explicit GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestedCu) {
      res["RequestedCu"] = boost::any(*requestedCu);
    }
    if (resourceGroupIdentifier) {
      res["ResourceGroupIdentifier"] = boost::any(*resourceGroupIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestedCu") != m.end() && !m["RequestedCu"].empty()) {
      requestedCu = make_shared<double>(boost::any_cast<double>(m["RequestedCu"]));
    }
    if (m.find("ResourceGroupIdentifier") != m.end() && !m["ResourceGroupIdentifier"].empty()) {
      resourceGroupIdentifier = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdentifier"]));
    }
  }


  virtual ~GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings() = default;
};
class GetDIJobResponseBodyPagingInfoResourceSettingsScheduleResourceSettings : public Darabonba::Model {
public:
  shared_ptr<double> requestedCu{};
  shared_ptr<string> resourceGroupIdentifier{};

  GetDIJobResponseBodyPagingInfoResourceSettingsScheduleResourceSettings() {}

  explicit GetDIJobResponseBodyPagingInfoResourceSettingsScheduleResourceSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestedCu) {
      res["RequestedCu"] = boost::any(*requestedCu);
    }
    if (resourceGroupIdentifier) {
      res["ResourceGroupIdentifier"] = boost::any(*resourceGroupIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestedCu") != m.end() && !m["RequestedCu"].empty()) {
      requestedCu = make_shared<double>(boost::any_cast<double>(m["RequestedCu"]));
    }
    if (m.find("ResourceGroupIdentifier") != m.end() && !m["ResourceGroupIdentifier"].empty()) {
      resourceGroupIdentifier = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdentifier"]));
    }
  }


  virtual ~GetDIJobResponseBodyPagingInfoResourceSettingsScheduleResourceSettings() = default;
};
class GetDIJobResponseBodyPagingInfoResourceSettings : public Darabonba::Model {
public:
  shared_ptr<GetDIJobResponseBodyPagingInfoResourceSettingsOfflineResourceSettings> offlineResourceSettings{};
  shared_ptr<GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings> realtimeResourceSettings{};
  shared_ptr<GetDIJobResponseBodyPagingInfoResourceSettingsScheduleResourceSettings> scheduleResourceSettings{};

  GetDIJobResponseBodyPagingInfoResourceSettings() {}

  explicit GetDIJobResponseBodyPagingInfoResourceSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offlineResourceSettings) {
      res["OfflineResourceSettings"] = offlineResourceSettings ? boost::any(offlineResourceSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (realtimeResourceSettings) {
      res["RealtimeResourceSettings"] = realtimeResourceSettings ? boost::any(realtimeResourceSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleResourceSettings) {
      res["ScheduleResourceSettings"] = scheduleResourceSettings ? boost::any(scheduleResourceSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OfflineResourceSettings") != m.end() && !m["OfflineResourceSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["OfflineResourceSettings"].type()) {
        GetDIJobResponseBodyPagingInfoResourceSettingsOfflineResourceSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OfflineResourceSettings"]));
        offlineResourceSettings = make_shared<GetDIJobResponseBodyPagingInfoResourceSettingsOfflineResourceSettings>(model1);
      }
    }
    if (m.find("RealtimeResourceSettings") != m.end() && !m["RealtimeResourceSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["RealtimeResourceSettings"].type()) {
        GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RealtimeResourceSettings"]));
        realtimeResourceSettings = make_shared<GetDIJobResponseBodyPagingInfoResourceSettingsRealtimeResourceSettings>(model1);
      }
    }
    if (m.find("ScheduleResourceSettings") != m.end() && !m["ScheduleResourceSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScheduleResourceSettings"].type()) {
        GetDIJobResponseBodyPagingInfoResourceSettingsScheduleResourceSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScheduleResourceSettings"]));
        scheduleResourceSettings = make_shared<GetDIJobResponseBodyPagingInfoResourceSettingsScheduleResourceSettings>(model1);
      }
    }
  }


  virtual ~GetDIJobResponseBodyPagingInfoResourceSettings() = default;
};
class GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties : public Darabonba::Model {
public:
  shared_ptr<string> encoding{};
  shared_ptr<string> timezone{};

  GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties() {}

  explicit GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encoding) {
      res["Encoding"] = boost::any(*encoding);
    }
    if (timezone) {
      res["Timezone"] = boost::any(*timezone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Encoding") != m.end() && !m["Encoding"].empty()) {
      encoding = make_shared<string>(boost::any_cast<string>(m["Encoding"]));
    }
    if (m.find("Timezone") != m.end() && !m["Timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["Timezone"]));
    }
  }


  virtual ~GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties() = default;
};
class GetDIJobResponseBodyPagingInfoSourceDataSourceSettings : public Darabonba::Model {
public:
  shared_ptr<string> dataSourceName{};
  shared_ptr<GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties> dataSourceProperties{};

  GetDIJobResponseBodyPagingInfoSourceDataSourceSettings() {}

  explicit GetDIJobResponseBodyPagingInfoSourceDataSourceSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceName) {
      res["DataSourceName"] = boost::any(*dataSourceName);
    }
    if (dataSourceProperties) {
      res["DataSourceProperties"] = dataSourceProperties ? boost::any(dataSourceProperties->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceName") != m.end() && !m["DataSourceName"].empty()) {
      dataSourceName = make_shared<string>(boost::any_cast<string>(m["DataSourceName"]));
    }
    if (m.find("DataSourceProperties") != m.end() && !m["DataSourceProperties"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSourceProperties"].type()) {
        GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSourceProperties"]));
        dataSourceProperties = make_shared<GetDIJobResponseBodyPagingInfoSourceDataSourceSettingsDataSourceProperties>(model1);
      }
    }
  }


  virtual ~GetDIJobResponseBodyPagingInfoSourceDataSourceSettings() = default;
};
class GetDIJobResponseBodyPagingInfoTableMappingsSourceObjectSelectionRules : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> expression{};
  shared_ptr<string> expressionType{};
  shared_ptr<string> objectType{};

  GetDIJobResponseBodyPagingInfoTableMappingsSourceObjectSelectionRules() {}

  explicit GetDIJobResponseBodyPagingInfoTableMappingsSourceObjectSelectionRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (expression) {
      res["Expression"] = boost::any(*expression);
    }
    if (expressionType) {
      res["ExpressionType"] = boost::any(*expressionType);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["Expression"]));
    }
    if (m.find("ExpressionType") != m.end() && !m["ExpressionType"].empty()) {
      expressionType = make_shared<string>(boost::any_cast<string>(m["ExpressionType"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
  }


  virtual ~GetDIJobResponseBodyPagingInfoTableMappingsSourceObjectSelectionRules() = default;
};
class GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules : public Darabonba::Model {
public:
  shared_ptr<string> ruleActionType{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleTargetType{};

  GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules() {}

  explicit GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleActionType) {
      res["RuleActionType"] = boost::any(*ruleActionType);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleTargetType) {
      res["RuleTargetType"] = boost::any(*ruleTargetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleActionType") != m.end() && !m["RuleActionType"].empty()) {
      ruleActionType = make_shared<string>(boost::any_cast<string>(m["RuleActionType"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleTargetType") != m.end() && !m["RuleTargetType"].empty()) {
      ruleTargetType = make_shared<string>(boost::any_cast<string>(m["RuleTargetType"]));
    }
  }


  virtual ~GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules() = default;
};
class GetDIJobResponseBodyPagingInfoTableMappings : public Darabonba::Model {
public:
  shared_ptr<vector<GetDIJobResponseBodyPagingInfoTableMappingsSourceObjectSelectionRules>> sourceObjectSelectionRules{};
  shared_ptr<vector<GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules>> transformationRules{};

  GetDIJobResponseBodyPagingInfoTableMappings() {}

  explicit GetDIJobResponseBodyPagingInfoTableMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceObjectSelectionRules) {
      vector<boost::any> temp1;
      for(auto item1:*sourceObjectSelectionRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceObjectSelectionRules"] = boost::any(temp1);
    }
    if (transformationRules) {
      vector<boost::any> temp1;
      for(auto item1:*transformationRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TransformationRules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceObjectSelectionRules") != m.end() && !m["SourceObjectSelectionRules"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceObjectSelectionRules"].type()) {
        vector<GetDIJobResponseBodyPagingInfoTableMappingsSourceObjectSelectionRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceObjectSelectionRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDIJobResponseBodyPagingInfoTableMappingsSourceObjectSelectionRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceObjectSelectionRules = make_shared<vector<GetDIJobResponseBodyPagingInfoTableMappingsSourceObjectSelectionRules>>(expect1);
      }
    }
    if (m.find("TransformationRules") != m.end() && !m["TransformationRules"].empty()) {
      if (typeid(vector<boost::any>) == m["TransformationRules"].type()) {
        vector<GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TransformationRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transformationRules = make_shared<vector<GetDIJobResponseBodyPagingInfoTableMappingsTransformationRules>>(expect1);
      }
    }
  }


  virtual ~GetDIJobResponseBodyPagingInfoTableMappings() = default;
};
class GetDIJobResponseBodyPagingInfoTransformationRules : public Darabonba::Model {
public:
  shared_ptr<string> ruleActionType{};
  shared_ptr<string> ruleExpression{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleTargetType{};

  GetDIJobResponseBodyPagingInfoTransformationRules() {}

  explicit GetDIJobResponseBodyPagingInfoTransformationRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleActionType) {
      res["RuleActionType"] = boost::any(*ruleActionType);
    }
    if (ruleExpression) {
      res["RuleExpression"] = boost::any(*ruleExpression);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleTargetType) {
      res["RuleTargetType"] = boost::any(*ruleTargetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleActionType") != m.end() && !m["RuleActionType"].empty()) {
      ruleActionType = make_shared<string>(boost::any_cast<string>(m["RuleActionType"]));
    }
    if (m.find("RuleExpression") != m.end() && !m["RuleExpression"].empty()) {
      ruleExpression = make_shared<string>(boost::any_cast<string>(m["RuleExpression"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleTargetType") != m.end() && !m["RuleTargetType"].empty()) {
      ruleTargetType = make_shared<string>(boost::any_cast<string>(m["RuleTargetType"]));
    }
  }


  virtual ~GetDIJobResponseBodyPagingInfoTransformationRules() = default;
};
class GetDIJobResponseBodyPagingInfo : public Darabonba::Model {
public:
  shared_ptr<string> DIJobId{};
  shared_ptr<string> description{};
  shared_ptr<vector<GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings>> destinationDataSourceSettings{};
  shared_ptr<string> destinationDataSourceType{};
  shared_ptr<string> jobName{};
  shared_ptr<GetDIJobResponseBodyPagingInfoJobSettings> jobSettings{};
  shared_ptr<string> migrationType{};
  shared_ptr<long> projectId{};
  shared_ptr<GetDIJobResponseBodyPagingInfoResourceSettings> resourceSettings{};
  shared_ptr<vector<GetDIJobResponseBodyPagingInfoSourceDataSourceSettings>> sourceDataSourceSettings{};
  shared_ptr<string> sourceDataSourceType{};
  shared_ptr<vector<GetDIJobResponseBodyPagingInfoTableMappings>> tableMappings{};
  shared_ptr<vector<GetDIJobResponseBodyPagingInfoTransformationRules>> transformationRules{};

  GetDIJobResponseBodyPagingInfo() {}

  explicit GetDIJobResponseBodyPagingInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DIJobId) {
      res["DIJobId"] = boost::any(*DIJobId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (destinationDataSourceSettings) {
      vector<boost::any> temp1;
      for(auto item1:*destinationDataSourceSettings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DestinationDataSourceSettings"] = boost::any(temp1);
    }
    if (destinationDataSourceType) {
      res["DestinationDataSourceType"] = boost::any(*destinationDataSourceType);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (jobSettings) {
      res["JobSettings"] = jobSettings ? boost::any(jobSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (migrationType) {
      res["MigrationType"] = boost::any(*migrationType);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (resourceSettings) {
      res["ResourceSettings"] = resourceSettings ? boost::any(resourceSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourceDataSourceSettings) {
      vector<boost::any> temp1;
      for(auto item1:*sourceDataSourceSettings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceDataSourceSettings"] = boost::any(temp1);
    }
    if (sourceDataSourceType) {
      res["SourceDataSourceType"] = boost::any(*sourceDataSourceType);
    }
    if (tableMappings) {
      vector<boost::any> temp1;
      for(auto item1:*tableMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TableMappings"] = boost::any(temp1);
    }
    if (transformationRules) {
      vector<boost::any> temp1;
      for(auto item1:*transformationRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TransformationRules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DIJobId") != m.end() && !m["DIJobId"].empty()) {
      DIJobId = make_shared<string>(boost::any_cast<string>(m["DIJobId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DestinationDataSourceSettings") != m.end() && !m["DestinationDataSourceSettings"].empty()) {
      if (typeid(vector<boost::any>) == m["DestinationDataSourceSettings"].type()) {
        vector<GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DestinationDataSourceSettings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        destinationDataSourceSettings = make_shared<vector<GetDIJobResponseBodyPagingInfoDestinationDataSourceSettings>>(expect1);
      }
    }
    if (m.find("DestinationDataSourceType") != m.end() && !m["DestinationDataSourceType"].empty()) {
      destinationDataSourceType = make_shared<string>(boost::any_cast<string>(m["DestinationDataSourceType"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("JobSettings") != m.end() && !m["JobSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["JobSettings"].type()) {
        GetDIJobResponseBodyPagingInfoJobSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["JobSettings"]));
        jobSettings = make_shared<GetDIJobResponseBodyPagingInfoJobSettings>(model1);
      }
    }
    if (m.find("MigrationType") != m.end() && !m["MigrationType"].empty()) {
      migrationType = make_shared<string>(boost::any_cast<string>(m["MigrationType"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("ResourceSettings") != m.end() && !m["ResourceSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceSettings"].type()) {
        GetDIJobResponseBodyPagingInfoResourceSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSettings"]));
        resourceSettings = make_shared<GetDIJobResponseBodyPagingInfoResourceSettings>(model1);
      }
    }
    if (m.find("SourceDataSourceSettings") != m.end() && !m["SourceDataSourceSettings"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceDataSourceSettings"].type()) {
        vector<GetDIJobResponseBodyPagingInfoSourceDataSourceSettings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceDataSourceSettings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDIJobResponseBodyPagingInfoSourceDataSourceSettings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceDataSourceSettings = make_shared<vector<GetDIJobResponseBodyPagingInfoSourceDataSourceSettings>>(expect1);
      }
    }
    if (m.find("SourceDataSourceType") != m.end() && !m["SourceDataSourceType"].empty()) {
      sourceDataSourceType = make_shared<string>(boost::any_cast<string>(m["SourceDataSourceType"]));
    }
    if (m.find("TableMappings") != m.end() && !m["TableMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["TableMappings"].type()) {
        vector<GetDIJobResponseBodyPagingInfoTableMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TableMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDIJobResponseBodyPagingInfoTableMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableMappings = make_shared<vector<GetDIJobResponseBodyPagingInfoTableMappings>>(expect1);
      }
    }
    if (m.find("TransformationRules") != m.end() && !m["TransformationRules"].empty()) {
      if (typeid(vector<boost::any>) == m["TransformationRules"].type()) {
        vector<GetDIJobResponseBodyPagingInfoTransformationRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TransformationRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDIJobResponseBodyPagingInfoTransformationRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transformationRules = make_shared<vector<GetDIJobResponseBodyPagingInfoTransformationRules>>(expect1);
      }
    }
  }


  virtual ~GetDIJobResponseBodyPagingInfo() = default;
};
class GetDIJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDIJobResponseBodyPagingInfo> pagingInfo{};
  shared_ptr<string> requestId{};

  GetDIJobResponseBody() {}

  explicit GetDIJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pagingInfo) {
      res["PagingInfo"] = pagingInfo ? boost::any(pagingInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PagingInfo") != m.end() && !m["PagingInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PagingInfo"].type()) {
        GetDIJobResponseBodyPagingInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PagingInfo"]));
        pagingInfo = make_shared<GetDIJobResponseBodyPagingInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDIJobResponseBody() = default;
};
class GetDIJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDIJobResponseBody> body{};

  GetDIJobResponse() {}

  explicit GetDIJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        GetDIJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDIJobResponseBody>(model1);
      }
    }
  }


  virtual ~GetDIJobResponse() = default;
};
class GetDIJobLogRequest : public Darabonba::Model {
public:
  shared_ptr<long> DIJobId{};
  shared_ptr<long> failoverId{};
  shared_ptr<long> instanceId{};

  GetDIJobLogRequest() {}

  explicit GetDIJobLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DIJobId) {
      res["DIJobId"] = boost::any(*DIJobId);
    }
    if (failoverId) {
      res["FailoverId"] = boost::any(*failoverId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DIJobId") != m.end() && !m["DIJobId"].empty()) {
      DIJobId = make_shared<long>(boost::any_cast<long>(m["DIJobId"]));
    }
    if (m.find("FailoverId") != m.end() && !m["FailoverId"].empty()) {
      failoverId = make_shared<long>(boost::any_cast<long>(m["FailoverId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<long>(boost::any_cast<long>(m["InstanceId"]));
    }
  }


  virtual ~GetDIJobLogRequest() = default;
};
class GetDIJobLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> log{};
  shared_ptr<string> requestId{};

  GetDIJobLogResponseBody() {}

  explicit GetDIJobLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (log) {
      res["Log"] = boost::any(*log);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Log") != m.end() && !m["Log"].empty()) {
      log = make_shared<string>(boost::any_cast<string>(m["Log"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDIJobLogResponseBody() = default;
};
class GetDIJobLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDIJobLogResponseBody> body{};

  GetDIJobLogResponse() {}

  explicit GetDIJobLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        GetDIJobLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDIJobLogResponseBody>(model1);
      }
    }
  }


  virtual ~GetDIJobLogResponse() = default;
};
class GetDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};

  GetDataSourceRequest() {}

  explicit GetDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~GetDataSourceRequest() = default;
};
class GetDataSourceResponseBodyDataSource : public Darabonba::Model {
public:
  shared_ptr<boost::any> connectionProperties{};
  shared_ptr<string> connectionPropertiesMode{};
  shared_ptr<long> createTime{};
  shared_ptr<string> createUser{};
  shared_ptr<string> description{};
  shared_ptr<long> id{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> modifyUser{};
  shared_ptr<string> name{};
  shared_ptr<long> projectId{};
  shared_ptr<string> qualifiedName{};
  shared_ptr<string> type{};

  GetDataSourceResponseBodyDataSource() {}

  explicit GetDataSourceResponseBodyDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionProperties) {
      res["ConnectionProperties"] = boost::any(*connectionProperties);
    }
    if (connectionPropertiesMode) {
      res["ConnectionPropertiesMode"] = boost::any(*connectionPropertiesMode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUser) {
      res["CreateUser"] = boost::any(*createUser);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (modifyUser) {
      res["ModifyUser"] = boost::any(*modifyUser);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (qualifiedName) {
      res["QualifiedName"] = boost::any(*qualifiedName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionProperties") != m.end() && !m["ConnectionProperties"].empty()) {
      connectionProperties = make_shared<boost::any>(boost::any_cast<boost::any>(m["ConnectionProperties"]));
    }
    if (m.find("ConnectionPropertiesMode") != m.end() && !m["ConnectionPropertiesMode"].empty()) {
      connectionPropertiesMode = make_shared<string>(boost::any_cast<string>(m["ConnectionPropertiesMode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("CreateUser") != m.end() && !m["CreateUser"].empty()) {
      createUser = make_shared<string>(boost::any_cast<string>(m["CreateUser"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("ModifyUser") != m.end() && !m["ModifyUser"].empty()) {
      modifyUser = make_shared<string>(boost::any_cast<string>(m["ModifyUser"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("QualifiedName") != m.end() && !m["QualifiedName"].empty()) {
      qualifiedName = make_shared<string>(boost::any_cast<string>(m["QualifiedName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetDataSourceResponseBodyDataSource() = default;
};
class GetDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDataSourceResponseBodyDataSource> dataSource{};
  shared_ptr<string> requestId{};

  GetDataSourceResponseBody() {}

  explicit GetDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSource) {
      res["DataSource"] = dataSource ? boost::any(dataSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSource") != m.end() && !m["DataSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSource"].type()) {
        GetDataSourceResponseBodyDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSource"]));
        dataSource = make_shared<GetDataSourceResponseBodyDataSource>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDataSourceResponseBody() = default;
};
class GetDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDataSourceResponseBody> body{};

  GetDataSourceResponse() {}

  explicit GetDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        GetDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataSourceResponse() = default;
};
class GetDeploymentRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  GetDeploymentRequest() {}

  explicit GetDeploymentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~GetDeploymentRequest() = default;
};
class GetDeploymentResponseBodyPipelineStages : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<map<string, boost::any>> detail{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<long> step{};
  shared_ptr<string> type{};

  GetDeploymentResponseBodyPipelineStages() {}

  explicit GetDeploymentResponseBodyPipelineStages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (step) {
      res["Step"] = boost::any(*step);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Detail"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      detail = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<long>(boost::any_cast<long>(m["Step"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetDeploymentResponseBodyPipelineStages() = default;
};
class GetDeploymentResponseBodyPipeline : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> creator{};
  shared_ptr<string> id{};
  shared_ptr<string> message{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> projectId{};
  shared_ptr<vector<GetDeploymentResponseBodyPipelineStages>> stages{};
  shared_ptr<string> status{};

  GetDeploymentResponseBodyPipeline() {}

  explicit GetDeploymentResponseBodyPipeline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (stages) {
      vector<boost::any> temp1;
      for(auto item1:*stages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Stages"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Stages") != m.end() && !m["Stages"].empty()) {
      if (typeid(vector<boost::any>) == m["Stages"].type()) {
        vector<GetDeploymentResponseBodyPipelineStages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Stages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDeploymentResponseBodyPipelineStages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stages = make_shared<vector<GetDeploymentResponseBodyPipelineStages>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetDeploymentResponseBodyPipeline() = default;
};
class GetDeploymentResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDeploymentResponseBodyPipeline> pipeline{};
  shared_ptr<string> requestId{};

  GetDeploymentResponseBody() {}

  explicit GetDeploymentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pipeline) {
      res["Pipeline"] = pipeline ? boost::any(pipeline->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Pipeline") != m.end() && !m["Pipeline"].empty()) {
      if (typeid(map<string, boost::any>) == m["Pipeline"].type()) {
        GetDeploymentResponseBodyPipeline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Pipeline"]));
        pipeline = make_shared<GetDeploymentResponseBodyPipeline>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDeploymentResponseBody() = default;
};
class GetDeploymentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeploymentResponseBody> body{};

  GetDeploymentResponse() {}

  explicit GetDeploymentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        GetDeploymentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeploymentResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeploymentResponse() = default;
};
class GetFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  GetFunctionRequest() {}

  explicit GetFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~GetFunctionRequest() = default;
};
class GetFunctionResponseBodyFunction : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> id{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<string> spec{};

  GetFunctionResponseBodyFunction() {}

  explicit GetFunctionResponseBodyFunction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~GetFunctionResponseBodyFunction() = default;
};
class GetFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetFunctionResponseBodyFunction> function{};
  shared_ptr<string> requestId{};

  GetFunctionResponseBody() {}

  explicit GetFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (function) {
      res["Function"] = function ? boost::any(function->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Function") != m.end() && !m["Function"].empty()) {
      if (typeid(map<string, boost::any>) == m["Function"].type()) {
        GetFunctionResponseBodyFunction model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Function"]));
        function = make_shared<GetFunctionResponseBodyFunction>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetFunctionResponseBody() = default;
};
class GetFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFunctionResponseBody> body{};

  GetFunctionResponse() {}

  explicit GetFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        GetFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~GetFunctionResponse() = default;
};
class GetNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  GetNodeRequest() {}

  explicit GetNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~GetNodeRequest() = default;
};
class GetNodeResponseBodyNode : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> id{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<string> spec{};

  GetNodeResponseBodyNode() {}

  explicit GetNodeResponseBodyNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~GetNodeResponseBodyNode() = default;
};
class GetNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetNodeResponseBodyNode> node{};
  shared_ptr<string> requestId{};

  GetNodeResponseBody() {}

  explicit GetNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (node) {
      res["Node"] = node ? boost::any(node->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Node") != m.end() && !m["Node"].empty()) {
      if (typeid(map<string, boost::any>) == m["Node"].type()) {
        GetNodeResponseBodyNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Node"]));
        node = make_shared<GetNodeResponseBodyNode>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetNodeResponseBody() = default;
};
class GetNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetNodeResponseBody> body{};

  GetNodeResponse() {}

  explicit GetNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        GetNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetNodeResponseBody>(model1);
      }
    }
  }


  virtual ~GetNodeResponse() = default;
};
class GetProjectRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};

  GetProjectRequest() {}

  explicit GetProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~GetProjectRequest() = default;
};
class GetProjectResponseBodyProjectAliyunResourceTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  GetProjectResponseBodyProjectAliyunResourceTags() {}

  explicit GetProjectResponseBodyProjectAliyunResourceTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetProjectResponseBodyProjectAliyunResourceTags() = default;
};
class GetProjectResponseBodyProject : public Darabonba::Model {
public:
  shared_ptr<string> aliyunResourceGroupId{};
  shared_ptr<vector<GetProjectResponseBodyProjectAliyunResourceTags>> aliyunResourceTags{};
  shared_ptr<string> description{};
  shared_ptr<bool> devEnvironmentEnabled{};
  shared_ptr<bool> devRoleDisabled{};
  shared_ptr<string> displayName{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<bool> paiTaskEnabled{};
  shared_ptr<string> status{};

  GetProjectResponseBodyProject() {}

  explicit GetProjectResponseBodyProject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunResourceGroupId) {
      res["AliyunResourceGroupId"] = boost::any(*aliyunResourceGroupId);
    }
    if (aliyunResourceTags) {
      vector<boost::any> temp1;
      for(auto item1:*aliyunResourceTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AliyunResourceTags"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (devEnvironmentEnabled) {
      res["DevEnvironmentEnabled"] = boost::any(*devEnvironmentEnabled);
    }
    if (devRoleDisabled) {
      res["DevRoleDisabled"] = boost::any(*devRoleDisabled);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (paiTaskEnabled) {
      res["PaiTaskEnabled"] = boost::any(*paiTaskEnabled);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunResourceGroupId") != m.end() && !m["AliyunResourceGroupId"].empty()) {
      aliyunResourceGroupId = make_shared<string>(boost::any_cast<string>(m["AliyunResourceGroupId"]));
    }
    if (m.find("AliyunResourceTags") != m.end() && !m["AliyunResourceTags"].empty()) {
      if (typeid(vector<boost::any>) == m["AliyunResourceTags"].type()) {
        vector<GetProjectResponseBodyProjectAliyunResourceTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AliyunResourceTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProjectResponseBodyProjectAliyunResourceTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aliyunResourceTags = make_shared<vector<GetProjectResponseBodyProjectAliyunResourceTags>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DevEnvironmentEnabled") != m.end() && !m["DevEnvironmentEnabled"].empty()) {
      devEnvironmentEnabled = make_shared<bool>(boost::any_cast<bool>(m["DevEnvironmentEnabled"]));
    }
    if (m.find("DevRoleDisabled") != m.end() && !m["DevRoleDisabled"].empty()) {
      devRoleDisabled = make_shared<bool>(boost::any_cast<bool>(m["DevRoleDisabled"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PaiTaskEnabled") != m.end() && !m["PaiTaskEnabled"].empty()) {
      paiTaskEnabled = make_shared<bool>(boost::any_cast<bool>(m["PaiTaskEnabled"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetProjectResponseBodyProject() = default;
};
class GetProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetProjectResponseBodyProject> project{};
  shared_ptr<string> requestId{};

  GetProjectResponseBody() {}

  explicit GetProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = project ? boost::any(project->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      if (typeid(map<string, boost::any>) == m["Project"].type()) {
        GetProjectResponseBodyProject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Project"]));
        project = make_shared<GetProjectResponseBodyProject>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetProjectResponseBody() = default;
};
class GetProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProjectResponseBody> body{};

  GetProjectResponse() {}

  explicit GetProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        GetProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProjectResponseBody>(model1);
      }
    }
  }


  virtual ~GetProjectResponse() = default;
};
class GetResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  GetResourceRequest() {}

  explicit GetResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~GetResourceRequest() = default;
};
class GetResourceResponseBodyResource : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> id{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<string> spec{};

  GetResourceResponseBodyResource() {}

  explicit GetResourceResponseBodyResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~GetResourceResponseBodyResource() = default;
};
class GetResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetResourceResponseBodyResource> resource{};

  GetResourceResponseBody() {}

  explicit GetResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resource) {
      res["Resource"] = resource ? boost::any(resource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Resource") != m.end() && !m["Resource"].empty()) {
      if (typeid(map<string, boost::any>) == m["Resource"].type()) {
        GetResourceResponseBodyResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Resource"]));
        resource = make_shared<GetResourceResponseBodyResource>(model1);
      }
    }
  }


  virtual ~GetResourceResponseBody() = default;
};
class GetResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourceResponseBody> body{};

  GetResourceResponse() {}

  explicit GetResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        GetResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourceResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourceResponse() = default;
};
class GetWorkflowDefinitionRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  GetWorkflowDefinitionRequest() {}

  explicit GetWorkflowDefinitionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~GetWorkflowDefinitionRequest() = default;
};
class GetWorkflowDefinitionResponseBodyWorkflowDefinition : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> id{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<string> spec{};

  GetWorkflowDefinitionResponseBodyWorkflowDefinition() {}

  explicit GetWorkflowDefinitionResponseBodyWorkflowDefinition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~GetWorkflowDefinitionResponseBodyWorkflowDefinition() = default;
};
class GetWorkflowDefinitionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetWorkflowDefinitionResponseBodyWorkflowDefinition> workflowDefinition{};

  GetWorkflowDefinitionResponseBody() {}

  explicit GetWorkflowDefinitionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (workflowDefinition) {
      res["WorkflowDefinition"] = workflowDefinition ? boost::any(workflowDefinition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("WorkflowDefinition") != m.end() && !m["WorkflowDefinition"].empty()) {
      if (typeid(map<string, boost::any>) == m["WorkflowDefinition"].type()) {
        GetWorkflowDefinitionResponseBodyWorkflowDefinition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["WorkflowDefinition"]));
        workflowDefinition = make_shared<GetWorkflowDefinitionResponseBodyWorkflowDefinition>(model1);
      }
    }
  }


  virtual ~GetWorkflowDefinitionResponseBody() = default;
};
class GetWorkflowDefinitionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWorkflowDefinitionResponseBody> body{};

  GetWorkflowDefinitionResponse() {}

  explicit GetWorkflowDefinitionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        GetWorkflowDefinitionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWorkflowDefinitionResponseBody>(model1);
      }
    }
  }


  virtual ~GetWorkflowDefinitionResponse() = default;
};
class ListDIJobEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DIJobId{};
  shared_ptr<long> endTime{};
  shared_ptr<string> eventType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> startTime{};

  ListDIJobEventsRequest() {}

  explicit ListDIJobEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DIJobId) {
      res["DIJobId"] = boost::any(*DIJobId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DIJobId") != m.end() && !m["DIJobId"].empty()) {
      DIJobId = make_shared<string>(boost::any_cast<string>(m["DIJobId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ListDIJobEventsRequest() = default;
};
class ListDIJobEventsResponseBodyPagingInfoDIJobEvent : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> channels{};
  shared_ptr<string> createTime{};
  shared_ptr<string> detail{};
  shared_ptr<string> dstSql{};
  shared_ptr<string> dstTable{};
  shared_ptr<string> failoverMessage{};
  shared_ptr<string> id{};
  shared_ptr<string> severity{};
  shared_ptr<string> srcSql{};
  shared_ptr<string> srcTable{};
  shared_ptr<string> status{};
  shared_ptr<string> type{};

  ListDIJobEventsResponseBodyPagingInfoDIJobEvent() {}

  explicit ListDIJobEventsResponseBodyPagingInfoDIJobEvent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (channels) {
      res["Channels"] = boost::any(*channels);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (dstSql) {
      res["DstSql"] = boost::any(*dstSql);
    }
    if (dstTable) {
      res["DstTable"] = boost::any(*dstTable);
    }
    if (failoverMessage) {
      res["FailoverMessage"] = boost::any(*failoverMessage);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (srcSql) {
      res["SrcSql"] = boost::any(*srcSql);
    }
    if (srcTable) {
      res["SrcTable"] = boost::any(*srcTable);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("Channels") != m.end() && !m["Channels"].empty()) {
      channels = make_shared<string>(boost::any_cast<string>(m["Channels"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("DstSql") != m.end() && !m["DstSql"].empty()) {
      dstSql = make_shared<string>(boost::any_cast<string>(m["DstSql"]));
    }
    if (m.find("DstTable") != m.end() && !m["DstTable"].empty()) {
      dstTable = make_shared<string>(boost::any_cast<string>(m["DstTable"]));
    }
    if (m.find("FailoverMessage") != m.end() && !m["FailoverMessage"].empty()) {
      failoverMessage = make_shared<string>(boost::any_cast<string>(m["FailoverMessage"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("SrcSql") != m.end() && !m["SrcSql"].empty()) {
      srcSql = make_shared<string>(boost::any_cast<string>(m["SrcSql"]));
    }
    if (m.find("SrcTable") != m.end() && !m["SrcTable"].empty()) {
      srcTable = make_shared<string>(boost::any_cast<string>(m["SrcTable"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListDIJobEventsResponseBodyPagingInfoDIJobEvent() = default;
};
class ListDIJobEventsResponseBodyPagingInfo : public Darabonba::Model {
public:
  shared_ptr<vector<ListDIJobEventsResponseBodyPagingInfoDIJobEvent>> DIJobEvent{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListDIJobEventsResponseBodyPagingInfo() {}

  explicit ListDIJobEventsResponseBodyPagingInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DIJobEvent) {
      vector<boost::any> temp1;
      for(auto item1:*DIJobEvent){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DIJobEvent"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DIJobEvent") != m.end() && !m["DIJobEvent"].empty()) {
      if (typeid(vector<boost::any>) == m["DIJobEvent"].type()) {
        vector<ListDIJobEventsResponseBodyPagingInfoDIJobEvent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DIJobEvent"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDIJobEventsResponseBodyPagingInfoDIJobEvent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DIJobEvent = make_shared<vector<ListDIJobEventsResponseBodyPagingInfoDIJobEvent>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDIJobEventsResponseBodyPagingInfo() = default;
};
class ListDIJobEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListDIJobEventsResponseBodyPagingInfo> pagingInfo{};
  shared_ptr<string> requestId{};

  ListDIJobEventsResponseBody() {}

  explicit ListDIJobEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pagingInfo) {
      res["PagingInfo"] = pagingInfo ? boost::any(pagingInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PagingInfo") != m.end() && !m["PagingInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PagingInfo"].type()) {
        ListDIJobEventsResponseBodyPagingInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PagingInfo"]));
        pagingInfo = make_shared<ListDIJobEventsResponseBodyPagingInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDIJobEventsResponseBody() = default;
};
class ListDIJobEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDIJobEventsResponseBody> body{};

  ListDIJobEventsResponse() {}

  explicit ListDIJobEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        ListDIJobEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDIJobEventsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDIJobEventsResponse() = default;
};
class ListDIJobMetricsRequest : public Darabonba::Model {
public:
  shared_ptr<string> DIJobId{};
  shared_ptr<long> endTime{};
  shared_ptr<vector<string>> metricName{};
  shared_ptr<long> startTime{};

  ListDIJobMetricsRequest() {}

  explicit ListDIJobMetricsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DIJobId) {
      res["DIJobId"] = boost::any(*DIJobId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (metricName) {
      res["MetricName"] = boost::any(*metricName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DIJobId") != m.end() && !m["DIJobId"].empty()) {
      DIJobId = make_shared<string>(boost::any_cast<string>(m["DIJobId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["MetricName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["MetricName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      metricName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ListDIJobMetricsRequest() = default;
};
class ListDIJobMetricsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> DIJobId{};
  shared_ptr<long> endTime{};
  shared_ptr<string> metricNameShrink{};
  shared_ptr<long> startTime{};

  ListDIJobMetricsShrinkRequest() {}

  explicit ListDIJobMetricsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DIJobId) {
      res["DIJobId"] = boost::any(*DIJobId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (metricNameShrink) {
      res["MetricName"] = boost::any(*metricNameShrink);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DIJobId") != m.end() && !m["DIJobId"].empty()) {
      DIJobId = make_shared<string>(boost::any_cast<string>(m["DIJobId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("MetricName") != m.end() && !m["MetricName"].empty()) {
      metricNameShrink = make_shared<string>(boost::any_cast<string>(m["MetricName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ListDIJobMetricsShrinkRequest() = default;
};
class ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList : public Darabonba::Model {
public:
  shared_ptr<long> time{};
  shared_ptr<double> value{};

  ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList() {}

  explicit ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList() = default;
};
class ListDIJobMetricsResponseBodyPagingInfoJobMetrics : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<vector<ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList>> seriesList{};

  ListDIJobMetricsResponseBodyPagingInfoJobMetrics() {}

  explicit ListDIJobMetricsResponseBodyPagingInfoJobMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (seriesList) {
      vector<boost::any> temp1;
      for(auto item1:*seriesList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SeriesList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SeriesList") != m.end() && !m["SeriesList"].empty()) {
      if (typeid(vector<boost::any>) == m["SeriesList"].type()) {
        vector<ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SeriesList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        seriesList = make_shared<vector<ListDIJobMetricsResponseBodyPagingInfoJobMetricsSeriesList>>(expect1);
      }
    }
  }


  virtual ~ListDIJobMetricsResponseBodyPagingInfoJobMetrics() = default;
};
class ListDIJobMetricsResponseBodyPagingInfo : public Darabonba::Model {
public:
  shared_ptr<vector<ListDIJobMetricsResponseBodyPagingInfoJobMetrics>> jobMetrics{};

  ListDIJobMetricsResponseBodyPagingInfo() {}

  explicit ListDIJobMetricsResponseBodyPagingInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobMetrics) {
      vector<boost::any> temp1;
      for(auto item1:*jobMetrics){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["JobMetrics"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobMetrics") != m.end() && !m["JobMetrics"].empty()) {
      if (typeid(vector<boost::any>) == m["JobMetrics"].type()) {
        vector<ListDIJobMetricsResponseBodyPagingInfoJobMetrics> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["JobMetrics"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDIJobMetricsResponseBodyPagingInfoJobMetrics model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobMetrics = make_shared<vector<ListDIJobMetricsResponseBodyPagingInfoJobMetrics>>(expect1);
      }
    }
  }


  virtual ~ListDIJobMetricsResponseBodyPagingInfo() = default;
};
class ListDIJobMetricsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListDIJobMetricsResponseBodyPagingInfo> pagingInfo{};
  shared_ptr<string> requestId{};

  ListDIJobMetricsResponseBody() {}

  explicit ListDIJobMetricsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pagingInfo) {
      res["PagingInfo"] = pagingInfo ? boost::any(pagingInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PagingInfo") != m.end() && !m["PagingInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PagingInfo"].type()) {
        ListDIJobMetricsResponseBodyPagingInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PagingInfo"]));
        pagingInfo = make_shared<ListDIJobMetricsResponseBodyPagingInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDIJobMetricsResponseBody() = default;
};
class ListDIJobMetricsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDIJobMetricsResponseBody> body{};

  ListDIJobMetricsResponse() {}

  explicit ListDIJobMetricsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        ListDIJobMetricsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDIJobMetricsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDIJobMetricsResponse() = default;
};
class ListDIJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> destinationDataSourceType{};
  shared_ptr<string> migrationType{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> projectId{};
  shared_ptr<string> sourceDataSourceType{};

  ListDIJobsRequest() {}

  explicit ListDIJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationDataSourceType) {
      res["DestinationDataSourceType"] = boost::any(*destinationDataSourceType);
    }
    if (migrationType) {
      res["MigrationType"] = boost::any(*migrationType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (sourceDataSourceType) {
      res["SourceDataSourceType"] = boost::any(*sourceDataSourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationDataSourceType") != m.end() && !m["DestinationDataSourceType"].empty()) {
      destinationDataSourceType = make_shared<string>(boost::any_cast<string>(m["DestinationDataSourceType"]));
    }
    if (m.find("MigrationType") != m.end() && !m["MigrationType"].empty()) {
      migrationType = make_shared<string>(boost::any_cast<string>(m["MigrationType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("SourceDataSourceType") != m.end() && !m["SourceDataSourceType"].empty()) {
      sourceDataSourceType = make_shared<string>(boost::any_cast<string>(m["SourceDataSourceType"]));
    }
  }


  virtual ~ListDIJobsRequest() = default;
};
class ListDIJobsResponseBodyPagingInfoDIJobs : public Darabonba::Model {
public:
  shared_ptr<long> DIJobId{};
  shared_ptr<string> destinationDataSourceType{};
  shared_ptr<string> jobName{};
  shared_ptr<string> jobStatus{};
  shared_ptr<string> migrationType{};
  shared_ptr<long> projectId{};
  shared_ptr<string> sourceDataSourceType{};

  ListDIJobsResponseBodyPagingInfoDIJobs() {}

  explicit ListDIJobsResponseBodyPagingInfoDIJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DIJobId) {
      res["DIJobId"] = boost::any(*DIJobId);
    }
    if (destinationDataSourceType) {
      res["DestinationDataSourceType"] = boost::any(*destinationDataSourceType);
    }
    if (jobName) {
      res["JobName"] = boost::any(*jobName);
    }
    if (jobStatus) {
      res["JobStatus"] = boost::any(*jobStatus);
    }
    if (migrationType) {
      res["MigrationType"] = boost::any(*migrationType);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (sourceDataSourceType) {
      res["SourceDataSourceType"] = boost::any(*sourceDataSourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DIJobId") != m.end() && !m["DIJobId"].empty()) {
      DIJobId = make_shared<long>(boost::any_cast<long>(m["DIJobId"]));
    }
    if (m.find("DestinationDataSourceType") != m.end() && !m["DestinationDataSourceType"].empty()) {
      destinationDataSourceType = make_shared<string>(boost::any_cast<string>(m["DestinationDataSourceType"]));
    }
    if (m.find("JobName") != m.end() && !m["JobName"].empty()) {
      jobName = make_shared<string>(boost::any_cast<string>(m["JobName"]));
    }
    if (m.find("JobStatus") != m.end() && !m["JobStatus"].empty()) {
      jobStatus = make_shared<string>(boost::any_cast<string>(m["JobStatus"]));
    }
    if (m.find("MigrationType") != m.end() && !m["MigrationType"].empty()) {
      migrationType = make_shared<string>(boost::any_cast<string>(m["MigrationType"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("SourceDataSourceType") != m.end() && !m["SourceDataSourceType"].empty()) {
      sourceDataSourceType = make_shared<string>(boost::any_cast<string>(m["SourceDataSourceType"]));
    }
  }


  virtual ~ListDIJobsResponseBodyPagingInfoDIJobs() = default;
};
class ListDIJobsResponseBodyPagingInfo : public Darabonba::Model {
public:
  shared_ptr<vector<ListDIJobsResponseBodyPagingInfoDIJobs>> DIJobs{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListDIJobsResponseBodyPagingInfo() {}

  explicit ListDIJobsResponseBodyPagingInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DIJobs) {
      vector<boost::any> temp1;
      for(auto item1:*DIJobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DIJobs"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DIJobs") != m.end() && !m["DIJobs"].empty()) {
      if (typeid(vector<boost::any>) == m["DIJobs"].type()) {
        vector<ListDIJobsResponseBodyPagingInfoDIJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DIJobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDIJobsResponseBodyPagingInfoDIJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        DIJobs = make_shared<vector<ListDIJobsResponseBodyPagingInfoDIJobs>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDIJobsResponseBodyPagingInfo() = default;
};
class ListDIJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListDIJobsResponseBodyPagingInfo> pagingInfo{};
  shared_ptr<string> requestId{};

  ListDIJobsResponseBody() {}

  explicit ListDIJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pagingInfo) {
      res["PagingInfo"] = pagingInfo ? boost::any(pagingInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PagingInfo") != m.end() && !m["PagingInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PagingInfo"].type()) {
        ListDIJobsResponseBodyPagingInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PagingInfo"]));
        pagingInfo = make_shared<ListDIJobsResponseBodyPagingInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDIJobsResponseBody() = default;
};
class ListDIJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDIJobsResponseBody> body{};

  ListDIJobsResponse() {}

  explicit ListDIJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        ListDIJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDIJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDIJobsResponse() = default;
};
class ListDataSourceSharedRulesRequest : public Darabonba::Model {
public:
  shared_ptr<long> dataSourceId{};
  shared_ptr<long> targetProjectId{};

  ListDataSourceSharedRulesRequest() {}

  explicit ListDataSourceSharedRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (targetProjectId) {
      res["TargetProjectId"] = boost::any(*targetProjectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<long>(boost::any_cast<long>(m["DataSourceId"]));
    }
    if (m.find("TargetProjectId") != m.end() && !m["TargetProjectId"].empty()) {
      targetProjectId = make_shared<long>(boost::any_cast<long>(m["TargetProjectId"]));
    }
  }


  virtual ~ListDataSourceSharedRulesRequest() = default;
};
class ListDataSourceSharedRulesResponseBodyDataSourceSharedRules : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> createUser{};
  shared_ptr<long> dataSourceId{};
  shared_ptr<string> envType{};
  shared_ptr<long> id{};
  shared_ptr<string> sharedDataSourceName{};
  shared_ptr<string> sharedUser{};
  shared_ptr<long> sourceProjectId{};
  shared_ptr<long> targetProjectId{};

  ListDataSourceSharedRulesResponseBodyDataSourceSharedRules() {}

  explicit ListDataSourceSharedRulesResponseBodyDataSourceSharedRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUser) {
      res["CreateUser"] = boost::any(*createUser);
    }
    if (dataSourceId) {
      res["DataSourceId"] = boost::any(*dataSourceId);
    }
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (sharedDataSourceName) {
      res["SharedDataSourceName"] = boost::any(*sharedDataSourceName);
    }
    if (sharedUser) {
      res["SharedUser"] = boost::any(*sharedUser);
    }
    if (sourceProjectId) {
      res["SourceProjectId"] = boost::any(*sourceProjectId);
    }
    if (targetProjectId) {
      res["TargetProjectId"] = boost::any(*targetProjectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("CreateUser") != m.end() && !m["CreateUser"].empty()) {
      createUser = make_shared<string>(boost::any_cast<string>(m["CreateUser"]));
    }
    if (m.find("DataSourceId") != m.end() && !m["DataSourceId"].empty()) {
      dataSourceId = make_shared<long>(boost::any_cast<long>(m["DataSourceId"]));
    }
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("SharedDataSourceName") != m.end() && !m["SharedDataSourceName"].empty()) {
      sharedDataSourceName = make_shared<string>(boost::any_cast<string>(m["SharedDataSourceName"]));
    }
    if (m.find("SharedUser") != m.end() && !m["SharedUser"].empty()) {
      sharedUser = make_shared<string>(boost::any_cast<string>(m["SharedUser"]));
    }
    if (m.find("SourceProjectId") != m.end() && !m["SourceProjectId"].empty()) {
      sourceProjectId = make_shared<long>(boost::any_cast<long>(m["SourceProjectId"]));
    }
    if (m.find("TargetProjectId") != m.end() && !m["TargetProjectId"].empty()) {
      targetProjectId = make_shared<long>(boost::any_cast<long>(m["TargetProjectId"]));
    }
  }


  virtual ~ListDataSourceSharedRulesResponseBodyDataSourceSharedRules() = default;
};
class ListDataSourceSharedRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDataSourceSharedRulesResponseBodyDataSourceSharedRules>> dataSourceSharedRules{};
  shared_ptr<string> requestId{};

  ListDataSourceSharedRulesResponseBody() {}

  explicit ListDataSourceSharedRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSourceSharedRules) {
      vector<boost::any> temp1;
      for(auto item1:*dataSourceSharedRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataSourceSharedRules"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSourceSharedRules") != m.end() && !m["DataSourceSharedRules"].empty()) {
      if (typeid(vector<boost::any>) == m["DataSourceSharedRules"].type()) {
        vector<ListDataSourceSharedRulesResponseBodyDataSourceSharedRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataSourceSharedRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataSourceSharedRulesResponseBodyDataSourceSharedRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataSourceSharedRules = make_shared<vector<ListDataSourceSharedRulesResponseBodyDataSourceSharedRules>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDataSourceSharedRulesResponseBody() = default;
};
class ListDataSourceSharedRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDataSourceSharedRulesResponseBody> body{};

  ListDataSourceSharedRulesResponse() {}

  explicit ListDataSourceSharedRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        ListDataSourceSharedRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataSourceSharedRulesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataSourceSharedRulesResponse() = default;
};
class ListDataSourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> envType{};
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> projectId{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> tags{};
  shared_ptr<vector<string>> types{};

  ListDataSourcesRequest() {}

  explicit ListDataSourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (types) {
      res["Types"] = boost::any(*types);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Types") != m.end() && !m["Types"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Types"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Types"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      types = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListDataSourcesRequest() = default;
};
class ListDataSourcesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> envType{};
  shared_ptr<string> name{};
  shared_ptr<string> order{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> projectId{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> tags{};
  shared_ptr<string> typesShrink{};

  ListDataSourcesShrinkRequest() {}

  explicit ListDataSourcesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (envType) {
      res["EnvType"] = boost::any(*envType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (typesShrink) {
      res["Types"] = boost::any(*typesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnvType") != m.end() && !m["EnvType"].empty()) {
      envType = make_shared<string>(boost::any_cast<string>(m["EnvType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Types") != m.end() && !m["Types"].empty()) {
      typesShrink = make_shared<string>(boost::any_cast<string>(m["Types"]));
    }
  }


  virtual ~ListDataSourcesShrinkRequest() = default;
};
class ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource : public Darabonba::Model {
public:
  shared_ptr<boost::any> connectionProperties{};
  shared_ptr<string> connectionPropertiesMode{};
  shared_ptr<long> createTime{};
  shared_ptr<string> createUser{};
  shared_ptr<string> description{};
  shared_ptr<long> id{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> modifyUser{};
  shared_ptr<string> qualifiedName{};

  ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource() {}

  explicit ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionProperties) {
      res["ConnectionProperties"] = boost::any(*connectionProperties);
    }
    if (connectionPropertiesMode) {
      res["ConnectionPropertiesMode"] = boost::any(*connectionPropertiesMode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUser) {
      res["CreateUser"] = boost::any(*createUser);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (modifyUser) {
      res["ModifyUser"] = boost::any(*modifyUser);
    }
    if (qualifiedName) {
      res["QualifiedName"] = boost::any(*qualifiedName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionProperties") != m.end() && !m["ConnectionProperties"].empty()) {
      connectionProperties = make_shared<boost::any>(boost::any_cast<boost::any>(m["ConnectionProperties"]));
    }
    if (m.find("ConnectionPropertiesMode") != m.end() && !m["ConnectionPropertiesMode"].empty()) {
      connectionPropertiesMode = make_shared<string>(boost::any_cast<string>(m["ConnectionPropertiesMode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("CreateUser") != m.end() && !m["CreateUser"].empty()) {
      createUser = make_shared<string>(boost::any_cast<string>(m["CreateUser"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("ModifyUser") != m.end() && !m["ModifyUser"].empty()) {
      modifyUser = make_shared<string>(boost::any_cast<string>(m["ModifyUser"]));
    }
    if (m.find("QualifiedName") != m.end() && !m["QualifiedName"].empty()) {
      qualifiedName = make_shared<string>(boost::any_cast<string>(m["QualifiedName"]));
    }
  }


  virtual ~ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource() = default;
};
class ListDataSourcesResponseBodyPagingInfoDataSources : public Darabonba::Model {
public:
  shared_ptr<vector<ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource>> dataSource{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ListDataSourcesResponseBodyPagingInfoDataSources() {}

  explicit ListDataSourcesResponseBodyPagingInfoDataSources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSource) {
      vector<boost::any> temp1;
      for(auto item1:*dataSource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataSource"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSource") != m.end() && !m["DataSource"].empty()) {
      if (typeid(vector<boost::any>) == m["DataSource"].type()) {
        vector<ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataSource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataSource = make_shared<vector<ListDataSourcesResponseBodyPagingInfoDataSourcesDataSource>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListDataSourcesResponseBodyPagingInfoDataSources() = default;
};
class ListDataSourcesResponseBodyPagingInfo : public Darabonba::Model {
public:
  shared_ptr<vector<ListDataSourcesResponseBodyPagingInfoDataSources>> dataSources{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListDataSourcesResponseBodyPagingInfo() {}

  explicit ListDataSourcesResponseBodyPagingInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataSources) {
      vector<boost::any> temp1;
      for(auto item1:*dataSources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataSources"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataSources") != m.end() && !m["DataSources"].empty()) {
      if (typeid(vector<boost::any>) == m["DataSources"].type()) {
        vector<ListDataSourcesResponseBodyPagingInfoDataSources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataSources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDataSourcesResponseBodyPagingInfoDataSources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataSources = make_shared<vector<ListDataSourcesResponseBodyPagingInfoDataSources>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDataSourcesResponseBodyPagingInfo() = default;
};
class ListDataSourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListDataSourcesResponseBodyPagingInfo> pagingInfo{};
  shared_ptr<string> requestId{};

  ListDataSourcesResponseBody() {}

  explicit ListDataSourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pagingInfo) {
      res["PagingInfo"] = pagingInfo ? boost::any(pagingInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PagingInfo") != m.end() && !m["PagingInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PagingInfo"].type()) {
        ListDataSourcesResponseBodyPagingInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PagingInfo"]));
        pagingInfo = make_shared<ListDataSourcesResponseBodyPagingInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDataSourcesResponseBody() = default;
};
class ListDataSourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDataSourcesResponseBody> body{};

  ListDataSourcesResponse() {}

  explicit ListDataSourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        ListDataSourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDataSourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDataSourcesResponse() = default;
};
class ListDeploymentsRequest : public Darabonba::Model {
public:
  shared_ptr<string> creator{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> status{};

  ListDeploymentsRequest() {}

  explicit ListDeploymentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListDeploymentsRequest() = default;
};
class ListDeploymentsResponseBodyPagingInfoDeploymentsStages : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<map<string, boost::any>> detail{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};
  shared_ptr<long> step{};
  shared_ptr<string> type{};

  ListDeploymentsResponseBodyPagingInfoDeploymentsStages() {}

  explicit ListDeploymentsResponseBodyPagingInfoDeploymentsStages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (step) {
      res["Step"] = boost::any(*step);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Detail"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      detail = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Step") != m.end() && !m["Step"].empty()) {
      step = make_shared<long>(boost::any_cast<long>(m["Step"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListDeploymentsResponseBodyPagingInfoDeploymentsStages() = default;
};
class ListDeploymentsResponseBodyPagingInfoDeployments : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> creator{};
  shared_ptr<string> id{};
  shared_ptr<string> message{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> projectId{};
  shared_ptr<vector<ListDeploymentsResponseBodyPagingInfoDeploymentsStages>> stages{};
  shared_ptr<string> status{};

  ListDeploymentsResponseBodyPagingInfoDeployments() {}

  explicit ListDeploymentsResponseBodyPagingInfoDeployments(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (creator) {
      res["Creator"] = boost::any(*creator);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (stages) {
      vector<boost::any> temp1;
      for(auto item1:*stages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Stages"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Creator") != m.end() && !m["Creator"].empty()) {
      creator = make_shared<string>(boost::any_cast<string>(m["Creator"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Stages") != m.end() && !m["Stages"].empty()) {
      if (typeid(vector<boost::any>) == m["Stages"].type()) {
        vector<ListDeploymentsResponseBodyPagingInfoDeploymentsStages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Stages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeploymentsResponseBodyPagingInfoDeploymentsStages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stages = make_shared<vector<ListDeploymentsResponseBodyPagingInfoDeploymentsStages>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListDeploymentsResponseBodyPagingInfoDeployments() = default;
};
class ListDeploymentsResponseBodyPagingInfo : public Darabonba::Model {
public:
  shared_ptr<vector<ListDeploymentsResponseBodyPagingInfoDeployments>> deployments{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> totalCount{};

  ListDeploymentsResponseBodyPagingInfo() {}

  explicit ListDeploymentsResponseBodyPagingInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployments) {
      vector<boost::any> temp1;
      for(auto item1:*deployments){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Deployments"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Deployments") != m.end() && !m["Deployments"].empty()) {
      if (typeid(vector<boost::any>) == m["Deployments"].type()) {
        vector<ListDeploymentsResponseBodyPagingInfoDeployments> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Deployments"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeploymentsResponseBodyPagingInfoDeployments model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deployments = make_shared<vector<ListDeploymentsResponseBodyPagingInfoDeployments>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListDeploymentsResponseBodyPagingInfo() = default;
};
class ListDeploymentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListDeploymentsResponseBodyPagingInfo> pagingInfo{};
  shared_ptr<string> requestId{};

  ListDeploymentsResponseBody() {}

  explicit ListDeploymentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pagingInfo) {
      res["PagingInfo"] = pagingInfo ? boost::any(pagingInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PagingInfo") != m.end() && !m["PagingInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PagingInfo"].type()) {
        ListDeploymentsResponseBodyPagingInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PagingInfo"]));
        pagingInfo = make_shared<ListDeploymentsResponseBodyPagingInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDeploymentsResponseBody() = default;
};
class ListDeploymentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeploymentsResponseBody> body{};

  ListDeploymentsResponse() {}

  explicit ListDeploymentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        ListDeploymentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeploymentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeploymentsResponse() = default;
};
class ListFunctionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> owner{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> type{};

  ListFunctionsRequest() {}

  explicit ListFunctionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListFunctionsRequest() = default;
};
class ListFunctionsResponseBodyPagingInfoFunctionsDataSource : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ListFunctionsResponseBodyPagingInfoFunctionsDataSource() {}

  explicit ListFunctionsResponseBodyPagingInfoFunctionsDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListFunctionsResponseBodyPagingInfoFunctionsDataSource() = default;
};
class ListFunctionsResponseBodyPagingInfoFunctionsRuntimeResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};

  ListFunctionsResponseBodyPagingInfoFunctionsRuntimeResource() {}

  explicit ListFunctionsResponseBodyPagingInfoFunctionsRuntimeResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListFunctionsResponseBodyPagingInfoFunctionsRuntimeResource() = default;
};
class ListFunctionsResponseBodyPagingInfoFunctionsScriptRuntime : public Darabonba::Model {
public:
  shared_ptr<string> command{};

  ListFunctionsResponseBodyPagingInfoFunctionsScriptRuntime() {}

  explicit ListFunctionsResponseBodyPagingInfoFunctionsScriptRuntime(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      res["Command"] = boost::any(*command);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
  }


  virtual ~ListFunctionsResponseBodyPagingInfoFunctionsScriptRuntime() = default;
};
class ListFunctionsResponseBodyPagingInfoFunctionsScript : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> path{};
  shared_ptr<ListFunctionsResponseBodyPagingInfoFunctionsScriptRuntime> runtime{};

  ListFunctionsResponseBodyPagingInfoFunctionsScript() {}

  explicit ListFunctionsResponseBodyPagingInfoFunctionsScript(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (runtime) {
      res["Runtime"] = runtime ? boost::any(runtime->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Runtime") != m.end() && !m["Runtime"].empty()) {
      if (typeid(map<string, boost::any>) == m["Runtime"].type()) {
        ListFunctionsResponseBodyPagingInfoFunctionsScriptRuntime model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Runtime"]));
        runtime = make_shared<ListFunctionsResponseBodyPagingInfoFunctionsScriptRuntime>(model1);
      }
    }
  }


  virtual ~ListFunctionsResponseBodyPagingInfoFunctionsScript() = default;
};
class ListFunctionsResponseBodyPagingInfoFunctions : public Darabonba::Model {
public:
  shared_ptr<string> armResource{};
  shared_ptr<string> className{};
  shared_ptr<string> commandDescription{};
  shared_ptr<long> createTime{};
  shared_ptr<ListFunctionsResponseBodyPagingInfoFunctionsDataSource> dataSource{};
  shared_ptr<string> databaseName{};
  shared_ptr<string> description{};
  shared_ptr<string> embeddedCode{};
  shared_ptr<string> embeddedCodeType{};
  shared_ptr<string> embeddedResourceType{};
  shared_ptr<string> exampleDescription{};
  shared_ptr<string> fileResource{};
  shared_ptr<string> id{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> parameterDescription{};
  shared_ptr<string> projectId{};
  shared_ptr<string> returnValueDescription{};
  shared_ptr<ListFunctionsResponseBodyPagingInfoFunctionsRuntimeResource> runtimeResource{};
  shared_ptr<ListFunctionsResponseBodyPagingInfoFunctionsScript> script{};
  shared_ptr<string> type{};

  ListFunctionsResponseBodyPagingInfoFunctions() {}

  explicit ListFunctionsResponseBodyPagingInfoFunctions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (armResource) {
      res["ArmResource"] = boost::any(*armResource);
    }
    if (className) {
      res["ClassName"] = boost::any(*className);
    }
    if (commandDescription) {
      res["CommandDescription"] = boost::any(*commandDescription);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataSource) {
      res["DataSource"] = dataSource ? boost::any(dataSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (databaseName) {
      res["DatabaseName"] = boost::any(*databaseName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (embeddedCode) {
      res["EmbeddedCode"] = boost::any(*embeddedCode);
    }
    if (embeddedCodeType) {
      res["EmbeddedCodeType"] = boost::any(*embeddedCodeType);
    }
    if (embeddedResourceType) {
      res["EmbeddedResourceType"] = boost::any(*embeddedResourceType);
    }
    if (exampleDescription) {
      res["ExampleDescription"] = boost::any(*exampleDescription);
    }
    if (fileResource) {
      res["FileResource"] = boost::any(*fileResource);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (parameterDescription) {
      res["ParameterDescription"] = boost::any(*parameterDescription);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (returnValueDescription) {
      res["ReturnValueDescription"] = boost::any(*returnValueDescription);
    }
    if (runtimeResource) {
      res["RuntimeResource"] = runtimeResource ? boost::any(runtimeResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (script) {
      res["Script"] = script ? boost::any(script->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArmResource") != m.end() && !m["ArmResource"].empty()) {
      armResource = make_shared<string>(boost::any_cast<string>(m["ArmResource"]));
    }
    if (m.find("ClassName") != m.end() && !m["ClassName"].empty()) {
      className = make_shared<string>(boost::any_cast<string>(m["ClassName"]));
    }
    if (m.find("CommandDescription") != m.end() && !m["CommandDescription"].empty()) {
      commandDescription = make_shared<string>(boost::any_cast<string>(m["CommandDescription"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DataSource") != m.end() && !m["DataSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSource"].type()) {
        ListFunctionsResponseBodyPagingInfoFunctionsDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSource"]));
        dataSource = make_shared<ListFunctionsResponseBodyPagingInfoFunctionsDataSource>(model1);
      }
    }
    if (m.find("DatabaseName") != m.end() && !m["DatabaseName"].empty()) {
      databaseName = make_shared<string>(boost::any_cast<string>(m["DatabaseName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EmbeddedCode") != m.end() && !m["EmbeddedCode"].empty()) {
      embeddedCode = make_shared<string>(boost::any_cast<string>(m["EmbeddedCode"]));
    }
    if (m.find("EmbeddedCodeType") != m.end() && !m["EmbeddedCodeType"].empty()) {
      embeddedCodeType = make_shared<string>(boost::any_cast<string>(m["EmbeddedCodeType"]));
    }
    if (m.find("EmbeddedResourceType") != m.end() && !m["EmbeddedResourceType"].empty()) {
      embeddedResourceType = make_shared<string>(boost::any_cast<string>(m["EmbeddedResourceType"]));
    }
    if (m.find("ExampleDescription") != m.end() && !m["ExampleDescription"].empty()) {
      exampleDescription = make_shared<string>(boost::any_cast<string>(m["ExampleDescription"]));
    }
    if (m.find("FileResource") != m.end() && !m["FileResource"].empty()) {
      fileResource = make_shared<string>(boost::any_cast<string>(m["FileResource"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ParameterDescription") != m.end() && !m["ParameterDescription"].empty()) {
      parameterDescription = make_shared<string>(boost::any_cast<string>(m["ParameterDescription"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ReturnValueDescription") != m.end() && !m["ReturnValueDescription"].empty()) {
      returnValueDescription = make_shared<string>(boost::any_cast<string>(m["ReturnValueDescription"]));
    }
    if (m.find("RuntimeResource") != m.end() && !m["RuntimeResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuntimeResource"].type()) {
        ListFunctionsResponseBodyPagingInfoFunctionsRuntimeResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuntimeResource"]));
        runtimeResource = make_shared<ListFunctionsResponseBodyPagingInfoFunctionsRuntimeResource>(model1);
      }
    }
    if (m.find("Script") != m.end() && !m["Script"].empty()) {
      if (typeid(map<string, boost::any>) == m["Script"].type()) {
        ListFunctionsResponseBodyPagingInfoFunctionsScript model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Script"]));
        script = make_shared<ListFunctionsResponseBodyPagingInfoFunctionsScript>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListFunctionsResponseBodyPagingInfoFunctions() = default;
};
class ListFunctionsResponseBodyPagingInfo : public Darabonba::Model {
public:
  shared_ptr<vector<ListFunctionsResponseBodyPagingInfoFunctions>> functions{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListFunctionsResponseBodyPagingInfo() {}

  explicit ListFunctionsResponseBodyPagingInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (functions) {
      vector<boost::any> temp1;
      for(auto item1:*functions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Functions"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Functions") != m.end() && !m["Functions"].empty()) {
      if (typeid(vector<boost::any>) == m["Functions"].type()) {
        vector<ListFunctionsResponseBodyPagingInfoFunctions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Functions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFunctionsResponseBodyPagingInfoFunctions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        functions = make_shared<vector<ListFunctionsResponseBodyPagingInfoFunctions>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListFunctionsResponseBodyPagingInfo() = default;
};
class ListFunctionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListFunctionsResponseBodyPagingInfo> pagingInfo{};
  shared_ptr<string> requestId{};

  ListFunctionsResponseBody() {}

  explicit ListFunctionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pagingInfo) {
      res["PagingInfo"] = pagingInfo ? boost::any(pagingInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PagingInfo") != m.end() && !m["PagingInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PagingInfo"].type()) {
        ListFunctionsResponseBodyPagingInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PagingInfo"]));
        pagingInfo = make_shared<ListFunctionsResponseBodyPagingInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListFunctionsResponseBody() = default;
};
class ListFunctionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFunctionsResponseBody> body{};

  ListFunctionsResponse() {}

  explicit ListFunctionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        ListFunctionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFunctionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFunctionsResponse() = default;
};
class ListNodeDependenciesRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};

  ListNodeDependenciesRequest() {}

  explicit ListNodeDependenciesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~ListNodeDependenciesRequest() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesDataSource : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ListNodeDependenciesResponseBodyPagingInfoNodesDataSource() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesDataSource() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs : public Darabonba::Model {
public:
  shared_ptr<string> data{};

  ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables : public Darabonba::Model {
public:
  shared_ptr<string> guid{};

  ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (guid) {
      res["Guid"] = boost::any(*guid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Guid") != m.end() && !m["Guid"].empty()) {
      guid = make_shared<string>(boost::any_cast<string>(m["Guid"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariablesNode : public Darabonba::Model {
public:
  shared_ptr<string> output{};

  ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariablesNode() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariablesNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["Output"] = boost::any(*output);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariablesNode() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables : public Darabonba::Model {
public:
  shared_ptr<string> artifactType{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariablesNode> node{};
  shared_ptr<string> scope{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (node) {
      res["Node"] = node ? boost::any(node->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Node") != m.end() && !m["Node"].empty()) {
      if (typeid(map<string, boost::any>) == m["Node"].type()) {
        ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariablesNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Node"]));
        node = make_shared<ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariablesNode>(model1);
      }
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesInputs : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs>> nodeOutputs{};
  shared_ptr<vector<ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables>> tables{};
  shared_ptr<vector<ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables>> variables{};

  ListNodeDependenciesResponseBodyPagingInfoNodesInputs() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesInputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeOutputs) {
      vector<boost::any> temp1;
      for(auto item1:*nodeOutputs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeOutputs"] = boost::any(temp1);
    }
    if (tables) {
      vector<boost::any> temp1;
      for(auto item1:*tables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tables"] = boost::any(temp1);
    }
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeOutputs") != m.end() && !m["NodeOutputs"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeOutputs"].type()) {
        vector<ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeOutputs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeOutputs = make_shared<vector<ListNodeDependenciesResponseBodyPagingInfoNodesInputsNodeOutputs>>(expect1);
      }
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      if (typeid(vector<boost::any>) == m["Tables"].type()) {
        vector<ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tables = make_shared<vector<ListNodeDependenciesResponseBodyPagingInfoNodesInputsTables>>(expect1);
      }
    }
    if (m.find("Variables") != m.end() && !m["Variables"].empty()) {
      if (typeid(vector<boost::any>) == m["Variables"].type()) {
        vector<ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<ListNodeDependenciesResponseBodyPagingInfoNodesInputsVariables>>(expect1);
      }
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesInputs() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs : public Darabonba::Model {
public:
  shared_ptr<string> data{};

  ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables : public Darabonba::Model {
public:
  shared_ptr<string> guid{};

  ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (guid) {
      res["Guid"] = boost::any(*guid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Guid") != m.end() && !m["Guid"].empty()) {
      guid = make_shared<string>(boost::any_cast<string>(m["Guid"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode : public Darabonba::Model {
public:
  shared_ptr<string> output{};

  ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["Output"] = boost::any(*output);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables : public Darabonba::Model {
public:
  shared_ptr<string> artifactType{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode> node{};
  shared_ptr<string> scope{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (node) {
      res["Node"] = node ? boost::any(node->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Node") != m.end() && !m["Node"].empty()) {
      if (typeid(map<string, boost::any>) == m["Node"].type()) {
        ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Node"]));
        node = make_shared<ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariablesNode>(model1);
      }
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesOutputs : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs>> nodeOutputs{};
  shared_ptr<vector<ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables>> tables{};
  shared_ptr<vector<ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables>> variables{};

  ListNodeDependenciesResponseBodyPagingInfoNodesOutputs() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesOutputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeOutputs) {
      vector<boost::any> temp1;
      for(auto item1:*nodeOutputs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeOutputs"] = boost::any(temp1);
    }
    if (tables) {
      vector<boost::any> temp1;
      for(auto item1:*tables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tables"] = boost::any(temp1);
    }
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeOutputs") != m.end() && !m["NodeOutputs"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeOutputs"].type()) {
        vector<ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeOutputs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeOutputs = make_shared<vector<ListNodeDependenciesResponseBodyPagingInfoNodesOutputsNodeOutputs>>(expect1);
      }
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      if (typeid(vector<boost::any>) == m["Tables"].type()) {
        vector<ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tables = make_shared<vector<ListNodeDependenciesResponseBodyPagingInfoNodesOutputsTables>>(expect1);
      }
    }
    if (m.find("Variables") != m.end() && !m["Variables"].empty()) {
      if (typeid(vector<boost::any>) == m["Variables"].type()) {
        vector<ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<ListNodeDependenciesResponseBodyPagingInfoNodesOutputsVariables>>(expect1);
      }
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesOutputs() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesRuntimeResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};

  ListNodeDependenciesResponseBodyPagingInfoNodesRuntimeResource() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesRuntimeResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesRuntimeResource() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime : public Darabonba::Model {
public:
  shared_ptr<string> command{};

  ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      res["Command"] = boost::any(*command);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesScript : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> path{};
  shared_ptr<ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime> runtime{};

  ListNodeDependenciesResponseBodyPagingInfoNodesScript() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesScript(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (runtime) {
      res["Runtime"] = runtime ? boost::any(runtime->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Runtime") != m.end() && !m["Runtime"].empty()) {
      if (typeid(map<string, boost::any>) == m["Runtime"].type()) {
        ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Runtime"]));
        runtime = make_shared<ListNodeDependenciesResponseBodyPagingInfoNodesScriptRuntime>(model1);
      }
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesScript() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesStrategy : public Darabonba::Model {
public:
  shared_ptr<string> instanceMode{};
  shared_ptr<long> rerunInterval{};
  shared_ptr<string> rerunMode{};
  shared_ptr<long> rerunTimes{};
  shared_ptr<long> timeout{};

  ListNodeDependenciesResponseBodyPagingInfoNodesStrategy() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceMode) {
      res["InstanceMode"] = boost::any(*instanceMode);
    }
    if (rerunInterval) {
      res["RerunInterval"] = boost::any(*rerunInterval);
    }
    if (rerunMode) {
      res["RerunMode"] = boost::any(*rerunMode);
    }
    if (rerunTimes) {
      res["RerunTimes"] = boost::any(*rerunTimes);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceMode") != m.end() && !m["InstanceMode"].empty()) {
      instanceMode = make_shared<string>(boost::any_cast<string>(m["InstanceMode"]));
    }
    if (m.find("RerunInterval") != m.end() && !m["RerunInterval"].empty()) {
      rerunInterval = make_shared<long>(boost::any_cast<long>(m["RerunInterval"]));
    }
    if (m.find("RerunMode") != m.end() && !m["RerunMode"].empty()) {
      rerunMode = make_shared<string>(boost::any_cast<string>(m["RerunMode"]));
    }
    if (m.find("RerunTimes") != m.end() && !m["RerunTimes"].empty()) {
      rerunTimes = make_shared<long>(boost::any_cast<long>(m["RerunTimes"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesStrategy() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListNodeDependenciesResponseBodyPagingInfoNodesTags() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesTags() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodesTrigger : public Darabonba::Model {
public:
  shared_ptr<string> cron{};
  shared_ptr<string> endTime{};
  shared_ptr<string> id{};
  shared_ptr<string> startTime{};
  shared_ptr<string> timezone{};
  shared_ptr<string> type{};

  ListNodeDependenciesResponseBodyPagingInfoNodesTrigger() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodesTrigger(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cron) {
      res["Cron"] = boost::any(*cron);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timezone) {
      res["Timezone"] = boost::any(*timezone);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cron") != m.end() && !m["Cron"].empty()) {
      cron = make_shared<string>(boost::any_cast<string>(m["Cron"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Timezone") != m.end() && !m["Timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["Timezone"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodesTrigger() = default;
};
class ListNodeDependenciesResponseBodyPagingInfoNodes : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<ListNodeDependenciesResponseBodyPagingInfoNodesDataSource> dataSource{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<ListNodeDependenciesResponseBodyPagingInfoNodesInputs> inputs{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<ListNodeDependenciesResponseBodyPagingInfoNodesOutputs> outputs{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<string> recurrence{};
  shared_ptr<ListNodeDependenciesResponseBodyPagingInfoNodesRuntimeResource> runtimeResource{};
  shared_ptr<ListNodeDependenciesResponseBodyPagingInfoNodesScript> script{};
  shared_ptr<ListNodeDependenciesResponseBodyPagingInfoNodesStrategy> strategy{};
  shared_ptr<vector<ListNodeDependenciesResponseBodyPagingInfoNodesTags>> tags{};
  shared_ptr<string> taskId{};
  shared_ptr<ListNodeDependenciesResponseBodyPagingInfoNodesTrigger> trigger{};

  ListNodeDependenciesResponseBodyPagingInfoNodes() {}

  explicit ListNodeDependenciesResponseBodyPagingInfoNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataSource) {
      res["DataSource"] = dataSource ? boost::any(dataSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (inputs) {
      res["Inputs"] = inputs ? boost::any(inputs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (outputs) {
      res["Outputs"] = outputs ? boost::any(outputs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (recurrence) {
      res["Recurrence"] = boost::any(*recurrence);
    }
    if (runtimeResource) {
      res["RuntimeResource"] = runtimeResource ? boost::any(runtimeResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (script) {
      res["Script"] = script ? boost::any(script->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (strategy) {
      res["Strategy"] = strategy ? boost::any(strategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (trigger) {
      res["Trigger"] = trigger ? boost::any(trigger->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DataSource") != m.end() && !m["DataSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSource"].type()) {
        ListNodeDependenciesResponseBodyPagingInfoNodesDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSource"]));
        dataSource = make_shared<ListNodeDependenciesResponseBodyPagingInfoNodesDataSource>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Inputs") != m.end() && !m["Inputs"].empty()) {
      if (typeid(map<string, boost::any>) == m["Inputs"].type()) {
        ListNodeDependenciesResponseBodyPagingInfoNodesInputs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Inputs"]));
        inputs = make_shared<ListNodeDependenciesResponseBodyPagingInfoNodesInputs>(model1);
      }
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      if (typeid(map<string, boost::any>) == m["Outputs"].type()) {
        ListNodeDependenciesResponseBodyPagingInfoNodesOutputs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Outputs"]));
        outputs = make_shared<ListNodeDependenciesResponseBodyPagingInfoNodesOutputs>(model1);
      }
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Recurrence") != m.end() && !m["Recurrence"].empty()) {
      recurrence = make_shared<string>(boost::any_cast<string>(m["Recurrence"]));
    }
    if (m.find("RuntimeResource") != m.end() && !m["RuntimeResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuntimeResource"].type()) {
        ListNodeDependenciesResponseBodyPagingInfoNodesRuntimeResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuntimeResource"]));
        runtimeResource = make_shared<ListNodeDependenciesResponseBodyPagingInfoNodesRuntimeResource>(model1);
      }
    }
    if (m.find("Script") != m.end() && !m["Script"].empty()) {
      if (typeid(map<string, boost::any>) == m["Script"].type()) {
        ListNodeDependenciesResponseBodyPagingInfoNodesScript model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Script"]));
        script = make_shared<ListNodeDependenciesResponseBodyPagingInfoNodesScript>(model1);
      }
    }
    if (m.find("Strategy") != m.end() && !m["Strategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Strategy"].type()) {
        ListNodeDependenciesResponseBodyPagingInfoNodesStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Strategy"]));
        strategy = make_shared<ListNodeDependenciesResponseBodyPagingInfoNodesStrategy>(model1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListNodeDependenciesResponseBodyPagingInfoNodesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeDependenciesResponseBodyPagingInfoNodesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListNodeDependenciesResponseBodyPagingInfoNodesTags>>(expect1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Trigger") != m.end() && !m["Trigger"].empty()) {
      if (typeid(map<string, boost::any>) == m["Trigger"].type()) {
        ListNodeDependenciesResponseBodyPagingInfoNodesTrigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Trigger"]));
        trigger = make_shared<ListNodeDependenciesResponseBodyPagingInfoNodesTrigger>(model1);
      }
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfoNodes() = default;
};
class ListNodeDependenciesResponseBodyPagingInfo : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodeDependenciesResponseBodyPagingInfoNodes>> nodes{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> totalCount{};

  ListNodeDependenciesResponseBodyPagingInfo() {}

  explicit ListNodeDependenciesResponseBodyPagingInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<ListNodeDependenciesResponseBodyPagingInfoNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodeDependenciesResponseBodyPagingInfoNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<ListNodeDependenciesResponseBodyPagingInfoNodes>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBodyPagingInfo() = default;
};
class ListNodeDependenciesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListNodeDependenciesResponseBodyPagingInfo> pagingInfo{};
  shared_ptr<string> requestId{};

  ListNodeDependenciesResponseBody() {}

  explicit ListNodeDependenciesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pagingInfo) {
      res["PagingInfo"] = pagingInfo ? boost::any(pagingInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PagingInfo") != m.end() && !m["PagingInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PagingInfo"].type()) {
        ListNodeDependenciesResponseBodyPagingInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PagingInfo"]));
        pagingInfo = make_shared<ListNodeDependenciesResponseBodyPagingInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListNodeDependenciesResponseBody() = default;
};
class ListNodeDependenciesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNodeDependenciesResponseBody> body{};

  ListNodeDependenciesResponse() {}

  explicit ListNodeDependenciesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        ListNodeDependenciesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNodeDependenciesResponseBody>(model1);
      }
    }
  }


  virtual ~ListNodeDependenciesResponse() = default;
};
class ListNodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> containerId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> rerunMode{};
  shared_ptr<string> rerurrence{};
  shared_ptr<string> scene{};

  ListNodesRequest() {}

  explicit ListNodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (containerId) {
      res["ContainerId"] = boost::any(*containerId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (rerunMode) {
      res["RerunMode"] = boost::any(*rerunMode);
    }
    if (rerurrence) {
      res["Rerurrence"] = boost::any(*rerurrence);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContainerId") != m.end() && !m["ContainerId"].empty()) {
      containerId = make_shared<string>(boost::any_cast<string>(m["ContainerId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("RerunMode") != m.end() && !m["RerunMode"].empty()) {
      rerunMode = make_shared<string>(boost::any_cast<string>(m["RerunMode"]));
    }
    if (m.find("Rerurrence") != m.end() && !m["Rerurrence"].empty()) {
      rerurrence = make_shared<string>(boost::any_cast<string>(m["Rerurrence"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
  }


  virtual ~ListNodesRequest() = default;
};
class ListNodesResponseBodyPagingInfoNodesDataSource : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ListNodesResponseBodyPagingInfoNodesDataSource() {}

  explicit ListNodesResponseBodyPagingInfoNodesDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesDataSource() = default;
};
class ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs : public Darabonba::Model {
public:
  shared_ptr<string> data{};

  ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs() {}

  explicit ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs() = default;
};
class ListNodesResponseBodyPagingInfoNodesInputsTables : public Darabonba::Model {
public:
  shared_ptr<string> guid{};

  ListNodesResponseBodyPagingInfoNodesInputsTables() {}

  explicit ListNodesResponseBodyPagingInfoNodesInputsTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (guid) {
      res["Guid"] = boost::any(*guid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Guid") != m.end() && !m["Guid"].empty()) {
      guid = make_shared<string>(boost::any_cast<string>(m["Guid"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesInputsTables() = default;
};
class ListNodesResponseBodyPagingInfoNodesInputsVariablesNode : public Darabonba::Model {
public:
  shared_ptr<string> output{};

  ListNodesResponseBodyPagingInfoNodesInputsVariablesNode() {}

  explicit ListNodesResponseBodyPagingInfoNodesInputsVariablesNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["Output"] = boost::any(*output);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesInputsVariablesNode() = default;
};
class ListNodesResponseBodyPagingInfoNodesInputsVariables : public Darabonba::Model {
public:
  shared_ptr<string> artifactType{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<ListNodesResponseBodyPagingInfoNodesInputsVariablesNode> node{};
  shared_ptr<string> scope{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  ListNodesResponseBodyPagingInfoNodesInputsVariables() {}

  explicit ListNodesResponseBodyPagingInfoNodesInputsVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (node) {
      res["Node"] = node ? boost::any(node->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Node") != m.end() && !m["Node"].empty()) {
      if (typeid(map<string, boost::any>) == m["Node"].type()) {
        ListNodesResponseBodyPagingInfoNodesInputsVariablesNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Node"]));
        node = make_shared<ListNodesResponseBodyPagingInfoNodesInputsVariablesNode>(model1);
      }
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesInputsVariables() = default;
};
class ListNodesResponseBodyPagingInfoNodesInputs : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs>> nodeOutputs{};
  shared_ptr<vector<ListNodesResponseBodyPagingInfoNodesInputsTables>> tables{};
  shared_ptr<vector<ListNodesResponseBodyPagingInfoNodesInputsVariables>> variables{};

  ListNodesResponseBodyPagingInfoNodesInputs() {}

  explicit ListNodesResponseBodyPagingInfoNodesInputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeOutputs) {
      vector<boost::any> temp1;
      for(auto item1:*nodeOutputs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeOutputs"] = boost::any(temp1);
    }
    if (tables) {
      vector<boost::any> temp1;
      for(auto item1:*tables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tables"] = boost::any(temp1);
    }
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeOutputs") != m.end() && !m["NodeOutputs"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeOutputs"].type()) {
        vector<ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeOutputs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeOutputs = make_shared<vector<ListNodesResponseBodyPagingInfoNodesInputsNodeOutputs>>(expect1);
      }
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      if (typeid(vector<boost::any>) == m["Tables"].type()) {
        vector<ListNodesResponseBodyPagingInfoNodesInputsTables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyPagingInfoNodesInputsTables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tables = make_shared<vector<ListNodesResponseBodyPagingInfoNodesInputsTables>>(expect1);
      }
    }
    if (m.find("Variables") != m.end() && !m["Variables"].empty()) {
      if (typeid(vector<boost::any>) == m["Variables"].type()) {
        vector<ListNodesResponseBodyPagingInfoNodesInputsVariables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyPagingInfoNodesInputsVariables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<ListNodesResponseBodyPagingInfoNodesInputsVariables>>(expect1);
      }
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesInputs() = default;
};
class ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs : public Darabonba::Model {
public:
  shared_ptr<string> data{};

  ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs() {}

  explicit ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs() = default;
};
class ListNodesResponseBodyPagingInfoNodesOutputsTables : public Darabonba::Model {
public:
  shared_ptr<string> guid{};

  ListNodesResponseBodyPagingInfoNodesOutputsTables() {}

  explicit ListNodesResponseBodyPagingInfoNodesOutputsTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (guid) {
      res["Guid"] = boost::any(*guid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Guid") != m.end() && !m["Guid"].empty()) {
      guid = make_shared<string>(boost::any_cast<string>(m["Guid"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesOutputsTables() = default;
};
class ListNodesResponseBodyPagingInfoNodesOutputsVariablesNode : public Darabonba::Model {
public:
  shared_ptr<string> output{};

  ListNodesResponseBodyPagingInfoNodesOutputsVariablesNode() {}

  explicit ListNodesResponseBodyPagingInfoNodesOutputsVariablesNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["Output"] = boost::any(*output);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["Output"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesOutputsVariablesNode() = default;
};
class ListNodesResponseBodyPagingInfoNodesOutputsVariables : public Darabonba::Model {
public:
  shared_ptr<string> artifactType{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<ListNodesResponseBodyPagingInfoNodesOutputsVariablesNode> node{};
  shared_ptr<string> scope{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  ListNodesResponseBodyPagingInfoNodesOutputsVariables() {}

  explicit ListNodesResponseBodyPagingInfoNodesOutputsVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (artifactType) {
      res["ArtifactType"] = boost::any(*artifactType);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (node) {
      res["Node"] = node ? boost::any(node->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArtifactType") != m.end() && !m["ArtifactType"].empty()) {
      artifactType = make_shared<string>(boost::any_cast<string>(m["ArtifactType"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Node") != m.end() && !m["Node"].empty()) {
      if (typeid(map<string, boost::any>) == m["Node"].type()) {
        ListNodesResponseBodyPagingInfoNodesOutputsVariablesNode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Node"]));
        node = make_shared<ListNodesResponseBodyPagingInfoNodesOutputsVariablesNode>(model1);
      }
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesOutputsVariables() = default;
};
class ListNodesResponseBodyPagingInfoNodesOutputs : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs>> nodeOutputs{};
  shared_ptr<vector<ListNodesResponseBodyPagingInfoNodesOutputsTables>> tables{};
  shared_ptr<vector<ListNodesResponseBodyPagingInfoNodesOutputsVariables>> variables{};

  ListNodesResponseBodyPagingInfoNodesOutputs() {}

  explicit ListNodesResponseBodyPagingInfoNodesOutputs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodeOutputs) {
      vector<boost::any> temp1;
      for(auto item1:*nodeOutputs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["NodeOutputs"] = boost::any(temp1);
    }
    if (tables) {
      vector<boost::any> temp1;
      for(auto item1:*tables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tables"] = boost::any(temp1);
    }
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NodeOutputs") != m.end() && !m["NodeOutputs"].empty()) {
      if (typeid(vector<boost::any>) == m["NodeOutputs"].type()) {
        vector<ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["NodeOutputs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodeOutputs = make_shared<vector<ListNodesResponseBodyPagingInfoNodesOutputsNodeOutputs>>(expect1);
      }
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      if (typeid(vector<boost::any>) == m["Tables"].type()) {
        vector<ListNodesResponseBodyPagingInfoNodesOutputsTables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyPagingInfoNodesOutputsTables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tables = make_shared<vector<ListNodesResponseBodyPagingInfoNodesOutputsTables>>(expect1);
      }
    }
    if (m.find("Variables") != m.end() && !m["Variables"].empty()) {
      if (typeid(vector<boost::any>) == m["Variables"].type()) {
        vector<ListNodesResponseBodyPagingInfoNodesOutputsVariables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyPagingInfoNodesOutputsVariables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<ListNodesResponseBodyPagingInfoNodesOutputsVariables>>(expect1);
      }
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesOutputs() = default;
};
class ListNodesResponseBodyPagingInfoNodesRuntimeResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceGroupId{};

  ListNodesResponseBodyPagingInfoNodesRuntimeResource() {}

  explicit ListNodesResponseBodyPagingInfoNodesRuntimeResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesRuntimeResource() = default;
};
class ListNodesResponseBodyPagingInfoNodesScriptRuntime : public Darabonba::Model {
public:
  shared_ptr<string> command{};

  ListNodesResponseBodyPagingInfoNodesScriptRuntime() {}

  explicit ListNodesResponseBodyPagingInfoNodesScriptRuntime(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      res["Command"] = boost::any(*command);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesScriptRuntime() = default;
};
class ListNodesResponseBodyPagingInfoNodesScript : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> path{};
  shared_ptr<ListNodesResponseBodyPagingInfoNodesScriptRuntime> runtime{};

  ListNodesResponseBodyPagingInfoNodesScript() {}

  explicit ListNodesResponseBodyPagingInfoNodesScript(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (runtime) {
      res["Runtime"] = runtime ? boost::any(runtime->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Runtime") != m.end() && !m["Runtime"].empty()) {
      if (typeid(map<string, boost::any>) == m["Runtime"].type()) {
        ListNodesResponseBodyPagingInfoNodesScriptRuntime model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Runtime"]));
        runtime = make_shared<ListNodesResponseBodyPagingInfoNodesScriptRuntime>(model1);
      }
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesScript() = default;
};
class ListNodesResponseBodyPagingInfoNodesStrategy : public Darabonba::Model {
public:
  shared_ptr<string> instanceMode{};
  shared_ptr<long> rerunInterval{};
  shared_ptr<string> rerunMode{};
  shared_ptr<long> rerunTimes{};
  shared_ptr<long> timeout{};

  ListNodesResponseBodyPagingInfoNodesStrategy() {}

  explicit ListNodesResponseBodyPagingInfoNodesStrategy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceMode) {
      res["InstanceMode"] = boost::any(*instanceMode);
    }
    if (rerunInterval) {
      res["RerunInterval"] = boost::any(*rerunInterval);
    }
    if (rerunMode) {
      res["RerunMode"] = boost::any(*rerunMode);
    }
    if (rerunTimes) {
      res["RerunTimes"] = boost::any(*rerunTimes);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceMode") != m.end() && !m["InstanceMode"].empty()) {
      instanceMode = make_shared<string>(boost::any_cast<string>(m["InstanceMode"]));
    }
    if (m.find("RerunInterval") != m.end() && !m["RerunInterval"].empty()) {
      rerunInterval = make_shared<long>(boost::any_cast<long>(m["RerunInterval"]));
    }
    if (m.find("RerunMode") != m.end() && !m["RerunMode"].empty()) {
      rerunMode = make_shared<string>(boost::any_cast<string>(m["RerunMode"]));
    }
    if (m.find("RerunTimes") != m.end() && !m["RerunTimes"].empty()) {
      rerunTimes = make_shared<long>(boost::any_cast<long>(m["RerunTimes"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesStrategy() = default;
};
class ListNodesResponseBodyPagingInfoNodesTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListNodesResponseBodyPagingInfoNodesTags() {}

  explicit ListNodesResponseBodyPagingInfoNodesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesTags() = default;
};
class ListNodesResponseBodyPagingInfoNodesTrigger : public Darabonba::Model {
public:
  shared_ptr<string> cron{};
  shared_ptr<string> endTime{};
  shared_ptr<string> id{};
  shared_ptr<string> startTime{};
  shared_ptr<string> timezone{};
  shared_ptr<string> type{};

  ListNodesResponseBodyPagingInfoNodesTrigger() {}

  explicit ListNodesResponseBodyPagingInfoNodesTrigger(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cron) {
      res["Cron"] = boost::any(*cron);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timezone) {
      res["Timezone"] = boost::any(*timezone);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cron") != m.end() && !m["Cron"].empty()) {
      cron = make_shared<string>(boost::any_cast<string>(m["Cron"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Timezone") != m.end() && !m["Timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["Timezone"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodesTrigger() = default;
};
class ListNodesResponseBodyPagingInfoNodes : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<ListNodesResponseBodyPagingInfoNodesDataSource> dataSource{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<ListNodesResponseBodyPagingInfoNodesInputs> inputs{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<ListNodesResponseBodyPagingInfoNodesOutputs> outputs{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<string> recurrence{};
  shared_ptr<ListNodesResponseBodyPagingInfoNodesRuntimeResource> runtimeResource{};
  shared_ptr<ListNodesResponseBodyPagingInfoNodesScript> script{};
  shared_ptr<ListNodesResponseBodyPagingInfoNodesStrategy> strategy{};
  shared_ptr<vector<ListNodesResponseBodyPagingInfoNodesTags>> tags{};
  shared_ptr<string> taskId{};
  shared_ptr<ListNodesResponseBodyPagingInfoNodesTrigger> trigger{};

  ListNodesResponseBodyPagingInfoNodes() {}

  explicit ListNodesResponseBodyPagingInfoNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataSource) {
      res["DataSource"] = dataSource ? boost::any(dataSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (inputs) {
      res["Inputs"] = inputs ? boost::any(inputs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (outputs) {
      res["Outputs"] = outputs ? boost::any(outputs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (recurrence) {
      res["Recurrence"] = boost::any(*recurrence);
    }
    if (runtimeResource) {
      res["RuntimeResource"] = runtimeResource ? boost::any(runtimeResource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (script) {
      res["Script"] = script ? boost::any(script->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (strategy) {
      res["Strategy"] = strategy ? boost::any(strategy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (trigger) {
      res["Trigger"] = trigger ? boost::any(trigger->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DataSource") != m.end() && !m["DataSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSource"].type()) {
        ListNodesResponseBodyPagingInfoNodesDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSource"]));
        dataSource = make_shared<ListNodesResponseBodyPagingInfoNodesDataSource>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Inputs") != m.end() && !m["Inputs"].empty()) {
      if (typeid(map<string, boost::any>) == m["Inputs"].type()) {
        ListNodesResponseBodyPagingInfoNodesInputs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Inputs"]));
        inputs = make_shared<ListNodesResponseBodyPagingInfoNodesInputs>(model1);
      }
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      if (typeid(map<string, boost::any>) == m["Outputs"].type()) {
        ListNodesResponseBodyPagingInfoNodesOutputs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Outputs"]));
        outputs = make_shared<ListNodesResponseBodyPagingInfoNodesOutputs>(model1);
      }
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Recurrence") != m.end() && !m["Recurrence"].empty()) {
      recurrence = make_shared<string>(boost::any_cast<string>(m["Recurrence"]));
    }
    if (m.find("RuntimeResource") != m.end() && !m["RuntimeResource"].empty()) {
      if (typeid(map<string, boost::any>) == m["RuntimeResource"].type()) {
        ListNodesResponseBodyPagingInfoNodesRuntimeResource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RuntimeResource"]));
        runtimeResource = make_shared<ListNodesResponseBodyPagingInfoNodesRuntimeResource>(model1);
      }
    }
    if (m.find("Script") != m.end() && !m["Script"].empty()) {
      if (typeid(map<string, boost::any>) == m["Script"].type()) {
        ListNodesResponseBodyPagingInfoNodesScript model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Script"]));
        script = make_shared<ListNodesResponseBodyPagingInfoNodesScript>(model1);
      }
    }
    if (m.find("Strategy") != m.end() && !m["Strategy"].empty()) {
      if (typeid(map<string, boost::any>) == m["Strategy"].type()) {
        ListNodesResponseBodyPagingInfoNodesStrategy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Strategy"]));
        strategy = make_shared<ListNodesResponseBodyPagingInfoNodesStrategy>(model1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListNodesResponseBodyPagingInfoNodesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyPagingInfoNodesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListNodesResponseBodyPagingInfoNodesTags>>(expect1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Trigger") != m.end() && !m["Trigger"].empty()) {
      if (typeid(map<string, boost::any>) == m["Trigger"].type()) {
        ListNodesResponseBodyPagingInfoNodesTrigger model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Trigger"]));
        trigger = make_shared<ListNodesResponseBodyPagingInfoNodesTrigger>(model1);
      }
    }
  }


  virtual ~ListNodesResponseBodyPagingInfoNodes() = default;
};
class ListNodesResponseBodyPagingInfo : public Darabonba::Model {
public:
  shared_ptr<vector<ListNodesResponseBodyPagingInfoNodes>> nodes{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> totalCount{};

  ListNodesResponseBodyPagingInfo() {}

  explicit ListNodesResponseBodyPagingInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nodes) {
      vector<boost::any> temp1;
      for(auto item1:*nodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Nodes"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Nodes") != m.end() && !m["Nodes"].empty()) {
      if (typeid(vector<boost::any>) == m["Nodes"].type()) {
        vector<ListNodesResponseBodyPagingInfoNodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Nodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListNodesResponseBodyPagingInfoNodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nodes = make_shared<vector<ListNodesResponseBodyPagingInfoNodes>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<string>(boost::any_cast<string>(m["TotalCount"]));
    }
  }


  virtual ~ListNodesResponseBodyPagingInfo() = default;
};
class ListNodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListNodesResponseBodyPagingInfo> pagingInfo{};
  shared_ptr<string> requestId{};

  ListNodesResponseBody() {}

  explicit ListNodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pagingInfo) {
      res["PagingInfo"] = pagingInfo ? boost::any(pagingInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PagingInfo") != m.end() && !m["PagingInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PagingInfo"].type()) {
        ListNodesResponseBodyPagingInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PagingInfo"]));
        pagingInfo = make_shared<ListNodesResponseBodyPagingInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListNodesResponseBody() = default;
};
class ListNodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListNodesResponseBody> body{};

  ListNodesResponse() {}

  explicit ListNodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        ListNodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListNodesResponseBody>(model1);
      }
    }
  }


  virtual ~ListNodesResponse() = default;
};
class ListProjectsRequestAliyunResourceTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListProjectsRequestAliyunResourceTags() {}

  explicit ListProjectsRequestAliyunResourceTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListProjectsRequestAliyunResourceTags() = default;
};
class ListProjectsRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunResourceGroupId{};
  shared_ptr<vector<ListProjectsRequestAliyunResourceTags>> aliyunResourceTags{};
  shared_ptr<bool> devEnvironmentEnabled{};
  shared_ptr<bool> devRoleDisabled{};
  shared_ptr<vector<long>> ids{};
  shared_ptr<vector<string>> names{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> paiTaskEnabled{};
  shared_ptr<string> status{};

  ListProjectsRequest() {}

  explicit ListProjectsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunResourceGroupId) {
      res["AliyunResourceGroupId"] = boost::any(*aliyunResourceGroupId);
    }
    if (aliyunResourceTags) {
      vector<boost::any> temp1;
      for(auto item1:*aliyunResourceTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AliyunResourceTags"] = boost::any(temp1);
    }
    if (devEnvironmentEnabled) {
      res["DevEnvironmentEnabled"] = boost::any(*devEnvironmentEnabled);
    }
    if (devRoleDisabled) {
      res["DevRoleDisabled"] = boost::any(*devRoleDisabled);
    }
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    if (names) {
      res["Names"] = boost::any(*names);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (paiTaskEnabled) {
      res["PaiTaskEnabled"] = boost::any(*paiTaskEnabled);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunResourceGroupId") != m.end() && !m["AliyunResourceGroupId"].empty()) {
      aliyunResourceGroupId = make_shared<string>(boost::any_cast<string>(m["AliyunResourceGroupId"]));
    }
    if (m.find("AliyunResourceTags") != m.end() && !m["AliyunResourceTags"].empty()) {
      if (typeid(vector<boost::any>) == m["AliyunResourceTags"].type()) {
        vector<ListProjectsRequestAliyunResourceTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AliyunResourceTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectsRequestAliyunResourceTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aliyunResourceTags = make_shared<vector<ListProjectsRequestAliyunResourceTags>>(expect1);
      }
    }
    if (m.find("DevEnvironmentEnabled") != m.end() && !m["DevEnvironmentEnabled"].empty()) {
      devEnvironmentEnabled = make_shared<bool>(boost::any_cast<bool>(m["DevEnvironmentEnabled"]));
    }
    if (m.find("DevRoleDisabled") != m.end() && !m["DevRoleDisabled"].empty()) {
      devRoleDisabled = make_shared<bool>(boost::any_cast<bool>(m["DevRoleDisabled"]));
    }
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Ids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Ids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      ids = make_shared<vector<long>>(toVec1);
    }
    if (m.find("Names") != m.end() && !m["Names"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Names"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Names"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      names = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PaiTaskEnabled") != m.end() && !m["PaiTaskEnabled"].empty()) {
      paiTaskEnabled = make_shared<bool>(boost::any_cast<bool>(m["PaiTaskEnabled"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListProjectsRequest() = default;
};
class ListProjectsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliyunResourceGroupId{};
  shared_ptr<string> aliyunResourceTagsShrink{};
  shared_ptr<bool> devEnvironmentEnabled{};
  shared_ptr<bool> devRoleDisabled{};
  shared_ptr<string> idsShrink{};
  shared_ptr<string> namesShrink{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> paiTaskEnabled{};
  shared_ptr<string> status{};

  ListProjectsShrinkRequest() {}

  explicit ListProjectsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunResourceGroupId) {
      res["AliyunResourceGroupId"] = boost::any(*aliyunResourceGroupId);
    }
    if (aliyunResourceTagsShrink) {
      res["AliyunResourceTags"] = boost::any(*aliyunResourceTagsShrink);
    }
    if (devEnvironmentEnabled) {
      res["DevEnvironmentEnabled"] = boost::any(*devEnvironmentEnabled);
    }
    if (devRoleDisabled) {
      res["DevRoleDisabled"] = boost::any(*devRoleDisabled);
    }
    if (idsShrink) {
      res["Ids"] = boost::any(*idsShrink);
    }
    if (namesShrink) {
      res["Names"] = boost::any(*namesShrink);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (paiTaskEnabled) {
      res["PaiTaskEnabled"] = boost::any(*paiTaskEnabled);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunResourceGroupId") != m.end() && !m["AliyunResourceGroupId"].empty()) {
      aliyunResourceGroupId = make_shared<string>(boost::any_cast<string>(m["AliyunResourceGroupId"]));
    }
    if (m.find("AliyunResourceTags") != m.end() && !m["AliyunResourceTags"].empty()) {
      aliyunResourceTagsShrink = make_shared<string>(boost::any_cast<string>(m["AliyunResourceTags"]));
    }
    if (m.find("DevEnvironmentEnabled") != m.end() && !m["DevEnvironmentEnabled"].empty()) {
      devEnvironmentEnabled = make_shared<bool>(boost::any_cast<bool>(m["DevEnvironmentEnabled"]));
    }
    if (m.find("DevRoleDisabled") != m.end() && !m["DevRoleDisabled"].empty()) {
      devRoleDisabled = make_shared<bool>(boost::any_cast<bool>(m["DevRoleDisabled"]));
    }
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      idsShrink = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
    if (m.find("Names") != m.end() && !m["Names"].empty()) {
      namesShrink = make_shared<string>(boost::any_cast<string>(m["Names"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PaiTaskEnabled") != m.end() && !m["PaiTaskEnabled"].empty()) {
      paiTaskEnabled = make_shared<bool>(boost::any_cast<bool>(m["PaiTaskEnabled"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListProjectsShrinkRequest() = default;
};
class ListProjectsResponseBodyPagingInfoProjectsAliyunResourceTags : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListProjectsResponseBodyPagingInfoProjectsAliyunResourceTags() {}

  explicit ListProjectsResponseBodyPagingInfoProjectsAliyunResourceTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListProjectsResponseBodyPagingInfoProjectsAliyunResourceTags() = default;
};
class ListProjectsResponseBodyPagingInfoProjects : public Darabonba::Model {
public:
  shared_ptr<string> aliyunResourceGroupId{};
  shared_ptr<vector<ListProjectsResponseBodyPagingInfoProjectsAliyunResourceTags>> aliyunResourceTags{};
  shared_ptr<string> description{};
  shared_ptr<bool> devEnvironmentEnabled{};
  shared_ptr<bool> devRoleDisabled{};
  shared_ptr<string> displayName{};
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<bool> paiTaskEnabled{};
  shared_ptr<string> status{};

  ListProjectsResponseBodyPagingInfoProjects() {}

  explicit ListProjectsResponseBodyPagingInfoProjects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunResourceGroupId) {
      res["AliyunResourceGroupId"] = boost::any(*aliyunResourceGroupId);
    }
    if (aliyunResourceTags) {
      vector<boost::any> temp1;
      for(auto item1:*aliyunResourceTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AliyunResourceTags"] = boost::any(temp1);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (devEnvironmentEnabled) {
      res["DevEnvironmentEnabled"] = boost::any(*devEnvironmentEnabled);
    }
    if (devRoleDisabled) {
      res["DevRoleDisabled"] = boost::any(*devRoleDisabled);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (paiTaskEnabled) {
      res["PaiTaskEnabled"] = boost::any(*paiTaskEnabled);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunResourceGroupId") != m.end() && !m["AliyunResourceGroupId"].empty()) {
      aliyunResourceGroupId = make_shared<string>(boost::any_cast<string>(m["AliyunResourceGroupId"]));
    }
    if (m.find("AliyunResourceTags") != m.end() && !m["AliyunResourceTags"].empty()) {
      if (typeid(vector<boost::any>) == m["AliyunResourceTags"].type()) {
        vector<ListProjectsResponseBodyPagingInfoProjectsAliyunResourceTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AliyunResourceTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectsResponseBodyPagingInfoProjectsAliyunResourceTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aliyunResourceTags = make_shared<vector<ListProjectsResponseBodyPagingInfoProjectsAliyunResourceTags>>(expect1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DevEnvironmentEnabled") != m.end() && !m["DevEnvironmentEnabled"].empty()) {
      devEnvironmentEnabled = make_shared<bool>(boost::any_cast<bool>(m["DevEnvironmentEnabled"]));
    }
    if (m.find("DevRoleDisabled") != m.end() && !m["DevRoleDisabled"].empty()) {
      devRoleDisabled = make_shared<bool>(boost::any_cast<bool>(m["DevRoleDisabled"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PaiTaskEnabled") != m.end() && !m["PaiTaskEnabled"].empty()) {
      paiTaskEnabled = make_shared<bool>(boost::any_cast<bool>(m["PaiTaskEnabled"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListProjectsResponseBodyPagingInfoProjects() = default;
};
class ListProjectsResponseBodyPagingInfo : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListProjectsResponseBodyPagingInfoProjects>> projects{};
  shared_ptr<long> totalCount{};

  ListProjectsResponseBodyPagingInfo() {}

  explicit ListProjectsResponseBodyPagingInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projects) {
      vector<boost::any> temp1;
      for(auto item1:*projects){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Projects"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Projects") != m.end() && !m["Projects"].empty()) {
      if (typeid(vector<boost::any>) == m["Projects"].type()) {
        vector<ListProjectsResponseBodyPagingInfoProjects> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Projects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectsResponseBodyPagingInfoProjects model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projects = make_shared<vector<ListProjectsResponseBodyPagingInfoProjects>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListProjectsResponseBodyPagingInfo() = default;
};
class ListProjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListProjectsResponseBodyPagingInfo> pagingInfo{};
  shared_ptr<string> requestId{};

  ListProjectsResponseBody() {}

  explicit ListProjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pagingInfo) {
      res["PagingInfo"] = pagingInfo ? boost::any(pagingInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PagingInfo") != m.end() && !m["PagingInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PagingInfo"].type()) {
        ListProjectsResponseBodyPagingInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PagingInfo"]));
        pagingInfo = make_shared<ListProjectsResponseBodyPagingInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListProjectsResponseBody() = default;
};
class ListProjectsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProjectsResponseBody> body{};

  ListProjectsResponse() {}

  explicit ListProjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        ListProjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProjectsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProjectsResponse() = default;
};
class ListResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> owner{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> type{};

  ListResourcesRequest() {}

  explicit ListResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListResourcesRequest() = default;
};
class ListResourcesResponseBodyPagingInfoResourcesDataSource : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ListResourcesResponseBodyPagingInfoResourcesDataSource() {}

  explicit ListResourcesResponseBodyPagingInfoResourcesDataSource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListResourcesResponseBodyPagingInfoResourcesDataSource() = default;
};
class ListResourcesResponseBodyPagingInfoResourcesScriptRuntime : public Darabonba::Model {
public:
  shared_ptr<string> command{};

  ListResourcesResponseBodyPagingInfoResourcesScriptRuntime() {}

  explicit ListResourcesResponseBodyPagingInfoResourcesScriptRuntime(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      res["Command"] = boost::any(*command);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
  }


  virtual ~ListResourcesResponseBodyPagingInfoResourcesScriptRuntime() = default;
};
class ListResourcesResponseBodyPagingInfoResourcesScript : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> path{};
  shared_ptr<ListResourcesResponseBodyPagingInfoResourcesScriptRuntime> runtime{};

  ListResourcesResponseBodyPagingInfoResourcesScript() {}

  explicit ListResourcesResponseBodyPagingInfoResourcesScript(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (runtime) {
      res["Runtime"] = runtime ? boost::any(runtime->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Runtime") != m.end() && !m["Runtime"].empty()) {
      if (typeid(map<string, boost::any>) == m["Runtime"].type()) {
        ListResourcesResponseBodyPagingInfoResourcesScriptRuntime model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Runtime"]));
        runtime = make_shared<ListResourcesResponseBodyPagingInfoResourcesScriptRuntime>(model1);
      }
    }
  }


  virtual ~ListResourcesResponseBodyPagingInfoResourcesScript() = default;
};
class ListResourcesResponseBodyPagingInfoResources : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<ListResourcesResponseBodyPagingInfoResourcesDataSource> dataSource{};
  shared_ptr<string> id{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<ListResourcesResponseBodyPagingInfoResourcesScript> script{};
  shared_ptr<string> sourcePath{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> targetPath{};
  shared_ptr<string> targetType{};
  shared_ptr<string> type{};

  ListResourcesResponseBodyPagingInfoResources() {}

  explicit ListResourcesResponseBodyPagingInfoResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (dataSource) {
      res["DataSource"] = dataSource ? boost::any(dataSource->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (script) {
      res["Script"] = script ? boost::any(script->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sourcePath) {
      res["SourcePath"] = boost::any(*sourcePath);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (targetPath) {
      res["TargetPath"] = boost::any(*targetPath);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DataSource") != m.end() && !m["DataSource"].empty()) {
      if (typeid(map<string, boost::any>) == m["DataSource"].type()) {
        ListResourcesResponseBodyPagingInfoResourcesDataSource model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DataSource"]));
        dataSource = make_shared<ListResourcesResponseBodyPagingInfoResourcesDataSource>(model1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Script") != m.end() && !m["Script"].empty()) {
      if (typeid(map<string, boost::any>) == m["Script"].type()) {
        ListResourcesResponseBodyPagingInfoResourcesScript model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Script"]));
        script = make_shared<ListResourcesResponseBodyPagingInfoResourcesScript>(model1);
      }
    }
    if (m.find("SourcePath") != m.end() && !m["SourcePath"].empty()) {
      sourcePath = make_shared<string>(boost::any_cast<string>(m["SourcePath"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("TargetPath") != m.end() && !m["TargetPath"].empty()) {
      targetPath = make_shared<string>(boost::any_cast<string>(m["TargetPath"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListResourcesResponseBodyPagingInfoResources() = default;
};
class ListResourcesResponseBodyPagingInfo : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListResourcesResponseBodyPagingInfoResources>> resources{};
  shared_ptr<long> totalCount{};

  ListResourcesResponseBodyPagingInfo() {}

  explicit ListResourcesResponseBodyPagingInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resources) {
      vector<boost::any> temp1;
      for(auto item1:*resources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Resources"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      if (typeid(vector<boost::any>) == m["Resources"].type()) {
        vector<ListResourcesResponseBodyPagingInfoResources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Resources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListResourcesResponseBodyPagingInfoResources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resources = make_shared<vector<ListResourcesResponseBodyPagingInfoResources>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListResourcesResponseBodyPagingInfo() = default;
};
class ListResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListResourcesResponseBodyPagingInfo> pagingInfo{};
  shared_ptr<string> requestId{};

  ListResourcesResponseBody() {}

  explicit ListResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pagingInfo) {
      res["PagingInfo"] = pagingInfo ? boost::any(pagingInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PagingInfo") != m.end() && !m["PagingInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PagingInfo"].type()) {
        ListResourcesResponseBodyPagingInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PagingInfo"]));
        pagingInfo = make_shared<ListResourcesResponseBodyPagingInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListResourcesResponseBody() = default;
};
class ListResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListResourcesResponseBody> body{};

  ListResourcesResponse() {}

  explicit ListResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        ListResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListResourcesResponse() = default;
};
class ListWorkflowDefinitionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> owner{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> type{};

  ListWorkflowDefinitionsRequest() {}

  explicit ListWorkflowDefinitionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListWorkflowDefinitionsRequest() = default;
};
class ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime : public Darabonba::Model {
public:
  shared_ptr<string> command{};

  ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime() {}

  explicit ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (command) {
      res["Command"] = boost::any(*command);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Command") != m.end() && !m["Command"].empty()) {
      command = make_shared<string>(boost::any_cast<string>(m["Command"]));
    }
  }


  virtual ~ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime() = default;
};
class ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> path{};
  shared_ptr<ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime> runtime{};

  ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript() {}

  explicit ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (runtime) {
      res["Runtime"] = runtime ? boost::any(runtime->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Runtime") != m.end() && !m["Runtime"].empty()) {
      if (typeid(map<string, boost::any>) == m["Runtime"].type()) {
        ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Runtime"]));
        runtime = make_shared<ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScriptRuntime>(model1);
      }
    }
  }


  virtual ~ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript() = default;
};
class ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> owner{};
  shared_ptr<string> projectId{};
  shared_ptr<ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript> script{};
  shared_ptr<string> type{};

  ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions() {}

  explicit ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (script) {
      res["Script"] = script ? boost::any(script->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Script") != m.end() && !m["Script"].empty()) {
      if (typeid(map<string, boost::any>) == m["Script"].type()) {
        ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Script"]));
        script = make_shared<ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitionsScript>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions() = default;
};
class ListWorkflowDefinitionsResponseBodyPagingInfo : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions>> workflowDefinitions{};

  ListWorkflowDefinitionsResponseBodyPagingInfo() {}

  explicit ListWorkflowDefinitionsResponseBodyPagingInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (workflowDefinitions) {
      vector<boost::any> temp1;
      for(auto item1:*workflowDefinitions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WorkflowDefinitions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("WorkflowDefinitions") != m.end() && !m["WorkflowDefinitions"].empty()) {
      if (typeid(vector<boost::any>) == m["WorkflowDefinitions"].type()) {
        vector<ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WorkflowDefinitions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        workflowDefinitions = make_shared<vector<ListWorkflowDefinitionsResponseBodyPagingInfoWorkflowDefinitions>>(expect1);
      }
    }
  }


  virtual ~ListWorkflowDefinitionsResponseBodyPagingInfo() = default;
};
class ListWorkflowDefinitionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListWorkflowDefinitionsResponseBodyPagingInfo> pagingInfo{};
  shared_ptr<string> requestId{};

  ListWorkflowDefinitionsResponseBody() {}

  explicit ListWorkflowDefinitionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pagingInfo) {
      res["PagingInfo"] = pagingInfo ? boost::any(pagingInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PagingInfo") != m.end() && !m["PagingInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PagingInfo"].type()) {
        ListWorkflowDefinitionsResponseBodyPagingInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PagingInfo"]));
        pagingInfo = make_shared<ListWorkflowDefinitionsResponseBodyPagingInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListWorkflowDefinitionsResponseBody() = default;
};
class ListWorkflowDefinitionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListWorkflowDefinitionsResponseBody> body{};

  ListWorkflowDefinitionsResponse() {}

  explicit ListWorkflowDefinitionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        ListWorkflowDefinitionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListWorkflowDefinitionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListWorkflowDefinitionsResponse() = default;
};
class MoveFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> path{};
  shared_ptr<string> projectId{};

  MoveFunctionRequest() {}

  explicit MoveFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~MoveFunctionRequest() = default;
};
class MoveFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  MoveFunctionResponseBody() {}

  explicit MoveFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~MoveFunctionResponseBody() = default;
};
class MoveFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MoveFunctionResponseBody> body{};

  MoveFunctionResponse() {}

  explicit MoveFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        MoveFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~MoveFunctionResponse() = default;
};
class MoveNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> path{};
  shared_ptr<string> projectId{};

  MoveNodeRequest() {}

  explicit MoveNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~MoveNodeRequest() = default;
};
class MoveNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  MoveNodeResponseBody() {}

  explicit MoveNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~MoveNodeResponseBody() = default;
};
class MoveNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MoveNodeResponseBody> body{};

  MoveNodeResponse() {}

  explicit MoveNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        MoveNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveNodeResponseBody>(model1);
      }
    }
  }


  virtual ~MoveNodeResponse() = default;
};
class MoveResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> path{};
  shared_ptr<string> projectId{};

  MoveResourceRequest() {}

  explicit MoveResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~MoveResourceRequest() = default;
};
class MoveResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  MoveResourceResponseBody() {}

  explicit MoveResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~MoveResourceResponseBody() = default;
};
class MoveResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MoveResourceResponseBody> body{};

  MoveResourceResponse() {}

  explicit MoveResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        MoveResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveResourceResponseBody>(model1);
      }
    }
  }


  virtual ~MoveResourceResponse() = default;
};
class MoveWorkflowDefinitionRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> path{};
  shared_ptr<string> projectId{};

  MoveWorkflowDefinitionRequest() {}

  explicit MoveWorkflowDefinitionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~MoveWorkflowDefinitionRequest() = default;
};
class MoveWorkflowDefinitionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  MoveWorkflowDefinitionResponseBody() {}

  explicit MoveWorkflowDefinitionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~MoveWorkflowDefinitionResponseBody() = default;
};
class MoveWorkflowDefinitionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MoveWorkflowDefinitionResponseBody> body{};

  MoveWorkflowDefinitionResponse() {}

  explicit MoveWorkflowDefinitionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        MoveWorkflowDefinitionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveWorkflowDefinitionResponseBody>(model1);
      }
    }
  }


  virtual ~MoveWorkflowDefinitionResponse() = default;
};
class RenameFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};

  RenameFunctionRequest() {}

  explicit RenameFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~RenameFunctionRequest() = default;
};
class RenameFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  RenameFunctionResponseBody() {}

  explicit RenameFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
  }


  virtual ~RenameFunctionResponseBody() = default;
};
class RenameFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenameFunctionResponseBody> body{};

  RenameFunctionResponse() {}

  explicit RenameFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        RenameFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenameFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~RenameFunctionResponse() = default;
};
class RenameNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};

  RenameNodeRequest() {}

  explicit RenameNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~RenameNodeRequest() = default;
};
class RenameNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RenameNodeResponseBody() {}

  explicit RenameNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RenameNodeResponseBody() = default;
};
class RenameNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenameNodeResponseBody> body{};

  RenameNodeResponse() {}

  explicit RenameNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        RenameNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenameNodeResponseBody>(model1);
      }
    }
  }


  virtual ~RenameNodeResponse() = default;
};
class RenameResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};

  RenameResourceRequest() {}

  explicit RenameResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~RenameResourceRequest() = default;
};
class RenameResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RenameResourceResponseBody() {}

  explicit RenameResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RenameResourceResponseBody() = default;
};
class RenameResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenameResourceResponseBody> body{};

  RenameResourceResponse() {}

  explicit RenameResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        RenameResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenameResourceResponseBody>(model1);
      }
    }
  }


  virtual ~RenameResourceResponse() = default;
};
class RenameWorkflowDefinitionRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> projectId{};

  RenameWorkflowDefinitionRequest() {}

  explicit RenameWorkflowDefinitionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~RenameWorkflowDefinitionRequest() = default;
};
class RenameWorkflowDefinitionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RenameWorkflowDefinitionResponseBody() {}

  explicit RenameWorkflowDefinitionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RenameWorkflowDefinitionResponseBody() = default;
};
class RenameWorkflowDefinitionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RenameWorkflowDefinitionResponseBody> body{};

  RenameWorkflowDefinitionResponse() {}

  explicit RenameWorkflowDefinitionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        RenameWorkflowDefinitionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RenameWorkflowDefinitionResponseBody>(model1);
      }
    }
  }


  virtual ~RenameWorkflowDefinitionResponse() = default;
};
class StartDIJobRequestRealtimeStartSettingsFailoverSettings : public Darabonba::Model {
public:
  shared_ptr<long> interval{};
  shared_ptr<long> upperLimit{};

  StartDIJobRequestRealtimeStartSettingsFailoverSettings() {}

  explicit StartDIJobRequestRealtimeStartSettingsFailoverSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (upperLimit) {
      res["UpperLimit"] = boost::any(*upperLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("UpperLimit") != m.end() && !m["UpperLimit"].empty()) {
      upperLimit = make_shared<long>(boost::any_cast<long>(m["UpperLimit"]));
    }
  }


  virtual ~StartDIJobRequestRealtimeStartSettingsFailoverSettings() = default;
};
class StartDIJobRequestRealtimeStartSettings : public Darabonba::Model {
public:
  shared_ptr<StartDIJobRequestRealtimeStartSettingsFailoverSettings> failoverSettings{};
  shared_ptr<long> startTime{};

  StartDIJobRequestRealtimeStartSettings() {}

  explicit StartDIJobRequestRealtimeStartSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failoverSettings) {
      res["FailoverSettings"] = failoverSettings ? boost::any(failoverSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailoverSettings") != m.end() && !m["FailoverSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["FailoverSettings"].type()) {
        StartDIJobRequestRealtimeStartSettingsFailoverSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FailoverSettings"]));
        failoverSettings = make_shared<StartDIJobRequestRealtimeStartSettingsFailoverSettings>(model1);
      }
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~StartDIJobRequestRealtimeStartSettings() = default;
};
class StartDIJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> DIJobId{};
  shared_ptr<bool> forceToRerun{};
  shared_ptr<StartDIJobRequestRealtimeStartSettings> realtimeStartSettings{};

  StartDIJobRequest() {}

  explicit StartDIJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DIJobId) {
      res["DIJobId"] = boost::any(*DIJobId);
    }
    if (forceToRerun) {
      res["ForceToRerun"] = boost::any(*forceToRerun);
    }
    if (realtimeStartSettings) {
      res["RealtimeStartSettings"] = realtimeStartSettings ? boost::any(realtimeStartSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DIJobId") != m.end() && !m["DIJobId"].empty()) {
      DIJobId = make_shared<string>(boost::any_cast<string>(m["DIJobId"]));
    }
    if (m.find("ForceToRerun") != m.end() && !m["ForceToRerun"].empty()) {
      forceToRerun = make_shared<bool>(boost::any_cast<bool>(m["ForceToRerun"]));
    }
    if (m.find("RealtimeStartSettings") != m.end() && !m["RealtimeStartSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["RealtimeStartSettings"].type()) {
        StartDIJobRequestRealtimeStartSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RealtimeStartSettings"]));
        realtimeStartSettings = make_shared<StartDIJobRequestRealtimeStartSettings>(model1);
      }
    }
  }


  virtual ~StartDIJobRequest() = default;
};
class StartDIJobShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> DIJobId{};
  shared_ptr<bool> forceToRerun{};
  shared_ptr<string> realtimeStartSettingsShrink{};

  StartDIJobShrinkRequest() {}

  explicit StartDIJobShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DIJobId) {
      res["DIJobId"] = boost::any(*DIJobId);
    }
    if (forceToRerun) {
      res["ForceToRerun"] = boost::any(*forceToRerun);
    }
    if (realtimeStartSettingsShrink) {
      res["RealtimeStartSettings"] = boost::any(*realtimeStartSettingsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DIJobId") != m.end() && !m["DIJobId"].empty()) {
      DIJobId = make_shared<string>(boost::any_cast<string>(m["DIJobId"]));
    }
    if (m.find("ForceToRerun") != m.end() && !m["ForceToRerun"].empty()) {
      forceToRerun = make_shared<bool>(boost::any_cast<bool>(m["ForceToRerun"]));
    }
    if (m.find("RealtimeStartSettings") != m.end() && !m["RealtimeStartSettings"].empty()) {
      realtimeStartSettingsShrink = make_shared<string>(boost::any_cast<string>(m["RealtimeStartSettings"]));
    }
  }


  virtual ~StartDIJobShrinkRequest() = default;
};
class StartDIJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StartDIJobResponseBody() {}

  explicit StartDIJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StartDIJobResponseBody() = default;
};
class StartDIJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartDIJobResponseBody> body{};

  StartDIJobResponse() {}

  explicit StartDIJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        StartDIJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartDIJobResponseBody>(model1);
      }
    }
  }


  virtual ~StartDIJobResponse() = default;
};
class UpdateDIJobRequestJobSettingsColumnDataTypeSettings : public Darabonba::Model {
public:
  shared_ptr<string> destinationDataType{};
  shared_ptr<string> sourceDataType{};

  UpdateDIJobRequestJobSettingsColumnDataTypeSettings() {}

  explicit UpdateDIJobRequestJobSettingsColumnDataTypeSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (destinationDataType) {
      res["DestinationDataType"] = boost::any(*destinationDataType);
    }
    if (sourceDataType) {
      res["SourceDataType"] = boost::any(*sourceDataType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DestinationDataType") != m.end() && !m["DestinationDataType"].empty()) {
      destinationDataType = make_shared<string>(boost::any_cast<string>(m["DestinationDataType"]));
    }
    if (m.find("SourceDataType") != m.end() && !m["SourceDataType"].empty()) {
      sourceDataType = make_shared<string>(boost::any_cast<string>(m["SourceDataType"]));
    }
  }


  virtual ~UpdateDIJobRequestJobSettingsColumnDataTypeSettings() = default;
};
class UpdateDIJobRequestJobSettingsCycleScheduleSettings : public Darabonba::Model {
public:
  shared_ptr<string> scheduleParameters{};

  UpdateDIJobRequestJobSettingsCycleScheduleSettings() {}

  explicit UpdateDIJobRequestJobSettingsCycleScheduleSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scheduleParameters) {
      res["ScheduleParameters"] = boost::any(*scheduleParameters);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ScheduleParameters") != m.end() && !m["ScheduleParameters"].empty()) {
      scheduleParameters = make_shared<string>(boost::any_cast<string>(m["ScheduleParameters"]));
    }
  }


  virtual ~UpdateDIJobRequestJobSettingsCycleScheduleSettings() = default;
};
class UpdateDIJobRequestJobSettingsDdlHandlingSettings : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> type{};

  UpdateDIJobRequestJobSettingsDdlHandlingSettings() {}

  explicit UpdateDIJobRequestJobSettingsDdlHandlingSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~UpdateDIJobRequestJobSettingsDdlHandlingSettings() = default;
};
class UpdateDIJobRequestJobSettingsRuntimeSettings : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  UpdateDIJobRequestJobSettingsRuntimeSettings() {}

  explicit UpdateDIJobRequestJobSettingsRuntimeSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateDIJobRequestJobSettingsRuntimeSettings() = default;
};
class UpdateDIJobRequestJobSettings : public Darabonba::Model {
public:
  shared_ptr<string> channelSettings{};
  shared_ptr<vector<UpdateDIJobRequestJobSettingsColumnDataTypeSettings>> columnDataTypeSettings{};
  shared_ptr<UpdateDIJobRequestJobSettingsCycleScheduleSettings> cycleScheduleSettings{};
  shared_ptr<vector<UpdateDIJobRequestJobSettingsDdlHandlingSettings>> ddlHandlingSettings{};
  shared_ptr<vector<UpdateDIJobRequestJobSettingsRuntimeSettings>> runtimeSettings{};

  UpdateDIJobRequestJobSettings() {}

  explicit UpdateDIJobRequestJobSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelSettings) {
      res["ChannelSettings"] = boost::any(*channelSettings);
    }
    if (columnDataTypeSettings) {
      vector<boost::any> temp1;
      for(auto item1:*columnDataTypeSettings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ColumnDataTypeSettings"] = boost::any(temp1);
    }
    if (cycleScheduleSettings) {
      res["CycleScheduleSettings"] = cycleScheduleSettings ? boost::any(cycleScheduleSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (ddlHandlingSettings) {
      vector<boost::any> temp1;
      for(auto item1:*ddlHandlingSettings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DdlHandlingSettings"] = boost::any(temp1);
    }
    if (runtimeSettings) {
      vector<boost::any> temp1;
      for(auto item1:*runtimeSettings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RuntimeSettings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelSettings") != m.end() && !m["ChannelSettings"].empty()) {
      channelSettings = make_shared<string>(boost::any_cast<string>(m["ChannelSettings"]));
    }
    if (m.find("ColumnDataTypeSettings") != m.end() && !m["ColumnDataTypeSettings"].empty()) {
      if (typeid(vector<boost::any>) == m["ColumnDataTypeSettings"].type()) {
        vector<UpdateDIJobRequestJobSettingsColumnDataTypeSettings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ColumnDataTypeSettings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateDIJobRequestJobSettingsColumnDataTypeSettings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        columnDataTypeSettings = make_shared<vector<UpdateDIJobRequestJobSettingsColumnDataTypeSettings>>(expect1);
      }
    }
    if (m.find("CycleScheduleSettings") != m.end() && !m["CycleScheduleSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["CycleScheduleSettings"].type()) {
        UpdateDIJobRequestJobSettingsCycleScheduleSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CycleScheduleSettings"]));
        cycleScheduleSettings = make_shared<UpdateDIJobRequestJobSettingsCycleScheduleSettings>(model1);
      }
    }
    if (m.find("DdlHandlingSettings") != m.end() && !m["DdlHandlingSettings"].empty()) {
      if (typeid(vector<boost::any>) == m["DdlHandlingSettings"].type()) {
        vector<UpdateDIJobRequestJobSettingsDdlHandlingSettings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DdlHandlingSettings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateDIJobRequestJobSettingsDdlHandlingSettings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ddlHandlingSettings = make_shared<vector<UpdateDIJobRequestJobSettingsDdlHandlingSettings>>(expect1);
      }
    }
    if (m.find("RuntimeSettings") != m.end() && !m["RuntimeSettings"].empty()) {
      if (typeid(vector<boost::any>) == m["RuntimeSettings"].type()) {
        vector<UpdateDIJobRequestJobSettingsRuntimeSettings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RuntimeSettings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateDIJobRequestJobSettingsRuntimeSettings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        runtimeSettings = make_shared<vector<UpdateDIJobRequestJobSettingsRuntimeSettings>>(expect1);
      }
    }
  }


  virtual ~UpdateDIJobRequestJobSettings() = default;
};
class UpdateDIJobRequestResourceSettingsOfflineResourceSettings : public Darabonba::Model {
public:
  shared_ptr<long> requestedCu{};
  shared_ptr<string> resourceGroupIdentifier{};

  UpdateDIJobRequestResourceSettingsOfflineResourceSettings() {}

  explicit UpdateDIJobRequestResourceSettingsOfflineResourceSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestedCu) {
      res["RequestedCu"] = boost::any(*requestedCu);
    }
    if (resourceGroupIdentifier) {
      res["ResourceGroupIdentifier"] = boost::any(*resourceGroupIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestedCu") != m.end() && !m["RequestedCu"].empty()) {
      requestedCu = make_shared<long>(boost::any_cast<long>(m["RequestedCu"]));
    }
    if (m.find("ResourceGroupIdentifier") != m.end() && !m["ResourceGroupIdentifier"].empty()) {
      resourceGroupIdentifier = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdentifier"]));
    }
  }


  virtual ~UpdateDIJobRequestResourceSettingsOfflineResourceSettings() = default;
};
class UpdateDIJobRequestResourceSettingsRealtimeResourceSettings : public Darabonba::Model {
public:
  shared_ptr<long> requestedCu{};
  shared_ptr<string> resourceGroupIdentifier{};

  UpdateDIJobRequestResourceSettingsRealtimeResourceSettings() {}

  explicit UpdateDIJobRequestResourceSettingsRealtimeResourceSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestedCu) {
      res["RequestedCu"] = boost::any(*requestedCu);
    }
    if (resourceGroupIdentifier) {
      res["ResourceGroupIdentifier"] = boost::any(*resourceGroupIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestedCu") != m.end() && !m["RequestedCu"].empty()) {
      requestedCu = make_shared<long>(boost::any_cast<long>(m["RequestedCu"]));
    }
    if (m.find("ResourceGroupIdentifier") != m.end() && !m["ResourceGroupIdentifier"].empty()) {
      resourceGroupIdentifier = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdentifier"]));
    }
  }


  virtual ~UpdateDIJobRequestResourceSettingsRealtimeResourceSettings() = default;
};
class UpdateDIJobRequestResourceSettingsScheduleResourceSettings : public Darabonba::Model {
public:
  shared_ptr<long> requestedCu{};
  shared_ptr<string> resourceGroupIdentifier{};

  UpdateDIJobRequestResourceSettingsScheduleResourceSettings() {}

  explicit UpdateDIJobRequestResourceSettingsScheduleResourceSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestedCu) {
      res["RequestedCu"] = boost::any(*requestedCu);
    }
    if (resourceGroupIdentifier) {
      res["ResourceGroupIdentifier"] = boost::any(*resourceGroupIdentifier);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestedCu") != m.end() && !m["RequestedCu"].empty()) {
      requestedCu = make_shared<long>(boost::any_cast<long>(m["RequestedCu"]));
    }
    if (m.find("ResourceGroupIdentifier") != m.end() && !m["ResourceGroupIdentifier"].empty()) {
      resourceGroupIdentifier = make_shared<string>(boost::any_cast<string>(m["ResourceGroupIdentifier"]));
    }
  }


  virtual ~UpdateDIJobRequestResourceSettingsScheduleResourceSettings() = default;
};
class UpdateDIJobRequestResourceSettings : public Darabonba::Model {
public:
  shared_ptr<UpdateDIJobRequestResourceSettingsOfflineResourceSettings> offlineResourceSettings{};
  shared_ptr<UpdateDIJobRequestResourceSettingsRealtimeResourceSettings> realtimeResourceSettings{};
  shared_ptr<UpdateDIJobRequestResourceSettingsScheduleResourceSettings> scheduleResourceSettings{};

  UpdateDIJobRequestResourceSettings() {}

  explicit UpdateDIJobRequestResourceSettings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (offlineResourceSettings) {
      res["OfflineResourceSettings"] = offlineResourceSettings ? boost::any(offlineResourceSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (realtimeResourceSettings) {
      res["RealtimeResourceSettings"] = realtimeResourceSettings ? boost::any(realtimeResourceSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (scheduleResourceSettings) {
      res["ScheduleResourceSettings"] = scheduleResourceSettings ? boost::any(scheduleResourceSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OfflineResourceSettings") != m.end() && !m["OfflineResourceSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["OfflineResourceSettings"].type()) {
        UpdateDIJobRequestResourceSettingsOfflineResourceSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OfflineResourceSettings"]));
        offlineResourceSettings = make_shared<UpdateDIJobRequestResourceSettingsOfflineResourceSettings>(model1);
      }
    }
    if (m.find("RealtimeResourceSettings") != m.end() && !m["RealtimeResourceSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["RealtimeResourceSettings"].type()) {
        UpdateDIJobRequestResourceSettingsRealtimeResourceSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RealtimeResourceSettings"]));
        realtimeResourceSettings = make_shared<UpdateDIJobRequestResourceSettingsRealtimeResourceSettings>(model1);
      }
    }
    if (m.find("ScheduleResourceSettings") != m.end() && !m["ScheduleResourceSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["ScheduleResourceSettings"].type()) {
        UpdateDIJobRequestResourceSettingsScheduleResourceSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ScheduleResourceSettings"]));
        scheduleResourceSettings = make_shared<UpdateDIJobRequestResourceSettingsScheduleResourceSettings>(model1);
      }
    }
  }


  virtual ~UpdateDIJobRequestResourceSettings() = default;
};
class UpdateDIJobRequestTableMappingsSourceObjectSelectionRules : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> expression{};
  shared_ptr<string> expressionType{};
  shared_ptr<string> objectType{};

  UpdateDIJobRequestTableMappingsSourceObjectSelectionRules() {}

  explicit UpdateDIJobRequestTableMappingsSourceObjectSelectionRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (expression) {
      res["Expression"] = boost::any(*expression);
    }
    if (expressionType) {
      res["ExpressionType"] = boost::any(*expressionType);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("Expression") != m.end() && !m["Expression"].empty()) {
      expression = make_shared<string>(boost::any_cast<string>(m["Expression"]));
    }
    if (m.find("ExpressionType") != m.end() && !m["ExpressionType"].empty()) {
      expressionType = make_shared<string>(boost::any_cast<string>(m["ExpressionType"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
  }


  virtual ~UpdateDIJobRequestTableMappingsSourceObjectSelectionRules() = default;
};
class UpdateDIJobRequestTableMappingsTransformationRules : public Darabonba::Model {
public:
  shared_ptr<string> ruleActionType{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleTargetType{};

  UpdateDIJobRequestTableMappingsTransformationRules() {}

  explicit UpdateDIJobRequestTableMappingsTransformationRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleActionType) {
      res["RuleActionType"] = boost::any(*ruleActionType);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleTargetType) {
      res["RuleTargetType"] = boost::any(*ruleTargetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleActionType") != m.end() && !m["RuleActionType"].empty()) {
      ruleActionType = make_shared<string>(boost::any_cast<string>(m["RuleActionType"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleTargetType") != m.end() && !m["RuleTargetType"].empty()) {
      ruleTargetType = make_shared<string>(boost::any_cast<string>(m["RuleTargetType"]));
    }
  }


  virtual ~UpdateDIJobRequestTableMappingsTransformationRules() = default;
};
class UpdateDIJobRequestTableMappings : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateDIJobRequestTableMappingsSourceObjectSelectionRules>> sourceObjectSelectionRules{};
  shared_ptr<vector<UpdateDIJobRequestTableMappingsTransformationRules>> transformationRules{};

  UpdateDIJobRequestTableMappings() {}

  explicit UpdateDIJobRequestTableMappings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceObjectSelectionRules) {
      vector<boost::any> temp1;
      for(auto item1:*sourceObjectSelectionRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceObjectSelectionRules"] = boost::any(temp1);
    }
    if (transformationRules) {
      vector<boost::any> temp1;
      for(auto item1:*transformationRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TransformationRules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceObjectSelectionRules") != m.end() && !m["SourceObjectSelectionRules"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceObjectSelectionRules"].type()) {
        vector<UpdateDIJobRequestTableMappingsSourceObjectSelectionRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceObjectSelectionRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateDIJobRequestTableMappingsSourceObjectSelectionRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceObjectSelectionRules = make_shared<vector<UpdateDIJobRequestTableMappingsSourceObjectSelectionRules>>(expect1);
      }
    }
    if (m.find("TransformationRules") != m.end() && !m["TransformationRules"].empty()) {
      if (typeid(vector<boost::any>) == m["TransformationRules"].type()) {
        vector<UpdateDIJobRequestTableMappingsTransformationRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TransformationRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateDIJobRequestTableMappingsTransformationRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transformationRules = make_shared<vector<UpdateDIJobRequestTableMappingsTransformationRules>>(expect1);
      }
    }
  }


  virtual ~UpdateDIJobRequestTableMappings() = default;
};
class UpdateDIJobRequestTransformationRules : public Darabonba::Model {
public:
  shared_ptr<string> ruleActionType{};
  shared_ptr<string> ruleExpression{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleTargetType{};

  UpdateDIJobRequestTransformationRules() {}

  explicit UpdateDIJobRequestTransformationRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleActionType) {
      res["RuleActionType"] = boost::any(*ruleActionType);
    }
    if (ruleExpression) {
      res["RuleExpression"] = boost::any(*ruleExpression);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleTargetType) {
      res["RuleTargetType"] = boost::any(*ruleTargetType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RuleActionType") != m.end() && !m["RuleActionType"].empty()) {
      ruleActionType = make_shared<string>(boost::any_cast<string>(m["RuleActionType"]));
    }
    if (m.find("RuleExpression") != m.end() && !m["RuleExpression"].empty()) {
      ruleExpression = make_shared<string>(boost::any_cast<string>(m["RuleExpression"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleTargetType") != m.end() && !m["RuleTargetType"].empty()) {
      ruleTargetType = make_shared<string>(boost::any_cast<string>(m["RuleTargetType"]));
    }
  }


  virtual ~UpdateDIJobRequestTransformationRules() = default;
};
class UpdateDIJobRequest : public Darabonba::Model {
public:
  shared_ptr<long> DIJobId{};
  shared_ptr<string> description{};
  shared_ptr<UpdateDIJobRequestJobSettings> jobSettings{};
  shared_ptr<UpdateDIJobRequestResourceSettings> resourceSettings{};
  shared_ptr<vector<UpdateDIJobRequestTableMappings>> tableMappings{};
  shared_ptr<vector<UpdateDIJobRequestTransformationRules>> transformationRules{};

  UpdateDIJobRequest() {}

  explicit UpdateDIJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DIJobId) {
      res["DIJobId"] = boost::any(*DIJobId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (jobSettings) {
      res["JobSettings"] = jobSettings ? boost::any(jobSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resourceSettings) {
      res["ResourceSettings"] = resourceSettings ? boost::any(resourceSettings->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tableMappings) {
      vector<boost::any> temp1;
      for(auto item1:*tableMappings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TableMappings"] = boost::any(temp1);
    }
    if (transformationRules) {
      vector<boost::any> temp1;
      for(auto item1:*transformationRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TransformationRules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DIJobId") != m.end() && !m["DIJobId"].empty()) {
      DIJobId = make_shared<long>(boost::any_cast<long>(m["DIJobId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("JobSettings") != m.end() && !m["JobSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["JobSettings"].type()) {
        UpdateDIJobRequestJobSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["JobSettings"]));
        jobSettings = make_shared<UpdateDIJobRequestJobSettings>(model1);
      }
    }
    if (m.find("ResourceSettings") != m.end() && !m["ResourceSettings"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResourceSettings"].type()) {
        UpdateDIJobRequestResourceSettings model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResourceSettings"]));
        resourceSettings = make_shared<UpdateDIJobRequestResourceSettings>(model1);
      }
    }
    if (m.find("TableMappings") != m.end() && !m["TableMappings"].empty()) {
      if (typeid(vector<boost::any>) == m["TableMappings"].type()) {
        vector<UpdateDIJobRequestTableMappings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TableMappings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateDIJobRequestTableMappings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableMappings = make_shared<vector<UpdateDIJobRequestTableMappings>>(expect1);
      }
    }
    if (m.find("TransformationRules") != m.end() && !m["TransformationRules"].empty()) {
      if (typeid(vector<boost::any>) == m["TransformationRules"].type()) {
        vector<UpdateDIJobRequestTransformationRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TransformationRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateDIJobRequestTransformationRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        transformationRules = make_shared<vector<UpdateDIJobRequestTransformationRules>>(expect1);
      }
    }
  }


  virtual ~UpdateDIJobRequest() = default;
};
class UpdateDIJobShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> DIJobId{};
  shared_ptr<string> description{};
  shared_ptr<string> jobSettingsShrink{};
  shared_ptr<string> resourceSettingsShrink{};
  shared_ptr<string> tableMappingsShrink{};
  shared_ptr<string> transformationRulesShrink{};

  UpdateDIJobShrinkRequest() {}

  explicit UpdateDIJobShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DIJobId) {
      res["DIJobId"] = boost::any(*DIJobId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (jobSettingsShrink) {
      res["JobSettings"] = boost::any(*jobSettingsShrink);
    }
    if (resourceSettingsShrink) {
      res["ResourceSettings"] = boost::any(*resourceSettingsShrink);
    }
    if (tableMappingsShrink) {
      res["TableMappings"] = boost::any(*tableMappingsShrink);
    }
    if (transformationRulesShrink) {
      res["TransformationRules"] = boost::any(*transformationRulesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DIJobId") != m.end() && !m["DIJobId"].empty()) {
      DIJobId = make_shared<long>(boost::any_cast<long>(m["DIJobId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("JobSettings") != m.end() && !m["JobSettings"].empty()) {
      jobSettingsShrink = make_shared<string>(boost::any_cast<string>(m["JobSettings"]));
    }
    if (m.find("ResourceSettings") != m.end() && !m["ResourceSettings"].empty()) {
      resourceSettingsShrink = make_shared<string>(boost::any_cast<string>(m["ResourceSettings"]));
    }
    if (m.find("TableMappings") != m.end() && !m["TableMappings"].empty()) {
      tableMappingsShrink = make_shared<string>(boost::any_cast<string>(m["TableMappings"]));
    }
    if (m.find("TransformationRules") != m.end() && !m["TransformationRules"].empty()) {
      transformationRulesShrink = make_shared<string>(boost::any_cast<string>(m["TransformationRules"]));
    }
  }


  virtual ~UpdateDIJobShrinkRequest() = default;
};
class UpdateDIJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateDIJobResponseBody() {}

  explicit UpdateDIJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateDIJobResponseBody() = default;
};
class UpdateDIJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDIJobResponseBody> body{};

  UpdateDIJobResponse() {}

  explicit UpdateDIJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        UpdateDIJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDIJobResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDIJobResponse() = default;
};
class UpdateDataSourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> connectionProperties{};
  shared_ptr<string> connectionPropertiesMode{};
  shared_ptr<string> description{};
  shared_ptr<long> id{};
  shared_ptr<long> projectId{};

  UpdateDataSourceRequest() {}

  explicit UpdateDataSourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connectionProperties) {
      res["ConnectionProperties"] = boost::any(*connectionProperties);
    }
    if (connectionPropertiesMode) {
      res["ConnectionPropertiesMode"] = boost::any(*connectionPropertiesMode);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnectionProperties") != m.end() && !m["ConnectionProperties"].empty()) {
      connectionProperties = make_shared<string>(boost::any_cast<string>(m["ConnectionProperties"]));
    }
    if (m.find("ConnectionPropertiesMode") != m.end() && !m["ConnectionPropertiesMode"].empty()) {
      connectionPropertiesMode = make_shared<string>(boost::any_cast<string>(m["ConnectionPropertiesMode"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
  }


  virtual ~UpdateDataSourceRequest() = default;
};
class UpdateDataSourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateDataSourceResponseBody() {}

  explicit UpdateDataSourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateDataSourceResponseBody() = default;
};
class UpdateDataSourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDataSourceResponseBody> body{};

  UpdateDataSourceResponse() {}

  explicit UpdateDataSourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        UpdateDataSourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDataSourceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDataSourceResponse() = default;
};
class UpdateFunctionRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};
  shared_ptr<string> spec{};

  UpdateFunctionRequest() {}

  explicit UpdateFunctionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~UpdateFunctionRequest() = default;
};
class UpdateFunctionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateFunctionResponseBody() {}

  explicit UpdateFunctionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateFunctionResponseBody() = default;
};
class UpdateFunctionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFunctionResponseBody> body{};

  UpdateFunctionResponse() {}

  explicit UpdateFunctionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        UpdateFunctionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFunctionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFunctionResponse() = default;
};
class UpdateNodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};
  shared_ptr<string> spec{};

  UpdateNodeRequest() {}

  explicit UpdateNodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~UpdateNodeRequest() = default;
};
class UpdateNodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateNodeResponseBody() {}

  explicit UpdateNodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateNodeResponseBody() = default;
};
class UpdateNodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateNodeResponseBody> body{};

  UpdateNodeResponse() {}

  explicit UpdateNodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        UpdateNodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateNodeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateNodeResponse() = default;
};
class UpdateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<bool> devEnvironmentEnabled{};
  shared_ptr<bool> devRoleDisabled{};
  shared_ptr<string> displayName{};
  shared_ptr<long> id{};
  shared_ptr<bool> paiTaskEnabled{};
  shared_ptr<string> status{};

  UpdateProjectRequest() {}

  explicit UpdateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (devEnvironmentEnabled) {
      res["DevEnvironmentEnabled"] = boost::any(*devEnvironmentEnabled);
    }
    if (devRoleDisabled) {
      res["DevRoleDisabled"] = boost::any(*devRoleDisabled);
    }
    if (displayName) {
      res["DisplayName"] = boost::any(*displayName);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (paiTaskEnabled) {
      res["PaiTaskEnabled"] = boost::any(*paiTaskEnabled);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DevEnvironmentEnabled") != m.end() && !m["DevEnvironmentEnabled"].empty()) {
      devEnvironmentEnabled = make_shared<bool>(boost::any_cast<bool>(m["DevEnvironmentEnabled"]));
    }
    if (m.find("DevRoleDisabled") != m.end() && !m["DevRoleDisabled"].empty()) {
      devRoleDisabled = make_shared<bool>(boost::any_cast<bool>(m["DevRoleDisabled"]));
    }
    if (m.find("DisplayName") != m.end() && !m["DisplayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["DisplayName"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("PaiTaskEnabled") != m.end() && !m["PaiTaskEnabled"].empty()) {
      paiTaskEnabled = make_shared<bool>(boost::any_cast<bool>(m["PaiTaskEnabled"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~UpdateProjectRequest() = default;
};
class UpdateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateProjectResponseBody() {}

  explicit UpdateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateProjectResponseBody() = default;
};
class UpdateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateProjectResponseBody> body{};

  UpdateProjectResponse() {}

  explicit UpdateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        UpdateProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProjectResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProjectResponse() = default;
};
class UpdateResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};
  shared_ptr<string> spec{};

  UpdateResourceRequest() {}

  explicit UpdateResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~UpdateResourceRequest() = default;
};
class UpdateResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateResourceResponseBody() {}

  explicit UpdateResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateResourceResponseBody() = default;
};
class UpdateResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateResourceResponseBody> body{};

  UpdateResourceResponse() {}

  explicit UpdateResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        UpdateResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateResourceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateResourceResponse() = default;
};
class UpdateWorkflowDefinitionRequest : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};
  shared_ptr<string> spec{};

  UpdateWorkflowDefinitionRequest() {}

  explicit UpdateWorkflowDefinitionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (spec) {
      res["Spec"] = boost::any(*spec);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Spec") != m.end() && !m["Spec"].empty()) {
      spec = make_shared<string>(boost::any_cast<string>(m["Spec"]));
    }
  }


  virtual ~UpdateWorkflowDefinitionRequest() = default;
};
class UpdateWorkflowDefinitionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateWorkflowDefinitionResponseBody() {}

  explicit UpdateWorkflowDefinitionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateWorkflowDefinitionResponseBody() = default;
};
class UpdateWorkflowDefinitionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateWorkflowDefinitionResponseBody> body{};

  UpdateWorkflowDefinitionResponse() {}

  explicit UpdateWorkflowDefinitionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        UpdateWorkflowDefinitionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateWorkflowDefinitionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateWorkflowDefinitionResponse() = default;
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
  AbolishDeploymentResponse abolishDeploymentWithOptions(shared_ptr<AbolishDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AbolishDeploymentResponse abolishDeployment(shared_ptr<AbolishDeploymentRequest> request);
  CloneDataSourceResponse cloneDataSourceWithOptions(shared_ptr<CloneDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloneDataSourceResponse cloneDataSource(shared_ptr<CloneDataSourceRequest> request);
  CreateDIJobResponse createDIJobWithOptions(shared_ptr<CreateDIJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDIJobResponse createDIJob(shared_ptr<CreateDIJobRequest> request);
  CreateDataSourceResponse createDataSourceWithOptions(shared_ptr<CreateDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDataSourceResponse createDataSource(shared_ptr<CreateDataSourceRequest> request);
  CreateDataSourceSharedRuleResponse createDataSourceSharedRuleWithOptions(shared_ptr<CreateDataSourceSharedRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDataSourceSharedRuleResponse createDataSourceSharedRule(shared_ptr<CreateDataSourceSharedRuleRequest> request);
  CreateDeploymentResponse createDeploymentWithOptions(shared_ptr<CreateDeploymentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDeploymentResponse createDeployment(shared_ptr<CreateDeploymentRequest> request);
  CreateFunctionResponse createFunctionWithOptions(shared_ptr<CreateFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFunctionResponse createFunction(shared_ptr<CreateFunctionRequest> request);
  CreateNodeResponse createNodeWithOptions(shared_ptr<CreateNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateNodeResponse createNode(shared_ptr<CreateNodeRequest> request);
  CreateProjectResponse createProjectWithOptions(shared_ptr<CreateProjectRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProjectResponse createProject(shared_ptr<CreateProjectRequest> request);
  CreateResourceResponse createResourceWithOptions(shared_ptr<CreateResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateResourceResponse createResource(shared_ptr<CreateResourceRequest> request);
  CreateWorkflowDefinitionResponse createWorkflowDefinitionWithOptions(shared_ptr<CreateWorkflowDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWorkflowDefinitionResponse createWorkflowDefinition(shared_ptr<CreateWorkflowDefinitionRequest> request);
  DeleteDIJobResponse deleteDIJobWithOptions(shared_ptr<DeleteDIJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDIJobResponse deleteDIJob(shared_ptr<DeleteDIJobRequest> request);
  DeleteDataSourceResponse deleteDataSourceWithOptions(shared_ptr<DeleteDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDataSourceResponse deleteDataSource(shared_ptr<DeleteDataSourceRequest> request);
  DeleteDataSourceSharedRuleResponse deleteDataSourceSharedRuleWithOptions(shared_ptr<DeleteDataSourceSharedRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDataSourceSharedRuleResponse deleteDataSourceSharedRule(shared_ptr<DeleteDataSourceSharedRuleRequest> request);
  DeleteFunctionResponse deleteFunctionWithOptions(shared_ptr<DeleteFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFunctionResponse deleteFunction(shared_ptr<DeleteFunctionRequest> request);
  DeleteNodeResponse deleteNodeWithOptions(shared_ptr<DeleteNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteNodeResponse deleteNode(shared_ptr<DeleteNodeRequest> request);
  DeleteProjectResponse deleteProjectWithOptions(shared_ptr<DeleteProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProjectResponse deleteProject(shared_ptr<DeleteProjectRequest> request);
  DeleteResourceResponse deleteResourceWithOptions(shared_ptr<DeleteResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteResourceResponse deleteResource(shared_ptr<DeleteResourceRequest> request);
  DeleteWorkflowDefinitionResponse deleteWorkflowDefinitionWithOptions(shared_ptr<DeleteWorkflowDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWorkflowDefinitionResponse deleteWorkflowDefinition(shared_ptr<DeleteWorkflowDefinitionRequest> request);
  ExecDeploymentStageResponse execDeploymentStageWithOptions(shared_ptr<ExecDeploymentStageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecDeploymentStageResponse execDeploymentStage(shared_ptr<ExecDeploymentStageRequest> request);
  GetDIJobResponse getDIJobWithOptions(shared_ptr<GetDIJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDIJobResponse getDIJob(shared_ptr<GetDIJobRequest> request);
  GetDIJobLogResponse getDIJobLogWithOptions(shared_ptr<GetDIJobLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDIJobLogResponse getDIJobLog(shared_ptr<GetDIJobLogRequest> request);
  GetDataSourceResponse getDataSourceWithOptions(shared_ptr<GetDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataSourceResponse getDataSource(shared_ptr<GetDataSourceRequest> request);
  GetDeploymentResponse getDeploymentWithOptions(shared_ptr<GetDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeploymentResponse getDeployment(shared_ptr<GetDeploymentRequest> request);
  GetFunctionResponse getFunctionWithOptions(shared_ptr<GetFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFunctionResponse getFunction(shared_ptr<GetFunctionRequest> request);
  GetNodeResponse getNodeWithOptions(shared_ptr<GetNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetNodeResponse getNode(shared_ptr<GetNodeRequest> request);
  GetProjectResponse getProjectWithOptions(shared_ptr<GetProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectResponse getProject(shared_ptr<GetProjectRequest> request);
  GetResourceResponse getResourceWithOptions(shared_ptr<GetResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourceResponse getResource(shared_ptr<GetResourceRequest> request);
  GetWorkflowDefinitionResponse getWorkflowDefinitionWithOptions(shared_ptr<GetWorkflowDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWorkflowDefinitionResponse getWorkflowDefinition(shared_ptr<GetWorkflowDefinitionRequest> request);
  ListDIJobEventsResponse listDIJobEventsWithOptions(shared_ptr<ListDIJobEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDIJobEventsResponse listDIJobEvents(shared_ptr<ListDIJobEventsRequest> request);
  ListDIJobMetricsResponse listDIJobMetricsWithOptions(shared_ptr<ListDIJobMetricsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDIJobMetricsResponse listDIJobMetrics(shared_ptr<ListDIJobMetricsRequest> request);
  ListDIJobsResponse listDIJobsWithOptions(shared_ptr<ListDIJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDIJobsResponse listDIJobs(shared_ptr<ListDIJobsRequest> request);
  ListDataSourceSharedRulesResponse listDataSourceSharedRulesWithOptions(shared_ptr<ListDataSourceSharedRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataSourceSharedRulesResponse listDataSourceSharedRules(shared_ptr<ListDataSourceSharedRulesRequest> request);
  ListDataSourcesResponse listDataSourcesWithOptions(shared_ptr<ListDataSourcesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDataSourcesResponse listDataSources(shared_ptr<ListDataSourcesRequest> request);
  ListDeploymentsResponse listDeploymentsWithOptions(shared_ptr<ListDeploymentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeploymentsResponse listDeployments(shared_ptr<ListDeploymentsRequest> request);
  ListFunctionsResponse listFunctionsWithOptions(shared_ptr<ListFunctionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFunctionsResponse listFunctions(shared_ptr<ListFunctionsRequest> request);
  ListNodeDependenciesResponse listNodeDependenciesWithOptions(shared_ptr<ListNodeDependenciesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNodeDependenciesResponse listNodeDependencies(shared_ptr<ListNodeDependenciesRequest> request);
  ListNodesResponse listNodesWithOptions(shared_ptr<ListNodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListNodesResponse listNodes(shared_ptr<ListNodesRequest> request);
  ListProjectsResponse listProjectsWithOptions(shared_ptr<ListProjectsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectsResponse listProjects(shared_ptr<ListProjectsRequest> request);
  ListResourcesResponse listResourcesWithOptions(shared_ptr<ListResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListResourcesResponse listResources(shared_ptr<ListResourcesRequest> request);
  ListWorkflowDefinitionsResponse listWorkflowDefinitionsWithOptions(shared_ptr<ListWorkflowDefinitionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListWorkflowDefinitionsResponse listWorkflowDefinitions(shared_ptr<ListWorkflowDefinitionsRequest> request);
  MoveFunctionResponse moveFunctionWithOptions(shared_ptr<MoveFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveFunctionResponse moveFunction(shared_ptr<MoveFunctionRequest> request);
  MoveNodeResponse moveNodeWithOptions(shared_ptr<MoveNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveNodeResponse moveNode(shared_ptr<MoveNodeRequest> request);
  MoveResourceResponse moveResourceWithOptions(shared_ptr<MoveResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveResourceResponse moveResource(shared_ptr<MoveResourceRequest> request);
  MoveWorkflowDefinitionResponse moveWorkflowDefinitionWithOptions(shared_ptr<MoveWorkflowDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveWorkflowDefinitionResponse moveWorkflowDefinition(shared_ptr<MoveWorkflowDefinitionRequest> request);
  RenameFunctionResponse renameFunctionWithOptions(shared_ptr<RenameFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenameFunctionResponse renameFunction(shared_ptr<RenameFunctionRequest> request);
  RenameNodeResponse renameNodeWithOptions(shared_ptr<RenameNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenameNodeResponse renameNode(shared_ptr<RenameNodeRequest> request);
  RenameResourceResponse renameResourceWithOptions(shared_ptr<RenameResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenameResourceResponse renameResource(shared_ptr<RenameResourceRequest> request);
  RenameWorkflowDefinitionResponse renameWorkflowDefinitionWithOptions(shared_ptr<RenameWorkflowDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RenameWorkflowDefinitionResponse renameWorkflowDefinition(shared_ptr<RenameWorkflowDefinitionRequest> request);
  StartDIJobResponse startDIJobWithOptions(shared_ptr<StartDIJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartDIJobResponse startDIJob(shared_ptr<StartDIJobRequest> request);
  UpdateDIJobResponse updateDIJobWithOptions(shared_ptr<UpdateDIJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDIJobResponse updateDIJob(shared_ptr<UpdateDIJobRequest> request);
  UpdateDataSourceResponse updateDataSourceWithOptions(shared_ptr<UpdateDataSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDataSourceResponse updateDataSource(shared_ptr<UpdateDataSourceRequest> request);
  UpdateFunctionResponse updateFunctionWithOptions(shared_ptr<UpdateFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFunctionResponse updateFunction(shared_ptr<UpdateFunctionRequest> request);
  UpdateNodeResponse updateNodeWithOptions(shared_ptr<UpdateNodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateNodeResponse updateNode(shared_ptr<UpdateNodeRequest> request);
  UpdateProjectResponse updateProjectWithOptions(shared_ptr<UpdateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProjectResponse updateProject(shared_ptr<UpdateProjectRequest> request);
  UpdateResourceResponse updateResourceWithOptions(shared_ptr<UpdateResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateResourceResponse updateResource(shared_ptr<UpdateResourceRequest> request);
  UpdateWorkflowDefinitionResponse updateWorkflowDefinitionWithOptions(shared_ptr<UpdateWorkflowDefinitionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateWorkflowDefinitionResponse updateWorkflowDefinition(shared_ptr<UpdateWorkflowDefinitionRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Dataworks-public20240518

#endif
