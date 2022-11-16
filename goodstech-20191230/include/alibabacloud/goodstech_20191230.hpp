// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_GOODSTECH20191230_H_
#define ALIBABACLOUD_GOODSTECH20191230_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Goodstech20191230 {
class ClassifyCommodityRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  ClassifyCommodityRequest() {}

  explicit ClassifyCommodityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~ClassifyCommodityRequest() = default;
};
class ClassifyCommodityAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  ClassifyCommodityAdvanceRequest() {}

  explicit ClassifyCommodityAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURL"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURL"]));
    }
  }


  virtual ~ClassifyCommodityAdvanceRequest() = default;
};
class ClassifyCommodityResponseBodyDataCategories : public Darabonba::Model {
public:
  shared_ptr<string> categoryId{};
  shared_ptr<string> categoryName{};
  shared_ptr<double> score{};

  ClassifyCommodityResponseBodyDataCategories() {}

  explicit ClassifyCommodityResponseBodyDataCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<string>(boost::any_cast<string>(m["CategoryId"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
  }


  virtual ~ClassifyCommodityResponseBodyDataCategories() = default;
};
class ClassifyCommodityResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ClassifyCommodityResponseBodyDataCategories>> categories{};

  ClassifyCommodityResponseBodyData() {}

  explicit ClassifyCommodityResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      vector<boost::any> temp1;
      for(auto item1:*categories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Categories"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<ClassifyCommodityResponseBodyDataCategories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Categories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ClassifyCommodityResponseBodyDataCategories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        categories = make_shared<vector<ClassifyCommodityResponseBodyDataCategories>>(expect1);
      }
    }
  }


  virtual ~ClassifyCommodityResponseBodyData() = default;
};
class ClassifyCommodityResponseBody : public Darabonba::Model {
public:
  shared_ptr<ClassifyCommodityResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ClassifyCommodityResponseBody() {}

  explicit ClassifyCommodityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ClassifyCommodityResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ClassifyCommodityResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ClassifyCommodityResponseBody() = default;
};
class ClassifyCommodityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ClassifyCommodityResponseBody> body{};

  ClassifyCommodityResponse() {}

  explicit ClassifyCommodityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ClassifyCommodityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ClassifyCommodityResponseBody>(model1);
      }
    }
  }


  virtual ~ClassifyCommodityResponse() = default;
};
class RecognizeFurnitureAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeFurnitureAttributeRequest() {}

  explicit RecognizeFurnitureAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeFurnitureAttributeRequest() = default;
};
class RecognizeFurnitureAttributeAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeFurnitureAttributeAdvanceRequest() {}

  explicit RecognizeFurnitureAttributeAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURL"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURL"]));
    }
  }


  virtual ~RecognizeFurnitureAttributeAdvanceRequest() = default;
};
class RecognizeFurnitureAttributeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> predProbability{};
  shared_ptr<string> predStyle{};
  shared_ptr<string> predStyleId{};

  RecognizeFurnitureAttributeResponseBodyData() {}

  explicit RecognizeFurnitureAttributeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predProbability) {
      res["PredProbability"] = boost::any(*predProbability);
    }
    if (predStyle) {
      res["PredStyle"] = boost::any(*predStyle);
    }
    if (predStyleId) {
      res["PredStyleId"] = boost::any(*predStyleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredProbability") != m.end() && !m["PredProbability"].empty()) {
      predProbability = make_shared<double>(boost::any_cast<double>(m["PredProbability"]));
    }
    if (m.find("PredStyle") != m.end() && !m["PredStyle"].empty()) {
      predStyle = make_shared<string>(boost::any_cast<string>(m["PredStyle"]));
    }
    if (m.find("PredStyleId") != m.end() && !m["PredStyleId"].empty()) {
      predStyleId = make_shared<string>(boost::any_cast<string>(m["PredStyleId"]));
    }
  }


  virtual ~RecognizeFurnitureAttributeResponseBodyData() = default;
};
class RecognizeFurnitureAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeFurnitureAttributeResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeFurnitureAttributeResponseBody() {}

  explicit RecognizeFurnitureAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeFurnitureAttributeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeFurnitureAttributeResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeFurnitureAttributeResponseBody() = default;
};
class RecognizeFurnitureAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeFurnitureAttributeResponseBody> body{};

  RecognizeFurnitureAttributeResponse() {}

  explicit RecognizeFurnitureAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeFurnitureAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeFurnitureAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeFurnitureAttributeResponse() = default;
};
class RecognizeFurnitureSpuRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<double> XLength{};
  shared_ptr<double> YLength{};
  shared_ptr<double> ZLength{};

  RecognizeFurnitureSpuRequest() {}

  explicit RecognizeFurnitureSpuRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (XLength) {
      res["XLength"] = boost::any(*XLength);
    }
    if (YLength) {
      res["YLength"] = boost::any(*YLength);
    }
    if (ZLength) {
      res["ZLength"] = boost::any(*ZLength);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("XLength") != m.end() && !m["XLength"].empty()) {
      XLength = make_shared<double>(boost::any_cast<double>(m["XLength"]));
    }
    if (m.find("YLength") != m.end() && !m["YLength"].empty()) {
      YLength = make_shared<double>(boost::any_cast<double>(m["YLength"]));
    }
    if (m.find("ZLength") != m.end() && !m["ZLength"].empty()) {
      ZLength = make_shared<double>(boost::any_cast<double>(m["ZLength"]));
    }
  }


  virtual ~RecognizeFurnitureSpuRequest() = default;
};
class RecognizeFurnitureSpuAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<double> XLength{};
  shared_ptr<double> YLength{};
  shared_ptr<double> ZLength{};

  RecognizeFurnitureSpuAdvanceRequest() {}

  explicit RecognizeFurnitureSpuAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURL"] = boost::any(*imageURLObject);
    }
    if (XLength) {
      res["XLength"] = boost::any(*XLength);
    }
    if (YLength) {
      res["YLength"] = boost::any(*YLength);
    }
    if (ZLength) {
      res["ZLength"] = boost::any(*ZLength);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURL"]));
    }
    if (m.find("XLength") != m.end() && !m["XLength"].empty()) {
      XLength = make_shared<double>(boost::any_cast<double>(m["XLength"]));
    }
    if (m.find("YLength") != m.end() && !m["YLength"].empty()) {
      YLength = make_shared<double>(boost::any_cast<double>(m["YLength"]));
    }
    if (m.find("ZLength") != m.end() && !m["ZLength"].empty()) {
      ZLength = make_shared<double>(boost::any_cast<double>(m["ZLength"]));
    }
  }


  virtual ~RecognizeFurnitureSpuAdvanceRequest() = default;
};
class RecognizeFurnitureSpuResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> predCate{};
  shared_ptr<string> predCateId{};
  shared_ptr<double> predProbability{};

  RecognizeFurnitureSpuResponseBodyData() {}

  explicit RecognizeFurnitureSpuResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predCate) {
      res["PredCate"] = boost::any(*predCate);
    }
    if (predCateId) {
      res["PredCateId"] = boost::any(*predCateId);
    }
    if (predProbability) {
      res["PredProbability"] = boost::any(*predProbability);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredCate") != m.end() && !m["PredCate"].empty()) {
      predCate = make_shared<string>(boost::any_cast<string>(m["PredCate"]));
    }
    if (m.find("PredCateId") != m.end() && !m["PredCateId"].empty()) {
      predCateId = make_shared<string>(boost::any_cast<string>(m["PredCateId"]));
    }
    if (m.find("PredProbability") != m.end() && !m["PredProbability"].empty()) {
      predProbability = make_shared<double>(boost::any_cast<double>(m["PredProbability"]));
    }
  }


  virtual ~RecognizeFurnitureSpuResponseBodyData() = default;
};
class RecognizeFurnitureSpuResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeFurnitureSpuResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeFurnitureSpuResponseBody() {}

  explicit RecognizeFurnitureSpuResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeFurnitureSpuResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeFurnitureSpuResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeFurnitureSpuResponseBody() = default;
};
class RecognizeFurnitureSpuResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeFurnitureSpuResponseBody> body{};

  RecognizeFurnitureSpuResponse() {}

  explicit RecognizeFurnitureSpuResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeFurnitureSpuResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeFurnitureSpuResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeFurnitureSpuResponse() = default;
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
  ClassifyCommodityResponse classifyCommodityWithOptions(shared_ptr<ClassifyCommodityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ClassifyCommodityResponse classifyCommodity(shared_ptr<ClassifyCommodityRequest> request);
  ClassifyCommodityResponse classifyCommodityAdvance(shared_ptr<ClassifyCommodityAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeFurnitureAttributeResponse recognizeFurnitureAttributeWithOptions(shared_ptr<RecognizeFurnitureAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeFurnitureAttributeResponse recognizeFurnitureAttribute(shared_ptr<RecognizeFurnitureAttributeRequest> request);
  RecognizeFurnitureAttributeResponse recognizeFurnitureAttributeAdvance(shared_ptr<RecognizeFurnitureAttributeAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeFurnitureSpuResponse recognizeFurnitureSpuWithOptions(shared_ptr<RecognizeFurnitureSpuRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeFurnitureSpuResponse recognizeFurnitureSpu(shared_ptr<RecognizeFurnitureSpuRequest> request);
  RecognizeFurnitureSpuResponse recognizeFurnitureSpuAdvance(shared_ptr<RecognizeFurnitureSpuAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Goodstech20191230

#endif
