// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_QSSJ20220112_H_
#define ALIBABACLOUD_QSSJ20220112_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Qssj20220112 {
class GetAgeDistributionRequest : public Darabonba::Model {
public:
  shared_ptr<string> cateIds{};

  GetAgeDistributionRequest() {}

  explicit GetAgeDistributionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cateIds) {
      res["CateIds"] = boost::any(*cateIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CateIds") != m.end() && !m["CateIds"].empty()) {
      cateIds = make_shared<string>(boost::any_cast<string>(m["CateIds"]));
    }
  }


  virtual ~GetAgeDistributionRequest() = default;
};
class GetAgeDistributionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> ageRange{};
  shared_ptr<long> saleNumbers{};
  shared_ptr<long> searchNumbers{};

  GetAgeDistributionResponseBodyData() {}

  explicit GetAgeDistributionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ageRange) {
      res["AgeRange"] = boost::any(*ageRange);
    }
    if (saleNumbers) {
      res["SaleNumbers"] = boost::any(*saleNumbers);
    }
    if (searchNumbers) {
      res["SearchNumbers"] = boost::any(*searchNumbers);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgeRange") != m.end() && !m["AgeRange"].empty()) {
      ageRange = make_shared<string>(boost::any_cast<string>(m["AgeRange"]));
    }
    if (m.find("SaleNumbers") != m.end() && !m["SaleNumbers"].empty()) {
      saleNumbers = make_shared<long>(boost::any_cast<long>(m["SaleNumbers"]));
    }
    if (m.find("SearchNumbers") != m.end() && !m["SearchNumbers"].empty()) {
      searchNumbers = make_shared<long>(boost::any_cast<long>(m["SearchNumbers"]));
    }
  }


  virtual ~GetAgeDistributionResponseBodyData() = default;
};
class GetAgeDistributionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetAgeDistributionResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> successResponse{};

  GetAgeDistributionResponseBody() {}

  explicit GetAgeDistributionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successResponse) {
      res["SuccessResponse"] = boost::any(*successResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetAgeDistributionResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAgeDistributionResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetAgeDistributionResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessResponse") != m.end() && !m["SuccessResponse"].empty()) {
      successResponse = make_shared<string>(boost::any_cast<string>(m["SuccessResponse"]));
    }
  }


  virtual ~GetAgeDistributionResponseBody() = default;
};
class GetAgeDistributionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAgeDistributionResponseBody> body{};

  GetAgeDistributionResponse() {}

  explicit GetAgeDistributionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAgeDistributionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAgeDistributionResponseBody>(model1);
      }
    }
  }


  virtual ~GetAgeDistributionResponse() = default;
};
class GetAllTrendCategoryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<long> categoryLevel{};
  shared_ptr<string> categoryName{};
  shared_ptr<vector<boost::any>> childCategory{};
  shared_ptr<string> superCategoryName{};

  GetAllTrendCategoryResponseBodyData() {}

  explicit GetAllTrendCategoryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (categoryLevel) {
      res["CategoryLevel"] = boost::any(*categoryLevel);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (childCategory) {
      res["ChildCategory"] = boost::any(*childCategory);
    }
    if (superCategoryName) {
      res["SuperCategoryName"] = boost::any(*superCategoryName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("CategoryLevel") != m.end() && !m["CategoryLevel"].empty()) {
      categoryLevel = make_shared<long>(boost::any_cast<long>(m["CategoryLevel"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("ChildCategory") != m.end() && !m["ChildCategory"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["ChildCategory"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ChildCategory"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      childCategory = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("SuperCategoryName") != m.end() && !m["SuperCategoryName"].empty()) {
      superCategoryName = make_shared<string>(boost::any_cast<string>(m["SuperCategoryName"]));
    }
  }


  virtual ~GetAllTrendCategoryResponseBodyData() = default;
};
class GetAllTrendCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetAllTrendCategoryResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successResponse{};

  GetAllTrendCategoryResponseBody() {}

  explicit GetAllTrendCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successResponse) {
      res["SuccessResponse"] = boost::any(*successResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetAllTrendCategoryResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAllTrendCategoryResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetAllTrendCategoryResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessResponse") != m.end() && !m["SuccessResponse"].empty()) {
      successResponse = make_shared<bool>(boost::any_cast<bool>(m["SuccessResponse"]));
    }
  }


  virtual ~GetAllTrendCategoryResponseBody() = default;
};
class GetAllTrendCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAllTrendCategoryResponseBody> body{};

  GetAllTrendCategoryResponse() {}

  explicit GetAllTrendCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAllTrendCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAllTrendCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~GetAllTrendCategoryResponse() = default;
};
class GetCrowdLabelRequest : public Darabonba::Model {
public:
  shared_ptr<string> cateIds{};

  GetCrowdLabelRequest() {}

  explicit GetCrowdLabelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cateIds) {
      res["CateIds"] = boost::any(*cateIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CateIds") != m.end() && !m["CateIds"].empty()) {
      cateIds = make_shared<string>(boost::any_cast<string>(m["CateIds"]));
    }
  }


  virtual ~GetCrowdLabelRequest() = default;
};
class GetCrowdLabelResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> closingDate{};
  shared_ptr<string> labelName{};
  shared_ptr<double> orderAmount{};
  shared_ptr<double> purchaseAmount{};
  shared_ptr<double> searchVolume{};

  GetCrowdLabelResponseBodyData() {}

  explicit GetCrowdLabelResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (closingDate) {
      res["ClosingDate"] = boost::any(*closingDate);
    }
    if (labelName) {
      res["LabelName"] = boost::any(*labelName);
    }
    if (orderAmount) {
      res["OrderAmount"] = boost::any(*orderAmount);
    }
    if (purchaseAmount) {
      res["PurchaseAmount"] = boost::any(*purchaseAmount);
    }
    if (searchVolume) {
      res["SearchVolume"] = boost::any(*searchVolume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClosingDate") != m.end() && !m["ClosingDate"].empty()) {
      closingDate = make_shared<string>(boost::any_cast<string>(m["ClosingDate"]));
    }
    if (m.find("LabelName") != m.end() && !m["LabelName"].empty()) {
      labelName = make_shared<string>(boost::any_cast<string>(m["LabelName"]));
    }
    if (m.find("OrderAmount") != m.end() && !m["OrderAmount"].empty()) {
      orderAmount = make_shared<double>(boost::any_cast<double>(m["OrderAmount"]));
    }
    if (m.find("PurchaseAmount") != m.end() && !m["PurchaseAmount"].empty()) {
      purchaseAmount = make_shared<double>(boost::any_cast<double>(m["PurchaseAmount"]));
    }
    if (m.find("SearchVolume") != m.end() && !m["SearchVolume"].empty()) {
      searchVolume = make_shared<double>(boost::any_cast<double>(m["SearchVolume"]));
    }
  }


  virtual ~GetCrowdLabelResponseBodyData() = default;
};
class GetCrowdLabelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetCrowdLabelResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> successResponse{};

  GetCrowdLabelResponseBody() {}

  explicit GetCrowdLabelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successResponse) {
      res["SuccessResponse"] = boost::any(*successResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetCrowdLabelResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCrowdLabelResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetCrowdLabelResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessResponse") != m.end() && !m["SuccessResponse"].empty()) {
      successResponse = make_shared<string>(boost::any_cast<string>(m["SuccessResponse"]));
    }
  }


  virtual ~GetCrowdLabelResponseBody() = default;
};
class GetCrowdLabelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCrowdLabelResponseBody> body{};

  GetCrowdLabelResponse() {}

  explicit GetCrowdLabelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCrowdLabelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCrowdLabelResponseBody>(model1);
      }
    }
  }


  virtual ~GetCrowdLabelResponse() = default;
};
class GetCrowdReginRequest : public Darabonba::Model {
public:
  shared_ptr<string> cateIds{};

  GetCrowdReginRequest() {}

  explicit GetCrowdReginRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cateIds) {
      res["CateIds"] = boost::any(*cateIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CateIds") != m.end() && !m["CateIds"].empty()) {
      cateIds = make_shared<string>(boost::any_cast<string>(m["CateIds"]));
    }
  }


  virtual ~GetCrowdReginRequest() = default;
};
class GetCrowdReginResponseBodyDataSaleNumbers : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> value{};

  GetCrowdReginResponseBodyDataSaleNumbers() {}

  explicit GetCrowdReginResponseBodyDataSaleNumbers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      value = make_shared<long>(boost::any_cast<long>(m["Value"]));
    }
  }


  virtual ~GetCrowdReginResponseBodyDataSaleNumbers() = default;
};
class GetCrowdReginResponseBodyDataSearchNumbers : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> value{};

  GetCrowdReginResponseBodyDataSearchNumbers() {}

  explicit GetCrowdReginResponseBodyDataSearchNumbers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      value = make_shared<long>(boost::any_cast<long>(m["Value"]));
    }
  }


  virtual ~GetCrowdReginResponseBodyDataSearchNumbers() = default;
};
class GetCrowdReginResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetCrowdReginResponseBodyDataSaleNumbers>> saleNumbers{};
  shared_ptr<vector<GetCrowdReginResponseBodyDataSearchNumbers>> searchNumbers{};

  GetCrowdReginResponseBodyData() {}

  explicit GetCrowdReginResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (saleNumbers) {
      vector<boost::any> temp1;
      for(auto item1:*saleNumbers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SaleNumbers"] = boost::any(temp1);
    }
    if (searchNumbers) {
      vector<boost::any> temp1;
      for(auto item1:*searchNumbers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SearchNumbers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SaleNumbers") != m.end() && !m["SaleNumbers"].empty()) {
      if (typeid(vector<boost::any>) == m["SaleNumbers"].type()) {
        vector<GetCrowdReginResponseBodyDataSaleNumbers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SaleNumbers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCrowdReginResponseBodyDataSaleNumbers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        saleNumbers = make_shared<vector<GetCrowdReginResponseBodyDataSaleNumbers>>(expect1);
      }
    }
    if (m.find("SearchNumbers") != m.end() && !m["SearchNumbers"].empty()) {
      if (typeid(vector<boost::any>) == m["SearchNumbers"].type()) {
        vector<GetCrowdReginResponseBodyDataSearchNumbers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SearchNumbers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCrowdReginResponseBodyDataSearchNumbers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        searchNumbers = make_shared<vector<GetCrowdReginResponseBodyDataSearchNumbers>>(expect1);
      }
    }
  }


  virtual ~GetCrowdReginResponseBodyData() = default;
};
class GetCrowdReginResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetCrowdReginResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successResponse{};

  GetCrowdReginResponseBody() {}

  explicit GetCrowdReginResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (successResponse) {
      res["SuccessResponse"] = boost::any(*successResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetCrowdReginResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCrowdReginResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessResponse") != m.end() && !m["SuccessResponse"].empty()) {
      successResponse = make_shared<bool>(boost::any_cast<bool>(m["SuccessResponse"]));
    }
  }


  virtual ~GetCrowdReginResponseBody() = default;
};
class GetCrowdReginResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCrowdReginResponseBody> body{};

  GetCrowdReginResponse() {}

  explicit GetCrowdReginResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCrowdReginResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCrowdReginResponseBody>(model1);
      }
    }
  }


  virtual ~GetCrowdReginResponse() = default;
};
class GetOpportunityMarketRequest : public Darabonba::Model {
public:
  shared_ptr<string> cateIds{};
  shared_ptr<long> timeDisplay{};

  GetOpportunityMarketRequest() {}

  explicit GetOpportunityMarketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cateIds) {
      res["CateIds"] = boost::any(*cateIds);
    }
    if (timeDisplay) {
      res["TimeDisplay"] = boost::any(*timeDisplay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CateIds") != m.end() && !m["CateIds"].empty()) {
      cateIds = make_shared<string>(boost::any_cast<string>(m["CateIds"]));
    }
    if (m.find("TimeDisplay") != m.end() && !m["TimeDisplay"].empty()) {
      timeDisplay = make_shared<long>(boost::any_cast<long>(m["TimeDisplay"]));
    }
  }


  virtual ~GetOpportunityMarketRequest() = default;
};
class GetOpportunityMarketResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> cateName{};
  shared_ptr<double> opportunityIndex{};
  shared_ptr<double> relativeCommodity{};
  shared_ptr<double> relativeDischarge{};
  shared_ptr<string> timeUnit{};

  GetOpportunityMarketResponseBodyData() {}

  explicit GetOpportunityMarketResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cateName) {
      res["CateName"] = boost::any(*cateName);
    }
    if (opportunityIndex) {
      res["OpportunityIndex"] = boost::any(*opportunityIndex);
    }
    if (relativeCommodity) {
      res["RelativeCommodity"] = boost::any(*relativeCommodity);
    }
    if (relativeDischarge) {
      res["RelativeDischarge"] = boost::any(*relativeDischarge);
    }
    if (timeUnit) {
      res["TimeUnit"] = boost::any(*timeUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CateName") != m.end() && !m["CateName"].empty()) {
      cateName = make_shared<string>(boost::any_cast<string>(m["CateName"]));
    }
    if (m.find("OpportunityIndex") != m.end() && !m["OpportunityIndex"].empty()) {
      opportunityIndex = make_shared<double>(boost::any_cast<double>(m["OpportunityIndex"]));
    }
    if (m.find("RelativeCommodity") != m.end() && !m["RelativeCommodity"].empty()) {
      relativeCommodity = make_shared<double>(boost::any_cast<double>(m["RelativeCommodity"]));
    }
    if (m.find("RelativeDischarge") != m.end() && !m["RelativeDischarge"].empty()) {
      relativeDischarge = make_shared<double>(boost::any_cast<double>(m["RelativeDischarge"]));
    }
    if (m.find("TimeUnit") != m.end() && !m["TimeUnit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["TimeUnit"]));
    }
  }


  virtual ~GetOpportunityMarketResponseBodyData() = default;
};
class GetOpportunityMarketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOpportunityMarketResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successResponse{};

  GetOpportunityMarketResponseBody() {}

  explicit GetOpportunityMarketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successResponse) {
      res["SuccessResponse"] = boost::any(*successResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetOpportunityMarketResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOpportunityMarketResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOpportunityMarketResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessResponse") != m.end() && !m["SuccessResponse"].empty()) {
      successResponse = make_shared<bool>(boost::any_cast<bool>(m["SuccessResponse"]));
    }
  }


  virtual ~GetOpportunityMarketResponseBody() = default;
};
class GetOpportunityMarketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOpportunityMarketResponseBody> body{};

  GetOpportunityMarketResponse() {}

  explicit GetOpportunityMarketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOpportunityMarketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOpportunityMarketResponseBody>(model1);
      }
    }
  }


  virtual ~GetOpportunityMarketResponse() = default;
};
class GetPriceRangeRequest : public Darabonba::Model {
public:
  shared_ptr<string> cateIds{};

  GetPriceRangeRequest() {}

  explicit GetPriceRangeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cateIds) {
      res["CateIds"] = boost::any(*cateIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CateIds") != m.end() && !m["CateIds"].empty()) {
      cateIds = make_shared<string>(boost::any_cast<string>(m["CateIds"]));
    }
  }


  virtual ~GetPriceRangeRequest() = default;
};
class GetPriceRangeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> closingDate{};
  shared_ptr<long> goodsSales{};
  shared_ptr<string> priceRange{};
  shared_ptr<double> salesVolume{};

  GetPriceRangeResponseBodyData() {}

  explicit GetPriceRangeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (closingDate) {
      res["ClosingDate"] = boost::any(*closingDate);
    }
    if (goodsSales) {
      res["GoodsSales"] = boost::any(*goodsSales);
    }
    if (priceRange) {
      res["PriceRange"] = boost::any(*priceRange);
    }
    if (salesVolume) {
      res["SalesVolume"] = boost::any(*salesVolume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClosingDate") != m.end() && !m["ClosingDate"].empty()) {
      closingDate = make_shared<string>(boost::any_cast<string>(m["ClosingDate"]));
    }
    if (m.find("GoodsSales") != m.end() && !m["GoodsSales"].empty()) {
      goodsSales = make_shared<long>(boost::any_cast<long>(m["GoodsSales"]));
    }
    if (m.find("PriceRange") != m.end() && !m["PriceRange"].empty()) {
      priceRange = make_shared<string>(boost::any_cast<string>(m["PriceRange"]));
    }
    if (m.find("SalesVolume") != m.end() && !m["SalesVolume"].empty()) {
      salesVolume = make_shared<double>(boost::any_cast<double>(m["SalesVolume"]));
    }
  }


  virtual ~GetPriceRangeResponseBodyData() = default;
};
class GetPriceRangeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetPriceRangeResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> successResponse{};

  GetPriceRangeResponseBody() {}

  explicit GetPriceRangeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successResponse) {
      res["SuccessResponse"] = boost::any(*successResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetPriceRangeResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetPriceRangeResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetPriceRangeResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessResponse") != m.end() && !m["SuccessResponse"].empty()) {
      successResponse = make_shared<string>(boost::any_cast<string>(m["SuccessResponse"]));
    }
  }


  virtual ~GetPriceRangeResponseBody() = default;
};
class GetPriceRangeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPriceRangeResponseBody> body{};

  GetPriceRangeResponse() {}

  explicit GetPriceRangeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPriceRangeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPriceRangeResponseBody>(model1);
      }
    }
  }


  virtual ~GetPriceRangeResponse() = default;
};
class GetSexRatioRequest : public Darabonba::Model {
public:
  shared_ptr<string> cateIds{};

  GetSexRatioRequest() {}

  explicit GetSexRatioRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cateIds) {
      res["CateIds"] = boost::any(*cateIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CateIds") != m.end() && !m["CateIds"].empty()) {
      cateIds = make_shared<string>(boost::any_cast<string>(m["CateIds"]));
    }
  }


  virtual ~GetSexRatioRequest() = default;
};
class GetSexRatioResponseBodyDataSaleNumbers : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> value{};

  GetSexRatioResponseBodyDataSaleNumbers() {}

  explicit GetSexRatioResponseBodyDataSaleNumbers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      value = make_shared<long>(boost::any_cast<long>(m["Value"]));
    }
  }


  virtual ~GetSexRatioResponseBodyDataSaleNumbers() = default;
};
class GetSexRatioResponseBodyDataSearchNumbers : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> value{};

  GetSexRatioResponseBodyDataSearchNumbers() {}

  explicit GetSexRatioResponseBodyDataSearchNumbers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      value = make_shared<long>(boost::any_cast<long>(m["Value"]));
    }
  }


  virtual ~GetSexRatioResponseBodyDataSearchNumbers() = default;
};
class GetSexRatioResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetSexRatioResponseBodyDataSaleNumbers>> saleNumbers{};
  shared_ptr<vector<GetSexRatioResponseBodyDataSearchNumbers>> searchNumbers{};

  GetSexRatioResponseBodyData() {}

  explicit GetSexRatioResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (saleNumbers) {
      vector<boost::any> temp1;
      for(auto item1:*saleNumbers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SaleNumbers"] = boost::any(temp1);
    }
    if (searchNumbers) {
      vector<boost::any> temp1;
      for(auto item1:*searchNumbers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SearchNumbers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SaleNumbers") != m.end() && !m["SaleNumbers"].empty()) {
      if (typeid(vector<boost::any>) == m["SaleNumbers"].type()) {
        vector<GetSexRatioResponseBodyDataSaleNumbers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SaleNumbers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSexRatioResponseBodyDataSaleNumbers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        saleNumbers = make_shared<vector<GetSexRatioResponseBodyDataSaleNumbers>>(expect1);
      }
    }
    if (m.find("SearchNumbers") != m.end() && !m["SearchNumbers"].empty()) {
      if (typeid(vector<boost::any>) == m["SearchNumbers"].type()) {
        vector<GetSexRatioResponseBodyDataSearchNumbers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SearchNumbers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetSexRatioResponseBodyDataSearchNumbers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        searchNumbers = make_shared<vector<GetSexRatioResponseBodyDataSearchNumbers>>(expect1);
      }
    }
  }


  virtual ~GetSexRatioResponseBodyData() = default;
};
class GetSexRatioResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetSexRatioResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> successResponse{};

  GetSexRatioResponseBody() {}

  explicit GetSexRatioResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (successResponse) {
      res["SuccessResponse"] = boost::any(*successResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetSexRatioResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSexRatioResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessResponse") != m.end() && !m["SuccessResponse"].empty()) {
      successResponse = make_shared<string>(boost::any_cast<string>(m["SuccessResponse"]));
    }
  }


  virtual ~GetSexRatioResponseBody() = default;
};
class GetSexRatioResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetSexRatioResponseBody> body{};

  GetSexRatioResponse() {}

  explicit GetSexRatioResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSexRatioResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSexRatioResponseBody>(model1);
      }
    }
  }


  virtual ~GetSexRatioResponse() = default;
};
class GetStoreSalesVolumeTopRequest : public Darabonba::Model {
public:
  shared_ptr<string> cateIds{};

  GetStoreSalesVolumeTopRequest() {}

  explicit GetStoreSalesVolumeTopRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cateIds) {
      res["CateIds"] = boost::any(*cateIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CateIds") != m.end() && !m["CateIds"].empty()) {
      cateIds = make_shared<string>(boost::any_cast<string>(m["CateIds"]));
    }
  }


  virtual ~GetStoreSalesVolumeTopRequest() = default;
};
class GetStoreSalesVolumeTopResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> shopName{};

  GetStoreSalesVolumeTopResponseBodyData() {}

  explicit GetStoreSalesVolumeTopResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shopName) {
      res["ShopName"] = boost::any(*shopName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShopName") != m.end() && !m["ShopName"].empty()) {
      shopName = make_shared<string>(boost::any_cast<string>(m["ShopName"]));
    }
  }


  virtual ~GetStoreSalesVolumeTopResponseBodyData() = default;
};
class GetStoreSalesVolumeTopResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetStoreSalesVolumeTopResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successResponse{};

  GetStoreSalesVolumeTopResponseBody() {}

  explicit GetStoreSalesVolumeTopResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successResponse) {
      res["SuccessResponse"] = boost::any(*successResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetStoreSalesVolumeTopResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetStoreSalesVolumeTopResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetStoreSalesVolumeTopResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessResponse") != m.end() && !m["SuccessResponse"].empty()) {
      successResponse = make_shared<bool>(boost::any_cast<bool>(m["SuccessResponse"]));
    }
  }


  virtual ~GetStoreSalesVolumeTopResponseBody() = default;
};
class GetStoreSalesVolumeTopResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetStoreSalesVolumeTopResponseBody> body{};

  GetStoreSalesVolumeTopResponse() {}

  explicit GetStoreSalesVolumeTopResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStoreSalesVolumeTopResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStoreSalesVolumeTopResponseBody>(model1);
      }
    }
  }


  virtual ~GetStoreSalesVolumeTopResponse() = default;
};
class GetStoreSearchTopRequest : public Darabonba::Model {
public:
  shared_ptr<string> cateIds{};

  GetStoreSearchTopRequest() {}

  explicit GetStoreSearchTopRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cateIds) {
      res["CateIds"] = boost::any(*cateIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CateIds") != m.end() && !m["CateIds"].empty()) {
      cateIds = make_shared<string>(boost::any_cast<string>(m["CateIds"]));
    }
  }


  virtual ~GetStoreSearchTopRequest() = default;
};
class GetStoreSearchTopResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> shopName{};

  GetStoreSearchTopResponseBodyData() {}

  explicit GetStoreSearchTopResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (shopName) {
      res["ShopName"] = boost::any(*shopName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ShopName") != m.end() && !m["ShopName"].empty()) {
      shopName = make_shared<string>(boost::any_cast<string>(m["ShopName"]));
    }
  }


  virtual ~GetStoreSearchTopResponseBodyData() = default;
};
class GetStoreSearchTopResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetStoreSearchTopResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successResponse{};

  GetStoreSearchTopResponseBody() {}

  explicit GetStoreSearchTopResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successResponse) {
      res["SuccessResponse"] = boost::any(*successResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetStoreSearchTopResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetStoreSearchTopResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetStoreSearchTopResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessResponse") != m.end() && !m["SuccessResponse"].empty()) {
      successResponse = make_shared<bool>(boost::any_cast<bool>(m["SuccessResponse"]));
    }
  }


  virtual ~GetStoreSearchTopResponseBody() = default;
};
class GetStoreSearchTopResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetStoreSearchTopResponseBody> body{};

  GetStoreSearchTopResponse() {}

  explicit GetStoreSearchTopResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStoreSearchTopResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStoreSearchTopResponseBody>(model1);
      }
    }
  }


  virtual ~GetStoreSearchTopResponse() = default;
};
class GetStyleTopRequest : public Darabonba::Model {
public:
  shared_ptr<string> cateIds{};
  shared_ptr<long> sortOrder{};
  shared_ptr<long> timeDisplay{};

  GetStyleTopRequest() {}

  explicit GetStyleTopRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cateIds) {
      res["CateIds"] = boost::any(*cateIds);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    if (timeDisplay) {
      res["TimeDisplay"] = boost::any(*timeDisplay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CateIds") != m.end() && !m["CateIds"].empty()) {
      cateIds = make_shared<string>(boost::any_cast<string>(m["CateIds"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<long>(boost::any_cast<long>(m["SortOrder"]));
    }
    if (m.find("TimeDisplay") != m.end() && !m["TimeDisplay"].empty()) {
      timeDisplay = make_shared<long>(boost::any_cast<long>(m["TimeDisplay"]));
    }
  }


  virtual ~GetStyleTopRequest() = default;
};
class GetStyleTopResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> cateName{};
  shared_ptr<string> color{};
  shared_ptr<vector<string>> images{};
  shared_ptr<string> material{};
  shared_ptr<string> productLink{};
  shared_ptr<double> salesVolume{};
  shared_ptr<double> searchVolume{};
  shared_ptr<string> style{};
  shared_ptr<string> title{};

  GetStyleTopResponseBodyData() {}

  explicit GetStyleTopResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cateName) {
      res["CateName"] = boost::any(*cateName);
    }
    if (color) {
      res["Color"] = boost::any(*color);
    }
    if (images) {
      res["Images"] = boost::any(*images);
    }
    if (material) {
      res["Material"] = boost::any(*material);
    }
    if (productLink) {
      res["ProductLink"] = boost::any(*productLink);
    }
    if (salesVolume) {
      res["SalesVolume"] = boost::any(*salesVolume);
    }
    if (searchVolume) {
      res["SearchVolume"] = boost::any(*searchVolume);
    }
    if (style) {
      res["Style"] = boost::any(*style);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CateName") != m.end() && !m["CateName"].empty()) {
      cateName = make_shared<string>(boost::any_cast<string>(m["CateName"]));
    }
    if (m.find("Color") != m.end() && !m["Color"].empty()) {
      color = make_shared<string>(boost::any_cast<string>(m["Color"]));
    }
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Images"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      images = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Material") != m.end() && !m["Material"].empty()) {
      material = make_shared<string>(boost::any_cast<string>(m["Material"]));
    }
    if (m.find("ProductLink") != m.end() && !m["ProductLink"].empty()) {
      productLink = make_shared<string>(boost::any_cast<string>(m["ProductLink"]));
    }
    if (m.find("SalesVolume") != m.end() && !m["SalesVolume"].empty()) {
      salesVolume = make_shared<double>(boost::any_cast<double>(m["SalesVolume"]));
    }
    if (m.find("SearchVolume") != m.end() && !m["SearchVolume"].empty()) {
      searchVolume = make_shared<double>(boost::any_cast<double>(m["SearchVolume"]));
    }
    if (m.find("Style") != m.end() && !m["Style"].empty()) {
      style = make_shared<string>(boost::any_cast<string>(m["Style"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetStyleTopResponseBodyData() = default;
};
class GetStyleTopResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetStyleTopResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> successResponse{};

  GetStyleTopResponseBody() {}

  explicit GetStyleTopResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successResponse) {
      res["SuccessResponse"] = boost::any(*successResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetStyleTopResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetStyleTopResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetStyleTopResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessResponse") != m.end() && !m["SuccessResponse"].empty()) {
      successResponse = make_shared<string>(boost::any_cast<string>(m["SuccessResponse"]));
    }
  }


  virtual ~GetStyleTopResponseBody() = default;
};
class GetStyleTopResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetStyleTopResponseBody> body{};

  GetStyleTopResponse() {}

  explicit GetStyleTopResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStyleTopResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStyleTopResponseBody>(model1);
      }
    }
  }


  virtual ~GetStyleTopResponse() = default;
};
class GetTrendImageDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> aiImgId{};

  GetTrendImageDetailRequest() {}

  explicit GetTrendImageDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aiImgId) {
      res["AiImgId"] = boost::any(*aiImgId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AiImgId") != m.end() && !m["AiImgId"].empty()) {
      aiImgId = make_shared<string>(boost::any_cast<string>(m["AiImgId"]));
    }
  }


  virtual ~GetTrendImageDetailRequest() = default;
};
class GetTrendImageDetailResponseBodyDataSimilarGoods : public Darabonba::Model {
public:
  shared_ptr<string> aiImgUrl{};
  shared_ptr<long> goodsSales{};
  shared_ptr<long> searchVolume{};

  GetTrendImageDetailResponseBodyDataSimilarGoods() {}

  explicit GetTrendImageDetailResponseBodyDataSimilarGoods(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aiImgUrl) {
      res["AiImgUrl"] = boost::any(*aiImgUrl);
    }
    if (goodsSales) {
      res["GoodsSales"] = boost::any(*goodsSales);
    }
    if (searchVolume) {
      res["SearchVolume"] = boost::any(*searchVolume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AiImgUrl") != m.end() && !m["AiImgUrl"].empty()) {
      aiImgUrl = make_shared<string>(boost::any_cast<string>(m["AiImgUrl"]));
    }
    if (m.find("GoodsSales") != m.end() && !m["GoodsSales"].empty()) {
      goodsSales = make_shared<long>(boost::any_cast<long>(m["GoodsSales"]));
    }
    if (m.find("SearchVolume") != m.end() && !m["SearchVolume"].empty()) {
      searchVolume = make_shared<long>(boost::any_cast<long>(m["SearchVolume"]));
    }
  }


  virtual ~GetTrendImageDetailResponseBodyDataSimilarGoods() = default;
};
class GetTrendImageDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> aiImgId{};
  shared_ptr<string> aiImgUrl{};
  shared_ptr<string> multiPictUrl{};
  shared_ptr<string> population{};
  shared_ptr<long> priceMax{};
  shared_ptr<long> priceMin{};
  shared_ptr<vector<GetTrendImageDetailResponseBodyDataSimilarGoods>> similarGoods{};
  shared_ptr<string> tags{};

  GetTrendImageDetailResponseBodyData() {}

  explicit GetTrendImageDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aiImgId) {
      res["AiImgId"] = boost::any(*aiImgId);
    }
    if (aiImgUrl) {
      res["AiImgUrl"] = boost::any(*aiImgUrl);
    }
    if (multiPictUrl) {
      res["MultiPictUrl"] = boost::any(*multiPictUrl);
    }
    if (population) {
      res["Population"] = boost::any(*population);
    }
    if (priceMax) {
      res["PriceMax"] = boost::any(*priceMax);
    }
    if (priceMin) {
      res["PriceMin"] = boost::any(*priceMin);
    }
    if (similarGoods) {
      vector<boost::any> temp1;
      for(auto item1:*similarGoods){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SimilarGoods"] = boost::any(temp1);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AiImgId") != m.end() && !m["AiImgId"].empty()) {
      aiImgId = make_shared<string>(boost::any_cast<string>(m["AiImgId"]));
    }
    if (m.find("AiImgUrl") != m.end() && !m["AiImgUrl"].empty()) {
      aiImgUrl = make_shared<string>(boost::any_cast<string>(m["AiImgUrl"]));
    }
    if (m.find("MultiPictUrl") != m.end() && !m["MultiPictUrl"].empty()) {
      multiPictUrl = make_shared<string>(boost::any_cast<string>(m["MultiPictUrl"]));
    }
    if (m.find("Population") != m.end() && !m["Population"].empty()) {
      population = make_shared<string>(boost::any_cast<string>(m["Population"]));
    }
    if (m.find("PriceMax") != m.end() && !m["PriceMax"].empty()) {
      priceMax = make_shared<long>(boost::any_cast<long>(m["PriceMax"]));
    }
    if (m.find("PriceMin") != m.end() && !m["PriceMin"].empty()) {
      priceMin = make_shared<long>(boost::any_cast<long>(m["PriceMin"]));
    }
    if (m.find("SimilarGoods") != m.end() && !m["SimilarGoods"].empty()) {
      if (typeid(vector<boost::any>) == m["SimilarGoods"].type()) {
        vector<GetTrendImageDetailResponseBodyDataSimilarGoods> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SimilarGoods"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTrendImageDetailResponseBodyDataSimilarGoods model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        similarGoods = make_shared<vector<GetTrendImageDetailResponseBodyDataSimilarGoods>>(expect1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~GetTrendImageDetailResponseBodyData() = default;
};
class GetTrendImageDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetTrendImageDetailResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successResponse{};

  GetTrendImageDetailResponseBody() {}

  explicit GetTrendImageDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (successResponse) {
      res["SuccessResponse"] = boost::any(*successResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetTrendImageDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTrendImageDetailResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessResponse") != m.end() && !m["SuccessResponse"].empty()) {
      successResponse = make_shared<bool>(boost::any_cast<bool>(m["SuccessResponse"]));
    }
  }


  virtual ~GetTrendImageDetailResponseBody() = default;
};
class GetTrendImageDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTrendImageDetailResponseBody> body{};

  GetTrendImageDetailResponse() {}

  explicit GetTrendImageDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTrendImageDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTrendImageDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetTrendImageDetailResponse() = default;
};
class GetTrendImageListRequest : public Darabonba::Model {
public:
  shared_ptr<string> cateIds{};
  shared_ptr<string> query{};

  GetTrendImageListRequest() {}

  explicit GetTrendImageListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cateIds) {
      res["CateIds"] = boost::any(*cateIds);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CateIds") != m.end() && !m["CateIds"].empty()) {
      cateIds = make_shared<string>(boost::any_cast<string>(m["CateIds"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
  }


  virtual ~GetTrendImageListRequest() = default;
};
class GetTrendImageListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> aiImgId{};
  shared_ptr<string> aiImgUrl{};
  shared_ptr<string> population{};
  shared_ptr<long> priceMax{};
  shared_ptr<long> priceMin{};

  GetTrendImageListResponseBodyData() {}

  explicit GetTrendImageListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aiImgId) {
      res["AiImgId"] = boost::any(*aiImgId);
    }
    if (aiImgUrl) {
      res["AiImgUrl"] = boost::any(*aiImgUrl);
    }
    if (population) {
      res["Population"] = boost::any(*population);
    }
    if (priceMax) {
      res["PriceMax"] = boost::any(*priceMax);
    }
    if (priceMin) {
      res["PriceMin"] = boost::any(*priceMin);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AiImgId") != m.end() && !m["AiImgId"].empty()) {
      aiImgId = make_shared<string>(boost::any_cast<string>(m["AiImgId"]));
    }
    if (m.find("AiImgUrl") != m.end() && !m["AiImgUrl"].empty()) {
      aiImgUrl = make_shared<string>(boost::any_cast<string>(m["AiImgUrl"]));
    }
    if (m.find("Population") != m.end() && !m["Population"].empty()) {
      population = make_shared<string>(boost::any_cast<string>(m["Population"]));
    }
    if (m.find("PriceMax") != m.end() && !m["PriceMax"].empty()) {
      priceMax = make_shared<long>(boost::any_cast<long>(m["PriceMax"]));
    }
    if (m.find("PriceMin") != m.end() && !m["PriceMin"].empty()) {
      priceMin = make_shared<long>(boost::any_cast<long>(m["PriceMin"]));
    }
  }


  virtual ~GetTrendImageListResponseBodyData() = default;
};
class GetTrendImageListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetTrendImageListResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successResponse{};

  GetTrendImageListResponseBody() {}

  explicit GetTrendImageListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successResponse) {
      res["SuccessResponse"] = boost::any(*successResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetTrendImageListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTrendImageListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetTrendImageListResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessResponse") != m.end() && !m["SuccessResponse"].empty()) {
      successResponse = make_shared<bool>(boost::any_cast<bool>(m["SuccessResponse"]));
    }
  }


  virtual ~GetTrendImageListResponseBody() = default;
};
class GetTrendImageListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTrendImageListResponseBody> body{};

  GetTrendImageListResponse() {}

  explicit GetTrendImageListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTrendImageListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTrendImageListResponseBody>(model1);
      }
    }
  }


  virtual ~GetTrendImageListResponse() = default;
};
class GetTrendIndexRequest : public Darabonba::Model {
public:
  shared_ptr<string> cateIds{};
  shared_ptr<long> monthNum{};

  GetTrendIndexRequest() {}

  explicit GetTrendIndexRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cateIds) {
      res["CateIds"] = boost::any(*cateIds);
    }
    if (monthNum) {
      res["MonthNum"] = boost::any(*monthNum);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CateIds") != m.end() && !m["CateIds"].empty()) {
      cateIds = make_shared<string>(boost::any_cast<string>(m["CateIds"]));
    }
    if (m.find("MonthNum") != m.end() && !m["MonthNum"].empty()) {
      monthNum = make_shared<long>(boost::any_cast<long>(m["MonthNum"]));
    }
  }


  virtual ~GetTrendIndexRequest() = default;
};
class GetTrendIndexResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> brandIndex{};
  shared_ptr<double> ECommerceIndex{};
  shared_ptr<double> institutionalIndex{};
  shared_ptr<double> mediaIndex{};
  shared_ptr<double> socialIndex{};
  shared_ptr<double> trendIndex{};
  shared_ptr<string> yearMonth{};

  GetTrendIndexResponseBodyData() {}

  explicit GetTrendIndexResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (brandIndex) {
      res["BrandIndex"] = boost::any(*brandIndex);
    }
    if (ECommerceIndex) {
      res["ECommerceIndex"] = boost::any(*ECommerceIndex);
    }
    if (institutionalIndex) {
      res["InstitutionalIndex"] = boost::any(*institutionalIndex);
    }
    if (mediaIndex) {
      res["MediaIndex"] = boost::any(*mediaIndex);
    }
    if (socialIndex) {
      res["SocialIndex"] = boost::any(*socialIndex);
    }
    if (trendIndex) {
      res["TrendIndex"] = boost::any(*trendIndex);
    }
    if (yearMonth) {
      res["YearMonth"] = boost::any(*yearMonth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BrandIndex") != m.end() && !m["BrandIndex"].empty()) {
      brandIndex = make_shared<double>(boost::any_cast<double>(m["BrandIndex"]));
    }
    if (m.find("ECommerceIndex") != m.end() && !m["ECommerceIndex"].empty()) {
      ECommerceIndex = make_shared<double>(boost::any_cast<double>(m["ECommerceIndex"]));
    }
    if (m.find("InstitutionalIndex") != m.end() && !m["InstitutionalIndex"].empty()) {
      institutionalIndex = make_shared<double>(boost::any_cast<double>(m["InstitutionalIndex"]));
    }
    if (m.find("MediaIndex") != m.end() && !m["MediaIndex"].empty()) {
      mediaIndex = make_shared<double>(boost::any_cast<double>(m["MediaIndex"]));
    }
    if (m.find("SocialIndex") != m.end() && !m["SocialIndex"].empty()) {
      socialIndex = make_shared<double>(boost::any_cast<double>(m["SocialIndex"]));
    }
    if (m.find("TrendIndex") != m.end() && !m["TrendIndex"].empty()) {
      trendIndex = make_shared<double>(boost::any_cast<double>(m["TrendIndex"]));
    }
    if (m.find("YearMonth") != m.end() && !m["YearMonth"].empty()) {
      yearMonth = make_shared<string>(boost::any_cast<string>(m["YearMonth"]));
    }
  }


  virtual ~GetTrendIndexResponseBodyData() = default;
};
class GetTrendIndexResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetTrendIndexResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successResponse{};

  GetTrendIndexResponseBody() {}

  explicit GetTrendIndexResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successResponse) {
      res["SuccessResponse"] = boost::any(*successResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetTrendIndexResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTrendIndexResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetTrendIndexResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessResponse") != m.end() && !m["SuccessResponse"].empty()) {
      successResponse = make_shared<bool>(boost::any_cast<bool>(m["SuccessResponse"]));
    }
  }


  virtual ~GetTrendIndexResponseBody() = default;
};
class GetTrendIndexResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTrendIndexResponseBody> body{};

  GetTrendIndexResponse() {}

  explicit GetTrendIndexResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTrendIndexResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTrendIndexResponseBody>(model1);
      }
    }
  }


  virtual ~GetTrendIndexResponse() = default;
};
class GetTrendSearchRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> key{};

  GetTrendSearchRecordRequest() {}

  explicit GetTrendSearchRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
  }


  virtual ~GetTrendSearchRecordRequest() = default;
};
class GetTrendSearchRecordResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> queryKey{};

  GetTrendSearchRecordResponseBodyData() {}

  explicit GetTrendSearchRecordResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (queryKey) {
      res["QueryKey"] = boost::any(*queryKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("QueryKey") != m.end() && !m["QueryKey"].empty()) {
      queryKey = make_shared<string>(boost::any_cast<string>(m["QueryKey"]));
    }
  }


  virtual ~GetTrendSearchRecordResponseBodyData() = default;
};
class GetTrendSearchRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetTrendSearchRecordResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successResponse{};

  GetTrendSearchRecordResponseBody() {}

  explicit GetTrendSearchRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successResponse) {
      res["SuccessResponse"] = boost::any(*successResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetTrendSearchRecordResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTrendSearchRecordResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetTrendSearchRecordResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessResponse") != m.end() && !m["SuccessResponse"].empty()) {
      successResponse = make_shared<bool>(boost::any_cast<bool>(m["SuccessResponse"]));
    }
  }


  virtual ~GetTrendSearchRecordResponseBody() = default;
};
class GetTrendSearchRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTrendSearchRecordResponseBody> body{};

  GetTrendSearchRecordResponse() {}

  explicit GetTrendSearchRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTrendSearchRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTrendSearchRecordResponseBody>(model1);
      }
    }
  }


  virtual ~GetTrendSearchRecordResponse() = default;
};
class GetTrendStatisticRequest : public Darabonba::Model {
public:
  shared_ptr<string> cateIds{};

  GetTrendStatisticRequest() {}

  explicit GetTrendStatisticRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cateIds) {
      res["CateIds"] = boost::any(*cateIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CateIds") != m.end() && !m["CateIds"].empty()) {
      cateIds = make_shared<string>(boost::any_cast<string>(m["CateIds"]));
    }
  }


  virtual ~GetTrendStatisticRequest() = default;
};
class GetTrendStatisticResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> commodityCount{};
  shared_ptr<double> sales{};
  shared_ptr<long> shopCount{};

  GetTrendStatisticResponseBodyData() {}

  explicit GetTrendStatisticResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCount) {
      res["CommodityCount"] = boost::any(*commodityCount);
    }
    if (sales) {
      res["Sales"] = boost::any(*sales);
    }
    if (shopCount) {
      res["ShopCount"] = boost::any(*shopCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCount") != m.end() && !m["CommodityCount"].empty()) {
      commodityCount = make_shared<long>(boost::any_cast<long>(m["CommodityCount"]));
    }
    if (m.find("Sales") != m.end() && !m["Sales"].empty()) {
      sales = make_shared<double>(boost::any_cast<double>(m["Sales"]));
    }
    if (m.find("ShopCount") != m.end() && !m["ShopCount"].empty()) {
      shopCount = make_shared<long>(boost::any_cast<long>(m["ShopCount"]));
    }
  }


  virtual ~GetTrendStatisticResponseBodyData() = default;
};
class GetTrendStatisticResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetTrendStatisticResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> successResponse{};

  GetTrendStatisticResponseBody() {}

  explicit GetTrendStatisticResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (successResponse) {
      res["SuccessResponse"] = boost::any(*successResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetTrendStatisticResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetTrendStatisticResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessResponse") != m.end() && !m["SuccessResponse"].empty()) {
      successResponse = make_shared<bool>(boost::any_cast<bool>(m["SuccessResponse"]));
    }
  }


  virtual ~GetTrendStatisticResponseBody() = default;
};
class GetTrendStatisticResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTrendStatisticResponseBody> body{};

  GetTrendStatisticResponse() {}

  explicit GetTrendStatisticResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTrendStatisticResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTrendStatisticResponseBody>(model1);
      }
    }
  }


  virtual ~GetTrendStatisticResponse() = default;
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
  GetAgeDistributionResponse getAgeDistributionWithOptions(shared_ptr<GetAgeDistributionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAgeDistributionResponse getAgeDistribution(shared_ptr<GetAgeDistributionRequest> request);
  GetAllTrendCategoryResponse getAllTrendCategoryWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAllTrendCategoryResponse getAllTrendCategory();
  GetCrowdLabelResponse getCrowdLabelWithOptions(shared_ptr<GetCrowdLabelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCrowdLabelResponse getCrowdLabel(shared_ptr<GetCrowdLabelRequest> request);
  GetCrowdReginResponse getCrowdReginWithOptions(shared_ptr<GetCrowdReginRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCrowdReginResponse getCrowdRegin(shared_ptr<GetCrowdReginRequest> request);
  GetOpportunityMarketResponse getOpportunityMarketWithOptions(shared_ptr<GetOpportunityMarketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOpportunityMarketResponse getOpportunityMarket(shared_ptr<GetOpportunityMarketRequest> request);
  GetPriceRangeResponse getPriceRangeWithOptions(shared_ptr<GetPriceRangeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPriceRangeResponse getPriceRange(shared_ptr<GetPriceRangeRequest> request);
  GetSexRatioResponse getSexRatioWithOptions(shared_ptr<GetSexRatioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSexRatioResponse getSexRatio(shared_ptr<GetSexRatioRequest> request);
  GetStoreSalesVolumeTopResponse getStoreSalesVolumeTopWithOptions(shared_ptr<GetStoreSalesVolumeTopRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStoreSalesVolumeTopResponse getStoreSalesVolumeTop(shared_ptr<GetStoreSalesVolumeTopRequest> request);
  GetStoreSearchTopResponse getStoreSearchTopWithOptions(shared_ptr<GetStoreSearchTopRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStoreSearchTopResponse getStoreSearchTop(shared_ptr<GetStoreSearchTopRequest> request);
  GetStyleTopResponse getStyleTopWithOptions(shared_ptr<GetStyleTopRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStyleTopResponse getStyleTop(shared_ptr<GetStyleTopRequest> request);
  GetTrendImageDetailResponse getTrendImageDetailWithOptions(shared_ptr<GetTrendImageDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTrendImageDetailResponse getTrendImageDetail(shared_ptr<GetTrendImageDetailRequest> request);
  GetTrendImageListResponse getTrendImageListWithOptions(shared_ptr<GetTrendImageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTrendImageListResponse getTrendImageList(shared_ptr<GetTrendImageListRequest> request);
  GetTrendIndexResponse getTrendIndexWithOptions(shared_ptr<GetTrendIndexRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTrendIndexResponse getTrendIndex(shared_ptr<GetTrendIndexRequest> request);
  GetTrendSearchRecordResponse getTrendSearchRecordWithOptions(shared_ptr<GetTrendSearchRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTrendSearchRecordResponse getTrendSearchRecord(shared_ptr<GetTrendSearchRecordRequest> request);
  GetTrendStatisticResponse getTrendStatisticWithOptions(shared_ptr<GetTrendStatisticRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTrendStatisticResponse getTrendStatistic(shared_ptr<GetTrendStatisticRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Qssj20220112

#endif
