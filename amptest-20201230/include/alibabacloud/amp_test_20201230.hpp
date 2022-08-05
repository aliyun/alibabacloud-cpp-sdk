// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_AMPTEST20201230_H_
#define ALIBABACLOUD_AMPTEST20201230_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_AmpTest20201230 {
class CreateRulesRequestHomeAddressLocation : public Darabonba::Model {
public:
  shared_ptr<long> late{};
  shared_ptr<long> lon{};

  CreateRulesRequestHomeAddressLocation() {}

  explicit CreateRulesRequestHomeAddressLocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (late) {
      res["Late"] = boost::any(*late);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Late") != m.end() && !m["Late"].empty()) {
      late = make_shared<long>(boost::any_cast<long>(m["Late"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<long>(boost::any_cast<long>(m["Lon"]));
    }
  }


  virtual ~CreateRulesRequestHomeAddressLocation() = default;
};
class CreateRulesRequestHomeAddressT : public Darabonba::Model {
public:
  shared_ptr<string> class_{};

  CreateRulesRequestHomeAddressT() {}

  explicit CreateRulesRequestHomeAddressT(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
  }


  virtual ~CreateRulesRequestHomeAddressT() = default;
};
class CreateRulesRequestHomeAddress : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<CreateRulesRequestHomeAddressLocation> location{};
  shared_ptr<CreateRulesRequestHomeAddressT> t{};

  CreateRulesRequestHomeAddress() {}

  explicit CreateRulesRequestHomeAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (location) {
      res["Location"] = location ? boost::any(location->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (t) {
      res["T"] = t ? boost::any(t->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      if (typeid(map<string, boost::any>) == m["Location"].type()) {
        CreateRulesRequestHomeAddressLocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Location"]));
        location = make_shared<CreateRulesRequestHomeAddressLocation>(model1);
      }
    }
    if (m.find("T") != m.end() && !m["T"].empty()) {
      if (typeid(map<string, boost::any>) == m["T"].type()) {
        CreateRulesRequestHomeAddressT model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["T"]));
        t = make_shared<CreateRulesRequestHomeAddressT>(model1);
      }
    }
  }


  virtual ~CreateRulesRequestHomeAddress() = default;
};
class CreateRulesRequestHomeLocations : public Darabonba::Model {
public:
  shared_ptr<long> late{};
  shared_ptr<long> lon{};

  CreateRulesRequestHomeLocations() {}

  explicit CreateRulesRequestHomeLocations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (late) {
      res["Late"] = boost::any(*late);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Late") != m.end() && !m["Late"].empty()) {
      late = make_shared<long>(boost::any_cast<long>(m["Late"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<long>(boost::any_cast<long>(m["Lon"]));
    }
  }


  virtual ~CreateRulesRequestHomeLocations() = default;
};
class CreateRulesRequestHomeT : public Darabonba::Model {
public:
  shared_ptr<string> class_{};

  CreateRulesRequestHomeT() {}

  explicit CreateRulesRequestHomeT(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
  }


  virtual ~CreateRulesRequestHomeT() = default;
};
class HomeDMapValueLocation : public Darabonba::Model {
public:
  shared_ptr<long> late{};
  shared_ptr<long> lon{};

  HomeDMapValueLocation() {}

  explicit HomeDMapValueLocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (late) {
      res["Late"] = boost::any(*late);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Late") != m.end() && !m["Late"].empty()) {
      late = make_shared<long>(boost::any_cast<long>(m["Late"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<long>(boost::any_cast<long>(m["Lon"]));
    }
  }


  virtual ~HomeDMapValueLocation() = default;
};
class HomeDMapValue : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<HomeDMapValueLocation> location{};

  HomeDMapValue() {}

  explicit HomeDMapValue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (location) {
      res["Location"] = location ? boost::any(location->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      if (typeid(map<string, boost::any>) == m["Location"].type()) {
        HomeDMapValueLocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Location"]));
        location = make_shared<HomeDMapValueLocation>(model1);
      }
    }
  }


  virtual ~HomeDMapValue() = default;
};
class CreateRulesRequestHome : public Darabonba::Model {
public:
  shared_ptr<CreateRulesRequestHomeAddress> address{};
  shared_ptr<map<string, HomeDMapValue>> DMap{};
  shared_ptr<vector<CreateRulesRequestHomeLocations>> locations{};
  shared_ptr<map<string, long>> nameToAge{};
  shared_ptr<vector<string>> phoneNumbers{};
  shared_ptr<CreateRulesRequestHomeT> t{};

  CreateRulesRequestHome() {}

  explicit CreateRulesRequestHome(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = address ? boost::any(address->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (DMap) {
      map<string, boost::any> temp1;
      for(auto item1:*DMap){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["DMap"] = boost::any(temp1);
    }
    if (locations) {
      vector<boost::any> temp1;
      for(auto item1:*locations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Locations"] = boost::any(temp1);
    }
    if (nameToAge) {
      res["NameToAge"] = boost::any(*nameToAge);
    }
    if (phoneNumbers) {
      res["PhoneNumbers"] = boost::any(*phoneNumbers);
    }
    if (t) {
      res["T"] = t ? boost::any(t->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      if (typeid(map<string, boost::any>) == m["Address"].type()) {
        CreateRulesRequestHomeAddress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Address"]));
        address = make_shared<CreateRulesRequestHomeAddress>(model1);
      }
    }
    if (m.find("DMap") != m.end() && !m["DMap"].empty()) {
      if (typeid(map<string, boost::any>) == m["DMap"].type()) {
        map<string, HomeDMapValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["DMap"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            HomeDMapValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        DMap = make_shared<map<string, HomeDMapValue>>(expect1);
      }
    }
    if (m.find("Locations") != m.end() && !m["Locations"].empty()) {
      if (typeid(vector<boost::any>) == m["Locations"].type()) {
        vector<CreateRulesRequestHomeLocations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Locations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateRulesRequestHomeLocations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        locations = make_shared<vector<CreateRulesRequestHomeLocations>>(expect1);
      }
    }
    if (m.find("NameToAge") != m.end() && !m["NameToAge"].empty()) {
      map<string, long> map1 = boost::any_cast<map<string, long>>(m["NameToAge"]);
      map<string, long> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      nameToAge = make_shared<map<string, long>>(toMap1);
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PhoneNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PhoneNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      phoneNumbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("T") != m.end() && !m["T"].empty()) {
      if (typeid(map<string, boost::any>) == m["T"].type()) {
        CreateRulesRequestHomeT model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["T"]));
        t = make_shared<CreateRulesRequestHomeT>(model1);
      }
    }
  }


  virtual ~CreateRulesRequestHome() = default;
};
class CreateRulesRequest : public Darabonba::Model {
public:
  shared_ptr<CreateRulesRequestHome> home{};

  CreateRulesRequest() {}

  explicit CreateRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (home) {
      res["Home"] = home ? boost::any(home->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Home") != m.end() && !m["Home"].empty()) {
      if (typeid(map<string, boost::any>) == m["Home"].type()) {
        CreateRulesRequestHome model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Home"]));
        home = make_shared<CreateRulesRequestHome>(model1);
      }
    }
  }


  virtual ~CreateRulesRequest() = default;
};
class CreateRulesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> homeShrink{};

  CreateRulesShrinkRequest() {}

  explicit CreateRulesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (homeShrink) {
      res["Home"] = boost::any(*homeShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Home") != m.end() && !m["Home"].empty()) {
      homeShrink = make_shared<string>(boost::any_cast<string>(m["Home"]));
    }
  }


  virtual ~CreateRulesShrinkRequest() = default;
};
class CreateRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<string> value{};

  CreateRulesResponseBody() {}

  explicit CreateRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateRulesResponseBody() = default;
};
class CreateRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRulesResponseBody> body{};

  CreateRulesResponse() {}

  explicit CreateRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRulesResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRulesResponse() = default;
};
class HuichengTestGrayRequestHomeAddressLocation : public Darabonba::Model {
public:
  shared_ptr<long> late{};
  shared_ptr<long> lon{};

  HuichengTestGrayRequestHomeAddressLocation() {}

  explicit HuichengTestGrayRequestHomeAddressLocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (late) {
      res["Late"] = boost::any(*late);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Late") != m.end() && !m["Late"].empty()) {
      late = make_shared<long>(boost::any_cast<long>(m["Late"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<long>(boost::any_cast<long>(m["Lon"]));
    }
  }


  virtual ~HuichengTestGrayRequestHomeAddressLocation() = default;
};
class HuichengTestGrayRequestHomeAddressT : public Darabonba::Model {
public:
  shared_ptr<string> class_{};

  HuichengTestGrayRequestHomeAddressT() {}

  explicit HuichengTestGrayRequestHomeAddressT(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
  }


  virtual ~HuichengTestGrayRequestHomeAddressT() = default;
};
class HuichengTestGrayRequestHomeAddress : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<HuichengTestGrayRequestHomeAddressLocation> location{};
  shared_ptr<HuichengTestGrayRequestHomeAddressT> t{};

  HuichengTestGrayRequestHomeAddress() {}

  explicit HuichengTestGrayRequestHomeAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (location) {
      res["Location"] = location ? boost::any(location->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (t) {
      res["T"] = t ? boost::any(t->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      if (typeid(map<string, boost::any>) == m["Location"].type()) {
        HuichengTestGrayRequestHomeAddressLocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Location"]));
        location = make_shared<HuichengTestGrayRequestHomeAddressLocation>(model1);
      }
    }
    if (m.find("T") != m.end() && !m["T"].empty()) {
      if (typeid(map<string, boost::any>) == m["T"].type()) {
        HuichengTestGrayRequestHomeAddressT model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["T"]));
        t = make_shared<HuichengTestGrayRequestHomeAddressT>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayRequestHomeAddress() = default;
};
class HuichengTestGrayRequestHomeLocations : public Darabonba::Model {
public:
  shared_ptr<long> late{};
  shared_ptr<long> lon{};

  HuichengTestGrayRequestHomeLocations() {}

  explicit HuichengTestGrayRequestHomeLocations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (late) {
      res["Late"] = boost::any(*late);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Late") != m.end() && !m["Late"].empty()) {
      late = make_shared<long>(boost::any_cast<long>(m["Late"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<long>(boost::any_cast<long>(m["Lon"]));
    }
  }


  virtual ~HuichengTestGrayRequestHomeLocations() = default;
};
class HuichengTestGrayRequestHomeT : public Darabonba::Model {
public:
  shared_ptr<string> class_{};

  HuichengTestGrayRequestHomeT() {}

  explicit HuichengTestGrayRequestHomeT(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
  }


  virtual ~HuichengTestGrayRequestHomeT() = default;
};
class HuichengTestGrayRequestHome : public Darabonba::Model {
public:
  shared_ptr<HuichengTestGrayRequestHomeAddress> address{};
  shared_ptr<map<string, HomeDMapValue>> DMap{};
  shared_ptr<vector<HuichengTestGrayRequestHomeLocations>> locations{};
  shared_ptr<map<string, long>> nameToAge{};
  shared_ptr<vector<string>> phoneNumbers{};
  shared_ptr<HuichengTestGrayRequestHomeT> t{};

  HuichengTestGrayRequestHome() {}

  explicit HuichengTestGrayRequestHome(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = address ? boost::any(address->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (DMap) {
      map<string, boost::any> temp1;
      for(auto item1:*DMap){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["DMap"] = boost::any(temp1);
    }
    if (locations) {
      vector<boost::any> temp1;
      for(auto item1:*locations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Locations"] = boost::any(temp1);
    }
    if (nameToAge) {
      res["NameToAge"] = boost::any(*nameToAge);
    }
    if (phoneNumbers) {
      res["PhoneNumbers"] = boost::any(*phoneNumbers);
    }
    if (t) {
      res["T"] = t ? boost::any(t->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      if (typeid(map<string, boost::any>) == m["Address"].type()) {
        HuichengTestGrayRequestHomeAddress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Address"]));
        address = make_shared<HuichengTestGrayRequestHomeAddress>(model1);
      }
    }
    if (m.find("DMap") != m.end() && !m["DMap"].empty()) {
      if (typeid(map<string, boost::any>) == m["DMap"].type()) {
        map<string, HomeDMapValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["DMap"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            HomeDMapValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        DMap = make_shared<map<string, HomeDMapValue>>(expect1);
      }
    }
    if (m.find("Locations") != m.end() && !m["Locations"].empty()) {
      if (typeid(vector<boost::any>) == m["Locations"].type()) {
        vector<HuichengTestGrayRequestHomeLocations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Locations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HuichengTestGrayRequestHomeLocations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        locations = make_shared<vector<HuichengTestGrayRequestHomeLocations>>(expect1);
      }
    }
    if (m.find("NameToAge") != m.end() && !m["NameToAge"].empty()) {
      map<string, long> map1 = boost::any_cast<map<string, long>>(m["NameToAge"]);
      map<string, long> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      nameToAge = make_shared<map<string, long>>(toMap1);
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PhoneNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PhoneNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      phoneNumbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("T") != m.end() && !m["T"].empty()) {
      if (typeid(map<string, boost::any>) == m["T"].type()) {
        HuichengTestGrayRequestHomeT model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["T"]));
        t = make_shared<HuichengTestGrayRequestHomeT>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayRequestHome() = default;
};
class HuichengTestGrayRequest : public Darabonba::Model {
public:
  shared_ptr<HuichengTestGrayRequestHome> home{};

  HuichengTestGrayRequest() {}

  explicit HuichengTestGrayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (home) {
      res["Home"] = home ? boost::any(home->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Home") != m.end() && !m["Home"].empty()) {
      if (typeid(map<string, boost::any>) == m["Home"].type()) {
        HuichengTestGrayRequestHome model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Home"]));
        home = make_shared<HuichengTestGrayRequestHome>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayRequest() = default;
};
class HuichengTestGrayShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> homeShrink{};

  HuichengTestGrayShrinkRequest() {}

  explicit HuichengTestGrayShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (homeShrink) {
      res["Home"] = boost::any(*homeShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Home") != m.end() && !m["Home"].empty()) {
      homeShrink = make_shared<string>(boost::any_cast<string>(m["Home"]));
    }
  }


  virtual ~HuichengTestGrayShrinkRequest() = default;
};
class HuichengTestGrayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<string> value{};

  HuichengTestGrayResponseBody() {}

  explicit HuichengTestGrayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~HuichengTestGrayResponseBody() = default;
};
class HuichengTestGrayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HuichengTestGrayResponseBody> body{};

  HuichengTestGrayResponse() {}

  explicit HuichengTestGrayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HuichengTestGrayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HuichengTestGrayResponseBody>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayResponse() = default;
};
class HuichengTestGrayEightRequestHomeAddressLocation : public Darabonba::Model {
public:
  shared_ptr<long> late{};
  shared_ptr<long> lon{};

  HuichengTestGrayEightRequestHomeAddressLocation() {}

  explicit HuichengTestGrayEightRequestHomeAddressLocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (late) {
      res["Late"] = boost::any(*late);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Late") != m.end() && !m["Late"].empty()) {
      late = make_shared<long>(boost::any_cast<long>(m["Late"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<long>(boost::any_cast<long>(m["Lon"]));
    }
  }


  virtual ~HuichengTestGrayEightRequestHomeAddressLocation() = default;
};
class HuichengTestGrayEightRequestHomeAddressT : public Darabonba::Model {
public:
  shared_ptr<string> class_{};

  HuichengTestGrayEightRequestHomeAddressT() {}

  explicit HuichengTestGrayEightRequestHomeAddressT(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
  }


  virtual ~HuichengTestGrayEightRequestHomeAddressT() = default;
};
class HuichengTestGrayEightRequestHomeAddress : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<HuichengTestGrayEightRequestHomeAddressLocation> location{};
  shared_ptr<HuichengTestGrayEightRequestHomeAddressT> t{};

  HuichengTestGrayEightRequestHomeAddress() {}

  explicit HuichengTestGrayEightRequestHomeAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (location) {
      res["Location"] = location ? boost::any(location->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (t) {
      res["T"] = t ? boost::any(t->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      if (typeid(map<string, boost::any>) == m["Location"].type()) {
        HuichengTestGrayEightRequestHomeAddressLocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Location"]));
        location = make_shared<HuichengTestGrayEightRequestHomeAddressLocation>(model1);
      }
    }
    if (m.find("T") != m.end() && !m["T"].empty()) {
      if (typeid(map<string, boost::any>) == m["T"].type()) {
        HuichengTestGrayEightRequestHomeAddressT model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["T"]));
        t = make_shared<HuichengTestGrayEightRequestHomeAddressT>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayEightRequestHomeAddress() = default;
};
class HuichengTestGrayEightRequestHomeLocations : public Darabonba::Model {
public:
  shared_ptr<long> late{};
  shared_ptr<long> lon{};

  HuichengTestGrayEightRequestHomeLocations() {}

  explicit HuichengTestGrayEightRequestHomeLocations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (late) {
      res["Late"] = boost::any(*late);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Late") != m.end() && !m["Late"].empty()) {
      late = make_shared<long>(boost::any_cast<long>(m["Late"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<long>(boost::any_cast<long>(m["Lon"]));
    }
  }


  virtual ~HuichengTestGrayEightRequestHomeLocations() = default;
};
class HuichengTestGrayEightRequestHomeT : public Darabonba::Model {
public:
  shared_ptr<string> class_{};

  HuichengTestGrayEightRequestHomeT() {}

  explicit HuichengTestGrayEightRequestHomeT(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
  }


  virtual ~HuichengTestGrayEightRequestHomeT() = default;
};
class HuichengTestGrayEightRequestHome : public Darabonba::Model {
public:
  shared_ptr<HuichengTestGrayEightRequestHomeAddress> address{};
  shared_ptr<map<string, HomeDMapValue>> DMap{};
  shared_ptr<vector<HuichengTestGrayEightRequestHomeLocations>> locations{};
  shared_ptr<map<string, long>> nameToAge{};
  shared_ptr<vector<string>> phoneNumbers{};
  shared_ptr<HuichengTestGrayEightRequestHomeT> t{};

  HuichengTestGrayEightRequestHome() {}

  explicit HuichengTestGrayEightRequestHome(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = address ? boost::any(address->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (DMap) {
      map<string, boost::any> temp1;
      for(auto item1:*DMap){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["DMap"] = boost::any(temp1);
    }
    if (locations) {
      vector<boost::any> temp1;
      for(auto item1:*locations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Locations"] = boost::any(temp1);
    }
    if (nameToAge) {
      res["NameToAge"] = boost::any(*nameToAge);
    }
    if (phoneNumbers) {
      res["PhoneNumbers"] = boost::any(*phoneNumbers);
    }
    if (t) {
      res["T"] = t ? boost::any(t->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      if (typeid(map<string, boost::any>) == m["Address"].type()) {
        HuichengTestGrayEightRequestHomeAddress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Address"]));
        address = make_shared<HuichengTestGrayEightRequestHomeAddress>(model1);
      }
    }
    if (m.find("DMap") != m.end() && !m["DMap"].empty()) {
      if (typeid(map<string, boost::any>) == m["DMap"].type()) {
        map<string, HomeDMapValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["DMap"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            HomeDMapValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        DMap = make_shared<map<string, HomeDMapValue>>(expect1);
      }
    }
    if (m.find("Locations") != m.end() && !m["Locations"].empty()) {
      if (typeid(vector<boost::any>) == m["Locations"].type()) {
        vector<HuichengTestGrayEightRequestHomeLocations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Locations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HuichengTestGrayEightRequestHomeLocations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        locations = make_shared<vector<HuichengTestGrayEightRequestHomeLocations>>(expect1);
      }
    }
    if (m.find("NameToAge") != m.end() && !m["NameToAge"].empty()) {
      map<string, long> map1 = boost::any_cast<map<string, long>>(m["NameToAge"]);
      map<string, long> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      nameToAge = make_shared<map<string, long>>(toMap1);
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PhoneNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PhoneNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      phoneNumbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("T") != m.end() && !m["T"].empty()) {
      if (typeid(map<string, boost::any>) == m["T"].type()) {
        HuichengTestGrayEightRequestHomeT model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["T"]));
        t = make_shared<HuichengTestGrayEightRequestHomeT>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayEightRequestHome() = default;
};
class HuichengTestGrayEightRequest : public Darabonba::Model {
public:
  shared_ptr<HuichengTestGrayEightRequestHome> home{};

  HuichengTestGrayEightRequest() {}

  explicit HuichengTestGrayEightRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (home) {
      res["Home"] = home ? boost::any(home->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Home") != m.end() && !m["Home"].empty()) {
      if (typeid(map<string, boost::any>) == m["Home"].type()) {
        HuichengTestGrayEightRequestHome model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Home"]));
        home = make_shared<HuichengTestGrayEightRequestHome>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayEightRequest() = default;
};
class HuichengTestGrayEightShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> homeShrink{};

  HuichengTestGrayEightShrinkRequest() {}

  explicit HuichengTestGrayEightShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (homeShrink) {
      res["Home"] = boost::any(*homeShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Home") != m.end() && !m["Home"].empty()) {
      homeShrink = make_shared<string>(boost::any_cast<string>(m["Home"]));
    }
  }


  virtual ~HuichengTestGrayEightShrinkRequest() = default;
};
class HuichengTestGrayEightResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<string> value{};

  HuichengTestGrayEightResponseBody() {}

  explicit HuichengTestGrayEightResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~HuichengTestGrayEightResponseBody() = default;
};
class HuichengTestGrayEightResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HuichengTestGrayEightResponseBody> body{};

  HuichengTestGrayEightResponse() {}

  explicit HuichengTestGrayEightResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HuichengTestGrayEightResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HuichengTestGrayEightResponseBody>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayEightResponse() = default;
};
class HuichengTestGrayFifthRequestHomeAddressLocation : public Darabonba::Model {
public:
  shared_ptr<long> late{};
  shared_ptr<long> lon{};

  HuichengTestGrayFifthRequestHomeAddressLocation() {}

  explicit HuichengTestGrayFifthRequestHomeAddressLocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (late) {
      res["Late"] = boost::any(*late);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Late") != m.end() && !m["Late"].empty()) {
      late = make_shared<long>(boost::any_cast<long>(m["Late"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<long>(boost::any_cast<long>(m["Lon"]));
    }
  }


  virtual ~HuichengTestGrayFifthRequestHomeAddressLocation() = default;
};
class HuichengTestGrayFifthRequestHomeAddressT : public Darabonba::Model {
public:
  shared_ptr<string> class_{};

  HuichengTestGrayFifthRequestHomeAddressT() {}

  explicit HuichengTestGrayFifthRequestHomeAddressT(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
  }


  virtual ~HuichengTestGrayFifthRequestHomeAddressT() = default;
};
class HuichengTestGrayFifthRequestHomeAddress : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<HuichengTestGrayFifthRequestHomeAddressLocation> location{};
  shared_ptr<HuichengTestGrayFifthRequestHomeAddressT> t{};

  HuichengTestGrayFifthRequestHomeAddress() {}

  explicit HuichengTestGrayFifthRequestHomeAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (location) {
      res["Location"] = location ? boost::any(location->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (t) {
      res["T"] = t ? boost::any(t->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      if (typeid(map<string, boost::any>) == m["Location"].type()) {
        HuichengTestGrayFifthRequestHomeAddressLocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Location"]));
        location = make_shared<HuichengTestGrayFifthRequestHomeAddressLocation>(model1);
      }
    }
    if (m.find("T") != m.end() && !m["T"].empty()) {
      if (typeid(map<string, boost::any>) == m["T"].type()) {
        HuichengTestGrayFifthRequestHomeAddressT model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["T"]));
        t = make_shared<HuichengTestGrayFifthRequestHomeAddressT>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayFifthRequestHomeAddress() = default;
};
class HuichengTestGrayFifthRequestHomeLocations : public Darabonba::Model {
public:
  shared_ptr<long> late{};
  shared_ptr<long> lon{};

  HuichengTestGrayFifthRequestHomeLocations() {}

  explicit HuichengTestGrayFifthRequestHomeLocations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (late) {
      res["Late"] = boost::any(*late);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Late") != m.end() && !m["Late"].empty()) {
      late = make_shared<long>(boost::any_cast<long>(m["Late"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<long>(boost::any_cast<long>(m["Lon"]));
    }
  }


  virtual ~HuichengTestGrayFifthRequestHomeLocations() = default;
};
class HuichengTestGrayFifthRequestHomeT : public Darabonba::Model {
public:
  shared_ptr<string> class_{};

  HuichengTestGrayFifthRequestHomeT() {}

  explicit HuichengTestGrayFifthRequestHomeT(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
  }


  virtual ~HuichengTestGrayFifthRequestHomeT() = default;
};
class HuichengTestGrayFifthRequestHome : public Darabonba::Model {
public:
  shared_ptr<HuichengTestGrayFifthRequestHomeAddress> address{};
  shared_ptr<map<string, HomeDMapValue>> DMap{};
  shared_ptr<vector<HuichengTestGrayFifthRequestHomeLocations>> locations{};
  shared_ptr<map<string, long>> nameToAge{};
  shared_ptr<vector<string>> phoneNumbers{};
  shared_ptr<HuichengTestGrayFifthRequestHomeT> t{};

  HuichengTestGrayFifthRequestHome() {}

  explicit HuichengTestGrayFifthRequestHome(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = address ? boost::any(address->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (DMap) {
      map<string, boost::any> temp1;
      for(auto item1:*DMap){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["DMap"] = boost::any(temp1);
    }
    if (locations) {
      vector<boost::any> temp1;
      for(auto item1:*locations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Locations"] = boost::any(temp1);
    }
    if (nameToAge) {
      res["NameToAge"] = boost::any(*nameToAge);
    }
    if (phoneNumbers) {
      res["PhoneNumbers"] = boost::any(*phoneNumbers);
    }
    if (t) {
      res["T"] = t ? boost::any(t->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      if (typeid(map<string, boost::any>) == m["Address"].type()) {
        HuichengTestGrayFifthRequestHomeAddress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Address"]));
        address = make_shared<HuichengTestGrayFifthRequestHomeAddress>(model1);
      }
    }
    if (m.find("DMap") != m.end() && !m["DMap"].empty()) {
      if (typeid(map<string, boost::any>) == m["DMap"].type()) {
        map<string, HomeDMapValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["DMap"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            HomeDMapValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        DMap = make_shared<map<string, HomeDMapValue>>(expect1);
      }
    }
    if (m.find("Locations") != m.end() && !m["Locations"].empty()) {
      if (typeid(vector<boost::any>) == m["Locations"].type()) {
        vector<HuichengTestGrayFifthRequestHomeLocations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Locations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HuichengTestGrayFifthRequestHomeLocations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        locations = make_shared<vector<HuichengTestGrayFifthRequestHomeLocations>>(expect1);
      }
    }
    if (m.find("NameToAge") != m.end() && !m["NameToAge"].empty()) {
      map<string, long> map1 = boost::any_cast<map<string, long>>(m["NameToAge"]);
      map<string, long> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      nameToAge = make_shared<map<string, long>>(toMap1);
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PhoneNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PhoneNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      phoneNumbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("T") != m.end() && !m["T"].empty()) {
      if (typeid(map<string, boost::any>) == m["T"].type()) {
        HuichengTestGrayFifthRequestHomeT model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["T"]));
        t = make_shared<HuichengTestGrayFifthRequestHomeT>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayFifthRequestHome() = default;
};
class HuichengTestGrayFifthRequest : public Darabonba::Model {
public:
  shared_ptr<HuichengTestGrayFifthRequestHome> home{};

  HuichengTestGrayFifthRequest() {}

  explicit HuichengTestGrayFifthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (home) {
      res["Home"] = home ? boost::any(home->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Home") != m.end() && !m["Home"].empty()) {
      if (typeid(map<string, boost::any>) == m["Home"].type()) {
        HuichengTestGrayFifthRequestHome model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Home"]));
        home = make_shared<HuichengTestGrayFifthRequestHome>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayFifthRequest() = default;
};
class HuichengTestGrayFifthShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> homeShrink{};

  HuichengTestGrayFifthShrinkRequest() {}

  explicit HuichengTestGrayFifthShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (homeShrink) {
      res["Home"] = boost::any(*homeShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Home") != m.end() && !m["Home"].empty()) {
      homeShrink = make_shared<string>(boost::any_cast<string>(m["Home"]));
    }
  }


  virtual ~HuichengTestGrayFifthShrinkRequest() = default;
};
class HuichengTestGrayFifthResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<string> value{};

  HuichengTestGrayFifthResponseBody() {}

  explicit HuichengTestGrayFifthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~HuichengTestGrayFifthResponseBody() = default;
};
class HuichengTestGrayFifthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HuichengTestGrayFifthResponseBody> body{};

  HuichengTestGrayFifthResponse() {}

  explicit HuichengTestGrayFifthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HuichengTestGrayFifthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HuichengTestGrayFifthResponseBody>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayFifthResponse() = default;
};
class HuichengTestGrayNineRequestHomeAddressLocation : public Darabonba::Model {
public:
  shared_ptr<long> late{};
  shared_ptr<long> lon{};

  HuichengTestGrayNineRequestHomeAddressLocation() {}

  explicit HuichengTestGrayNineRequestHomeAddressLocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (late) {
      res["Late"] = boost::any(*late);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Late") != m.end() && !m["Late"].empty()) {
      late = make_shared<long>(boost::any_cast<long>(m["Late"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<long>(boost::any_cast<long>(m["Lon"]));
    }
  }


  virtual ~HuichengTestGrayNineRequestHomeAddressLocation() = default;
};
class HuichengTestGrayNineRequestHomeAddressT : public Darabonba::Model {
public:
  shared_ptr<string> class_{};

  HuichengTestGrayNineRequestHomeAddressT() {}

  explicit HuichengTestGrayNineRequestHomeAddressT(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
  }


  virtual ~HuichengTestGrayNineRequestHomeAddressT() = default;
};
class HuichengTestGrayNineRequestHomeAddress : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<HuichengTestGrayNineRequestHomeAddressLocation> location{};
  shared_ptr<HuichengTestGrayNineRequestHomeAddressT> t{};

  HuichengTestGrayNineRequestHomeAddress() {}

  explicit HuichengTestGrayNineRequestHomeAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (location) {
      res["Location"] = location ? boost::any(location->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (t) {
      res["T"] = t ? boost::any(t->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      if (typeid(map<string, boost::any>) == m["Location"].type()) {
        HuichengTestGrayNineRequestHomeAddressLocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Location"]));
        location = make_shared<HuichengTestGrayNineRequestHomeAddressLocation>(model1);
      }
    }
    if (m.find("T") != m.end() && !m["T"].empty()) {
      if (typeid(map<string, boost::any>) == m["T"].type()) {
        HuichengTestGrayNineRequestHomeAddressT model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["T"]));
        t = make_shared<HuichengTestGrayNineRequestHomeAddressT>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayNineRequestHomeAddress() = default;
};
class HuichengTestGrayNineRequestHomeLocations : public Darabonba::Model {
public:
  shared_ptr<long> late{};
  shared_ptr<long> lon{};

  HuichengTestGrayNineRequestHomeLocations() {}

  explicit HuichengTestGrayNineRequestHomeLocations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (late) {
      res["Late"] = boost::any(*late);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Late") != m.end() && !m["Late"].empty()) {
      late = make_shared<long>(boost::any_cast<long>(m["Late"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<long>(boost::any_cast<long>(m["Lon"]));
    }
  }


  virtual ~HuichengTestGrayNineRequestHomeLocations() = default;
};
class HuichengTestGrayNineRequestHomeT : public Darabonba::Model {
public:
  shared_ptr<string> class_{};

  HuichengTestGrayNineRequestHomeT() {}

  explicit HuichengTestGrayNineRequestHomeT(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
  }


  virtual ~HuichengTestGrayNineRequestHomeT() = default;
};
class HuichengTestGrayNineRequestHome : public Darabonba::Model {
public:
  shared_ptr<HuichengTestGrayNineRequestHomeAddress> address{};
  shared_ptr<map<string, HomeDMapValue>> DMap{};
  shared_ptr<vector<HuichengTestGrayNineRequestHomeLocations>> locations{};
  shared_ptr<map<string, long>> nameToAge{};
  shared_ptr<vector<string>> phoneNumbers{};
  shared_ptr<HuichengTestGrayNineRequestHomeT> t{};

  HuichengTestGrayNineRequestHome() {}

  explicit HuichengTestGrayNineRequestHome(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = address ? boost::any(address->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (DMap) {
      map<string, boost::any> temp1;
      for(auto item1:*DMap){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["DMap"] = boost::any(temp1);
    }
    if (locations) {
      vector<boost::any> temp1;
      for(auto item1:*locations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Locations"] = boost::any(temp1);
    }
    if (nameToAge) {
      res["NameToAge"] = boost::any(*nameToAge);
    }
    if (phoneNumbers) {
      res["PhoneNumbers"] = boost::any(*phoneNumbers);
    }
    if (t) {
      res["T"] = t ? boost::any(t->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      if (typeid(map<string, boost::any>) == m["Address"].type()) {
        HuichengTestGrayNineRequestHomeAddress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Address"]));
        address = make_shared<HuichengTestGrayNineRequestHomeAddress>(model1);
      }
    }
    if (m.find("DMap") != m.end() && !m["DMap"].empty()) {
      if (typeid(map<string, boost::any>) == m["DMap"].type()) {
        map<string, HomeDMapValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["DMap"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            HomeDMapValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        DMap = make_shared<map<string, HomeDMapValue>>(expect1);
      }
    }
    if (m.find("Locations") != m.end() && !m["Locations"].empty()) {
      if (typeid(vector<boost::any>) == m["Locations"].type()) {
        vector<HuichengTestGrayNineRequestHomeLocations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Locations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HuichengTestGrayNineRequestHomeLocations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        locations = make_shared<vector<HuichengTestGrayNineRequestHomeLocations>>(expect1);
      }
    }
    if (m.find("NameToAge") != m.end() && !m["NameToAge"].empty()) {
      map<string, long> map1 = boost::any_cast<map<string, long>>(m["NameToAge"]);
      map<string, long> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      nameToAge = make_shared<map<string, long>>(toMap1);
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PhoneNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PhoneNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      phoneNumbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("T") != m.end() && !m["T"].empty()) {
      if (typeid(map<string, boost::any>) == m["T"].type()) {
        HuichengTestGrayNineRequestHomeT model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["T"]));
        t = make_shared<HuichengTestGrayNineRequestHomeT>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayNineRequestHome() = default;
};
class HuichengTestGrayNineRequest : public Darabonba::Model {
public:
  shared_ptr<HuichengTestGrayNineRequestHome> home{};

  HuichengTestGrayNineRequest() {}

  explicit HuichengTestGrayNineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (home) {
      res["Home"] = home ? boost::any(home->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Home") != m.end() && !m["Home"].empty()) {
      if (typeid(map<string, boost::any>) == m["Home"].type()) {
        HuichengTestGrayNineRequestHome model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Home"]));
        home = make_shared<HuichengTestGrayNineRequestHome>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayNineRequest() = default;
};
class HuichengTestGrayNineShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> homeShrink{};

  HuichengTestGrayNineShrinkRequest() {}

  explicit HuichengTestGrayNineShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (homeShrink) {
      res["Home"] = boost::any(*homeShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Home") != m.end() && !m["Home"].empty()) {
      homeShrink = make_shared<string>(boost::any_cast<string>(m["Home"]));
    }
  }


  virtual ~HuichengTestGrayNineShrinkRequest() = default;
};
class HuichengTestGrayNineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<string> value{};

  HuichengTestGrayNineResponseBody() {}

  explicit HuichengTestGrayNineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~HuichengTestGrayNineResponseBody() = default;
};
class HuichengTestGrayNineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HuichengTestGrayNineResponseBody> body{};

  HuichengTestGrayNineResponse() {}

  explicit HuichengTestGrayNineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HuichengTestGrayNineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HuichengTestGrayNineResponseBody>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayNineResponse() = default;
};
class HuichengTestGraySecondRequestHomeAddressLocation : public Darabonba::Model {
public:
  shared_ptr<long> late{};
  shared_ptr<long> lon{};

  HuichengTestGraySecondRequestHomeAddressLocation() {}

  explicit HuichengTestGraySecondRequestHomeAddressLocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (late) {
      res["Late"] = boost::any(*late);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Late") != m.end() && !m["Late"].empty()) {
      late = make_shared<long>(boost::any_cast<long>(m["Late"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<long>(boost::any_cast<long>(m["Lon"]));
    }
  }


  virtual ~HuichengTestGraySecondRequestHomeAddressLocation() = default;
};
class HuichengTestGraySecondRequestHomeAddressT : public Darabonba::Model {
public:
  shared_ptr<string> class_{};

  HuichengTestGraySecondRequestHomeAddressT() {}

  explicit HuichengTestGraySecondRequestHomeAddressT(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
  }


  virtual ~HuichengTestGraySecondRequestHomeAddressT() = default;
};
class HuichengTestGraySecondRequestHomeAddress : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<HuichengTestGraySecondRequestHomeAddressLocation> location{};
  shared_ptr<HuichengTestGraySecondRequestHomeAddressT> t{};

  HuichengTestGraySecondRequestHomeAddress() {}

  explicit HuichengTestGraySecondRequestHomeAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (location) {
      res["Location"] = location ? boost::any(location->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (t) {
      res["T"] = t ? boost::any(t->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      if (typeid(map<string, boost::any>) == m["Location"].type()) {
        HuichengTestGraySecondRequestHomeAddressLocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Location"]));
        location = make_shared<HuichengTestGraySecondRequestHomeAddressLocation>(model1);
      }
    }
    if (m.find("T") != m.end() && !m["T"].empty()) {
      if (typeid(map<string, boost::any>) == m["T"].type()) {
        HuichengTestGraySecondRequestHomeAddressT model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["T"]));
        t = make_shared<HuichengTestGraySecondRequestHomeAddressT>(model1);
      }
    }
  }


  virtual ~HuichengTestGraySecondRequestHomeAddress() = default;
};
class HuichengTestGraySecondRequestHomeLocations : public Darabonba::Model {
public:
  shared_ptr<long> late{};
  shared_ptr<long> lon{};

  HuichengTestGraySecondRequestHomeLocations() {}

  explicit HuichengTestGraySecondRequestHomeLocations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (late) {
      res["Late"] = boost::any(*late);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Late") != m.end() && !m["Late"].empty()) {
      late = make_shared<long>(boost::any_cast<long>(m["Late"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<long>(boost::any_cast<long>(m["Lon"]));
    }
  }


  virtual ~HuichengTestGraySecondRequestHomeLocations() = default;
};
class HuichengTestGraySecondRequestHomeT : public Darabonba::Model {
public:
  shared_ptr<string> class_{};

  HuichengTestGraySecondRequestHomeT() {}

  explicit HuichengTestGraySecondRequestHomeT(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
  }


  virtual ~HuichengTestGraySecondRequestHomeT() = default;
};
class HuichengTestGraySecondRequestHome : public Darabonba::Model {
public:
  shared_ptr<HuichengTestGraySecondRequestHomeAddress> address{};
  shared_ptr<map<string, HomeDMapValue>> DMap{};
  shared_ptr<vector<HuichengTestGraySecondRequestHomeLocations>> locations{};
  shared_ptr<map<string, long>> nameToAge{};
  shared_ptr<vector<string>> phoneNumbers{};
  shared_ptr<HuichengTestGraySecondRequestHomeT> t{};

  HuichengTestGraySecondRequestHome() {}

  explicit HuichengTestGraySecondRequestHome(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = address ? boost::any(address->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (DMap) {
      map<string, boost::any> temp1;
      for(auto item1:*DMap){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["DMap"] = boost::any(temp1);
    }
    if (locations) {
      vector<boost::any> temp1;
      for(auto item1:*locations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Locations"] = boost::any(temp1);
    }
    if (nameToAge) {
      res["NameToAge"] = boost::any(*nameToAge);
    }
    if (phoneNumbers) {
      res["PhoneNumbers"] = boost::any(*phoneNumbers);
    }
    if (t) {
      res["T"] = t ? boost::any(t->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      if (typeid(map<string, boost::any>) == m["Address"].type()) {
        HuichengTestGraySecondRequestHomeAddress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Address"]));
        address = make_shared<HuichengTestGraySecondRequestHomeAddress>(model1);
      }
    }
    if (m.find("DMap") != m.end() && !m["DMap"].empty()) {
      if (typeid(map<string, boost::any>) == m["DMap"].type()) {
        map<string, HomeDMapValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["DMap"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            HomeDMapValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        DMap = make_shared<map<string, HomeDMapValue>>(expect1);
      }
    }
    if (m.find("Locations") != m.end() && !m["Locations"].empty()) {
      if (typeid(vector<boost::any>) == m["Locations"].type()) {
        vector<HuichengTestGraySecondRequestHomeLocations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Locations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HuichengTestGraySecondRequestHomeLocations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        locations = make_shared<vector<HuichengTestGraySecondRequestHomeLocations>>(expect1);
      }
    }
    if (m.find("NameToAge") != m.end() && !m["NameToAge"].empty()) {
      map<string, long> map1 = boost::any_cast<map<string, long>>(m["NameToAge"]);
      map<string, long> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      nameToAge = make_shared<map<string, long>>(toMap1);
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PhoneNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PhoneNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      phoneNumbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("T") != m.end() && !m["T"].empty()) {
      if (typeid(map<string, boost::any>) == m["T"].type()) {
        HuichengTestGraySecondRequestHomeT model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["T"]));
        t = make_shared<HuichengTestGraySecondRequestHomeT>(model1);
      }
    }
  }


  virtual ~HuichengTestGraySecondRequestHome() = default;
};
class HuichengTestGraySecondRequest : public Darabonba::Model {
public:
  shared_ptr<HuichengTestGraySecondRequestHome> home{};

  HuichengTestGraySecondRequest() {}

  explicit HuichengTestGraySecondRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (home) {
      res["Home"] = home ? boost::any(home->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Home") != m.end() && !m["Home"].empty()) {
      if (typeid(map<string, boost::any>) == m["Home"].type()) {
        HuichengTestGraySecondRequestHome model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Home"]));
        home = make_shared<HuichengTestGraySecondRequestHome>(model1);
      }
    }
  }


  virtual ~HuichengTestGraySecondRequest() = default;
};
class HuichengTestGraySecondShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> homeShrink{};

  HuichengTestGraySecondShrinkRequest() {}

  explicit HuichengTestGraySecondShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (homeShrink) {
      res["Home"] = boost::any(*homeShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Home") != m.end() && !m["Home"].empty()) {
      homeShrink = make_shared<string>(boost::any_cast<string>(m["Home"]));
    }
  }


  virtual ~HuichengTestGraySecondShrinkRequest() = default;
};
class HuichengTestGraySecondResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};

  HuichengTestGraySecondResponseBody() {}

  explicit HuichengTestGraySecondResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~HuichengTestGraySecondResponseBody() = default;
};
class HuichengTestGraySecondResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HuichengTestGraySecondResponseBody> body{};

  HuichengTestGraySecondResponse() {}

  explicit HuichengTestGraySecondResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HuichengTestGraySecondResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HuichengTestGraySecondResponseBody>(model1);
      }
    }
  }


  virtual ~HuichengTestGraySecondResponse() = default;
};
class HuichengTestGraySevenRequestHomeAddressLocation : public Darabonba::Model {
public:
  shared_ptr<long> late{};
  shared_ptr<long> lon{};

  HuichengTestGraySevenRequestHomeAddressLocation() {}

  explicit HuichengTestGraySevenRequestHomeAddressLocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (late) {
      res["Late"] = boost::any(*late);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Late") != m.end() && !m["Late"].empty()) {
      late = make_shared<long>(boost::any_cast<long>(m["Late"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<long>(boost::any_cast<long>(m["Lon"]));
    }
  }


  virtual ~HuichengTestGraySevenRequestHomeAddressLocation() = default;
};
class HuichengTestGraySevenRequestHomeAddressT : public Darabonba::Model {
public:
  shared_ptr<string> class_{};

  HuichengTestGraySevenRequestHomeAddressT() {}

  explicit HuichengTestGraySevenRequestHomeAddressT(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
  }


  virtual ~HuichengTestGraySevenRequestHomeAddressT() = default;
};
class HuichengTestGraySevenRequestHomeAddress : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<HuichengTestGraySevenRequestHomeAddressLocation> location{};
  shared_ptr<HuichengTestGraySevenRequestHomeAddressT> t{};

  HuichengTestGraySevenRequestHomeAddress() {}

  explicit HuichengTestGraySevenRequestHomeAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (location) {
      res["Location"] = location ? boost::any(location->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (t) {
      res["T"] = t ? boost::any(t->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      if (typeid(map<string, boost::any>) == m["Location"].type()) {
        HuichengTestGraySevenRequestHomeAddressLocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Location"]));
        location = make_shared<HuichengTestGraySevenRequestHomeAddressLocation>(model1);
      }
    }
    if (m.find("T") != m.end() && !m["T"].empty()) {
      if (typeid(map<string, boost::any>) == m["T"].type()) {
        HuichengTestGraySevenRequestHomeAddressT model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["T"]));
        t = make_shared<HuichengTestGraySevenRequestHomeAddressT>(model1);
      }
    }
  }


  virtual ~HuichengTestGraySevenRequestHomeAddress() = default;
};
class HuichengTestGraySevenRequestHomeLocations : public Darabonba::Model {
public:
  shared_ptr<long> late{};
  shared_ptr<long> lon{};

  HuichengTestGraySevenRequestHomeLocations() {}

  explicit HuichengTestGraySevenRequestHomeLocations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (late) {
      res["Late"] = boost::any(*late);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Late") != m.end() && !m["Late"].empty()) {
      late = make_shared<long>(boost::any_cast<long>(m["Late"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<long>(boost::any_cast<long>(m["Lon"]));
    }
  }


  virtual ~HuichengTestGraySevenRequestHomeLocations() = default;
};
class HuichengTestGraySevenRequestHomeT : public Darabonba::Model {
public:
  shared_ptr<string> class_{};

  HuichengTestGraySevenRequestHomeT() {}

  explicit HuichengTestGraySevenRequestHomeT(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
  }


  virtual ~HuichengTestGraySevenRequestHomeT() = default;
};
class HuichengTestGraySevenRequestHome : public Darabonba::Model {
public:
  shared_ptr<HuichengTestGraySevenRequestHomeAddress> address{};
  shared_ptr<map<string, HomeDMapValue>> DMap{};
  shared_ptr<vector<HuichengTestGraySevenRequestHomeLocations>> locations{};
  shared_ptr<map<string, long>> nameToAge{};
  shared_ptr<vector<string>> phoneNumbers{};
  shared_ptr<HuichengTestGraySevenRequestHomeT> t{};

  HuichengTestGraySevenRequestHome() {}

  explicit HuichengTestGraySevenRequestHome(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = address ? boost::any(address->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (DMap) {
      map<string, boost::any> temp1;
      for(auto item1:*DMap){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["DMap"] = boost::any(temp1);
    }
    if (locations) {
      vector<boost::any> temp1;
      for(auto item1:*locations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Locations"] = boost::any(temp1);
    }
    if (nameToAge) {
      res["NameToAge"] = boost::any(*nameToAge);
    }
    if (phoneNumbers) {
      res["PhoneNumbers"] = boost::any(*phoneNumbers);
    }
    if (t) {
      res["T"] = t ? boost::any(t->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      if (typeid(map<string, boost::any>) == m["Address"].type()) {
        HuichengTestGraySevenRequestHomeAddress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Address"]));
        address = make_shared<HuichengTestGraySevenRequestHomeAddress>(model1);
      }
    }
    if (m.find("DMap") != m.end() && !m["DMap"].empty()) {
      if (typeid(map<string, boost::any>) == m["DMap"].type()) {
        map<string, HomeDMapValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["DMap"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            HomeDMapValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        DMap = make_shared<map<string, HomeDMapValue>>(expect1);
      }
    }
    if (m.find("Locations") != m.end() && !m["Locations"].empty()) {
      if (typeid(vector<boost::any>) == m["Locations"].type()) {
        vector<HuichengTestGraySevenRequestHomeLocations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Locations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HuichengTestGraySevenRequestHomeLocations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        locations = make_shared<vector<HuichengTestGraySevenRequestHomeLocations>>(expect1);
      }
    }
    if (m.find("NameToAge") != m.end() && !m["NameToAge"].empty()) {
      map<string, long> map1 = boost::any_cast<map<string, long>>(m["NameToAge"]);
      map<string, long> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      nameToAge = make_shared<map<string, long>>(toMap1);
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PhoneNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PhoneNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      phoneNumbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("T") != m.end() && !m["T"].empty()) {
      if (typeid(map<string, boost::any>) == m["T"].type()) {
        HuichengTestGraySevenRequestHomeT model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["T"]));
        t = make_shared<HuichengTestGraySevenRequestHomeT>(model1);
      }
    }
  }


  virtual ~HuichengTestGraySevenRequestHome() = default;
};
class HuichengTestGraySevenRequest : public Darabonba::Model {
public:
  shared_ptr<HuichengTestGraySevenRequestHome> home{};

  HuichengTestGraySevenRequest() {}

  explicit HuichengTestGraySevenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (home) {
      res["Home"] = home ? boost::any(home->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Home") != m.end() && !m["Home"].empty()) {
      if (typeid(map<string, boost::any>) == m["Home"].type()) {
        HuichengTestGraySevenRequestHome model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Home"]));
        home = make_shared<HuichengTestGraySevenRequestHome>(model1);
      }
    }
  }


  virtual ~HuichengTestGraySevenRequest() = default;
};
class HuichengTestGraySevenShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> homeShrink{};

  HuichengTestGraySevenShrinkRequest() {}

  explicit HuichengTestGraySevenShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (homeShrink) {
      res["Home"] = boost::any(*homeShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Home") != m.end() && !m["Home"].empty()) {
      homeShrink = make_shared<string>(boost::any_cast<string>(m["Home"]));
    }
  }


  virtual ~HuichengTestGraySevenShrinkRequest() = default;
};
class HuichengTestGraySevenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<string> value{};

  HuichengTestGraySevenResponseBody() {}

  explicit HuichengTestGraySevenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~HuichengTestGraySevenResponseBody() = default;
};
class HuichengTestGraySevenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HuichengTestGraySevenResponseBody> body{};

  HuichengTestGraySevenResponse() {}

  explicit HuichengTestGraySevenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HuichengTestGraySevenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HuichengTestGraySevenResponseBody>(model1);
      }
    }
  }


  virtual ~HuichengTestGraySevenResponse() = default;
};
class HuichengTestGraySixRequestHomeAddressLocation : public Darabonba::Model {
public:
  shared_ptr<long> late{};
  shared_ptr<long> lon{};

  HuichengTestGraySixRequestHomeAddressLocation() {}

  explicit HuichengTestGraySixRequestHomeAddressLocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (late) {
      res["Late"] = boost::any(*late);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Late") != m.end() && !m["Late"].empty()) {
      late = make_shared<long>(boost::any_cast<long>(m["Late"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<long>(boost::any_cast<long>(m["Lon"]));
    }
  }


  virtual ~HuichengTestGraySixRequestHomeAddressLocation() = default;
};
class HuichengTestGraySixRequestHomeAddressT : public Darabonba::Model {
public:
  shared_ptr<string> class_{};

  HuichengTestGraySixRequestHomeAddressT() {}

  explicit HuichengTestGraySixRequestHomeAddressT(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
  }


  virtual ~HuichengTestGraySixRequestHomeAddressT() = default;
};
class HuichengTestGraySixRequestHomeAddress : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<HuichengTestGraySixRequestHomeAddressLocation> location{};
  shared_ptr<HuichengTestGraySixRequestHomeAddressT> t{};

  HuichengTestGraySixRequestHomeAddress() {}

  explicit HuichengTestGraySixRequestHomeAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (location) {
      res["Location"] = location ? boost::any(location->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (t) {
      res["T"] = t ? boost::any(t->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      if (typeid(map<string, boost::any>) == m["Location"].type()) {
        HuichengTestGraySixRequestHomeAddressLocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Location"]));
        location = make_shared<HuichengTestGraySixRequestHomeAddressLocation>(model1);
      }
    }
    if (m.find("T") != m.end() && !m["T"].empty()) {
      if (typeid(map<string, boost::any>) == m["T"].type()) {
        HuichengTestGraySixRequestHomeAddressT model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["T"]));
        t = make_shared<HuichengTestGraySixRequestHomeAddressT>(model1);
      }
    }
  }


  virtual ~HuichengTestGraySixRequestHomeAddress() = default;
};
class HuichengTestGraySixRequestHomeLocations : public Darabonba::Model {
public:
  shared_ptr<long> late{};
  shared_ptr<long> lon{};

  HuichengTestGraySixRequestHomeLocations() {}

  explicit HuichengTestGraySixRequestHomeLocations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (late) {
      res["Late"] = boost::any(*late);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Late") != m.end() && !m["Late"].empty()) {
      late = make_shared<long>(boost::any_cast<long>(m["Late"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<long>(boost::any_cast<long>(m["Lon"]));
    }
  }


  virtual ~HuichengTestGraySixRequestHomeLocations() = default;
};
class HuichengTestGraySixRequestHomeT : public Darabonba::Model {
public:
  shared_ptr<string> class_{};

  HuichengTestGraySixRequestHomeT() {}

  explicit HuichengTestGraySixRequestHomeT(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
  }


  virtual ~HuichengTestGraySixRequestHomeT() = default;
};
class HuichengTestGraySixRequestHome : public Darabonba::Model {
public:
  shared_ptr<HuichengTestGraySixRequestHomeAddress> address{};
  shared_ptr<map<string, HomeDMapValue>> DMap{};
  shared_ptr<vector<HuichengTestGraySixRequestHomeLocations>> locations{};
  shared_ptr<map<string, long>> nameToAge{};
  shared_ptr<vector<string>> phoneNumbers{};
  shared_ptr<HuichengTestGraySixRequestHomeT> t{};

  HuichengTestGraySixRequestHome() {}

  explicit HuichengTestGraySixRequestHome(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = address ? boost::any(address->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (DMap) {
      map<string, boost::any> temp1;
      for(auto item1:*DMap){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["DMap"] = boost::any(temp1);
    }
    if (locations) {
      vector<boost::any> temp1;
      for(auto item1:*locations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Locations"] = boost::any(temp1);
    }
    if (nameToAge) {
      res["NameToAge"] = boost::any(*nameToAge);
    }
    if (phoneNumbers) {
      res["PhoneNumbers"] = boost::any(*phoneNumbers);
    }
    if (t) {
      res["T"] = t ? boost::any(t->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      if (typeid(map<string, boost::any>) == m["Address"].type()) {
        HuichengTestGraySixRequestHomeAddress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Address"]));
        address = make_shared<HuichengTestGraySixRequestHomeAddress>(model1);
      }
    }
    if (m.find("DMap") != m.end() && !m["DMap"].empty()) {
      if (typeid(map<string, boost::any>) == m["DMap"].type()) {
        map<string, HomeDMapValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["DMap"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            HomeDMapValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        DMap = make_shared<map<string, HomeDMapValue>>(expect1);
      }
    }
    if (m.find("Locations") != m.end() && !m["Locations"].empty()) {
      if (typeid(vector<boost::any>) == m["Locations"].type()) {
        vector<HuichengTestGraySixRequestHomeLocations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Locations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HuichengTestGraySixRequestHomeLocations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        locations = make_shared<vector<HuichengTestGraySixRequestHomeLocations>>(expect1);
      }
    }
    if (m.find("NameToAge") != m.end() && !m["NameToAge"].empty()) {
      map<string, long> map1 = boost::any_cast<map<string, long>>(m["NameToAge"]);
      map<string, long> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      nameToAge = make_shared<map<string, long>>(toMap1);
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PhoneNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PhoneNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      phoneNumbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("T") != m.end() && !m["T"].empty()) {
      if (typeid(map<string, boost::any>) == m["T"].type()) {
        HuichengTestGraySixRequestHomeT model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["T"]));
        t = make_shared<HuichengTestGraySixRequestHomeT>(model1);
      }
    }
  }


  virtual ~HuichengTestGraySixRequestHome() = default;
};
class HuichengTestGraySixRequest : public Darabonba::Model {
public:
  shared_ptr<HuichengTestGraySixRequestHome> home{};

  HuichengTestGraySixRequest() {}

  explicit HuichengTestGraySixRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (home) {
      res["Home"] = home ? boost::any(home->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Home") != m.end() && !m["Home"].empty()) {
      if (typeid(map<string, boost::any>) == m["Home"].type()) {
        HuichengTestGraySixRequestHome model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Home"]));
        home = make_shared<HuichengTestGraySixRequestHome>(model1);
      }
    }
  }


  virtual ~HuichengTestGraySixRequest() = default;
};
class HuichengTestGraySixShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> homeShrink{};

  HuichengTestGraySixShrinkRequest() {}

  explicit HuichengTestGraySixShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (homeShrink) {
      res["Home"] = boost::any(*homeShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Home") != m.end() && !m["Home"].empty()) {
      homeShrink = make_shared<string>(boost::any_cast<string>(m["Home"]));
    }
  }


  virtual ~HuichengTestGraySixShrinkRequest() = default;
};
class HuichengTestGraySixResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<string> value{};

  HuichengTestGraySixResponseBody() {}

  explicit HuichengTestGraySixResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~HuichengTestGraySixResponseBody() = default;
};
class HuichengTestGraySixResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HuichengTestGraySixResponseBody> body{};

  HuichengTestGraySixResponse() {}

  explicit HuichengTestGraySixResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HuichengTestGraySixResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HuichengTestGraySixResponseBody>(model1);
      }
    }
  }


  virtual ~HuichengTestGraySixResponse() = default;
};
class HuichengTestGrayTenRequestHomeAddressLocation : public Darabonba::Model {
public:
  shared_ptr<long> late{};
  shared_ptr<long> lon{};

  HuichengTestGrayTenRequestHomeAddressLocation() {}

  explicit HuichengTestGrayTenRequestHomeAddressLocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (late) {
      res["Late"] = boost::any(*late);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Late") != m.end() && !m["Late"].empty()) {
      late = make_shared<long>(boost::any_cast<long>(m["Late"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<long>(boost::any_cast<long>(m["Lon"]));
    }
  }


  virtual ~HuichengTestGrayTenRequestHomeAddressLocation() = default;
};
class HuichengTestGrayTenRequestHomeAddressT : public Darabonba::Model {
public:
  shared_ptr<string> class_{};

  HuichengTestGrayTenRequestHomeAddressT() {}

  explicit HuichengTestGrayTenRequestHomeAddressT(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
  }


  virtual ~HuichengTestGrayTenRequestHomeAddressT() = default;
};
class HuichengTestGrayTenRequestHomeAddress : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<HuichengTestGrayTenRequestHomeAddressLocation> location{};
  shared_ptr<HuichengTestGrayTenRequestHomeAddressT> t{};

  HuichengTestGrayTenRequestHomeAddress() {}

  explicit HuichengTestGrayTenRequestHomeAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (location) {
      res["Location"] = location ? boost::any(location->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (t) {
      res["T"] = t ? boost::any(t->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      if (typeid(map<string, boost::any>) == m["Location"].type()) {
        HuichengTestGrayTenRequestHomeAddressLocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Location"]));
        location = make_shared<HuichengTestGrayTenRequestHomeAddressLocation>(model1);
      }
    }
    if (m.find("T") != m.end() && !m["T"].empty()) {
      if (typeid(map<string, boost::any>) == m["T"].type()) {
        HuichengTestGrayTenRequestHomeAddressT model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["T"]));
        t = make_shared<HuichengTestGrayTenRequestHomeAddressT>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayTenRequestHomeAddress() = default;
};
class HuichengTestGrayTenRequestHomeLocations : public Darabonba::Model {
public:
  shared_ptr<long> late{};
  shared_ptr<long> lon{};

  HuichengTestGrayTenRequestHomeLocations() {}

  explicit HuichengTestGrayTenRequestHomeLocations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (late) {
      res["Late"] = boost::any(*late);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Late") != m.end() && !m["Late"].empty()) {
      late = make_shared<long>(boost::any_cast<long>(m["Late"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<long>(boost::any_cast<long>(m["Lon"]));
    }
  }


  virtual ~HuichengTestGrayTenRequestHomeLocations() = default;
};
class HuichengTestGrayTenRequestHomeT : public Darabonba::Model {
public:
  shared_ptr<string> class_{};

  HuichengTestGrayTenRequestHomeT() {}

  explicit HuichengTestGrayTenRequestHomeT(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
  }


  virtual ~HuichengTestGrayTenRequestHomeT() = default;
};
class HuichengTestGrayTenRequestHome : public Darabonba::Model {
public:
  shared_ptr<HuichengTestGrayTenRequestHomeAddress> address{};
  shared_ptr<map<string, HomeDMapValue>> DMap{};
  shared_ptr<vector<HuichengTestGrayTenRequestHomeLocations>> locations{};
  shared_ptr<map<string, long>> nameToAge{};
  shared_ptr<vector<string>> phoneNumbers{};
  shared_ptr<HuichengTestGrayTenRequestHomeT> t{};

  HuichengTestGrayTenRequestHome() {}

  explicit HuichengTestGrayTenRequestHome(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = address ? boost::any(address->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (DMap) {
      map<string, boost::any> temp1;
      for(auto item1:*DMap){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["DMap"] = boost::any(temp1);
    }
    if (locations) {
      vector<boost::any> temp1;
      for(auto item1:*locations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Locations"] = boost::any(temp1);
    }
    if (nameToAge) {
      res["NameToAge"] = boost::any(*nameToAge);
    }
    if (phoneNumbers) {
      res["PhoneNumbers"] = boost::any(*phoneNumbers);
    }
    if (t) {
      res["T"] = t ? boost::any(t->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      if (typeid(map<string, boost::any>) == m["Address"].type()) {
        HuichengTestGrayTenRequestHomeAddress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Address"]));
        address = make_shared<HuichengTestGrayTenRequestHomeAddress>(model1);
      }
    }
    if (m.find("DMap") != m.end() && !m["DMap"].empty()) {
      if (typeid(map<string, boost::any>) == m["DMap"].type()) {
        map<string, HomeDMapValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["DMap"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            HomeDMapValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        DMap = make_shared<map<string, HomeDMapValue>>(expect1);
      }
    }
    if (m.find("Locations") != m.end() && !m["Locations"].empty()) {
      if (typeid(vector<boost::any>) == m["Locations"].type()) {
        vector<HuichengTestGrayTenRequestHomeLocations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Locations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HuichengTestGrayTenRequestHomeLocations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        locations = make_shared<vector<HuichengTestGrayTenRequestHomeLocations>>(expect1);
      }
    }
    if (m.find("NameToAge") != m.end() && !m["NameToAge"].empty()) {
      map<string, long> map1 = boost::any_cast<map<string, long>>(m["NameToAge"]);
      map<string, long> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      nameToAge = make_shared<map<string, long>>(toMap1);
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PhoneNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PhoneNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      phoneNumbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("T") != m.end() && !m["T"].empty()) {
      if (typeid(map<string, boost::any>) == m["T"].type()) {
        HuichengTestGrayTenRequestHomeT model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["T"]));
        t = make_shared<HuichengTestGrayTenRequestHomeT>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayTenRequestHome() = default;
};
class HuichengTestGrayTenRequest : public Darabonba::Model {
public:
  shared_ptr<HuichengTestGrayTenRequestHome> home{};

  HuichengTestGrayTenRequest() {}

  explicit HuichengTestGrayTenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (home) {
      res["Home"] = home ? boost::any(home->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Home") != m.end() && !m["Home"].empty()) {
      if (typeid(map<string, boost::any>) == m["Home"].type()) {
        HuichengTestGrayTenRequestHome model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Home"]));
        home = make_shared<HuichengTestGrayTenRequestHome>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayTenRequest() = default;
};
class HuichengTestGrayTenShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> homeShrink{};

  HuichengTestGrayTenShrinkRequest() {}

  explicit HuichengTestGrayTenShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (homeShrink) {
      res["Home"] = boost::any(*homeShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Home") != m.end() && !m["Home"].empty()) {
      homeShrink = make_shared<string>(boost::any_cast<string>(m["Home"]));
    }
  }


  virtual ~HuichengTestGrayTenShrinkRequest() = default;
};
class HuichengTestGrayTenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<string> value{};

  HuichengTestGrayTenResponseBody() {}

  explicit HuichengTestGrayTenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~HuichengTestGrayTenResponseBody() = default;
};
class HuichengTestGrayTenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HuichengTestGrayTenResponseBody> body{};

  HuichengTestGrayTenResponse() {}

  explicit HuichengTestGrayTenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HuichengTestGrayTenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HuichengTestGrayTenResponseBody>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayTenResponse() = default;
};
class HuichengTestGrayThirdRequestHomeAddressLocation : public Darabonba::Model {
public:
  shared_ptr<long> late{};
  shared_ptr<long> lon{};

  HuichengTestGrayThirdRequestHomeAddressLocation() {}

  explicit HuichengTestGrayThirdRequestHomeAddressLocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (late) {
      res["Late"] = boost::any(*late);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Late") != m.end() && !m["Late"].empty()) {
      late = make_shared<long>(boost::any_cast<long>(m["Late"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<long>(boost::any_cast<long>(m["Lon"]));
    }
  }


  virtual ~HuichengTestGrayThirdRequestHomeAddressLocation() = default;
};
class HuichengTestGrayThirdRequestHomeAddressT : public Darabonba::Model {
public:
  shared_ptr<string> class_{};

  HuichengTestGrayThirdRequestHomeAddressT() {}

  explicit HuichengTestGrayThirdRequestHomeAddressT(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
  }


  virtual ~HuichengTestGrayThirdRequestHomeAddressT() = default;
};
class HuichengTestGrayThirdRequestHomeAddress : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<HuichengTestGrayThirdRequestHomeAddressLocation> location{};
  shared_ptr<HuichengTestGrayThirdRequestHomeAddressT> t{};

  HuichengTestGrayThirdRequestHomeAddress() {}

  explicit HuichengTestGrayThirdRequestHomeAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (location) {
      res["Location"] = location ? boost::any(location->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (t) {
      res["T"] = t ? boost::any(t->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      if (typeid(map<string, boost::any>) == m["Location"].type()) {
        HuichengTestGrayThirdRequestHomeAddressLocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Location"]));
        location = make_shared<HuichengTestGrayThirdRequestHomeAddressLocation>(model1);
      }
    }
    if (m.find("T") != m.end() && !m["T"].empty()) {
      if (typeid(map<string, boost::any>) == m["T"].type()) {
        HuichengTestGrayThirdRequestHomeAddressT model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["T"]));
        t = make_shared<HuichengTestGrayThirdRequestHomeAddressT>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayThirdRequestHomeAddress() = default;
};
class HuichengTestGrayThirdRequestHomeLocations : public Darabonba::Model {
public:
  shared_ptr<long> late{};
  shared_ptr<long> lon{};

  HuichengTestGrayThirdRequestHomeLocations() {}

  explicit HuichengTestGrayThirdRequestHomeLocations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (late) {
      res["Late"] = boost::any(*late);
    }
    if (lon) {
      res["Lon"] = boost::any(*lon);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Late") != m.end() && !m["Late"].empty()) {
      late = make_shared<long>(boost::any_cast<long>(m["Late"]));
    }
    if (m.find("Lon") != m.end() && !m["Lon"].empty()) {
      lon = make_shared<long>(boost::any_cast<long>(m["Lon"]));
    }
  }


  virtual ~HuichengTestGrayThirdRequestHomeLocations() = default;
};
class HuichengTestGrayThirdRequestHomeT : public Darabonba::Model {
public:
  shared_ptr<string> class_{};

  HuichengTestGrayThirdRequestHomeT() {}

  explicit HuichengTestGrayThirdRequestHomeT(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (class_) {
      res["Class"] = boost::any(*class_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Class") != m.end() && !m["Class"].empty()) {
      class_ = make_shared<string>(boost::any_cast<string>(m["Class"]));
    }
  }


  virtual ~HuichengTestGrayThirdRequestHomeT() = default;
};
class HuichengTestGrayThirdRequestHome : public Darabonba::Model {
public:
  shared_ptr<HuichengTestGrayThirdRequestHomeAddress> address{};
  shared_ptr<map<string, HomeDMapValue>> DMap{};
  shared_ptr<vector<HuichengTestGrayThirdRequestHomeLocations>> locations{};
  shared_ptr<map<string, long>> nameToAge{};
  shared_ptr<vector<string>> phoneNumbers{};
  shared_ptr<HuichengTestGrayThirdRequestHomeT> t{};

  HuichengTestGrayThirdRequestHome() {}

  explicit HuichengTestGrayThirdRequestHome(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = address ? boost::any(address->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (DMap) {
      map<string, boost::any> temp1;
      for(auto item1:*DMap){
        temp1[item1.first] = boost::any(item1.second.toMap());
      }
      res["DMap"] = boost::any(temp1);
    }
    if (locations) {
      vector<boost::any> temp1;
      for(auto item1:*locations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Locations"] = boost::any(temp1);
    }
    if (nameToAge) {
      res["NameToAge"] = boost::any(*nameToAge);
    }
    if (phoneNumbers) {
      res["PhoneNumbers"] = boost::any(*phoneNumbers);
    }
    if (t) {
      res["T"] = t ? boost::any(t->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      if (typeid(map<string, boost::any>) == m["Address"].type()) {
        HuichengTestGrayThirdRequestHomeAddress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Address"]));
        address = make_shared<HuichengTestGrayThirdRequestHomeAddress>(model1);
      }
    }
    if (m.find("DMap") != m.end() && !m["DMap"].empty()) {
      if (typeid(map<string, boost::any>) == m["DMap"].type()) {
        map<string, HomeDMapValue> expect1;
        for(auto item1:boost::any_cast<map<string, boost::any>>(m["DMap"])){
          if (typeid(map<string, boost::any>) == item1.second.type()) {
            HomeDMapValue model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1.second));
            expect1[item1.first] = model2;
          }
        }
        DMap = make_shared<map<string, HomeDMapValue>>(expect1);
      }
    }
    if (m.find("Locations") != m.end() && !m["Locations"].empty()) {
      if (typeid(vector<boost::any>) == m["Locations"].type()) {
        vector<HuichengTestGrayThirdRequestHomeLocations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Locations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            HuichengTestGrayThirdRequestHomeLocations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        locations = make_shared<vector<HuichengTestGrayThirdRequestHomeLocations>>(expect1);
      }
    }
    if (m.find("NameToAge") != m.end() && !m["NameToAge"].empty()) {
      map<string, long> map1 = boost::any_cast<map<string, long>>(m["NameToAge"]);
      map<string, long> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      nameToAge = make_shared<map<string, long>>(toMap1);
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PhoneNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PhoneNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      phoneNumbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("T") != m.end() && !m["T"].empty()) {
      if (typeid(map<string, boost::any>) == m["T"].type()) {
        HuichengTestGrayThirdRequestHomeT model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["T"]));
        t = make_shared<HuichengTestGrayThirdRequestHomeT>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayThirdRequestHome() = default;
};
class HuichengTestGrayThirdRequest : public Darabonba::Model {
public:
  shared_ptr<HuichengTestGrayThirdRequestHome> home{};

  HuichengTestGrayThirdRequest() {}

  explicit HuichengTestGrayThirdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (home) {
      res["Home"] = home ? boost::any(home->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Home") != m.end() && !m["Home"].empty()) {
      if (typeid(map<string, boost::any>) == m["Home"].type()) {
        HuichengTestGrayThirdRequestHome model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Home"]));
        home = make_shared<HuichengTestGrayThirdRequestHome>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayThirdRequest() = default;
};
class HuichengTestGrayThirdShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> homeShrink{};

  HuichengTestGrayThirdShrinkRequest() {}

  explicit HuichengTestGrayThirdShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (homeShrink) {
      res["Home"] = boost::any(*homeShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Home") != m.end() && !m["Home"].empty()) {
      homeShrink = make_shared<string>(boost::any_cast<string>(m["Home"]));
    }
  }


  virtual ~HuichengTestGrayThirdShrinkRequest() = default;
};
class HuichengTestGrayThirdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<string> value{};

  HuichengTestGrayThirdResponseBody() {}

  explicit HuichengTestGrayThirdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~HuichengTestGrayThirdResponseBody() = default;
};
class HuichengTestGrayThirdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HuichengTestGrayThirdResponseBody> body{};

  HuichengTestGrayThirdResponse() {}

  explicit HuichengTestGrayThirdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HuichengTestGrayThirdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HuichengTestGrayThirdResponseBody>(model1);
      }
    }
  }


  virtual ~HuichengTestGrayThirdResponse() = default;
};
class HuichengTestResourceOwnerIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  HuichengTestResourceOwnerIdResponseBody() {}

  explicit HuichengTestResourceOwnerIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~HuichengTestResourceOwnerIdResponseBody() = default;
};
class HuichengTestResourceOwnerIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HuichengTestResourceOwnerIdResponseBody> body{};

  HuichengTestResourceOwnerIdResponse() {}

  explicit HuichengTestResourceOwnerIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HuichengTestResourceOwnerIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HuichengTestResourceOwnerIdResponseBody>(model1);
      }
    }
  }


  virtual ~HuichengTestResourceOwnerIdResponse() = default;
};
class HuichengetRequest : public Darabonba::Model {
public:
  shared_ptr<string> add{};
  shared_ptr<string> address{};
  shared_ptr<string> apple{};
  shared_ptr<string> blue{};
  shared_ptr<string> code{};
  shared_ptr<string> east{};
  shared_ptr<string> enight{};
  shared_ptr<string> five{};
  shared_ptr<string> four{};
  shared_ptr<string> hello{};
  shared_ptr<string> hold{};
  shared_ptr<string> jack{};
  shared_ptr<string> list{};
  shared_ptr<string> mack{};
  shared_ptr<string> new1{};
  shared_ptr<string> newName{};
  shared_ptr<string> news{};
  shared_ptr<string> nigh{};
  shared_ptr<string> now{};
  shared_ptr<string> params{};
  shared_ptr<string> params1{};
  shared_ptr<string> params2{};
  shared_ptr<string> params3{};
  shared_ptr<string> params4{};
  shared_ptr<string> red{};
  shared_ptr<string> rong{};
  shared_ptr<string> six{};
  shared_ptr<string> tea{};
  shared_ptr<string> ten{};
  shared_ptr<string> three{};
  shared_ptr<string> two{};
  shared_ptr<string> visity{};
  shared_ptr<string> white{};

  HuichengetRequest() {}

  explicit HuichengetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (add) {
      res["Add"] = boost::any(*add);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (apple) {
      res["Apple"] = boost::any(*apple);
    }
    if (blue) {
      res["Blue"] = boost::any(*blue);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (east) {
      res["East"] = boost::any(*east);
    }
    if (enight) {
      res["Enight"] = boost::any(*enight);
    }
    if (five) {
      res["Five"] = boost::any(*five);
    }
    if (four) {
      res["Four"] = boost::any(*four);
    }
    if (hello) {
      res["Hello"] = boost::any(*hello);
    }
    if (hold) {
      res["Hold"] = boost::any(*hold);
    }
    if (jack) {
      res["Jack"] = boost::any(*jack);
    }
    if (list) {
      res["List"] = boost::any(*list);
    }
    if (mack) {
      res["Mack"] = boost::any(*mack);
    }
    if (new1) {
      res["New1"] = boost::any(*new1);
    }
    if (newName) {
      res["NewName"] = boost::any(*newName);
    }
    if (news) {
      res["News"] = boost::any(*news);
    }
    if (nigh) {
      res["Nigh"] = boost::any(*nigh);
    }
    if (now) {
      res["Now"] = boost::any(*now);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (params1) {
      res["Params1"] = boost::any(*params1);
    }
    if (params2) {
      res["Params2"] = boost::any(*params2);
    }
    if (params3) {
      res["Params3"] = boost::any(*params3);
    }
    if (params4) {
      res["Params4"] = boost::any(*params4);
    }
    if (red) {
      res["Red"] = boost::any(*red);
    }
    if (rong) {
      res["Rong"] = boost::any(*rong);
    }
    if (six) {
      res["Six"] = boost::any(*six);
    }
    if (tea) {
      res["Tea"] = boost::any(*tea);
    }
    if (ten) {
      res["Ten"] = boost::any(*ten);
    }
    if (three) {
      res["Three"] = boost::any(*three);
    }
    if (two) {
      res["Two"] = boost::any(*two);
    }
    if (visity) {
      res["Visity"] = boost::any(*visity);
    }
    if (white) {
      res["White"] = boost::any(*white);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Add") != m.end() && !m["Add"].empty()) {
      add = make_shared<string>(boost::any_cast<string>(m["Add"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Apple") != m.end() && !m["Apple"].empty()) {
      apple = make_shared<string>(boost::any_cast<string>(m["Apple"]));
    }
    if (m.find("Blue") != m.end() && !m["Blue"].empty()) {
      blue = make_shared<string>(boost::any_cast<string>(m["Blue"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("East") != m.end() && !m["East"].empty()) {
      east = make_shared<string>(boost::any_cast<string>(m["East"]));
    }
    if (m.find("Enight") != m.end() && !m["Enight"].empty()) {
      enight = make_shared<string>(boost::any_cast<string>(m["Enight"]));
    }
    if (m.find("Five") != m.end() && !m["Five"].empty()) {
      five = make_shared<string>(boost::any_cast<string>(m["Five"]));
    }
    if (m.find("Four") != m.end() && !m["Four"].empty()) {
      four = make_shared<string>(boost::any_cast<string>(m["Four"]));
    }
    if (m.find("Hello") != m.end() && !m["Hello"].empty()) {
      hello = make_shared<string>(boost::any_cast<string>(m["Hello"]));
    }
    if (m.find("Hold") != m.end() && !m["Hold"].empty()) {
      hold = make_shared<string>(boost::any_cast<string>(m["Hold"]));
    }
    if (m.find("Jack") != m.end() && !m["Jack"].empty()) {
      jack = make_shared<string>(boost::any_cast<string>(m["Jack"]));
    }
    if (m.find("List") != m.end() && !m["List"].empty()) {
      list = make_shared<string>(boost::any_cast<string>(m["List"]));
    }
    if (m.find("Mack") != m.end() && !m["Mack"].empty()) {
      mack = make_shared<string>(boost::any_cast<string>(m["Mack"]));
    }
    if (m.find("New1") != m.end() && !m["New1"].empty()) {
      new1 = make_shared<string>(boost::any_cast<string>(m["New1"]));
    }
    if (m.find("NewName") != m.end() && !m["NewName"].empty()) {
      newName = make_shared<string>(boost::any_cast<string>(m["NewName"]));
    }
    if (m.find("News") != m.end() && !m["News"].empty()) {
      news = make_shared<string>(boost::any_cast<string>(m["News"]));
    }
    if (m.find("Nigh") != m.end() && !m["Nigh"].empty()) {
      nigh = make_shared<string>(boost::any_cast<string>(m["Nigh"]));
    }
    if (m.find("Now") != m.end() && !m["Now"].empty()) {
      now = make_shared<string>(boost::any_cast<string>(m["Now"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("Params1") != m.end() && !m["Params1"].empty()) {
      params1 = make_shared<string>(boost::any_cast<string>(m["Params1"]));
    }
    if (m.find("Params2") != m.end() && !m["Params2"].empty()) {
      params2 = make_shared<string>(boost::any_cast<string>(m["Params2"]));
    }
    if (m.find("Params3") != m.end() && !m["Params3"].empty()) {
      params3 = make_shared<string>(boost::any_cast<string>(m["Params3"]));
    }
    if (m.find("Params4") != m.end() && !m["Params4"].empty()) {
      params4 = make_shared<string>(boost::any_cast<string>(m["Params4"]));
    }
    if (m.find("Red") != m.end() && !m["Red"].empty()) {
      red = make_shared<string>(boost::any_cast<string>(m["Red"]));
    }
    if (m.find("Rong") != m.end() && !m["Rong"].empty()) {
      rong = make_shared<string>(boost::any_cast<string>(m["Rong"]));
    }
    if (m.find("Six") != m.end() && !m["Six"].empty()) {
      six = make_shared<string>(boost::any_cast<string>(m["Six"]));
    }
    if (m.find("Tea") != m.end() && !m["Tea"].empty()) {
      tea = make_shared<string>(boost::any_cast<string>(m["Tea"]));
    }
    if (m.find("Ten") != m.end() && !m["Ten"].empty()) {
      ten = make_shared<string>(boost::any_cast<string>(m["Ten"]));
    }
    if (m.find("Three") != m.end() && !m["Three"].empty()) {
      three = make_shared<string>(boost::any_cast<string>(m["Three"]));
    }
    if (m.find("Two") != m.end() && !m["Two"].empty()) {
      two = make_shared<string>(boost::any_cast<string>(m["Two"]));
    }
    if (m.find("Visity") != m.end() && !m["Visity"].empty()) {
      visity = make_shared<string>(boost::any_cast<string>(m["Visity"]));
    }
    if (m.find("White") != m.end() && !m["White"].empty()) {
      white = make_shared<string>(boost::any_cast<string>(m["White"]));
    }
  }


  virtual ~HuichengetRequest() = default;
};
class HuichengetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> age{};
  shared_ptr<string> apple{};
  shared_ptr<string> blue{};
  shared_ptr<string> code{};
  shared_ptr<string> even{};
  shared_ptr<string> five{};
  shared_ptr<string> instanceId4{};
  shared_ptr<string> message{};
  shared_ptr<string> night{};
  shared_ptr<string> requestId{};
  shared_ptr<string> seven{};
  shared_ptr<string> six{};

  HuichengetResponseBody() {}

  explicit HuichengetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (age) {
      res["Age"] = boost::any(*age);
    }
    if (apple) {
      res["Apple"] = boost::any(*apple);
    }
    if (blue) {
      res["Blue"] = boost::any(*blue);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (even) {
      res["Even"] = boost::any(*even);
    }
    if (five) {
      res["Five"] = boost::any(*five);
    }
    if (instanceId4) {
      res["InstanceId4"] = boost::any(*instanceId4);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (night) {
      res["Night"] = boost::any(*night);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (seven) {
      res["Seven"] = boost::any(*seven);
    }
    if (six) {
      res["Six"] = boost::any(*six);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Age") != m.end() && !m["Age"].empty()) {
      age = make_shared<string>(boost::any_cast<string>(m["Age"]));
    }
    if (m.find("Apple") != m.end() && !m["Apple"].empty()) {
      apple = make_shared<string>(boost::any_cast<string>(m["Apple"]));
    }
    if (m.find("Blue") != m.end() && !m["Blue"].empty()) {
      blue = make_shared<string>(boost::any_cast<string>(m["Blue"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Even") != m.end() && !m["Even"].empty()) {
      even = make_shared<string>(boost::any_cast<string>(m["Even"]));
    }
    if (m.find("Five") != m.end() && !m["Five"].empty()) {
      five = make_shared<string>(boost::any_cast<string>(m["Five"]));
    }
    if (m.find("InstanceId4") != m.end() && !m["InstanceId4"].empty()) {
      instanceId4 = make_shared<string>(boost::any_cast<string>(m["InstanceId4"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Night") != m.end() && !m["Night"].empty()) {
      night = make_shared<string>(boost::any_cast<string>(m["Night"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Seven") != m.end() && !m["Seven"].empty()) {
      seven = make_shared<string>(boost::any_cast<string>(m["Seven"]));
    }
    if (m.find("Six") != m.end() && !m["Six"].empty()) {
      six = make_shared<string>(boost::any_cast<string>(m["Six"]));
    }
  }


  virtual ~HuichengetResponseBody() = default;
};
class HuichengetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HuichengetResponseBody> body{};

  HuichengetResponse() {}

  explicit HuichengetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HuichengetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HuichengetResponseBody>(model1);
      }
    }
  }


  virtual ~HuichengetResponse() = default;
};
class HuichengetestResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  HuichengetestResponseBody() {}

  explicit HuichengetestResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~HuichengetestResponseBody() = default;
};
class HuichengetestResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HuichengetestResponseBody> body{};

  HuichengetestResponse() {}

  explicit HuichengetestResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HuichengetestResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HuichengetestResponseBody>(model1);
      }
    }
  }


  virtual ~HuichengetestResponse() = default;
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
  CreateRulesResponse createRulesWithOptions(shared_ptr<CreateRulesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRulesResponse createRules(shared_ptr<CreateRulesRequest> request);
  HuichengTestGrayResponse huichengTestGrayWithOptions(shared_ptr<HuichengTestGrayRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HuichengTestGrayResponse huichengTestGray(shared_ptr<HuichengTestGrayRequest> request);
  HuichengTestGrayEightResponse huichengTestGrayEightWithOptions(shared_ptr<HuichengTestGrayEightRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HuichengTestGrayEightResponse huichengTestGrayEight(shared_ptr<HuichengTestGrayEightRequest> request);
  HuichengTestGrayFifthResponse huichengTestGrayFifthWithOptions(shared_ptr<HuichengTestGrayFifthRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HuichengTestGrayFifthResponse huichengTestGrayFifth(shared_ptr<HuichengTestGrayFifthRequest> request);
  HuichengTestGrayNineResponse huichengTestGrayNineWithOptions(shared_ptr<HuichengTestGrayNineRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HuichengTestGrayNineResponse huichengTestGrayNine(shared_ptr<HuichengTestGrayNineRequest> request);
  HuichengTestGraySecondResponse huichengTestGraySecondWithOptions(shared_ptr<HuichengTestGraySecondRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HuichengTestGraySecondResponse huichengTestGraySecond(shared_ptr<HuichengTestGraySecondRequest> request);
  HuichengTestGraySevenResponse huichengTestGraySevenWithOptions(shared_ptr<HuichengTestGraySevenRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HuichengTestGraySevenResponse huichengTestGraySeven(shared_ptr<HuichengTestGraySevenRequest> request);
  HuichengTestGraySixResponse huichengTestGraySixWithOptions(shared_ptr<HuichengTestGraySixRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HuichengTestGraySixResponse huichengTestGraySix(shared_ptr<HuichengTestGraySixRequest> request);
  HuichengTestGrayTenResponse huichengTestGrayTenWithOptions(shared_ptr<HuichengTestGrayTenRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HuichengTestGrayTenResponse huichengTestGrayTen(shared_ptr<HuichengTestGrayTenRequest> request);
  HuichengTestGrayThirdResponse huichengTestGrayThirdWithOptions(shared_ptr<HuichengTestGrayThirdRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HuichengTestGrayThirdResponse huichengTestGrayThird(shared_ptr<HuichengTestGrayThirdRequest> request);
  HuichengTestResourceOwnerIdResponse huichengTestResourceOwnerIdWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HuichengTestResourceOwnerIdResponse huichengTestResourceOwnerId();
  HuichengetResponse huichengetWithOptions(shared_ptr<HuichengetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HuichengetResponse huichenget(shared_ptr<HuichengetRequest> request);
  HuichengetestResponse huichengetestWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HuichengetestResponse huichengetest();

  virtual ~Client() = default;
};
} // namespace Alibabacloud_AmpTest20201230

#endif
