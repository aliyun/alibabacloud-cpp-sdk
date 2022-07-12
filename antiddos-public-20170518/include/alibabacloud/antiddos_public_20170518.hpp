// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ANTIDDOS-PUBLIC20170518_H_
#define ALIBABACLOUD_ANTIDDOS-PUBLIC20170518_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Antiddos-public20170518 {
class DescribeBgpPackByIpRequest : public Darabonba::Model {
public:
  shared_ptr<string> ddosRegionId{};
  shared_ptr<string> ip{};

  DescribeBgpPackByIpRequest() {}

  explicit DescribeBgpPackByIpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ddosRegionId) {
      res["DdosRegionId"] = boost::any(*ddosRegionId);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DdosRegionId") != m.end() && !m["DdosRegionId"].empty()) {
      ddosRegionId = make_shared<string>(boost::any_cast<string>(m["DdosRegionId"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
  }


  virtual ~DescribeBgpPackByIpRequest() = default;
};
class DescribeBgpPackByIpResponseBodyDdosbgpInfo : public Darabonba::Model {
public:
  shared_ptr<long> baseThreshold{};
  shared_ptr<string> ddosbgpInstanceId{};
  shared_ptr<long> elasticThreshold{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> ip{};

  DescribeBgpPackByIpResponseBodyDdosbgpInfo() {}

  explicit DescribeBgpPackByIpResponseBodyDdosbgpInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseThreshold) {
      res["BaseThreshold"] = boost::any(*baseThreshold);
    }
    if (ddosbgpInstanceId) {
      res["DdosbgpInstanceId"] = boost::any(*ddosbgpInstanceId);
    }
    if (elasticThreshold) {
      res["ElasticThreshold"] = boost::any(*elasticThreshold);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaseThreshold") != m.end() && !m["BaseThreshold"].empty()) {
      baseThreshold = make_shared<long>(boost::any_cast<long>(m["BaseThreshold"]));
    }
    if (m.find("DdosbgpInstanceId") != m.end() && !m["DdosbgpInstanceId"].empty()) {
      ddosbgpInstanceId = make_shared<string>(boost::any_cast<string>(m["DdosbgpInstanceId"]));
    }
    if (m.find("ElasticThreshold") != m.end() && !m["ElasticThreshold"].empty()) {
      elasticThreshold = make_shared<long>(boost::any_cast<long>(m["ElasticThreshold"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
  }


  virtual ~DescribeBgpPackByIpResponseBodyDdosbgpInfo() = default;
};
class DescribeBgpPackByIpResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<DescribeBgpPackByIpResponseBodyDdosbgpInfo> ddosbgpInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeBgpPackByIpResponseBody() {}

  explicit DescribeBgpPackByIpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (ddosbgpInfo) {
      res["DdosbgpInfo"] = ddosbgpInfo ? boost::any(ddosbgpInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("DdosbgpInfo") != m.end() && !m["DdosbgpInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DdosbgpInfo"].type()) {
        DescribeBgpPackByIpResponseBodyDdosbgpInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DdosbgpInfo"]));
        ddosbgpInfo = make_shared<DescribeBgpPackByIpResponseBodyDdosbgpInfo>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeBgpPackByIpResponseBody() = default;
};
class DescribeBgpPackByIpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBgpPackByIpResponseBody> body{};

  DescribeBgpPackByIpResponse() {}

  explicit DescribeBgpPackByIpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBgpPackByIpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBgpPackByIpResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBgpPackByIpResponse() = default;
};
class DescribeCapRequest : public Darabonba::Model {
public:
  shared_ptr<long> begTime{};
  shared_ptr<string> ddosRegionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> internetIp{};

  DescribeCapRequest() {}

  explicit DescribeCapRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begTime) {
      res["BegTime"] = boost::any(*begTime);
    }
    if (ddosRegionId) {
      res["DdosRegionId"] = boost::any(*ddosRegionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (internetIp) {
      res["InternetIp"] = boost::any(*internetIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BegTime") != m.end() && !m["BegTime"].empty()) {
      begTime = make_shared<long>(boost::any_cast<long>(m["BegTime"]));
    }
    if (m.find("DdosRegionId") != m.end() && !m["DdosRegionId"].empty()) {
      ddosRegionId = make_shared<string>(boost::any_cast<string>(m["DdosRegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InternetIp") != m.end() && !m["InternetIp"].empty()) {
      internetIp = make_shared<string>(boost::any_cast<string>(m["InternetIp"]));
    }
  }


  virtual ~DescribeCapRequest() = default;
};
class DescribeCapResponseBodyCapUrl : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  DescribeCapResponseBodyCapUrl() {}

  explicit DescribeCapResponseBodyCapUrl(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~DescribeCapResponseBodyCapUrl() = default;
};
class DescribeCapResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCapResponseBodyCapUrl> capUrl{};
  shared_ptr<string> requestId{};

  DescribeCapResponseBody() {}

  explicit DescribeCapResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (capUrl) {
      res["CapUrl"] = capUrl ? boost::any(capUrl->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CapUrl") != m.end() && !m["CapUrl"].empty()) {
      if (typeid(map<string, boost::any>) == m["CapUrl"].type()) {
        DescribeCapResponseBodyCapUrl model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CapUrl"]));
        capUrl = make_shared<DescribeCapResponseBodyCapUrl>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeCapResponseBody() = default;
};
class DescribeCapResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCapResponseBody> body{};

  DescribeCapResponse() {}

  explicit DescribeCapResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCapResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCapResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCapResponse() = default;
};
class DescribeDdosCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> ddosRegionId{};
  shared_ptr<string> instanceType{};

  DescribeDdosCountRequest() {}

  explicit DescribeDdosCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ddosRegionId) {
      res["DdosRegionId"] = boost::any(*ddosRegionId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DdosRegionId") != m.end() && !m["DdosRegionId"].empty()) {
      ddosRegionId = make_shared<string>(boost::any_cast<string>(m["DdosRegionId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~DescribeDdosCountRequest() = default;
};
class DescribeDdosCountResponseBodyDdosCount : public Darabonba::Model {
public:
  shared_ptr<long> blackholeCount{};
  shared_ptr<long> defenseCount{};
  shared_ptr<long> instacenCount{};

  DescribeDdosCountResponseBodyDdosCount() {}

  explicit DescribeDdosCountResponseBodyDdosCount(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blackholeCount) {
      res["BlackholeCount"] = boost::any(*blackholeCount);
    }
    if (defenseCount) {
      res["DefenseCount"] = boost::any(*defenseCount);
    }
    if (instacenCount) {
      res["InstacenCount"] = boost::any(*instacenCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlackholeCount") != m.end() && !m["BlackholeCount"].empty()) {
      blackholeCount = make_shared<long>(boost::any_cast<long>(m["BlackholeCount"]));
    }
    if (m.find("DefenseCount") != m.end() && !m["DefenseCount"].empty()) {
      defenseCount = make_shared<long>(boost::any_cast<long>(m["DefenseCount"]));
    }
    if (m.find("InstacenCount") != m.end() && !m["InstacenCount"].empty()) {
      instacenCount = make_shared<long>(boost::any_cast<long>(m["InstacenCount"]));
    }
  }


  virtual ~DescribeDdosCountResponseBodyDdosCount() = default;
};
class DescribeDdosCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDdosCountResponseBodyDdosCount> ddosCount{};
  shared_ptr<string> requestId{};

  DescribeDdosCountResponseBody() {}

  explicit DescribeDdosCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ddosCount) {
      res["DdosCount"] = ddosCount ? boost::any(ddosCount->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DdosCount") != m.end() && !m["DdosCount"].empty()) {
      if (typeid(map<string, boost::any>) == m["DdosCount"].type()) {
        DescribeDdosCountResponseBodyDdosCount model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DdosCount"]));
        ddosCount = make_shared<DescribeDdosCountResponseBodyDdosCount>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDdosCountResponseBody() = default;
};
class DescribeDdosCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDdosCountResponseBody> body{};

  DescribeDdosCountResponse() {}

  explicit DescribeDdosCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDdosCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDdosCountResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDdosCountResponse() = default;
};
class DescribeDdosCreditRequest : public Darabonba::Model {
public:
  shared_ptr<string> ddosRegionId{};

  DescribeDdosCreditRequest() {}

  explicit DescribeDdosCreditRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ddosRegionId) {
      res["DdosRegionId"] = boost::any(*ddosRegionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DdosRegionId") != m.end() && !m["DdosRegionId"].empty()) {
      ddosRegionId = make_shared<string>(boost::any_cast<string>(m["DdosRegionId"]));
    }
  }


  virtual ~DescribeDdosCreditRequest() = default;
};
class DescribeDdosCreditResponseBodyDdosCredit : public Darabonba::Model {
public:
  shared_ptr<long> blackholeTime{};
  shared_ptr<long> score{};
  shared_ptr<string> scoreLevel{};

  DescribeDdosCreditResponseBodyDdosCredit() {}

  explicit DescribeDdosCreditResponseBodyDdosCredit(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blackholeTime) {
      res["BlackholeTime"] = boost::any(*blackholeTime);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (scoreLevel) {
      res["ScoreLevel"] = boost::any(*scoreLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlackholeTime") != m.end() && !m["BlackholeTime"].empty()) {
      blackholeTime = make_shared<long>(boost::any_cast<long>(m["BlackholeTime"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<long>(boost::any_cast<long>(m["Score"]));
    }
    if (m.find("ScoreLevel") != m.end() && !m["ScoreLevel"].empty()) {
      scoreLevel = make_shared<string>(boost::any_cast<string>(m["ScoreLevel"]));
    }
  }


  virtual ~DescribeDdosCreditResponseBodyDdosCredit() = default;
};
class DescribeDdosCreditResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDdosCreditResponseBodyDdosCredit> ddosCredit{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeDdosCreditResponseBody() {}

  explicit DescribeDdosCreditResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ddosCredit) {
      res["DdosCredit"] = ddosCredit ? boost::any(ddosCredit->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("DdosCredit") != m.end() && !m["DdosCredit"].empty()) {
      if (typeid(map<string, boost::any>) == m["DdosCredit"].type()) {
        DescribeDdosCreditResponseBodyDdosCredit model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DdosCredit"]));
        ddosCredit = make_shared<DescribeDdosCreditResponseBodyDdosCredit>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeDdosCreditResponseBody() = default;
};
class DescribeDdosCreditResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDdosCreditResponseBody> body{};

  DescribeDdosCreditResponse() {}

  explicit DescribeDdosCreditResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDdosCreditResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDdosCreditResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDdosCreditResponse() = default;
};
class DescribeDdosEventListRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> ddosRegionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> internetIp{};
  shared_ptr<long> pageSize{};

  DescribeDdosEventListRequest() {}

  explicit DescribeDdosEventListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (ddosRegionId) {
      res["DdosRegionId"] = boost::any(*ddosRegionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (internetIp) {
      res["InternetIp"] = boost::any(*internetIp);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DdosRegionId") != m.end() && !m["DdosRegionId"].empty()) {
      ddosRegionId = make_shared<string>(boost::any_cast<string>(m["DdosRegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InternetIp") != m.end() && !m["InternetIp"].empty()) {
      internetIp = make_shared<string>(boost::any_cast<string>(m["InternetIp"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeDdosEventListRequest() = default;
};
class DescribeDdosEventListResponseBodyDdosEventListDdosEvent : public Darabonba::Model {
public:
  shared_ptr<string> ddosStatus{};
  shared_ptr<string> ddosType{};
  shared_ptr<long> delayTime{};
  shared_ptr<long> endTime{};
  shared_ptr<long> startTime{};
  shared_ptr<long> unBlackholeTime{};

  DescribeDdosEventListResponseBodyDdosEventListDdosEvent() {}

  explicit DescribeDdosEventListResponseBodyDdosEventListDdosEvent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ddosStatus) {
      res["DdosStatus"] = boost::any(*ddosStatus);
    }
    if (ddosType) {
      res["DdosType"] = boost::any(*ddosType);
    }
    if (delayTime) {
      res["DelayTime"] = boost::any(*delayTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (unBlackholeTime) {
      res["UnBlackholeTime"] = boost::any(*unBlackholeTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DdosStatus") != m.end() && !m["DdosStatus"].empty()) {
      ddosStatus = make_shared<string>(boost::any_cast<string>(m["DdosStatus"]));
    }
    if (m.find("DdosType") != m.end() && !m["DdosType"].empty()) {
      ddosType = make_shared<string>(boost::any_cast<string>(m["DdosType"]));
    }
    if (m.find("DelayTime") != m.end() && !m["DelayTime"].empty()) {
      delayTime = make_shared<long>(boost::any_cast<long>(m["DelayTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("UnBlackholeTime") != m.end() && !m["UnBlackholeTime"].empty()) {
      unBlackholeTime = make_shared<long>(boost::any_cast<long>(m["UnBlackholeTime"]));
    }
  }


  virtual ~DescribeDdosEventListResponseBodyDdosEventListDdosEvent() = default;
};
class DescribeDdosEventListResponseBodyDdosEventList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDdosEventListResponseBodyDdosEventListDdosEvent>> ddosEvent{};

  DescribeDdosEventListResponseBodyDdosEventList() {}

  explicit DescribeDdosEventListResponseBodyDdosEventList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ddosEvent) {
      vector<boost::any> temp1;
      for(auto item1:*ddosEvent){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DdosEvent"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DdosEvent") != m.end() && !m["DdosEvent"].empty()) {
      if (typeid(vector<boost::any>) == m["DdosEvent"].type()) {
        vector<DescribeDdosEventListResponseBodyDdosEventListDdosEvent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DdosEvent"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDdosEventListResponseBodyDdosEventListDdosEvent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ddosEvent = make_shared<vector<DescribeDdosEventListResponseBodyDdosEventListDdosEvent>>(expect1);
      }
    }
  }


  virtual ~DescribeDdosEventListResponseBodyDdosEventList() = default;
};
class DescribeDdosEventListResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDdosEventListResponseBodyDdosEventList> ddosEventList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  DescribeDdosEventListResponseBody() {}

  explicit DescribeDdosEventListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ddosEventList) {
      res["DdosEventList"] = ddosEventList ? boost::any(ddosEventList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DdosEventList") != m.end() && !m["DdosEventList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DdosEventList"].type()) {
        DescribeDdosEventListResponseBodyDdosEventList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DdosEventList"]));
        ddosEventList = make_shared<DescribeDdosEventListResponseBodyDdosEventList>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeDdosEventListResponseBody() = default;
};
class DescribeDdosEventListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDdosEventListResponseBody> body{};

  DescribeDdosEventListResponse() {}

  explicit DescribeDdosEventListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDdosEventListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDdosEventListResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDdosEventListResponse() = default;
};
class DescribeDdosThresholdRequest : public Darabonba::Model {
public:
  shared_ptr<string> ddosRegionId{};
  shared_ptr<string> ddosType{};
  shared_ptr<vector<string>> instanceIds{};
  shared_ptr<string> instanceType{};

  DescribeDdosThresholdRequest() {}

  explicit DescribeDdosThresholdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ddosRegionId) {
      res["DdosRegionId"] = boost::any(*ddosRegionId);
    }
    if (ddosType) {
      res["DdosType"] = boost::any(*ddosType);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DdosRegionId") != m.end() && !m["DdosRegionId"].empty()) {
      ddosRegionId = make_shared<string>(boost::any_cast<string>(m["DdosRegionId"]));
    }
    if (m.find("DdosType") != m.end() && !m["DdosType"].empty()) {
      ddosType = make_shared<string>(boost::any_cast<string>(m["DdosType"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["InstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      instanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
  }


  virtual ~DescribeDdosThresholdRequest() = default;
};
class DescribeDdosThresholdResponseBodyThresholdsThreshold : public Darabonba::Model {
public:
  shared_ptr<long> bps{};
  shared_ptr<string> ddosType{};
  shared_ptr<long> elasticBps{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> internetIp{};
  shared_ptr<bool> isAuto{};
  shared_ptr<long> maxBps{};
  shared_ptr<long> maxPps{};
  shared_ptr<long> pps{};

  DescribeDdosThresholdResponseBodyThresholdsThreshold() {}

  explicit DescribeDdosThresholdResponseBodyThresholdsThreshold(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bps) {
      res["Bps"] = boost::any(*bps);
    }
    if (ddosType) {
      res["DdosType"] = boost::any(*ddosType);
    }
    if (elasticBps) {
      res["ElasticBps"] = boost::any(*elasticBps);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (internetIp) {
      res["InternetIp"] = boost::any(*internetIp);
    }
    if (isAuto) {
      res["IsAuto"] = boost::any(*isAuto);
    }
    if (maxBps) {
      res["MaxBps"] = boost::any(*maxBps);
    }
    if (maxPps) {
      res["MaxPps"] = boost::any(*maxPps);
    }
    if (pps) {
      res["Pps"] = boost::any(*pps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bps") != m.end() && !m["Bps"].empty()) {
      bps = make_shared<long>(boost::any_cast<long>(m["Bps"]));
    }
    if (m.find("DdosType") != m.end() && !m["DdosType"].empty()) {
      ddosType = make_shared<string>(boost::any_cast<string>(m["DdosType"]));
    }
    if (m.find("ElasticBps") != m.end() && !m["ElasticBps"].empty()) {
      elasticBps = make_shared<long>(boost::any_cast<long>(m["ElasticBps"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InternetIp") != m.end() && !m["InternetIp"].empty()) {
      internetIp = make_shared<string>(boost::any_cast<string>(m["InternetIp"]));
    }
    if (m.find("IsAuto") != m.end() && !m["IsAuto"].empty()) {
      isAuto = make_shared<bool>(boost::any_cast<bool>(m["IsAuto"]));
    }
    if (m.find("MaxBps") != m.end() && !m["MaxBps"].empty()) {
      maxBps = make_shared<long>(boost::any_cast<long>(m["MaxBps"]));
    }
    if (m.find("MaxPps") != m.end() && !m["MaxPps"].empty()) {
      maxPps = make_shared<long>(boost::any_cast<long>(m["MaxPps"]));
    }
    if (m.find("Pps") != m.end() && !m["Pps"].empty()) {
      pps = make_shared<long>(boost::any_cast<long>(m["Pps"]));
    }
  }


  virtual ~DescribeDdosThresholdResponseBodyThresholdsThreshold() = default;
};
class DescribeDdosThresholdResponseBodyThresholds : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDdosThresholdResponseBodyThresholdsThreshold>> threshold{};

  DescribeDdosThresholdResponseBodyThresholds() {}

  explicit DescribeDdosThresholdResponseBodyThresholds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (threshold) {
      vector<boost::any> temp1;
      for(auto item1:*threshold){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Threshold"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      if (typeid(vector<boost::any>) == m["Threshold"].type()) {
        vector<DescribeDdosThresholdResponseBodyThresholdsThreshold> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Threshold"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDdosThresholdResponseBodyThresholdsThreshold model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        threshold = make_shared<vector<DescribeDdosThresholdResponseBodyThresholdsThreshold>>(expect1);
      }
    }
  }


  virtual ~DescribeDdosThresholdResponseBodyThresholds() = default;
};
class DescribeDdosThresholdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDdosThresholdResponseBodyThresholds> thresholds{};

  DescribeDdosThresholdResponseBody() {}

  explicit DescribeDdosThresholdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (thresholds) {
      res["Thresholds"] = thresholds ? boost::any(thresholds->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Thresholds") != m.end() && !m["Thresholds"].empty()) {
      if (typeid(map<string, boost::any>) == m["Thresholds"].type()) {
        DescribeDdosThresholdResponseBodyThresholds model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Thresholds"]));
        thresholds = make_shared<DescribeDdosThresholdResponseBodyThresholds>(model1);
      }
    }
  }


  virtual ~DescribeDdosThresholdResponseBody() = default;
};
class DescribeDdosThresholdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDdosThresholdResponseBody> body{};

  DescribeDdosThresholdResponse() {}

  explicit DescribeDdosThresholdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDdosThresholdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDdosThresholdResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDdosThresholdResponse() = default;
};
class DescribeInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> ddosRegionId{};
  shared_ptr<string> ddosStatus{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceIp{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> pageSize{};

  DescribeInstanceRequest() {}

  explicit DescribeInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (ddosRegionId) {
      res["DdosRegionId"] = boost::any(*ddosRegionId);
    }
    if (ddosStatus) {
      res["DdosStatus"] = boost::any(*ddosStatus);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceIp) {
      res["InstanceIp"] = boost::any(*instanceIp);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DdosRegionId") != m.end() && !m["DdosRegionId"].empty()) {
      ddosRegionId = make_shared<string>(boost::any_cast<string>(m["DdosRegionId"]));
    }
    if (m.find("DdosStatus") != m.end() && !m["DdosStatus"].empty()) {
      ddosStatus = make_shared<string>(boost::any_cast<string>(m["DdosStatus"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceIp") != m.end() && !m["InstanceIp"].empty()) {
      instanceIp = make_shared<string>(boost::any_cast<string>(m["InstanceIp"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeInstanceRequest() = default;
};
class DescribeInstanceResponseBodyInstanceListInstance : public Darabonba::Model {
public:
  shared_ptr<long> blackholeThreshold{};
  shared_ptr<long> defenseBpsThreshold{};
  shared_ptr<long> defensePpsThreshold{};
  shared_ptr<long> elasticThreshold{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceIp{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> ipVersion{};
  shared_ptr<bool> isBgppack{};

  DescribeInstanceResponseBodyInstanceListInstance() {}

  explicit DescribeInstanceResponseBodyInstanceListInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blackholeThreshold) {
      res["BlackholeThreshold"] = boost::any(*blackholeThreshold);
    }
    if (defenseBpsThreshold) {
      res["DefenseBpsThreshold"] = boost::any(*defenseBpsThreshold);
    }
    if (defensePpsThreshold) {
      res["DefensePpsThreshold"] = boost::any(*defensePpsThreshold);
    }
    if (elasticThreshold) {
      res["ElasticThreshold"] = boost::any(*elasticThreshold);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceIp) {
      res["InstanceIp"] = boost::any(*instanceIp);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    if (isBgppack) {
      res["IsBgppack"] = boost::any(*isBgppack);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlackholeThreshold") != m.end() && !m["BlackholeThreshold"].empty()) {
      blackholeThreshold = make_shared<long>(boost::any_cast<long>(m["BlackholeThreshold"]));
    }
    if (m.find("DefenseBpsThreshold") != m.end() && !m["DefenseBpsThreshold"].empty()) {
      defenseBpsThreshold = make_shared<long>(boost::any_cast<long>(m["DefenseBpsThreshold"]));
    }
    if (m.find("DefensePpsThreshold") != m.end() && !m["DefensePpsThreshold"].empty()) {
      defensePpsThreshold = make_shared<long>(boost::any_cast<long>(m["DefensePpsThreshold"]));
    }
    if (m.find("ElasticThreshold") != m.end() && !m["ElasticThreshold"].empty()) {
      elasticThreshold = make_shared<long>(boost::any_cast<long>(m["ElasticThreshold"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceIp") != m.end() && !m["InstanceIp"].empty()) {
      instanceIp = make_shared<string>(boost::any_cast<string>(m["InstanceIp"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<string>(boost::any_cast<string>(m["IpVersion"]));
    }
    if (m.find("IsBgppack") != m.end() && !m["IsBgppack"].empty()) {
      isBgppack = make_shared<bool>(boost::any_cast<bool>(m["IsBgppack"]));
    }
  }


  virtual ~DescribeInstanceResponseBodyInstanceListInstance() = default;
};
class DescribeInstanceResponseBodyInstanceList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceResponseBodyInstanceListInstance>> instance{};

  DescribeInstanceResponseBodyInstanceList() {}

  explicit DescribeInstanceResponseBodyInstanceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instance) {
      vector<boost::any> temp1;
      for(auto item1:*instance){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instance"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(vector<boost::any>) == m["Instance"].type()) {
        vector<DescribeInstanceResponseBodyInstanceListInstance> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instance"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceResponseBodyInstanceListInstance model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instance = make_shared<vector<DescribeInstanceResponseBodyInstanceListInstance>>(expect1);
      }
    }
  }


  virtual ~DescribeInstanceResponseBodyInstanceList() = default;
};
class DescribeInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeInstanceResponseBodyInstanceList> instanceList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  DescribeInstanceResponseBody() {}

  explicit DescribeInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceList) {
      res["InstanceList"] = instanceList ? boost::any(instanceList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceList") != m.end() && !m["InstanceList"].empty()) {
      if (typeid(map<string, boost::any>) == m["InstanceList"].type()) {
        DescribeInstanceResponseBodyInstanceList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InstanceList"]));
        instanceList = make_shared<DescribeInstanceResponseBodyInstanceList>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeInstanceResponseBody() = default;
};
class DescribeInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceResponseBody> body{};

  DescribeInstanceResponse() {}

  explicit DescribeInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceResponse() = default;
};
class DescribeInstanceIpAddressRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> ddosRegionId{};
  shared_ptr<string> ddosStatus{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceIp{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceType{};
  shared_ptr<long> pageSize{};

  DescribeInstanceIpAddressRequest() {}

  explicit DescribeInstanceIpAddressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (ddosRegionId) {
      res["DdosRegionId"] = boost::any(*ddosRegionId);
    }
    if (ddosStatus) {
      res["DdosStatus"] = boost::any(*ddosStatus);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceIp) {
      res["InstanceIp"] = boost::any(*instanceIp);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DdosRegionId") != m.end() && !m["DdosRegionId"].empty()) {
      ddosRegionId = make_shared<string>(boost::any_cast<string>(m["DdosRegionId"]));
    }
    if (m.find("DdosStatus") != m.end() && !m["DdosStatus"].empty()) {
      ddosStatus = make_shared<string>(boost::any_cast<string>(m["DdosStatus"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceIp") != m.end() && !m["InstanceIp"].empty()) {
      instanceIp = make_shared<string>(boost::any_cast<string>(m["InstanceIp"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeInstanceIpAddressRequest() = default;
};
class DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig : public Darabonba::Model {
public:
  shared_ptr<long> blackholeThreshold{};
  shared_ptr<long> defenseBpsThreshold{};
  shared_ptr<long> defensePpsThreshold{};
  shared_ptr<long> elasticThreshold{};
  shared_ptr<string> instanceIp{};
  shared_ptr<string> ipStatus{};
  shared_ptr<string> ipVersion{};
  shared_ptr<bool> isBgppack{};
  shared_ptr<string> regionId{};

  DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig() {}

  explicit DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blackholeThreshold) {
      res["BlackholeThreshold"] = boost::any(*blackholeThreshold);
    }
    if (defenseBpsThreshold) {
      res["DefenseBpsThreshold"] = boost::any(*defenseBpsThreshold);
    }
    if (defensePpsThreshold) {
      res["DefensePpsThreshold"] = boost::any(*defensePpsThreshold);
    }
    if (elasticThreshold) {
      res["ElasticThreshold"] = boost::any(*elasticThreshold);
    }
    if (instanceIp) {
      res["InstanceIp"] = boost::any(*instanceIp);
    }
    if (ipStatus) {
      res["IpStatus"] = boost::any(*ipStatus);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    if (isBgppack) {
      res["IsBgppack"] = boost::any(*isBgppack);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlackholeThreshold") != m.end() && !m["BlackholeThreshold"].empty()) {
      blackholeThreshold = make_shared<long>(boost::any_cast<long>(m["BlackholeThreshold"]));
    }
    if (m.find("DefenseBpsThreshold") != m.end() && !m["DefenseBpsThreshold"].empty()) {
      defenseBpsThreshold = make_shared<long>(boost::any_cast<long>(m["DefenseBpsThreshold"]));
    }
    if (m.find("DefensePpsThreshold") != m.end() && !m["DefensePpsThreshold"].empty()) {
      defensePpsThreshold = make_shared<long>(boost::any_cast<long>(m["DefensePpsThreshold"]));
    }
    if (m.find("ElasticThreshold") != m.end() && !m["ElasticThreshold"].empty()) {
      elasticThreshold = make_shared<long>(boost::any_cast<long>(m["ElasticThreshold"]));
    }
    if (m.find("InstanceIp") != m.end() && !m["InstanceIp"].empty()) {
      instanceIp = make_shared<string>(boost::any_cast<string>(m["InstanceIp"]));
    }
    if (m.find("IpStatus") != m.end() && !m["IpStatus"].empty()) {
      ipStatus = make_shared<string>(boost::any_cast<string>(m["IpStatus"]));
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<string>(boost::any_cast<string>(m["IpVersion"]));
    }
    if (m.find("IsBgppack") != m.end() && !m["IsBgppack"].empty()) {
      isBgppack = make_shared<bool>(boost::any_cast<bool>(m["IsBgppack"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig() = default;
};
class DescribeInstanceIpAddressResponseBodyInstanceList : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceStatus{};
  shared_ptr<string> instanceType{};
  shared_ptr<vector<DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig>> ipAddressConfig{};

  DescribeInstanceIpAddressResponseBodyInstanceList() {}

  explicit DescribeInstanceIpAddressResponseBodyInstanceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceStatus) {
      res["InstanceStatus"] = boost::any(*instanceStatus);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (ipAddressConfig) {
      vector<boost::any> temp1;
      for(auto item1:*ipAddressConfig){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IpAddressConfig"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceStatus") != m.end() && !m["InstanceStatus"].empty()) {
      instanceStatus = make_shared<string>(boost::any_cast<string>(m["InstanceStatus"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("IpAddressConfig") != m.end() && !m["IpAddressConfig"].empty()) {
      if (typeid(vector<boost::any>) == m["IpAddressConfig"].type()) {
        vector<DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IpAddressConfig"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        ipAddressConfig = make_shared<vector<DescribeInstanceIpAddressResponseBodyInstanceListIpAddressConfig>>(expect1);
      }
    }
  }


  virtual ~DescribeInstanceIpAddressResponseBodyInstanceList() = default;
};
class DescribeInstanceIpAddressResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeInstanceIpAddressResponseBodyInstanceList>> instanceList{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  DescribeInstanceIpAddressResponseBody() {}

  explicit DescribeInstanceIpAddressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceList) {
      vector<boost::any> temp1;
      for(auto item1:*instanceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceList") != m.end() && !m["InstanceList"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceList"].type()) {
        vector<DescribeInstanceIpAddressResponseBodyInstanceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceIpAddressResponseBodyInstanceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceList = make_shared<vector<DescribeInstanceIpAddressResponseBodyInstanceList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~DescribeInstanceIpAddressResponseBody() = default;
};
class DescribeInstanceIpAddressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceIpAddressResponseBody> body{};

  DescribeInstanceIpAddressResponse() {}

  explicit DescribeInstanceIpAddressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceIpAddressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceIpAddressResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceIpAddressResponse() = default;
};
class DescribeIpDdosThresholdRequest : public Darabonba::Model {
public:
  shared_ptr<string> ddosRegionId{};
  shared_ptr<string> ddosType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> internetIp{};

  DescribeIpDdosThresholdRequest() {}

  explicit DescribeIpDdosThresholdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ddosRegionId) {
      res["DdosRegionId"] = boost::any(*ddosRegionId);
    }
    if (ddosType) {
      res["DdosType"] = boost::any(*ddosType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (internetIp) {
      res["InternetIp"] = boost::any(*internetIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DdosRegionId") != m.end() && !m["DdosRegionId"].empty()) {
      ddosRegionId = make_shared<string>(boost::any_cast<string>(m["DdosRegionId"]));
    }
    if (m.find("DdosType") != m.end() && !m["DdosType"].empty()) {
      ddosType = make_shared<string>(boost::any_cast<string>(m["DdosType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InternetIp") != m.end() && !m["InternetIp"].empty()) {
      internetIp = make_shared<string>(boost::any_cast<string>(m["InternetIp"]));
    }
  }


  virtual ~DescribeIpDdosThresholdRequest() = default;
};
class DescribeIpDdosThresholdResponseBodyThreshold : public Darabonba::Model {
public:
  shared_ptr<long> bps{};
  shared_ptr<string> ddosType{};
  shared_ptr<long> elasticBps{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> internetIp{};
  shared_ptr<bool> isAuto{};
  shared_ptr<long> maxBps{};
  shared_ptr<long> maxPps{};
  shared_ptr<long> pps{};

  DescribeIpDdosThresholdResponseBodyThreshold() {}

  explicit DescribeIpDdosThresholdResponseBodyThreshold(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bps) {
      res["Bps"] = boost::any(*bps);
    }
    if (ddosType) {
      res["DdosType"] = boost::any(*ddosType);
    }
    if (elasticBps) {
      res["ElasticBps"] = boost::any(*elasticBps);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (internetIp) {
      res["InternetIp"] = boost::any(*internetIp);
    }
    if (isAuto) {
      res["IsAuto"] = boost::any(*isAuto);
    }
    if (maxBps) {
      res["MaxBps"] = boost::any(*maxBps);
    }
    if (maxPps) {
      res["MaxPps"] = boost::any(*maxPps);
    }
    if (pps) {
      res["Pps"] = boost::any(*pps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bps") != m.end() && !m["Bps"].empty()) {
      bps = make_shared<long>(boost::any_cast<long>(m["Bps"]));
    }
    if (m.find("DdosType") != m.end() && !m["DdosType"].empty()) {
      ddosType = make_shared<string>(boost::any_cast<string>(m["DdosType"]));
    }
    if (m.find("ElasticBps") != m.end() && !m["ElasticBps"].empty()) {
      elasticBps = make_shared<long>(boost::any_cast<long>(m["ElasticBps"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InternetIp") != m.end() && !m["InternetIp"].empty()) {
      internetIp = make_shared<string>(boost::any_cast<string>(m["InternetIp"]));
    }
    if (m.find("IsAuto") != m.end() && !m["IsAuto"].empty()) {
      isAuto = make_shared<bool>(boost::any_cast<bool>(m["IsAuto"]));
    }
    if (m.find("MaxBps") != m.end() && !m["MaxBps"].empty()) {
      maxBps = make_shared<long>(boost::any_cast<long>(m["MaxBps"]));
    }
    if (m.find("MaxPps") != m.end() && !m["MaxPps"].empty()) {
      maxPps = make_shared<long>(boost::any_cast<long>(m["MaxPps"]));
    }
    if (m.find("Pps") != m.end() && !m["Pps"].empty()) {
      pps = make_shared<long>(boost::any_cast<long>(m["Pps"]));
    }
  }


  virtual ~DescribeIpDdosThresholdResponseBodyThreshold() = default;
};
class DescribeIpDdosThresholdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeIpDdosThresholdResponseBodyThreshold> threshold{};

  DescribeIpDdosThresholdResponseBody() {}

  explicit DescribeIpDdosThresholdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (threshold) {
      res["Threshold"] = threshold ? boost::any(threshold->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      if (typeid(map<string, boost::any>) == m["Threshold"].type()) {
        DescribeIpDdosThresholdResponseBodyThreshold model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Threshold"]));
        threshold = make_shared<DescribeIpDdosThresholdResponseBodyThreshold>(model1);
      }
    }
  }


  virtual ~DescribeIpDdosThresholdResponseBody() = default;
};
class DescribeIpDdosThresholdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeIpDdosThresholdResponseBody> body{};

  DescribeIpDdosThresholdResponse() {}

  explicit DescribeIpDdosThresholdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeIpDdosThresholdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeIpDdosThresholdResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeIpDdosThresholdResponse() = default;
};
class DescribeIpLocationServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> internetIp{};

  DescribeIpLocationServiceRequest() {}

  explicit DescribeIpLocationServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (internetIp) {
      res["InternetIp"] = boost::any(*internetIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InternetIp") != m.end() && !m["InternetIp"].empty()) {
      internetIp = make_shared<string>(boost::any_cast<string>(m["InternetIp"]));
    }
  }


  virtual ~DescribeIpLocationServiceRequest() = default;
};
class DescribeIpLocationServiceResponseBodyInstance : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceName{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> internetIp{};
  shared_ptr<string> region{};

  DescribeIpLocationServiceResponseBodyInstance() {}

  explicit DescribeIpLocationServiceResponseBodyInstance(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceName) {
      res["InstanceName"] = boost::any(*instanceName);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (internetIp) {
      res["InternetIp"] = boost::any(*internetIp);
    }
    if (region) {
      res["Region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceName") != m.end() && !m["InstanceName"].empty()) {
      instanceName = make_shared<string>(boost::any_cast<string>(m["InstanceName"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InternetIp") != m.end() && !m["InternetIp"].empty()) {
      internetIp = make_shared<string>(boost::any_cast<string>(m["InternetIp"]));
    }
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["Region"]));
    }
  }


  virtual ~DescribeIpLocationServiceResponseBodyInstance() = default;
};
class DescribeIpLocationServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeIpLocationServiceResponseBodyInstance> instance{};
  shared_ptr<string> requestId{};

  DescribeIpLocationServiceResponseBody() {}

  explicit DescribeIpLocationServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instance) {
      res["Instance"] = instance ? boost::any(instance->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      if (typeid(map<string, boost::any>) == m["Instance"].type()) {
        DescribeIpLocationServiceResponseBodyInstance model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Instance"]));
        instance = make_shared<DescribeIpLocationServiceResponseBodyInstance>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeIpLocationServiceResponseBody() = default;
};
class DescribeIpLocationServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeIpLocationServiceResponseBody> body{};

  DescribeIpLocationServiceResponse() {}

  explicit DescribeIpLocationServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeIpLocationServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeIpLocationServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeIpLocationServiceResponse() = default;
};
class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
public:
  shared_ptr<string> regionEnName{};
  shared_ptr<string> regionName{};
  shared_ptr<string> regionNo{};
  shared_ptr<string> regionNoAlias{};

  DescribeRegionsResponseBodyRegionsRegion() {}

  explicit DescribeRegionsResponseBodyRegionsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionEnName) {
      res["RegionEnName"] = boost::any(*regionEnName);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    if (regionNo) {
      res["RegionNo"] = boost::any(*regionNo);
    }
    if (regionNoAlias) {
      res["RegionNoAlias"] = boost::any(*regionNoAlias);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionEnName") != m.end() && !m["RegionEnName"].empty()) {
      regionEnName = make_shared<string>(boost::any_cast<string>(m["RegionEnName"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
    if (m.find("RegionNo") != m.end() && !m["RegionNo"].empty()) {
      regionNo = make_shared<string>(boost::any_cast<string>(m["RegionNo"]));
    }
    if (m.find("RegionNoAlias") != m.end() && !m["RegionNoAlias"].empty()) {
      regionNoAlias = make_shared<string>(boost::any_cast<string>(m["RegionNoAlias"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegion() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionsRegion>> region{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      vector<boost::any> temp1;
      for(auto item1:*region){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Region"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      if (typeid(vector<boost::any>) == m["Region"].type()) {
        vector<DescribeRegionsResponseBodyRegionsRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Region"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionsRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        region = make_shared<vector<DescribeRegionsResponseBodyRegionsRegion>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Regions"].type()) {
        DescribeRegionsResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeRegionsResponseBodyRegions>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class ModifyDdosStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> ddosRegionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> internetIp{};

  ModifyDdosStatusRequest() {}

  explicit ModifyDdosStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ddosRegionId) {
      res["DdosRegionId"] = boost::any(*ddosRegionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (internetIp) {
      res["InternetIp"] = boost::any(*internetIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DdosRegionId") != m.end() && !m["DdosRegionId"].empty()) {
      ddosRegionId = make_shared<string>(boost::any_cast<string>(m["DdosRegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InternetIp") != m.end() && !m["InternetIp"].empty()) {
      internetIp = make_shared<string>(boost::any_cast<string>(m["InternetIp"]));
    }
  }


  virtual ~ModifyDdosStatusRequest() = default;
};
class ModifyDdosStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDdosStatusResponseBody() {}

  explicit ModifyDdosStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDdosStatusResponseBody() = default;
};
class ModifyDdosStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDdosStatusResponseBody> body{};

  ModifyDdosStatusResponse() {}

  explicit ModifyDdosStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDdosStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDdosStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDdosStatusResponse() = default;
};
class ModifyDefenseThresholdRequest : public Darabonba::Model {
public:
  shared_ptr<long> bps{};
  shared_ptr<string> ddosRegionId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceType{};
  shared_ptr<string> internetIp{};
  shared_ptr<bool> isAuto{};
  shared_ptr<long> pps{};

  ModifyDefenseThresholdRequest() {}

  explicit ModifyDefenseThresholdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bps) {
      res["Bps"] = boost::any(*bps);
    }
    if (ddosRegionId) {
      res["DdosRegionId"] = boost::any(*ddosRegionId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceType) {
      res["InstanceType"] = boost::any(*instanceType);
    }
    if (internetIp) {
      res["InternetIp"] = boost::any(*internetIp);
    }
    if (isAuto) {
      res["IsAuto"] = boost::any(*isAuto);
    }
    if (pps) {
      res["Pps"] = boost::any(*pps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bps") != m.end() && !m["Bps"].empty()) {
      bps = make_shared<long>(boost::any_cast<long>(m["Bps"]));
    }
    if (m.find("DdosRegionId") != m.end() && !m["DdosRegionId"].empty()) {
      ddosRegionId = make_shared<string>(boost::any_cast<string>(m["DdosRegionId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceType") != m.end() && !m["InstanceType"].empty()) {
      instanceType = make_shared<string>(boost::any_cast<string>(m["InstanceType"]));
    }
    if (m.find("InternetIp") != m.end() && !m["InternetIp"].empty()) {
      internetIp = make_shared<string>(boost::any_cast<string>(m["InternetIp"]));
    }
    if (m.find("IsAuto") != m.end() && !m["IsAuto"].empty()) {
      isAuto = make_shared<bool>(boost::any_cast<bool>(m["IsAuto"]));
    }
    if (m.find("Pps") != m.end() && !m["Pps"].empty()) {
      pps = make_shared<long>(boost::any_cast<long>(m["Pps"]));
    }
  }


  virtual ~ModifyDefenseThresholdRequest() = default;
};
class ModifyDefenseThresholdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyDefenseThresholdResponseBody() {}

  explicit ModifyDefenseThresholdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyDefenseThresholdResponseBody() = default;
};
class ModifyDefenseThresholdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyDefenseThresholdResponseBody> body{};

  ModifyDefenseThresholdResponse() {}

  explicit ModifyDefenseThresholdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyDefenseThresholdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyDefenseThresholdResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyDefenseThresholdResponse() = default;
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
  DescribeBgpPackByIpResponse describeBgpPackByIpWithOptions(shared_ptr<DescribeBgpPackByIpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBgpPackByIpResponse describeBgpPackByIp(shared_ptr<DescribeBgpPackByIpRequest> request);
  DescribeCapResponse describeCapWithOptions(shared_ptr<DescribeCapRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCapResponse describeCap(shared_ptr<DescribeCapRequest> request);
  DescribeDdosCountResponse describeDdosCountWithOptions(shared_ptr<DescribeDdosCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDdosCountResponse describeDdosCount(shared_ptr<DescribeDdosCountRequest> request);
  DescribeDdosCreditResponse describeDdosCreditWithOptions(shared_ptr<DescribeDdosCreditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDdosCreditResponse describeDdosCredit(shared_ptr<DescribeDdosCreditRequest> request);
  DescribeDdosEventListResponse describeDdosEventListWithOptions(shared_ptr<DescribeDdosEventListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDdosEventListResponse describeDdosEventList(shared_ptr<DescribeDdosEventListRequest> request);
  DescribeDdosThresholdResponse describeDdosThresholdWithOptions(shared_ptr<DescribeDdosThresholdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDdosThresholdResponse describeDdosThreshold(shared_ptr<DescribeDdosThresholdRequest> request);
  DescribeInstanceResponse describeInstanceWithOptions(shared_ptr<DescribeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceResponse describeInstance(shared_ptr<DescribeInstanceRequest> request);
  DescribeInstanceIpAddressResponse describeInstanceIpAddressWithOptions(shared_ptr<DescribeInstanceIpAddressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceIpAddressResponse describeInstanceIpAddress(shared_ptr<DescribeInstanceIpAddressRequest> request);
  DescribeIpDdosThresholdResponse describeIpDdosThresholdWithOptions(shared_ptr<DescribeIpDdosThresholdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeIpDdosThresholdResponse describeIpDdosThreshold(shared_ptr<DescribeIpDdosThresholdRequest> request);
  DescribeIpLocationServiceResponse describeIpLocationServiceWithOptions(shared_ptr<DescribeIpLocationServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeIpLocationServiceResponse describeIpLocationService(shared_ptr<DescribeIpLocationServiceRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions();
  ModifyDdosStatusResponse modifyDdosStatusWithOptions(shared_ptr<ModifyDdosStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDdosStatusResponse modifyDdosStatus(shared_ptr<ModifyDdosStatusRequest> request);
  ModifyDefenseThresholdResponse modifyDefenseThresholdWithOptions(shared_ptr<ModifyDefenseThresholdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDefenseThresholdResponse modifyDefenseThreshold(shared_ptr<ModifyDefenseThresholdRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Antiddos-public20170518

#endif
