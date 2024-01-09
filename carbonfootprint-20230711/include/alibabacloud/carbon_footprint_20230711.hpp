// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CARBONFOOTPRINT20230711_H_
#define ALIBABACLOUD_CARBONFOOTPRINT20230711_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_CarbonFootprint20230711 {
class AllowResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  AllowResponseBody() {}

  explicit AllowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AllowResponseBody() = default;
};
class AllowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AllowResponseBody> body{};

  AllowResponse() {}

  explicit AllowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AllowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AllowResponseBody>(model1);
      }
    }
  }


  virtual ~AllowResponse() = default;
};
class GetSummaryDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> group{};
  shared_ptr<string> startTime{};

  GetSummaryDataRequest() {}

  explicit GetSummaryDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~GetSummaryDataRequest() = default;
};
class GetSummaryDataResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> lastMonthConsumptionConversion{};
  shared_ptr<string> lastYearConsumptionConversion{};
  shared_ptr<string> lastYearConsumptionConversionSum{};
  shared_ptr<string> latestDataTime{};
  shared_ptr<string> thisMonthConsumptionConversion{};
  shared_ptr<string> thisYearConsumptionConversion{};
  shared_ptr<string> totalCarbonConsumptionConversion{};

  GetSummaryDataResponseBodyData() {}

  explicit GetSummaryDataResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lastMonthConsumptionConversion) {
      res["LastMonthConsumptionConversion"] = boost::any(*lastMonthConsumptionConversion);
    }
    if (lastYearConsumptionConversion) {
      res["LastYearConsumptionConversion"] = boost::any(*lastYearConsumptionConversion);
    }
    if (lastYearConsumptionConversionSum) {
      res["LastYearConsumptionConversionSum"] = boost::any(*lastYearConsumptionConversionSum);
    }
    if (latestDataTime) {
      res["LatestDataTime"] = boost::any(*latestDataTime);
    }
    if (thisMonthConsumptionConversion) {
      res["ThisMonthConsumptionConversion"] = boost::any(*thisMonthConsumptionConversion);
    }
    if (thisYearConsumptionConversion) {
      res["ThisYearConsumptionConversion"] = boost::any(*thisYearConsumptionConversion);
    }
    if (totalCarbonConsumptionConversion) {
      res["TotalCarbonConsumptionConversion"] = boost::any(*totalCarbonConsumptionConversion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LastMonthConsumptionConversion") != m.end() && !m["LastMonthConsumptionConversion"].empty()) {
      lastMonthConsumptionConversion = make_shared<string>(boost::any_cast<string>(m["LastMonthConsumptionConversion"]));
    }
    if (m.find("LastYearConsumptionConversion") != m.end() && !m["LastYearConsumptionConversion"].empty()) {
      lastYearConsumptionConversion = make_shared<string>(boost::any_cast<string>(m["LastYearConsumptionConversion"]));
    }
    if (m.find("LastYearConsumptionConversionSum") != m.end() && !m["LastYearConsumptionConversionSum"].empty()) {
      lastYearConsumptionConversionSum = make_shared<string>(boost::any_cast<string>(m["LastYearConsumptionConversionSum"]));
    }
    if (m.find("LatestDataTime") != m.end() && !m["LatestDataTime"].empty()) {
      latestDataTime = make_shared<string>(boost::any_cast<string>(m["LatestDataTime"]));
    }
    if (m.find("ThisMonthConsumptionConversion") != m.end() && !m["ThisMonthConsumptionConversion"].empty()) {
      thisMonthConsumptionConversion = make_shared<string>(boost::any_cast<string>(m["ThisMonthConsumptionConversion"]));
    }
    if (m.find("ThisYearConsumptionConversion") != m.end() && !m["ThisYearConsumptionConversion"].empty()) {
      thisYearConsumptionConversion = make_shared<string>(boost::any_cast<string>(m["ThisYearConsumptionConversion"]));
    }
    if (m.find("TotalCarbonConsumptionConversion") != m.end() && !m["TotalCarbonConsumptionConversion"].empty()) {
      totalCarbonConsumptionConversion = make_shared<string>(boost::any_cast<string>(m["TotalCarbonConsumptionConversion"]));
    }
  }


  virtual ~GetSummaryDataResponseBodyData() = default;
};
class GetSummaryDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetSummaryDataResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetSummaryDataResponseBody() {}

  explicit GetSummaryDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetSummaryDataResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSummaryDataResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSummaryDataResponseBody() = default;
};
class GetSummaryDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSummaryDataResponseBody> body{};

  GetSummaryDataResponse() {}

  explicit GetSummaryDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSummaryDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSummaryDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetSummaryDataResponse() = default;
};
class QueryCarbonTrackRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> group{};
  shared_ptr<string> startTime{};

  QueryCarbonTrackRequest() {}

  explicit QueryCarbonTrackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (group) {
      res["Group"] = boost::any(*group);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Group") != m.end() && !m["Group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["Group"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~QueryCarbonTrackRequest() = default;
};
class QueryCarbonTrackResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> productCode{};
  shared_ptr<double> quotaValue{};
  shared_ptr<string> region{};
  shared_ptr<long> statisticsDate{};
  shared_ptr<string> subUid{};
  shared_ptr<string> uid{};

  QueryCarbonTrackResponseBodyData() {}

  explicit QueryCarbonTrackResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (quotaValue) {
      res["QuotaValue"] = boost::any(*quotaValue);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (statisticsDate) {
      res["StatisticsDate"] = boost::any(*statisticsDate);
    }
    if (subUid) {
      res["SubUid"] = boost::any(*subUid);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("QuotaValue") != m.end() && !m["QuotaValue"].empty()) {
      quotaValue = make_shared<double>(boost::any_cast<double>(m["QuotaValue"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("StatisticsDate") != m.end() && !m["StatisticsDate"].empty()) {
      statisticsDate = make_shared<long>(boost::any_cast<long>(m["StatisticsDate"]));
    }
    if (m.find("SubUid") != m.end() && !m["SubUid"].empty()) {
      subUid = make_shared<string>(boost::any_cast<string>(m["SubUid"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~QueryCarbonTrackResponseBodyData() = default;
};
class QueryCarbonTrackResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryCarbonTrackResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  QueryCarbonTrackResponseBody() {}

  explicit QueryCarbonTrackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryCarbonTrackResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCarbonTrackResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryCarbonTrackResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryCarbonTrackResponseBody() = default;
};
class QueryCarbonTrackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCarbonTrackResponseBody> body{};

  QueryCarbonTrackResponse() {}

  explicit QueryCarbonTrackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryCarbonTrackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCarbonTrackResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCarbonTrackResponse() = default;
};
class QueryMultiAccountCarbonTrackRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> startTime{};

  QueryMultiAccountCarbonTrackRequest() {}

  explicit QueryMultiAccountCarbonTrackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~QueryMultiAccountCarbonTrackRequest() = default;
};
class QueryMultiAccountCarbonTrackResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> carbonActualEmission{};
  shared_ptr<string> month{};
  shared_ptr<string> productCode{};
  shared_ptr<string> region{};
  shared_ptr<string> uid{};

  QueryMultiAccountCarbonTrackResponseBodyData() {}

  explicit QueryMultiAccountCarbonTrackResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonActualEmission) {
      res["CarbonActualEmission"] = boost::any(*carbonActualEmission);
    }
    if (month) {
      res["Month"] = boost::any(*month);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CarbonActualEmission") != m.end() && !m["CarbonActualEmission"].empty()) {
      carbonActualEmission = make_shared<string>(boost::any_cast<string>(m["CarbonActualEmission"]));
    }
    if (m.find("Month") != m.end() && !m["Month"].empty()) {
      month = make_shared<string>(boost::any_cast<string>(m["Month"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~QueryMultiAccountCarbonTrackResponseBodyData() = default;
};
class QueryMultiAccountCarbonTrackResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryMultiAccountCarbonTrackResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  QueryMultiAccountCarbonTrackResponseBody() {}

  explicit QueryMultiAccountCarbonTrackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryMultiAccountCarbonTrackResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryMultiAccountCarbonTrackResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryMultiAccountCarbonTrackResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryMultiAccountCarbonTrackResponseBody() = default;
};
class QueryMultiAccountCarbonTrackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryMultiAccountCarbonTrackResponseBody> body{};

  QueryMultiAccountCarbonTrackResponse() {}

  explicit QueryMultiAccountCarbonTrackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryMultiAccountCarbonTrackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMultiAccountCarbonTrackResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMultiAccountCarbonTrackResponse() = default;
};
class VerifyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> allowedUids{};

  VerifyResponseBodyData() {}

  explicit VerifyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowedUids) {
      res["AllowedUids"] = boost::any(*allowedUids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllowedUids") != m.end() && !m["AllowedUids"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AllowedUids"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AllowedUids"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      allowedUids = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~VerifyResponseBodyData() = default;
};
class VerifyResponseBody : public Darabonba::Model {
public:
  shared_ptr<VerifyResponseBodyData> data{};
  shared_ptr<string> requestId{};

  VerifyResponseBody() {}

  explicit VerifyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        VerifyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<VerifyResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~VerifyResponseBody() = default;
};
class VerifyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VerifyResponseBody> body{};

  VerifyResponse() {}

  explicit VerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        VerifyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VerifyResponseBody>(model1);
      }
    }
  }


  virtual ~VerifyResponse() = default;
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
  AllowResponse allowWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AllowResponse allow();
  GetSummaryDataResponse getSummaryDataWithOptions(shared_ptr<GetSummaryDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSummaryDataResponse getSummaryData(shared_ptr<GetSummaryDataRequest> request);
  QueryCarbonTrackResponse queryCarbonTrackWithOptions(shared_ptr<QueryCarbonTrackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCarbonTrackResponse queryCarbonTrack(shared_ptr<QueryCarbonTrackRequest> request);
  QueryMultiAccountCarbonTrackResponse queryMultiAccountCarbonTrackWithOptions(shared_ptr<QueryMultiAccountCarbonTrackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMultiAccountCarbonTrackResponse queryMultiAccountCarbonTrack(shared_ptr<QueryMultiAccountCarbonTrackRequest> request);
  VerifyResponse verifyWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyResponse verify();

  virtual ~Client() = default;
};
} // namespace Alibabacloud_CarbonFootprint20230711

#endif
