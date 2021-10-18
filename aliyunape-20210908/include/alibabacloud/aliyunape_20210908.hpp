// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ALIYUNAPE20210908_H_
#define ALIBABACLOUD_ALIYUNAPE20210908_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Aliyunape20210908 {
class ExecuteRequest : public Darabonba::Model {
public:
  shared_ptr<long> userId{};
  shared_ptr<map<string, string>> serviceParam{};
  shared_ptr<map<string, string>> extendParam{};
  shared_ptr<string> orderId{};
  shared_ptr<string> appName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> channel{};

  ExecuteRequest() {}

  explicit ExecuteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (serviceParam) {
      res["ServiceParam"] = boost::any(*serviceParam);
    }
    if (extendParam) {
      res["ExtendParam"] = boost::any(*extendParam);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("ServiceParam") != m.end() && !m["ServiceParam"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ServiceParam"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      serviceParam = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ExtendParam") != m.end() && !m["ExtendParam"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ExtendParam"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendParam = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
  }


  virtual ~ExecuteRequest() = default;
};
class ExecuteShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> userId{};
  shared_ptr<string> serviceParamShrink{};
  shared_ptr<string> extendParamShrink{};
  shared_ptr<string> orderId{};
  shared_ptr<string> appName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> channel{};

  ExecuteShrinkRequest() {}

  explicit ExecuteShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (serviceParamShrink) {
      res["ServiceParam"] = boost::any(*serviceParamShrink);
    }
    if (extendParamShrink) {
      res["ExtendParam"] = boost::any(*extendParamShrink);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("ServiceParam") != m.end() && !m["ServiceParam"].empty()) {
      serviceParamShrink = make_shared<string>(boost::any_cast<string>(m["ServiceParam"]));
    }
    if (m.find("ExtendParam") != m.end() && !m["ExtendParam"].empty()) {
      extendParamShrink = make_shared<string>(boost::any_cast<string>(m["ExtendParam"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
  }


  virtual ~ExecuteShrinkRequest() = default;
};
class ExecuteResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> rt{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  ExecuteResponseBody() {}

  explicit ExecuteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rt) {
      res["Rt"] = boost::any(*rt);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rt") != m.end() && !m["Rt"].empty()) {
      rt = make_shared<long>(boost::any_cast<long>(m["Rt"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ExecuteResponseBody() = default;
};
class ExecuteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExecuteResponseBody> body{};

  ExecuteResponse() {}

  explicit ExecuteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ExecuteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteResponse() = default;
};
class WeathermonitorProvinceHourRequest : public Darabonba::Model {
public:
  shared_ptr<long> userId{};
  shared_ptr<map<string, string>> serviceParam{};
  shared_ptr<map<string, string>> extendParam{};
  shared_ptr<string> orderId{};
  shared_ptr<string> appName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> channel{};

  WeathermonitorProvinceHourRequest() {}

  explicit WeathermonitorProvinceHourRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (serviceParam) {
      res["ServiceParam"] = boost::any(*serviceParam);
    }
    if (extendParam) {
      res["ExtendParam"] = boost::any(*extendParam);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("ServiceParam") != m.end() && !m["ServiceParam"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ServiceParam"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      serviceParam = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("ExtendParam") != m.end() && !m["ExtendParam"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["ExtendParam"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extendParam = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
  }


  virtual ~WeathermonitorProvinceHourRequest() = default;
};
class WeathermonitorProvinceHourShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> userId{};
  shared_ptr<string> serviceParamShrink{};
  shared_ptr<string> extendParamShrink{};
  shared_ptr<string> orderId{};
  shared_ptr<string> appName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> channel{};

  WeathermonitorProvinceHourShrinkRequest() {}

  explicit WeathermonitorProvinceHourShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (serviceParamShrink) {
      res["ServiceParam"] = boost::any(*serviceParamShrink);
    }
    if (extendParamShrink) {
      res["ExtendParam"] = boost::any(*extendParamShrink);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("ServiceParam") != m.end() && !m["ServiceParam"].empty()) {
      serviceParamShrink = make_shared<string>(boost::any_cast<string>(m["ServiceParam"]));
    }
    if (m.find("ExtendParam") != m.end() && !m["ExtendParam"].empty()) {
      extendParamShrink = make_shared<string>(boost::any_cast<string>(m["ExtendParam"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
  }


  virtual ~WeathermonitorProvinceHourShrinkRequest() = default;
};
class WeathermonitorProvinceHourResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> rt{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  WeathermonitorProvinceHourResponseBody() {}

  explicit WeathermonitorProvinceHourResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rt) {
      res["Rt"] = boost::any(*rt);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rt") != m.end() && !m["Rt"].empty()) {
      rt = make_shared<long>(boost::any_cast<long>(m["Rt"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~WeathermonitorProvinceHourResponseBody() = default;
};
class WeathermonitorProvinceHourResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<WeathermonitorProvinceHourResponseBody> body{};

  WeathermonitorProvinceHourResponse() {}

  explicit WeathermonitorProvinceHourResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        WeathermonitorProvinceHourResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<WeathermonitorProvinceHourResponseBody>(model1);
      }
    }
  }


  virtual ~WeathermonitorProvinceHourResponse() = default;
};
class WeathermonitorRequest : public Darabonba::Model {
public:
  shared_ptr<long> userId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> curHour{};
  shared_ptr<long> pageNum{};

  WeathermonitorRequest() {}

  explicit WeathermonitorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (curHour) {
      res["CurHour"] = boost::any(*curHour);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("CurHour") != m.end() && !m["CurHour"].empty()) {
      curHour = make_shared<string>(boost::any_cast<string>(m["CurHour"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
  }


  virtual ~WeathermonitorRequest() = default;
};
class WeathermonitorResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> rt{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  WeathermonitorResponseBody() {}

  explicit WeathermonitorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rt) {
      res["Rt"] = boost::any(*rt);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rt") != m.end() && !m["Rt"].empty()) {
      rt = make_shared<long>(boost::any_cast<long>(m["Rt"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~WeathermonitorResponseBody() = default;
};
class WeathermonitorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<WeathermonitorResponseBody> body{};

  WeathermonitorResponse() {}

  explicit WeathermonitorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        WeathermonitorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<WeathermonitorResponseBody>(model1);
      }
    }
  }


  virtual ~WeathermonitorResponse() = default;
};
class WeatherforecastTimeRequest : public Darabonba::Model {
public:
  shared_ptr<long> userId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> lon{};
  shared_ptr<string> curHour{};
  shared_ptr<string> lat{};

  WeatherforecastTimeRequest() {}

  explicit WeatherforecastTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    if (curHour) {
      res["CurHour"] = boost::any(*curHour);
    }
    if (lat) {
      res["Lat"] = boost::any(*lat);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<string>(boost::any_cast<string>(m["Lon"]));
    }
    if (m.find("CurHour") != m.end() && !m["CurHour"].empty()) {
      curHour = make_shared<string>(boost::any_cast<string>(m["CurHour"]));
    }
    if (m.find("Lat") != m.end() && !m["Lat"].empty()) {
      lat = make_shared<string>(boost::any_cast<string>(m["Lat"]));
    }
  }


  virtual ~WeatherforecastTimeRequest() = default;
};
class WeatherforecastTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> rt{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  WeatherforecastTimeResponseBody() {}

  explicit WeatherforecastTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rt) {
      res["Rt"] = boost::any(*rt);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rt") != m.end() && !m["Rt"].empty()) {
      rt = make_shared<long>(boost::any_cast<long>(m["Rt"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~WeatherforecastTimeResponseBody() = default;
};
class WeatherforecastTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<WeatherforecastTimeResponseBody> body{};

  WeatherforecastTimeResponse() {}

  explicit WeatherforecastTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        WeatherforecastTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<WeatherforecastTimeResponseBody>(model1);
      }
    }
  }


  virtual ~WeatherforecastTimeResponse() = default;
};
class StationDayRequest : public Darabonba::Model {
public:
  shared_ptr<long> userId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startForecast{};
  shared_ptr<string> station{};

  StationDayRequest() {}

  explicit StationDayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startForecast) {
      res["StartForecast"] = boost::any(*startForecast);
    }
    if (station) {
      res["Station"] = boost::any(*station);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartForecast") != m.end() && !m["StartForecast"].empty()) {
      startForecast = make_shared<string>(boost::any_cast<string>(m["StartForecast"]));
    }
    if (m.find("Station") != m.end() && !m["Station"].empty()) {
      station = make_shared<string>(boost::any_cast<string>(m["Station"]));
    }
  }


  virtual ~StationDayRequest() = default;
};
class StationDayResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> rt{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  StationDayResponseBody() {}

  explicit StationDayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rt) {
      res["Rt"] = boost::any(*rt);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rt") != m.end() && !m["Rt"].empty()) {
      rt = make_shared<long>(boost::any_cast<long>(m["Rt"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StationDayResponseBody() = default;
};
class StationDayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StationDayResponseBody> body{};

  StationDayResponse() {}

  explicit StationDayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StationDayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StationDayResponseBody>(model1);
      }
    }
  }


  virtual ~StationDayResponse() = default;
};
class WeatherforecastRequest : public Darabonba::Model {
public:
  shared_ptr<long> userId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startForecast{};
  shared_ptr<string> lon{};
  shared_ptr<string> lat{};

  WeatherforecastRequest() {}

  explicit WeatherforecastRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startForecast) {
      res["StartForecast"] = boost::any(*startForecast);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    if (lat) {
      res["Lat"] = boost::any(*lat);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartForecast") != m.end() && !m["StartForecast"].empty()) {
      startForecast = make_shared<string>(boost::any_cast<string>(m["StartForecast"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<string>(boost::any_cast<string>(m["Lon"]));
    }
    if (m.find("Lat") != m.end() && !m["Lat"].empty()) {
      lat = make_shared<string>(boost::any_cast<string>(m["Lat"]));
    }
  }


  virtual ~WeatherforecastRequest() = default;
};
class WeatherforecastResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> rt{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  WeatherforecastResponseBody() {}

  explicit WeatherforecastResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rt) {
      res["Rt"] = boost::any(*rt);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rt") != m.end() && !m["Rt"].empty()) {
      rt = make_shared<long>(boost::any_cast<long>(m["Rt"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~WeatherforecastResponseBody() = default;
};
class WeatherforecastResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<WeatherforecastResponseBody> body{};

  WeatherforecastResponse() {}

  explicit WeatherforecastResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        WeatherforecastResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<WeatherforecastResponseBody>(model1);
      }
    }
  }


  virtual ~WeatherforecastResponse() = default;
};
class HistoricalRequest : public Darabonba::Model {
public:
  shared_ptr<long> userId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> station{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> pageNum{};

  HistoricalRequest() {}

  explicit HistoricalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (station) {
      res["Station"] = boost::any(*station);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageNum) {
      res["PageNum"] = boost::any(*pageNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Station") != m.end() && !m["Station"].empty()) {
      station = make_shared<string>(boost::any_cast<string>(m["Station"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("PageNum") != m.end() && !m["PageNum"].empty()) {
      pageNum = make_shared<long>(boost::any_cast<long>(m["PageNum"]));
    }
  }


  virtual ~HistoricalRequest() = default;
};
class HistoricalResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> rt{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<string> code{};
  shared_ptr<bool> success{};

  HistoricalResponseBody() {}

  explicit HistoricalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rt) {
      res["Rt"] = boost::any(*rt);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rt") != m.end() && !m["Rt"].empty()) {
      rt = make_shared<long>(boost::any_cast<long>(m["Rt"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~HistoricalResponseBody() = default;
};
class HistoricalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<HistoricalResponseBody> body{};

  HistoricalResponse() {}

  explicit HistoricalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        HistoricalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HistoricalResponseBody>(model1);
      }
    }
  }


  virtual ~HistoricalResponse() = default;
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
  ExecuteResponse executeWithOptions(shared_ptr<ExecuteRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteResponse execute(shared_ptr<ExecuteRequest> request);
  WeathermonitorProvinceHourResponse weathermonitorProvinceHourWithOptions(shared_ptr<WeathermonitorProvinceHourRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  WeathermonitorProvinceHourResponse weathermonitorProvinceHour(shared_ptr<WeathermonitorProvinceHourRequest> request);
  WeathermonitorResponse weathermonitorWithOptions(shared_ptr<WeathermonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  WeathermonitorResponse weathermonitor(shared_ptr<WeathermonitorRequest> request);
  WeatherforecastTimeResponse weatherforecastTimeWithOptions(shared_ptr<WeatherforecastTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  WeatherforecastTimeResponse weatherforecastTime(shared_ptr<WeatherforecastTimeRequest> request);
  StationDayResponse stationDayWithOptions(shared_ptr<StationDayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StationDayResponse stationDay(shared_ptr<StationDayRequest> request);
  WeatherforecastResponse weatherforecastWithOptions(shared_ptr<WeatherforecastRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  WeatherforecastResponse weatherforecast(shared_ptr<WeatherforecastRequest> request);
  HistoricalResponse historicalWithOptions(shared_ptr<HistoricalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HistoricalResponse historical(shared_ptr<HistoricalRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Aliyunape20210908

#endif
