// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLOUDAUTH20190307_H_
#define ALIBABACLOUD_CLOUDAUTH20190307_H_

#include <alibabacloud/rpc.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cloudauth20190307 {
class DescribeWhitelistSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> serviceCode{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> certifyId{};
  shared_ptr<string> certNo{};
  shared_ptr<long> validStartDate{};
  shared_ptr<long> validEndDate{};
  shared_ptr<string> status{};
  shared_ptr<int> pageSize{};
  shared_ptr<int> currentPage{};

  DescribeWhitelistSettingRequest() {}

  explicit DescribeWhitelistSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!serviceCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("serviceCode is required.")));
    }
    if (!pageSize) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("pageSize is required.")));
    }
    if (!currentPage) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("currentPage is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (validStartDate) {
      res["ValidStartDate"] = boost::any(*validStartDate);
    }
    if (validEndDate) {
      res["ValidEndDate"] = boost::any(*validEndDate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("ValidStartDate") != m.end() && !m["ValidStartDate"].empty()) {
      validStartDate = make_shared<long>(boost::any_cast<long>(m["ValidStartDate"]));
    }
    if (m.find("ValidEndDate") != m.end() && !m["ValidEndDate"].empty()) {
      validEndDate = make_shared<long>(boost::any_cast<long>(m["ValidEndDate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<int>(boost::any_cast<int>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<int>(boost::any_cast<int>(m["CurrentPage"]));
    }
  }


  virtual ~DescribeWhitelistSettingRequest() = default;
};
class DescribeWhitelistSettingResponseItems : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> validStartDate{};
  shared_ptr<string> validEndDate{};
  shared_ptr<string> certNo{};
  shared_ptr<string> certifyId{};
  shared_ptr<string> status{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};

  DescribeWhitelistSettingResponseItems() {}

  explicit DescribeWhitelistSettingResponseItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!id) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("id is required.")));
    }
    if (!sceneId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("sceneId is required.")));
    }
    if (!validStartDate) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("validStartDate is required.")));
    }
    if (!validEndDate) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("validEndDate is required.")));
    }
    if (!certNo) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("certNo is required.")));
    }
    if (!certifyId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("certifyId is required.")));
    }
    if (!status) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("status is required.")));
    }
    if (!gmtCreate) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("gmtCreate is required.")));
    }
    if (!gmtModified) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("gmtModified is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (validStartDate) {
      res["ValidStartDate"] = boost::any(*validStartDate);
    }
    if (validEndDate) {
      res["ValidEndDate"] = boost::any(*validEndDate);
    }
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("ValidStartDate") != m.end() && !m["ValidStartDate"].empty()) {
      validStartDate = make_shared<string>(boost::any_cast<string>(m["ValidStartDate"]));
    }
    if (m.find("ValidEndDate") != m.end() && !m["ValidEndDate"].empty()) {
      validEndDate = make_shared<string>(boost::any_cast<string>(m["ValidEndDate"]));
    }
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
  }


  virtual ~DescribeWhitelistSettingResponseItems() = default;
};
class DescribeWhitelistSettingResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<int> totalCount{};
  shared_ptr<int> currentPage{};
  shared_ptr<int> pageSize{};
  shared_ptr<vector<DescribeWhitelistSettingResponseItems>> items{};

  DescribeWhitelistSettingResponse() {}

  explicit DescribeWhitelistSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!totalCount) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("totalCount is required.")));
    }
    if (!currentPage) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("currentPage is required.")));
    }
    if (!pageSize) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("pageSize is required.")));
    }
    if (!items) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("items is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<int>(boost::any_cast<int>(m["TotalCount"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<int>(boost::any_cast<int>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<int>(boost::any_cast<int>(m["PageSize"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeWhitelistSettingResponseItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeWhitelistSettingResponseItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeWhitelistSettingResponseItems>>(expect1);
      }
    }
  }


  virtual ~DescribeWhitelistSettingResponse() = default;
};
class DeleteWhitelistSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> ids{};

  DeleteWhitelistSettingRequest() {}

  explicit DeleteWhitelistSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!serviceCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("serviceCode is required.")));
    }
    if (!ids) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("ids is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
  }


  virtual ~DeleteWhitelistSettingRequest() = default;
};
class DeleteWhitelistSettingResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> resultObject{};

  DeleteWhitelistSettingResponse() {}

  explicit DeleteWhitelistSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resultObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resultObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultObject) {
      res["ResultObject"] = boost::any(*resultObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      resultObject = make_shared<bool>(boost::any_cast<bool>(m["ResultObject"]));
    }
  }


  virtual ~DeleteWhitelistSettingResponse() = default;
};
class CreateWhitelistSettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> serviceCode{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> certifyId{};
  shared_ptr<string> certNo{};
  shared_ptr<int> validDay{};

  CreateWhitelistSettingRequest() {}

  explicit CreateWhitelistSettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!serviceCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("serviceCode is required.")));
    }
    if (!validDay) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("validDay is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (validDay) {
      res["ValidDay"] = boost::any(*validDay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("ValidDay") != m.end() && !m["ValidDay"].empty()) {
      validDay = make_shared<int>(boost::any_cast<int>(m["ValidDay"]));
    }
  }


  virtual ~CreateWhitelistSettingRequest() = default;
};
class CreateWhitelistSettingResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> resultObject{};

  CreateWhitelistSettingResponse() {}

  explicit CreateWhitelistSettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resultObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resultObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultObject) {
      res["ResultObject"] = boost::any(*resultObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      resultObject = make_shared<bool>(boost::any_cast<bool>(m["ResultObject"]));
    }
  }


  virtual ~CreateWhitelistSettingResponse() = default;
};
class DescribeWhitelistRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> bizType{};
  shared_ptr<string> bizId{};
  shared_ptr<string> idCardNum{};
  shared_ptr<string> validStartDate{};
  shared_ptr<string> validEndDate{};
  shared_ptr<string> valid{};
  shared_ptr<int> pageSize{};
  shared_ptr<int> currentPage{};

  DescribeWhitelistRequest() {}

  explicit DescribeWhitelistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!pageSize) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("pageSize is required.")));
    }
    if (!currentPage) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("currentPage is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (idCardNum) {
      res["IdCardNum"] = boost::any(*idCardNum);
    }
    if (validStartDate) {
      res["ValidStartDate"] = boost::any(*validStartDate);
    }
    if (validEndDate) {
      res["ValidEndDate"] = boost::any(*validEndDate);
    }
    if (valid) {
      res["Valid"] = boost::any(*valid);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("IdCardNum") != m.end() && !m["IdCardNum"].empty()) {
      idCardNum = make_shared<string>(boost::any_cast<string>(m["IdCardNum"]));
    }
    if (m.find("ValidStartDate") != m.end() && !m["ValidStartDate"].empty()) {
      validStartDate = make_shared<string>(boost::any_cast<string>(m["ValidStartDate"]));
    }
    if (m.find("ValidEndDate") != m.end() && !m["ValidEndDate"].empty()) {
      validEndDate = make_shared<string>(boost::any_cast<string>(m["ValidEndDate"]));
    }
    if (m.find("Valid") != m.end() && !m["Valid"].empty()) {
      valid = make_shared<string>(boost::any_cast<string>(m["Valid"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<int>(boost::any_cast<int>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<int>(boost::any_cast<int>(m["CurrentPage"]));
    }
  }


  virtual ~DescribeWhitelistRequest() = default;
};
class DescribeWhitelistResponseItems : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<long> uid{};
  shared_ptr<string> bizType{};
  shared_ptr<long> startDate{};
  shared_ptr<long> endDate{};
  shared_ptr<string> idCardNum{};
  shared_ptr<string> bizId{};
  shared_ptr<int> valid{};
  shared_ptr<long> gmtCreate{};
  shared_ptr<long> gmtModified{};

  DescribeWhitelistResponseItems() {}

  explicit DescribeWhitelistResponseItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!id) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("id is required.")));
    }
    if (!uid) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("uid is required.")));
    }
    if (!bizType) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizType is required.")));
    }
    if (!startDate) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("startDate is required.")));
    }
    if (!endDate) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("endDate is required.")));
    }
    if (!idCardNum) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("idCardNum is required.")));
    }
    if (!bizId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizId is required.")));
    }
    if (!valid) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("valid is required.")));
    }
    if (!gmtCreate) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("gmtCreate is required.")));
    }
    if (!gmtModified) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("gmtModified is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (idCardNum) {
      res["IdCardNum"] = boost::any(*idCardNum);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (valid) {
      res["Valid"] = boost::any(*valid);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<long>(boost::any_cast<long>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<long>(boost::any_cast<long>(m["EndDate"]));
    }
    if (m.find("IdCardNum") != m.end() && !m["IdCardNum"].empty()) {
      idCardNum = make_shared<string>(boost::any_cast<string>(m["IdCardNum"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Valid") != m.end() && !m["Valid"].empty()) {
      valid = make_shared<int>(boost::any_cast<int>(m["Valid"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<long>(boost::any_cast<long>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<long>(boost::any_cast<long>(m["GmtModified"]));
    }
  }


  virtual ~DescribeWhitelistResponseItems() = default;
};
class DescribeWhitelistResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<int> totalCount{};
  shared_ptr<int> currentPage{};
  shared_ptr<int> pageSize{};
  shared_ptr<vector<DescribeWhitelistResponseItems>> items{};

  DescribeWhitelistResponse() {}

  explicit DescribeWhitelistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!totalCount) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("totalCount is required.")));
    }
    if (!currentPage) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("currentPage is required.")));
    }
    if (!pageSize) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("pageSize is required.")));
    }
    if (!items) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("items is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<int>(boost::any_cast<int>(m["TotalCount"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<int>(boost::any_cast<int>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<int>(boost::any_cast<int>(m["PageSize"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeWhitelistResponseItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeWhitelistResponseItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeWhitelistResponseItems>>(expect1);
      }
    }
  }


  virtual ~DescribeWhitelistResponse() = default;
};
class DeleteWhitelistRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> ids{};

  DeleteWhitelistRequest() {}

  explicit DeleteWhitelistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!ids) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("ids is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (ids) {
      res["Ids"] = boost::any(*ids);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("Ids") != m.end() && !m["Ids"].empty()) {
      ids = make_shared<string>(boost::any_cast<string>(m["Ids"]));
    }
  }


  virtual ~DeleteWhitelistRequest() = default;
};
class DeleteWhitelistResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteWhitelistResponse() {}

  explicit DeleteWhitelistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
  }

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


  virtual ~DeleteWhitelistResponse() = default;
};
class CreateWhitelistRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> bizType{};
  shared_ptr<string> bizId{};
  shared_ptr<string> idCardNum{};
  shared_ptr<string> validDay{};

  CreateWhitelistRequest() {}

  explicit CreateWhitelistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!bizId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizId is required.")));
    }
    if (!idCardNum) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("idCardNum is required.")));
    }
    if (!validDay) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("validDay is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (idCardNum) {
      res["IdCardNum"] = boost::any(*idCardNum);
    }
    if (validDay) {
      res["ValidDay"] = boost::any(*validDay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("IdCardNum") != m.end() && !m["IdCardNum"].empty()) {
      idCardNum = make_shared<string>(boost::any_cast<string>(m["IdCardNum"]));
    }
    if (m.find("ValidDay") != m.end() && !m["ValidDay"].empty()) {
      validDay = make_shared<string>(boost::any_cast<string>(m["ValidDay"]));
    }
  }


  virtual ~CreateWhitelistRequest() = default;
};
class CreateWhitelistResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateWhitelistResponse() {}

  explicit CreateWhitelistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
  }

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


  virtual ~CreateWhitelistResponse() = default;
};
class DescribeFaceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};

  DescribeFaceConfigRequest() {}

  explicit DescribeFaceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
  }


  virtual ~DescribeFaceConfigRequest() = default;
};
class DescribeFaceConfigResponseItems : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> bizName{};
  shared_ptr<long> gmtUpdated{};

  DescribeFaceConfigResponseItems() {}

  explicit DescribeFaceConfigResponseItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!bizType) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizType is required.")));
    }
    if (!bizName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizName is required.")));
    }
    if (!gmtUpdated) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("gmtUpdated is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (gmtUpdated) {
      res["GmtUpdated"] = boost::any(*gmtUpdated);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("GmtUpdated") != m.end() && !m["GmtUpdated"].empty()) {
      gmtUpdated = make_shared<long>(boost::any_cast<long>(m["GmtUpdated"]));
    }
  }


  virtual ~DescribeFaceConfigResponseItems() = default;
};
class DescribeFaceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeFaceConfigResponseItems>> items{};

  DescribeFaceConfigResponse() {}

  explicit DescribeFaceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!items) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("items is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeFaceConfigResponseItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaceConfigResponseItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeFaceConfigResponseItems>>(expect1);
      }
    }
  }


  virtual ~DescribeFaceConfigResponse() = default;
};
class UpdateFaceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> bizType{};
  shared_ptr<string> bizName{};

  UpdateFaceConfigRequest() {}

  explicit UpdateFaceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!bizType) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizType is required.")));
    }
    if (!bizName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizName is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
  }


  virtual ~UpdateFaceConfigRequest() = default;
};
class UpdateFaceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateFaceConfigResponse() {}

  explicit UpdateFaceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
  }

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


  virtual ~UpdateFaceConfigResponse() = default;
};
class CreateFaceConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> bizType{};
  shared_ptr<string> bizName{};

  CreateFaceConfigRequest() {}

  explicit CreateFaceConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!bizType) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizType is required.")));
    }
    if (!bizName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizName is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
  }


  virtual ~CreateFaceConfigRequest() = default;
};
class CreateFaceConfigResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateFaceConfigResponse() {}

  explicit CreateFaceConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
  }

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


  virtual ~CreateFaceConfigResponse() = default;
};
class LivenessFaceVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<long> sceneId{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<string> productCode{};
  shared_ptr<string> faceContrastPicture{};
  shared_ptr<string> deviceToken{};
  shared_ptr<string> mobile{};
  shared_ptr<string> ip{};
  shared_ptr<string> userId{};
  shared_ptr<string> faceContrastPictureUrl{};
  shared_ptr<string> certifyId{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossObjectName{};
  shared_ptr<string> model{};
  shared_ptr<string> crop{};

  LivenessFaceVerifyRequest() {}

  explicit LivenessFaceVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (faceContrastPicture) {
      res["FaceContrastPicture"] = boost::any(*faceContrastPicture);
    }
    if (deviceToken) {
      res["DeviceToken"] = boost::any(*deviceToken);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (faceContrastPictureUrl) {
      res["FaceContrastPictureUrl"] = boost::any(*faceContrastPictureUrl);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossObjectName) {
      res["OssObjectName"] = boost::any(*ossObjectName);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("FaceContrastPicture") != m.end() && !m["FaceContrastPicture"].empty()) {
      faceContrastPicture = make_shared<string>(boost::any_cast<string>(m["FaceContrastPicture"]));
    }
    if (m.find("DeviceToken") != m.end() && !m["DeviceToken"].empty()) {
      deviceToken = make_shared<string>(boost::any_cast<string>(m["DeviceToken"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("FaceContrastPictureUrl") != m.end() && !m["FaceContrastPictureUrl"].empty()) {
      faceContrastPictureUrl = make_shared<string>(boost::any_cast<string>(m["FaceContrastPictureUrl"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssObjectName") != m.end() && !m["OssObjectName"].empty()) {
      ossObjectName = make_shared<string>(boost::any_cast<string>(m["OssObjectName"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<string>(boost::any_cast<string>(m["Crop"]));
    }
  }


  virtual ~LivenessFaceVerifyRequest() = default;
};
class LivenessFaceVerifyResponseResultObject : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> materialInfo{};
  shared_ptr<string> passed{};

  LivenessFaceVerifyResponseResultObject() {}

  explicit LivenessFaceVerifyResponseResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!certifyId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("certifyId is required.")));
    }
    if (!subCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("subCode is required.")));
    }
    if (!materialInfo) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("materialInfo is required.")));
    }
    if (!passed) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("passed is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (materialInfo) {
      res["MaterialInfo"] = boost::any(*materialInfo);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("MaterialInfo") != m.end() && !m["MaterialInfo"].empty()) {
      materialInfo = make_shared<string>(boost::any_cast<string>(m["MaterialInfo"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
  }


  virtual ~LivenessFaceVerifyResponseResultObject() = default;
};
class LivenessFaceVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<LivenessFaceVerifyResponseResultObject> resultObject{};

  LivenessFaceVerifyResponse() {}

  explicit LivenessFaceVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!code) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("code is required.")));
    }
    if (!message) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("message is required.")));
    }
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resultObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resultObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        LivenessFaceVerifyResponseResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<LivenessFaceVerifyResponseResultObject>(model1);
      }
    }
  }


  virtual ~LivenessFaceVerifyResponse() = default;
};
class CompareFaceVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<long> sceneId{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<string> productCode{};
  shared_ptr<string> sourceFaceContrastPicture{};
  shared_ptr<string> sourceFaceContrastPictureUrl{};
  shared_ptr<string> sourceCertifyId{};
  shared_ptr<string> sourceOssBucketName{};
  shared_ptr<string> sourceOssObjectName{};
  shared_ptr<string> targetFaceContrastPicture{};
  shared_ptr<string> targetFaceContrastPictureUrl{};
  shared_ptr<string> targetCertifyId{};
  shared_ptr<string> targetOssBucketName{};
  shared_ptr<string> targetOssObjectName{};
  shared_ptr<string> crop{};

  CompareFaceVerifyRequest() {}

  explicit CompareFaceVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (sourceFaceContrastPicture) {
      res["SourceFaceContrastPicture"] = boost::any(*sourceFaceContrastPicture);
    }
    if (sourceFaceContrastPictureUrl) {
      res["SourceFaceContrastPictureUrl"] = boost::any(*sourceFaceContrastPictureUrl);
    }
    if (sourceCertifyId) {
      res["SourceCertifyId"] = boost::any(*sourceCertifyId);
    }
    if (sourceOssBucketName) {
      res["SourceOssBucketName"] = boost::any(*sourceOssBucketName);
    }
    if (sourceOssObjectName) {
      res["SourceOssObjectName"] = boost::any(*sourceOssObjectName);
    }
    if (targetFaceContrastPicture) {
      res["TargetFaceContrastPicture"] = boost::any(*targetFaceContrastPicture);
    }
    if (targetFaceContrastPictureUrl) {
      res["TargetFaceContrastPictureUrl"] = boost::any(*targetFaceContrastPictureUrl);
    }
    if (targetCertifyId) {
      res["TargetCertifyId"] = boost::any(*targetCertifyId);
    }
    if (targetOssBucketName) {
      res["TargetOssBucketName"] = boost::any(*targetOssBucketName);
    }
    if (targetOssObjectName) {
      res["TargetOssObjectName"] = boost::any(*targetOssObjectName);
    }
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("SourceFaceContrastPicture") != m.end() && !m["SourceFaceContrastPicture"].empty()) {
      sourceFaceContrastPicture = make_shared<string>(boost::any_cast<string>(m["SourceFaceContrastPicture"]));
    }
    if (m.find("SourceFaceContrastPictureUrl") != m.end() && !m["SourceFaceContrastPictureUrl"].empty()) {
      sourceFaceContrastPictureUrl = make_shared<string>(boost::any_cast<string>(m["SourceFaceContrastPictureUrl"]));
    }
    if (m.find("SourceCertifyId") != m.end() && !m["SourceCertifyId"].empty()) {
      sourceCertifyId = make_shared<string>(boost::any_cast<string>(m["SourceCertifyId"]));
    }
    if (m.find("SourceOssBucketName") != m.end() && !m["SourceOssBucketName"].empty()) {
      sourceOssBucketName = make_shared<string>(boost::any_cast<string>(m["SourceOssBucketName"]));
    }
    if (m.find("SourceOssObjectName") != m.end() && !m["SourceOssObjectName"].empty()) {
      sourceOssObjectName = make_shared<string>(boost::any_cast<string>(m["SourceOssObjectName"]));
    }
    if (m.find("TargetFaceContrastPicture") != m.end() && !m["TargetFaceContrastPicture"].empty()) {
      targetFaceContrastPicture = make_shared<string>(boost::any_cast<string>(m["TargetFaceContrastPicture"]));
    }
    if (m.find("TargetFaceContrastPictureUrl") != m.end() && !m["TargetFaceContrastPictureUrl"].empty()) {
      targetFaceContrastPictureUrl = make_shared<string>(boost::any_cast<string>(m["TargetFaceContrastPictureUrl"]));
    }
    if (m.find("TargetCertifyId") != m.end() && !m["TargetCertifyId"].empty()) {
      targetCertifyId = make_shared<string>(boost::any_cast<string>(m["TargetCertifyId"]));
    }
    if (m.find("TargetOssBucketName") != m.end() && !m["TargetOssBucketName"].empty()) {
      targetOssBucketName = make_shared<string>(boost::any_cast<string>(m["TargetOssBucketName"]));
    }
    if (m.find("TargetOssObjectName") != m.end() && !m["TargetOssObjectName"].empty()) {
      targetOssObjectName = make_shared<string>(boost::any_cast<string>(m["TargetOssObjectName"]));
    }
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<string>(boost::any_cast<string>(m["Crop"]));
    }
  }


  virtual ~CompareFaceVerifyRequest() = default;
};
class CompareFaceVerifyResponseResultObject : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<double> verifyScore{};
  shared_ptr<string> passed{};

  CompareFaceVerifyResponseResultObject() {}

  explicit CompareFaceVerifyResponseResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!certifyId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("certifyId is required.")));
    }
    if (!verifyScore) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("verifyScore is required.")));
    }
    if (!passed) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("passed is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (verifyScore) {
      res["VerifyScore"] = boost::any(*verifyScore);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("VerifyScore") != m.end() && !m["VerifyScore"].empty()) {
      verifyScore = make_shared<double>(boost::any_cast<double>(m["VerifyScore"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
  }


  virtual ~CompareFaceVerifyResponseResultObject() = default;
};
class CompareFaceVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<CompareFaceVerifyResponseResultObject> resultObject{};

  CompareFaceVerifyResponse() {}

  explicit CompareFaceVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!code) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("code is required.")));
    }
    if (!message) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("message is required.")));
    }
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resultObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resultObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        CompareFaceVerifyResponseResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<CompareFaceVerifyResponseResultObject>(model1);
      }
    }
  }


  virtual ~CompareFaceVerifyResponse() = default;
};
class DescribeSdkUrlRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<bool> debug{};

  DescribeSdkUrlRequest() {}

  explicit DescribeSdkUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!id) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("id is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (debug) {
      res["Debug"] = boost::any(*debug);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Debug") != m.end() && !m["Debug"].empty()) {
      debug = make_shared<bool>(boost::any_cast<bool>(m["Debug"]));
    }
  }


  virtual ~DescribeSdkUrlRequest() = default;
};
class DescribeSdkUrlResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> sdkUrl{};

  DescribeSdkUrlResponse() {}

  explicit DescribeSdkUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!sdkUrl) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("sdkUrl is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sdkUrl) {
      res["SdkUrl"] = boost::any(*sdkUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SdkUrl") != m.end() && !m["SdkUrl"].empty()) {
      sdkUrl = make_shared<string>(boost::any_cast<string>(m["SdkUrl"]));
    }
  }


  virtual ~DescribeSdkUrlResponse() = default;
};
class DescribeUpdatePackageResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  DescribeUpdatePackageResultRequest() {}

  explicit DescribeUpdatePackageResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!taskId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("taskId is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeUpdatePackageResultRequest() = default;
};
class DescribeUpdatePackageResultResponseAppInfoPackageInfo : public Darabonba::Model {
public:
  shared_ptr<string> version{};

  DescribeUpdatePackageResultResponseAppInfoPackageInfo() {}

  explicit DescribeUpdatePackageResultResponseAppInfoPackageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!version) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("version is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeUpdatePackageResultResponseAppInfoPackageInfo() = default;
};
class DescribeUpdatePackageResultResponseAppInfoDebugPackageInfo : public Darabonba::Model {
public:
  shared_ptr<string> version{};

  DescribeUpdatePackageResultResponseAppInfoDebugPackageInfo() {}

  explicit DescribeUpdatePackageResultResponseAppInfoDebugPackageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!version) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("version is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeUpdatePackageResultResponseAppInfoDebugPackageInfo() = default;
};
class DescribeUpdatePackageResultResponseAppInfo : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> packageName{};
  shared_ptr<string> icon{};
  shared_ptr<string> startDate{};
  shared_ptr<string> endDate{};
  shared_ptr<int> type{};
  shared_ptr<DescribeUpdatePackageResultResponseAppInfoPackageInfo> packageInfo{};
  shared_ptr<DescribeUpdatePackageResultResponseAppInfoDebugPackageInfo> debugPackageInfo{};

  DescribeUpdatePackageResultResponseAppInfo() {}

  explicit DescribeUpdatePackageResultResponseAppInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!id) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("id is required.")));
    }
    if (!name) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("name is required.")));
    }
    if (!packageName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("packageName is required.")));
    }
    if (!icon) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("icon is required.")));
    }
    if (!startDate) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("startDate is required.")));
    }
    if (!endDate) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("endDate is required.")));
    }
    if (!type) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("type is required.")));
    }
    if (!packageInfo) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("packageInfo is required.")));
    }
    if (!debugPackageInfo) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("debugPackageInfo is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (packageInfo) {
      res["PackageInfo"] = packageInfo ? boost::any(packageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (debugPackageInfo) {
      res["DebugPackageInfo"] = debugPackageInfo ? boost::any(debugPackageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<int>(boost::any_cast<int>(m["Type"]));
    }
    if (m.find("PackageInfo") != m.end() && !m["PackageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PackageInfo"].type()) {
        DescribeUpdatePackageResultResponseAppInfoPackageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PackageInfo"]));
        packageInfo = make_shared<DescribeUpdatePackageResultResponseAppInfoPackageInfo>(model1);
      }
    }
    if (m.find("DebugPackageInfo") != m.end() && !m["DebugPackageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DebugPackageInfo"].type()) {
        DescribeUpdatePackageResultResponseAppInfoDebugPackageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DebugPackageInfo"]));
        debugPackageInfo = make_shared<DescribeUpdatePackageResultResponseAppInfoDebugPackageInfo>(model1);
      }
    }
  }


  virtual ~DescribeUpdatePackageResultResponseAppInfo() = default;
};
class DescribeUpdatePackageResultResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeUpdatePackageResultResponseAppInfo> appInfo{};

  DescribeUpdatePackageResultResponse() {}

  explicit DescribeUpdatePackageResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!appInfo) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("appInfo is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (appInfo) {
      res["AppInfo"] = appInfo ? boost::any(appInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AppInfo") != m.end() && !m["AppInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppInfo"].type()) {
        DescribeUpdatePackageResultResponseAppInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppInfo"]));
        appInfo = make_shared<DescribeUpdatePackageResultResponseAppInfo>(model1);
      }
    }
  }


  virtual ~DescribeUpdatePackageResultResponse() = default;
};
class UpdateAppPackageRequest : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> packageUrl{};
  shared_ptr<string> platform{};
  shared_ptr<bool> debug{};

  UpdateAppPackageRequest() {}

  explicit UpdateAppPackageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!packageUrl) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("packageUrl is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (packageUrl) {
      res["PackageUrl"] = boost::any(*packageUrl);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    if (debug) {
      res["Debug"] = boost::any(*debug);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("PackageUrl") != m.end() && !m["PackageUrl"].empty()) {
      packageUrl = make_shared<string>(boost::any_cast<string>(m["PackageUrl"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
    if (m.find("Debug") != m.end() && !m["Debug"].empty()) {
      debug = make_shared<bool>(boost::any_cast<bool>(m["Debug"]));
    }
  }


  virtual ~UpdateAppPackageRequest() = default;
};
class UpdateAppPackageResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  UpdateAppPackageResponse() {}

  explicit UpdateAppPackageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!taskId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("taskId is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~UpdateAppPackageResponse() = default;
};
class DescribeAppInfoRequest : public Darabonba::Model {
public:
  shared_ptr<int> pageSize{};
  shared_ptr<int> currentPage{};
  shared_ptr<string> platform{};

  DescribeAppInfoRequest() {}

  explicit DescribeAppInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<int>(boost::any_cast<int>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<int>(boost::any_cast<int>(m["CurrentPage"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
  }


  virtual ~DescribeAppInfoRequest() = default;
};
class DescribeAppInfoResponseAppInfoListPackageInfo : public Darabonba::Model {
public:
  shared_ptr<string> version{};

  DescribeAppInfoResponseAppInfoListPackageInfo() {}

  explicit DescribeAppInfoResponseAppInfoListPackageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!version) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("version is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeAppInfoResponseAppInfoListPackageInfo() = default;
};
class DescribeAppInfoResponseAppInfoListDebugPackageInfo : public Darabonba::Model {
public:
  shared_ptr<string> version{};

  DescribeAppInfoResponseAppInfoListDebugPackageInfo() {}

  explicit DescribeAppInfoResponseAppInfoListDebugPackageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!version) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("version is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeAppInfoResponseAppInfoListDebugPackageInfo() = default;
};
class DescribeAppInfoResponseAppInfoList : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<string> packageName{};
  shared_ptr<string> icon{};
  shared_ptr<string> startDate{};
  shared_ptr<string> endDate{};
  shared_ptr<int> type{};
  shared_ptr<DescribeAppInfoResponseAppInfoListPackageInfo> packageInfo{};
  shared_ptr<DescribeAppInfoResponseAppInfoListDebugPackageInfo> debugPackageInfo{};

  DescribeAppInfoResponseAppInfoList() {}

  explicit DescribeAppInfoResponseAppInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!id) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("id is required.")));
    }
    if (!name) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("name is required.")));
    }
    if (!packageName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("packageName is required.")));
    }
    if (!icon) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("icon is required.")));
    }
    if (!startDate) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("startDate is required.")));
    }
    if (!endDate) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("endDate is required.")));
    }
    if (!type) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("type is required.")));
    }
    if (!packageInfo) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("packageInfo is required.")));
    }
    if (!debugPackageInfo) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("debugPackageInfo is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (packageInfo) {
      res["PackageInfo"] = packageInfo ? boost::any(packageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (debugPackageInfo) {
      res["DebugPackageInfo"] = debugPackageInfo ? boost::any(debugPackageInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<int>(boost::any_cast<int>(m["Type"]));
    }
    if (m.find("PackageInfo") != m.end() && !m["PackageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["PackageInfo"].type()) {
        DescribeAppInfoResponseAppInfoListPackageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PackageInfo"]));
        packageInfo = make_shared<DescribeAppInfoResponseAppInfoListPackageInfo>(model1);
      }
    }
    if (m.find("DebugPackageInfo") != m.end() && !m["DebugPackageInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DebugPackageInfo"].type()) {
        DescribeAppInfoResponseAppInfoListDebugPackageInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DebugPackageInfo"]));
        debugPackageInfo = make_shared<DescribeAppInfoResponseAppInfoListDebugPackageInfo>(model1);
      }
    }
  }


  virtual ~DescribeAppInfoResponseAppInfoList() = default;
};
class DescribeAppInfoResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<int> pageSize{};
  shared_ptr<int> currentPage{};
  shared_ptr<int> totalCount{};
  shared_ptr<vector<DescribeAppInfoResponseAppInfoList>> appInfoList{};

  DescribeAppInfoResponse() {}

  explicit DescribeAppInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!pageSize) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("pageSize is required.")));
    }
    if (!currentPage) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("currentPage is required.")));
    }
    if (!totalCount) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("totalCount is required.")));
    }
    if (!appInfoList) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("appInfoList is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (appInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*appInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<int>(boost::any_cast<int>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<int>(boost::any_cast<int>(m["CurrentPage"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<int>(boost::any_cast<int>(m["TotalCount"]));
    }
    if (m.find("AppInfoList") != m.end() && !m["AppInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["AppInfoList"].type()) {
        vector<DescribeAppInfoResponseAppInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAppInfoResponseAppInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appInfoList = make_shared<vector<DescribeAppInfoResponseAppInfoList>>(expect1);
      }
    }
  }


  virtual ~DescribeAppInfoResponse() = default;
};
class ContrastFaceVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<long> sceneId{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<string> productCode{};
  shared_ptr<string> certType{};
  shared_ptr<string> certName{};
  shared_ptr<string> certNo{};
  shared_ptr<string> faceContrastPicture{};
  shared_ptr<string> deviceToken{};
  shared_ptr<string> mobile{};
  shared_ptr<string> ip{};
  shared_ptr<string> userId{};
  shared_ptr<string> faceContrastPictureUrl{};
  shared_ptr<string> certifyId{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossObjectName{};
  shared_ptr<string> model{};
  shared_ptr<string> faceContrastFile{};
  shared_ptr<string> crop{};

  ContrastFaceVerifyRequest() {}

  explicit ContrastFaceVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (faceContrastPicture) {
      res["FaceContrastPicture"] = boost::any(*faceContrastPicture);
    }
    if (deviceToken) {
      res["DeviceToken"] = boost::any(*deviceToken);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (faceContrastPictureUrl) {
      res["FaceContrastPictureUrl"] = boost::any(*faceContrastPictureUrl);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossObjectName) {
      res["OssObjectName"] = boost::any(*ossObjectName);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (faceContrastFile) {
      res["FaceContrastFile"] = boost::any(*faceContrastFile);
    }
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("FaceContrastPicture") != m.end() && !m["FaceContrastPicture"].empty()) {
      faceContrastPicture = make_shared<string>(boost::any_cast<string>(m["FaceContrastPicture"]));
    }
    if (m.find("DeviceToken") != m.end() && !m["DeviceToken"].empty()) {
      deviceToken = make_shared<string>(boost::any_cast<string>(m["DeviceToken"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("FaceContrastPictureUrl") != m.end() && !m["FaceContrastPictureUrl"].empty()) {
      faceContrastPictureUrl = make_shared<string>(boost::any_cast<string>(m["FaceContrastPictureUrl"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssObjectName") != m.end() && !m["OssObjectName"].empty()) {
      ossObjectName = make_shared<string>(boost::any_cast<string>(m["OssObjectName"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("FaceContrastFile") != m.end() && !m["FaceContrastFile"].empty()) {
      faceContrastFile = make_shared<string>(boost::any_cast<string>(m["FaceContrastFile"]));
    }
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<string>(boost::any_cast<string>(m["Crop"]));
    }
  }


  virtual ~ContrastFaceVerifyRequest() = default;
};
class ContrastFaceVerifyResponseResultObject : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> subCode{};
  shared_ptr<string> materialInfo{};
  shared_ptr<string> identityInfo{};
  shared_ptr<string> passed{};

  ContrastFaceVerifyResponseResultObject() {}

  explicit ContrastFaceVerifyResponseResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!certifyId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("certifyId is required.")));
    }
    if (!subCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("subCode is required.")));
    }
    if (!materialInfo) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("materialInfo is required.")));
    }
    if (!identityInfo) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("identityInfo is required.")));
    }
    if (!passed) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("passed is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (materialInfo) {
      res["MaterialInfo"] = boost::any(*materialInfo);
    }
    if (identityInfo) {
      res["IdentityInfo"] = boost::any(*identityInfo);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("MaterialInfo") != m.end() && !m["MaterialInfo"].empty()) {
      materialInfo = make_shared<string>(boost::any_cast<string>(m["MaterialInfo"]));
    }
    if (m.find("IdentityInfo") != m.end() && !m["IdentityInfo"].empty()) {
      identityInfo = make_shared<string>(boost::any_cast<string>(m["IdentityInfo"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
  }


  virtual ~ContrastFaceVerifyResponseResultObject() = default;
};
class ContrastFaceVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<ContrastFaceVerifyResponseResultObject> resultObject{};

  ContrastFaceVerifyResponse() {}

  explicit ContrastFaceVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!code) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("code is required.")));
    }
    if (!message) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("message is required.")));
    }
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resultObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resultObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        ContrastFaceVerifyResponseResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<ContrastFaceVerifyResponseResultObject>(model1);
      }
    }
  }


  virtual ~ContrastFaceVerifyResponse() = default;
};
class ContrastFaceVerifyAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> faceContrastFileObject{};
  shared_ptr<long> sceneId{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<string> productCode{};
  shared_ptr<string> certType{};
  shared_ptr<string> certName{};
  shared_ptr<string> certNo{};
  shared_ptr<string> faceContrastPicture{};
  shared_ptr<string> deviceToken{};
  shared_ptr<string> mobile{};
  shared_ptr<string> ip{};
  shared_ptr<string> userId{};
  shared_ptr<string> faceContrastPictureUrl{};
  shared_ptr<string> certifyId{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossObjectName{};
  shared_ptr<string> model{};
  shared_ptr<string> crop{};

  ContrastFaceVerifyAdvanceRequest() {}

  explicit ContrastFaceVerifyAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!faceContrastFileObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("faceContrastFileObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceContrastFileObject) {
      res["FaceContrastFileObject"] = boost::any(*faceContrastFileObject);
    }
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (faceContrastPicture) {
      res["FaceContrastPicture"] = boost::any(*faceContrastPicture);
    }
    if (deviceToken) {
      res["DeviceToken"] = boost::any(*deviceToken);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (faceContrastPictureUrl) {
      res["FaceContrastPictureUrl"] = boost::any(*faceContrastPictureUrl);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossObjectName) {
      res["OssObjectName"] = boost::any(*ossObjectName);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceContrastFileObject") != m.end() && !m["FaceContrastFileObject"].empty()) {
      faceContrastFileObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FaceContrastFileObject"]));
    }
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("FaceContrastPicture") != m.end() && !m["FaceContrastPicture"].empty()) {
      faceContrastPicture = make_shared<string>(boost::any_cast<string>(m["FaceContrastPicture"]));
    }
    if (m.find("DeviceToken") != m.end() && !m["DeviceToken"].empty()) {
      deviceToken = make_shared<string>(boost::any_cast<string>(m["DeviceToken"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("FaceContrastPictureUrl") != m.end() && !m["FaceContrastPictureUrl"].empty()) {
      faceContrastPictureUrl = make_shared<string>(boost::any_cast<string>(m["FaceContrastPictureUrl"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssObjectName") != m.end() && !m["OssObjectName"].empty()) {
      ossObjectName = make_shared<string>(boost::any_cast<string>(m["OssObjectName"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<string>(boost::any_cast<string>(m["Crop"]));
    }
  }


  virtual ~ContrastFaceVerifyAdvanceRequest() = default;
};
class InitDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<string> channel{};
  shared_ptr<string> merchant{};
  shared_ptr<string> productName{};
  shared_ptr<string> produceNode{};
  shared_ptr<string> bizData{};
  shared_ptr<string> metaInfo{};
  shared_ptr<string> certifyPrincipal{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> deviceToken{};
  shared_ptr<string> uaToken{};
  shared_ptr<string> webUmidToken{};

  InitDeviceRequest() {}

  explicit InitDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (merchant) {
      res["Merchant"] = boost::any(*merchant);
    }
    if (productName) {
      res["ProductName"] = boost::any(*productName);
    }
    if (produceNode) {
      res["ProduceNode"] = boost::any(*produceNode);
    }
    if (bizData) {
      res["BizData"] = boost::any(*bizData);
    }
    if (metaInfo) {
      res["MetaInfo"] = boost::any(*metaInfo);
    }
    if (certifyPrincipal) {
      res["CertifyPrincipal"] = boost::any(*certifyPrincipal);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (deviceToken) {
      res["DeviceToken"] = boost::any(*deviceToken);
    }
    if (uaToken) {
      res["UaToken"] = boost::any(*uaToken);
    }
    if (webUmidToken) {
      res["WebUmidToken"] = boost::any(*webUmidToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["Channel"]));
    }
    if (m.find("Merchant") != m.end() && !m["Merchant"].empty()) {
      merchant = make_shared<string>(boost::any_cast<string>(m["Merchant"]));
    }
    if (m.find("ProductName") != m.end() && !m["ProductName"].empty()) {
      productName = make_shared<string>(boost::any_cast<string>(m["ProductName"]));
    }
    if (m.find("ProduceNode") != m.end() && !m["ProduceNode"].empty()) {
      produceNode = make_shared<string>(boost::any_cast<string>(m["ProduceNode"]));
    }
    if (m.find("BizData") != m.end() && !m["BizData"].empty()) {
      bizData = make_shared<string>(boost::any_cast<string>(m["BizData"]));
    }
    if (m.find("MetaInfo") != m.end() && !m["MetaInfo"].empty()) {
      metaInfo = make_shared<string>(boost::any_cast<string>(m["MetaInfo"]));
    }
    if (m.find("CertifyPrincipal") != m.end() && !m["CertifyPrincipal"].empty()) {
      certifyPrincipal = make_shared<string>(boost::any_cast<string>(m["CertifyPrincipal"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("DeviceToken") != m.end() && !m["DeviceToken"].empty()) {
      deviceToken = make_shared<string>(boost::any_cast<string>(m["DeviceToken"]));
    }
    if (m.find("UaToken") != m.end() && !m["UaToken"].empty()) {
      uaToken = make_shared<string>(boost::any_cast<string>(m["UaToken"]));
    }
    if (m.find("WebUmidToken") != m.end() && !m["WebUmidToken"].empty()) {
      webUmidToken = make_shared<string>(boost::any_cast<string>(m["WebUmidToken"]));
    }
  }


  virtual ~InitDeviceRequest() = default;
};
class InitDeviceResponseResultObject : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> protocol{};
  shared_ptr<string> extParams{};
  shared_ptr<string> retCode{};
  shared_ptr<string> retCodeSub{};
  shared_ptr<string> retMessageSub{};
  shared_ptr<string> message{};
  shared_ptr<string> ossEndPoint{};
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> fileNamePrefix{};
  shared_ptr<string> fileName{};
  shared_ptr<string> presignedUrl{};

  InitDeviceResponseResultObject() {}

  explicit InitDeviceResponseResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!certifyId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("certifyId is required.")));
    }
    if (!protocol) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("protocol is required.")));
    }
    if (!extParams) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("extParams is required.")));
    }
    if (!retCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("retCode is required.")));
    }
    if (!retCodeSub) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("retCodeSub is required.")));
    }
    if (!retMessageSub) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("retMessageSub is required.")));
    }
    if (!message) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("message is required.")));
    }
    if (!ossEndPoint) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("ossEndPoint is required.")));
    }
    if (!accessKeyId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("accessKeyId is required.")));
    }
    if (!accessKeySecret) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("accessKeySecret is required.")));
    }
    if (!securityToken) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("securityToken is required.")));
    }
    if (!bucketName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bucketName is required.")));
    }
    if (!fileNamePrefix) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("fileNamePrefix is required.")));
    }
    if (!fileName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("fileName is required.")));
    }
    if (!presignedUrl) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("presignedUrl is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (extParams) {
      res["ExtParams"] = boost::any(*extParams);
    }
    if (retCode) {
      res["RetCode"] = boost::any(*retCode);
    }
    if (retCodeSub) {
      res["RetCodeSub"] = boost::any(*retCodeSub);
    }
    if (retMessageSub) {
      res["RetMessageSub"] = boost::any(*retMessageSub);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (ossEndPoint) {
      res["OssEndPoint"] = boost::any(*ossEndPoint);
    }
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (fileNamePrefix) {
      res["FileNamePrefix"] = boost::any(*fileNamePrefix);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (presignedUrl) {
      res["PresignedUrl"] = boost::any(*presignedUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("ExtParams") != m.end() && !m["ExtParams"].empty()) {
      extParams = make_shared<string>(boost::any_cast<string>(m["ExtParams"]));
    }
    if (m.find("RetCode") != m.end() && !m["RetCode"].empty()) {
      retCode = make_shared<string>(boost::any_cast<string>(m["RetCode"]));
    }
    if (m.find("RetCodeSub") != m.end() && !m["RetCodeSub"].empty()) {
      retCodeSub = make_shared<string>(boost::any_cast<string>(m["RetCodeSub"]));
    }
    if (m.find("RetMessageSub") != m.end() && !m["RetMessageSub"].empty()) {
      retMessageSub = make_shared<string>(boost::any_cast<string>(m["RetMessageSub"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OssEndPoint") != m.end() && !m["OssEndPoint"].empty()) {
      ossEndPoint = make_shared<string>(boost::any_cast<string>(m["OssEndPoint"]));
    }
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("FileNamePrefix") != m.end() && !m["FileNamePrefix"].empty()) {
      fileNamePrefix = make_shared<string>(boost::any_cast<string>(m["FileNamePrefix"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("PresignedUrl") != m.end() && !m["PresignedUrl"].empty()) {
      presignedUrl = make_shared<string>(boost::any_cast<string>(m["PresignedUrl"]));
    }
  }


  virtual ~InitDeviceResponseResultObject() = default;
};
class InitDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> message{};
  shared_ptr<string> code{};
  shared_ptr<InitDeviceResponseResultObject> resultObject{};

  InitDeviceResponse() {}

  explicit InitDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!message) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("message is required.")));
    }
    if (!code) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("code is required.")));
    }
    if (!resultObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resultObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        InitDeviceResponseResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<InitDeviceResponseResultObject>(model1);
      }
    }
  }


  virtual ~InitDeviceResponse() = default;
};
class InitFaceVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<long> sceneId{};
  shared_ptr<string> outerOrderNo{};
  shared_ptr<string> productCode{};
  shared_ptr<string> certType{};
  shared_ptr<string> certName{};
  shared_ptr<string> certNo{};
  shared_ptr<string> returnUrl{};
  shared_ptr<string> faceContrastPicture{};
  shared_ptr<string> metaInfo{};
  shared_ptr<string> mobile{};
  shared_ptr<string> ip{};
  shared_ptr<string> userId{};
  shared_ptr<string> faceContrastPictureUrl{};
  shared_ptr<string> certifyId{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<string> ossObjectName{};
  shared_ptr<string> model{};
  shared_ptr<string> callbackUrl{};
  shared_ptr<string> callbackToken{};
  shared_ptr<string> crop{};

  InitFaceVerifyRequest() {}

  explicit InitFaceVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (outerOrderNo) {
      res["OuterOrderNo"] = boost::any(*outerOrderNo);
    }
    if (productCode) {
      res["ProductCode"] = boost::any(*productCode);
    }
    if (certType) {
      res["CertType"] = boost::any(*certType);
    }
    if (certName) {
      res["CertName"] = boost::any(*certName);
    }
    if (certNo) {
      res["CertNo"] = boost::any(*certNo);
    }
    if (returnUrl) {
      res["ReturnUrl"] = boost::any(*returnUrl);
    }
    if (faceContrastPicture) {
      res["FaceContrastPicture"] = boost::any(*faceContrastPicture);
    }
    if (metaInfo) {
      res["MetaInfo"] = boost::any(*metaInfo);
    }
    if (mobile) {
      res["Mobile"] = boost::any(*mobile);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (faceContrastPictureUrl) {
      res["FaceContrastPictureUrl"] = boost::any(*faceContrastPictureUrl);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossObjectName) {
      res["OssObjectName"] = boost::any(*ossObjectName);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (callbackToken) {
      res["CallbackToken"] = boost::any(*callbackToken);
    }
    if (crop) {
      res["Crop"] = boost::any(*crop);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("OuterOrderNo") != m.end() && !m["OuterOrderNo"].empty()) {
      outerOrderNo = make_shared<string>(boost::any_cast<string>(m["OuterOrderNo"]));
    }
    if (m.find("ProductCode") != m.end() && !m["ProductCode"].empty()) {
      productCode = make_shared<string>(boost::any_cast<string>(m["ProductCode"]));
    }
    if (m.find("CertType") != m.end() && !m["CertType"].empty()) {
      certType = make_shared<string>(boost::any_cast<string>(m["CertType"]));
    }
    if (m.find("CertName") != m.end() && !m["CertName"].empty()) {
      certName = make_shared<string>(boost::any_cast<string>(m["CertName"]));
    }
    if (m.find("CertNo") != m.end() && !m["CertNo"].empty()) {
      certNo = make_shared<string>(boost::any_cast<string>(m["CertNo"]));
    }
    if (m.find("ReturnUrl") != m.end() && !m["ReturnUrl"].empty()) {
      returnUrl = make_shared<string>(boost::any_cast<string>(m["ReturnUrl"]));
    }
    if (m.find("FaceContrastPicture") != m.end() && !m["FaceContrastPicture"].empty()) {
      faceContrastPicture = make_shared<string>(boost::any_cast<string>(m["FaceContrastPicture"]));
    }
    if (m.find("MetaInfo") != m.end() && !m["MetaInfo"].empty()) {
      metaInfo = make_shared<string>(boost::any_cast<string>(m["MetaInfo"]));
    }
    if (m.find("Mobile") != m.end() && !m["Mobile"].empty()) {
      mobile = make_shared<string>(boost::any_cast<string>(m["Mobile"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("FaceContrastPictureUrl") != m.end() && !m["FaceContrastPictureUrl"].empty()) {
      faceContrastPictureUrl = make_shared<string>(boost::any_cast<string>(m["FaceContrastPictureUrl"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssObjectName") != m.end() && !m["OssObjectName"].empty()) {
      ossObjectName = make_shared<string>(boost::any_cast<string>(m["OssObjectName"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("CallbackToken") != m.end() && !m["CallbackToken"].empty()) {
      callbackToken = make_shared<string>(boost::any_cast<string>(m["CallbackToken"]));
    }
    if (m.find("Crop") != m.end() && !m["Crop"].empty()) {
      crop = make_shared<string>(boost::any_cast<string>(m["Crop"]));
    }
  }


  virtual ~InitFaceVerifyRequest() = default;
};
class InitFaceVerifyResponseResultObject : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> certifyUrl{};

  InitFaceVerifyResponseResultObject() {}

  explicit InitFaceVerifyResponseResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!certifyId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("certifyId is required.")));
    }
    if (!certifyUrl) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("certifyUrl is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (certifyUrl) {
      res["CertifyUrl"] = boost::any(*certifyUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("CertifyUrl") != m.end() && !m["CertifyUrl"].empty()) {
      certifyUrl = make_shared<string>(boost::any_cast<string>(m["CertifyUrl"]));
    }
  }


  virtual ~InitFaceVerifyResponseResultObject() = default;
};
class InitFaceVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<InitFaceVerifyResponseResultObject> resultObject{};

  InitFaceVerifyResponse() {}

  explicit InitFaceVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!code) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("code is required.")));
    }
    if (!message) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("message is required.")));
    }
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resultObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resultObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        InitFaceVerifyResponseResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<InitFaceVerifyResponseResultObject>(model1);
      }
    }
  }


  virtual ~InitFaceVerifyResponse() = default;
};
class DescribeFaceVerifyRequest : public Darabonba::Model {
public:
  shared_ptr<long> sceneId{};
  shared_ptr<string> certifyId{};
  shared_ptr<string> pictureReturnType{};

  DescribeFaceVerifyRequest() {}

  explicit DescribeFaceVerifyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneId) {
      res["SceneId"] = boost::any(*sceneId);
    }
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (pictureReturnType) {
      res["PictureReturnType"] = boost::any(*pictureReturnType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SceneId") != m.end() && !m["SceneId"].empty()) {
      sceneId = make_shared<long>(boost::any_cast<long>(m["SceneId"]));
    }
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("PictureReturnType") != m.end() && !m["PictureReturnType"].empty()) {
      pictureReturnType = make_shared<string>(boost::any_cast<string>(m["PictureReturnType"]));
    }
  }


  virtual ~DescribeFaceVerifyRequest() = default;
};
class DescribeFaceVerifyResponseResultObject : public Darabonba::Model {
public:
  shared_ptr<string> subCode{};
  shared_ptr<string> materialInfo{};
  shared_ptr<string> identityInfo{};
  shared_ptr<string> deviceToken{};
  shared_ptr<string> passed{};

  DescribeFaceVerifyResponseResultObject() {}

  explicit DescribeFaceVerifyResponseResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!subCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("subCode is required.")));
    }
    if (!materialInfo) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("materialInfo is required.")));
    }
    if (!identityInfo) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("identityInfo is required.")));
    }
    if (!deviceToken) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("deviceToken is required.")));
    }
    if (!passed) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("passed is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (subCode) {
      res["SubCode"] = boost::any(*subCode);
    }
    if (materialInfo) {
      res["MaterialInfo"] = boost::any(*materialInfo);
    }
    if (identityInfo) {
      res["IdentityInfo"] = boost::any(*identityInfo);
    }
    if (deviceToken) {
      res["DeviceToken"] = boost::any(*deviceToken);
    }
    if (passed) {
      res["Passed"] = boost::any(*passed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SubCode") != m.end() && !m["SubCode"].empty()) {
      subCode = make_shared<string>(boost::any_cast<string>(m["SubCode"]));
    }
    if (m.find("MaterialInfo") != m.end() && !m["MaterialInfo"].empty()) {
      materialInfo = make_shared<string>(boost::any_cast<string>(m["MaterialInfo"]));
    }
    if (m.find("IdentityInfo") != m.end() && !m["IdentityInfo"].empty()) {
      identityInfo = make_shared<string>(boost::any_cast<string>(m["IdentityInfo"]));
    }
    if (m.find("DeviceToken") != m.end() && !m["DeviceToken"].empty()) {
      deviceToken = make_shared<string>(boost::any_cast<string>(m["DeviceToken"]));
    }
    if (m.find("Passed") != m.end() && !m["Passed"].empty()) {
      passed = make_shared<string>(boost::any_cast<string>(m["Passed"]));
    }
  }


  virtual ~DescribeFaceVerifyResponseResultObject() = default;
};
class DescribeFaceVerifyResponse : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeFaceVerifyResponseResultObject> resultObject{};

  DescribeFaceVerifyResponse() {}

  explicit DescribeFaceVerifyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!code) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("code is required.")));
    }
    if (!message) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("message is required.")));
    }
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!resultObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resultObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        DescribeFaceVerifyResponseResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<DescribeFaceVerifyResponseResultObject>(model1);
      }
    }
  }


  virtual ~DescribeFaceVerifyResponse() = default;
};
class VerifyDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> certifyId{};
  shared_ptr<string> certifyData{};
  shared_ptr<string> appVersion{};
  shared_ptr<string> extInfo{};
  shared_ptr<string> deviceToken{};

  VerifyDeviceRequest() {}

  explicit VerifyDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certifyId) {
      res["CertifyId"] = boost::any(*certifyId);
    }
    if (certifyData) {
      res["CertifyData"] = boost::any(*certifyData);
    }
    if (appVersion) {
      res["AppVersion"] = boost::any(*appVersion);
    }
    if (extInfo) {
      res["ExtInfo"] = boost::any(*extInfo);
    }
    if (deviceToken) {
      res["DeviceToken"] = boost::any(*deviceToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertifyId") != m.end() && !m["CertifyId"].empty()) {
      certifyId = make_shared<string>(boost::any_cast<string>(m["CertifyId"]));
    }
    if (m.find("CertifyData") != m.end() && !m["CertifyData"].empty()) {
      certifyData = make_shared<string>(boost::any_cast<string>(m["CertifyData"]));
    }
    if (m.find("AppVersion") != m.end() && !m["AppVersion"].empty()) {
      appVersion = make_shared<string>(boost::any_cast<string>(m["AppVersion"]));
    }
    if (m.find("ExtInfo") != m.end() && !m["ExtInfo"].empty()) {
      extInfo = make_shared<string>(boost::any_cast<string>(m["ExtInfo"]));
    }
    if (m.find("DeviceToken") != m.end() && !m["DeviceToken"].empty()) {
      deviceToken = make_shared<string>(boost::any_cast<string>(m["DeviceToken"]));
    }
  }


  virtual ~VerifyDeviceRequest() = default;
};
class VerifyDeviceResponseResultObject : public Darabonba::Model {
public:
  shared_ptr<string> validationRetCode{};
  shared_ptr<string> productRetCode{};
  shared_ptr<string> retCodeSub{};
  shared_ptr<string> retMessageSub{};
  shared_ptr<string> hasNext{};
  shared_ptr<string> extParams{};

  VerifyDeviceResponseResultObject() {}

  explicit VerifyDeviceResponseResultObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!validationRetCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("validationRetCode is required.")));
    }
    if (!productRetCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("productRetCode is required.")));
    }
    if (!retCodeSub) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("retCodeSub is required.")));
    }
    if (!retMessageSub) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("retMessageSub is required.")));
    }
    if (!hasNext) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("hasNext is required.")));
    }
    if (!extParams) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("extParams is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (validationRetCode) {
      res["ValidationRetCode"] = boost::any(*validationRetCode);
    }
    if (productRetCode) {
      res["ProductRetCode"] = boost::any(*productRetCode);
    }
    if (retCodeSub) {
      res["RetCodeSub"] = boost::any(*retCodeSub);
    }
    if (retMessageSub) {
      res["RetMessageSub"] = boost::any(*retMessageSub);
    }
    if (hasNext) {
      res["HasNext"] = boost::any(*hasNext);
    }
    if (extParams) {
      res["ExtParams"] = boost::any(*extParams);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ValidationRetCode") != m.end() && !m["ValidationRetCode"].empty()) {
      validationRetCode = make_shared<string>(boost::any_cast<string>(m["ValidationRetCode"]));
    }
    if (m.find("ProductRetCode") != m.end() && !m["ProductRetCode"].empty()) {
      productRetCode = make_shared<string>(boost::any_cast<string>(m["ProductRetCode"]));
    }
    if (m.find("RetCodeSub") != m.end() && !m["RetCodeSub"].empty()) {
      retCodeSub = make_shared<string>(boost::any_cast<string>(m["RetCodeSub"]));
    }
    if (m.find("RetMessageSub") != m.end() && !m["RetMessageSub"].empty()) {
      retMessageSub = make_shared<string>(boost::any_cast<string>(m["RetMessageSub"]));
    }
    if (m.find("HasNext") != m.end() && !m["HasNext"].empty()) {
      hasNext = make_shared<string>(boost::any_cast<string>(m["HasNext"]));
    }
    if (m.find("ExtParams") != m.end() && !m["ExtParams"].empty()) {
      extParams = make_shared<string>(boost::any_cast<string>(m["ExtParams"]));
    }
  }


  virtual ~VerifyDeviceResponseResultObject() = default;
};
class VerifyDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<VerifyDeviceResponseResultObject> resultObject{};

  VerifyDeviceResponse() {}

  explicit VerifyDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!code) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("code is required.")));
    }
    if (!message) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("message is required.")));
    }
    if (!resultObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("resultObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (resultObject) {
      res["ResultObject"] = resultObject ? boost::any(resultObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ResultObject") != m.end() && !m["ResultObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultObject"].type()) {
        VerifyDeviceResponseResultObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultObject"]));
        resultObject = make_shared<VerifyDeviceResponseResultObject>(model1);
      }
    }
  }


  virtual ~VerifyDeviceResponse() = default;
};
class ModifyDeviceInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};
  shared_ptr<string> userDeviceId{};
  shared_ptr<string> bizType{};
  shared_ptr<string> duration{};
  shared_ptr<string> expiredDay{};

  ModifyDeviceInfoRequest() {}

  explicit ModifyDeviceInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!deviceId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("deviceId is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (userDeviceId) {
      res["UserDeviceId"] = boost::any(*userDeviceId);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (expiredDay) {
      res["ExpiredDay"] = boost::any(*expiredDay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("UserDeviceId") != m.end() && !m["UserDeviceId"].empty()) {
      userDeviceId = make_shared<string>(boost::any_cast<string>(m["UserDeviceId"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("ExpiredDay") != m.end() && !m["ExpiredDay"].empty()) {
      expiredDay = make_shared<string>(boost::any_cast<string>(m["ExpiredDay"]));
    }
  }


  virtual ~ModifyDeviceInfoRequest() = default;
};
class ModifyDeviceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> userDeviceId{};
  shared_ptr<string> bizType{};
  shared_ptr<string> beginDay{};
  shared_ptr<string> expiredDay{};

  ModifyDeviceInfoResponse() {}

  explicit ModifyDeviceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!deviceId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("deviceId is required.")));
    }
    if (!userDeviceId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("userDeviceId is required.")));
    }
    if (!bizType) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizType is required.")));
    }
    if (!beginDay) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("beginDay is required.")));
    }
    if (!expiredDay) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("expiredDay is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (userDeviceId) {
      res["UserDeviceId"] = boost::any(*userDeviceId);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (beginDay) {
      res["BeginDay"] = boost::any(*beginDay);
    }
    if (expiredDay) {
      res["ExpiredDay"] = boost::any(*expiredDay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("UserDeviceId") != m.end() && !m["UserDeviceId"].empty()) {
      userDeviceId = make_shared<string>(boost::any_cast<string>(m["UserDeviceId"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BeginDay") != m.end() && !m["BeginDay"].empty()) {
      beginDay = make_shared<string>(boost::any_cast<string>(m["BeginDay"]));
    }
    if (m.find("ExpiredDay") != m.end() && !m["ExpiredDay"].empty()) {
      expiredDay = make_shared<string>(boost::any_cast<string>(m["ExpiredDay"]));
    }
  }


  virtual ~ModifyDeviceInfoResponse() = default;
};
class DescribeVerifySDKRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  DescribeVerifySDKRequest() {}

  explicit DescribeVerifySDKRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!taskId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("taskId is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeVerifySDKRequest() = default;
};
class DescribeVerifySDKResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> sdkUrl{};

  DescribeVerifySDKResponse() {}

  explicit DescribeVerifySDKResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!sdkUrl) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("sdkUrl is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sdkUrl) {
      res["SdkUrl"] = boost::any(*sdkUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SdkUrl") != m.end() && !m["SdkUrl"].empty()) {
      sdkUrl = make_shared<string>(boost::any_cast<string>(m["SdkUrl"]));
    }
  }


  virtual ~DescribeVerifySDKResponse() = default;
};
class DescribeDeviceInfoRequest : public Darabonba::Model {
public:
  shared_ptr<int> pageSize{};
  shared_ptr<int> currentPage{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> bizType{};
  shared_ptr<string> userDeviceId{};
  shared_ptr<string> expiredStartDay{};
  shared_ptr<string> expiredEndDay{};

  DescribeDeviceInfoRequest() {}

  explicit DescribeDeviceInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (userDeviceId) {
      res["UserDeviceId"] = boost::any(*userDeviceId);
    }
    if (expiredStartDay) {
      res["ExpiredStartDay"] = boost::any(*expiredStartDay);
    }
    if (expiredEndDay) {
      res["ExpiredEndDay"] = boost::any(*expiredEndDay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<int>(boost::any_cast<int>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<int>(boost::any_cast<int>(m["CurrentPage"]));
    }
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("UserDeviceId") != m.end() && !m["UserDeviceId"].empty()) {
      userDeviceId = make_shared<string>(boost::any_cast<string>(m["UserDeviceId"]));
    }
    if (m.find("ExpiredStartDay") != m.end() && !m["ExpiredStartDay"].empty()) {
      expiredStartDay = make_shared<string>(boost::any_cast<string>(m["ExpiredStartDay"]));
    }
    if (m.find("ExpiredEndDay") != m.end() && !m["ExpiredEndDay"].empty()) {
      expiredEndDay = make_shared<string>(boost::any_cast<string>(m["ExpiredEndDay"]));
    }
  }


  virtual ~DescribeDeviceInfoRequest() = default;
};
class DescribeDeviceInfoResponseDeviceInfoListDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};
  shared_ptr<string> userDeviceId{};
  shared_ptr<string> bizType{};
  shared_ptr<string> beginDay{};
  shared_ptr<string> expiredDay{};

  DescribeDeviceInfoResponseDeviceInfoListDeviceInfo() {}

  explicit DescribeDeviceInfoResponseDeviceInfoListDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!deviceId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("deviceId is required.")));
    }
    if (!userDeviceId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("userDeviceId is required.")));
    }
    if (!bizType) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizType is required.")));
    }
    if (!beginDay) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("beginDay is required.")));
    }
    if (!expiredDay) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("expiredDay is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["DeviceId"] = boost::any(*deviceId);
    }
    if (userDeviceId) {
      res["UserDeviceId"] = boost::any(*userDeviceId);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (beginDay) {
      res["BeginDay"] = boost::any(*beginDay);
    }
    if (expiredDay) {
      res["ExpiredDay"] = boost::any(*expiredDay);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceId") != m.end() && !m["DeviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["DeviceId"]));
    }
    if (m.find("UserDeviceId") != m.end() && !m["UserDeviceId"].empty()) {
      userDeviceId = make_shared<string>(boost::any_cast<string>(m["UserDeviceId"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BeginDay") != m.end() && !m["BeginDay"].empty()) {
      beginDay = make_shared<string>(boost::any_cast<string>(m["BeginDay"]));
    }
    if (m.find("ExpiredDay") != m.end() && !m["ExpiredDay"].empty()) {
      expiredDay = make_shared<string>(boost::any_cast<string>(m["ExpiredDay"]));
    }
  }


  virtual ~DescribeDeviceInfoResponseDeviceInfoListDeviceInfo() = default;
};
class DescribeDeviceInfoResponseDeviceInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDeviceInfoResponseDeviceInfoListDeviceInfo>> deviceInfo{};

  DescribeDeviceInfoResponseDeviceInfoList() {}

  explicit DescribeDeviceInfoResponseDeviceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!deviceInfo) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("deviceInfo is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfo) {
      vector<boost::any> temp1;
      for(auto item1:*deviceInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeviceInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["DeviceInfo"].type()) {
        vector<DescribeDeviceInfoResponseDeviceInfoListDeviceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeviceInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDeviceInfoResponseDeviceInfoListDeviceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deviceInfo = make_shared<vector<DescribeDeviceInfoResponseDeviceInfoListDeviceInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeDeviceInfoResponseDeviceInfoList() = default;
};
class DescribeDeviceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<int> pageSize{};
  shared_ptr<int> currentPage{};
  shared_ptr<int> totalCount{};
  shared_ptr<DescribeDeviceInfoResponseDeviceInfoList> deviceInfoList{};

  DescribeDeviceInfoResponse() {}

  explicit DescribeDeviceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!pageSize) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("pageSize is required.")));
    }
    if (!currentPage) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("currentPage is required.")));
    }
    if (!totalCount) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("totalCount is required.")));
    }
    if (!deviceInfoList) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("deviceInfoList is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (deviceInfoList) {
      res["DeviceInfoList"] = deviceInfoList ? boost::any(deviceInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<int>(boost::any_cast<int>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<int>(boost::any_cast<int>(m["CurrentPage"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<int>(boost::any_cast<int>(m["TotalCount"]));
    }
    if (m.find("DeviceInfoList") != m.end() && !m["DeviceInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceInfoList"].type()) {
        DescribeDeviceInfoResponseDeviceInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceInfoList"]));
        deviceInfoList = make_shared<DescribeDeviceInfoResponseDeviceInfoList>(model1);
      }
    }
  }


  virtual ~DescribeDeviceInfoResponse() = default;
};
class CreateVerifySDKRequest : public Darabonba::Model {
public:
  shared_ptr<string> appUrl{};
  shared_ptr<string> platform{};

  CreateVerifySDKRequest() {}

  explicit CreateVerifySDKRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!appUrl) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("appUrl is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appUrl) {
      res["AppUrl"] = boost::any(*appUrl);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppUrl") != m.end() && !m["AppUrl"].empty()) {
      appUrl = make_shared<string>(boost::any_cast<string>(m["AppUrl"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
  }


  virtual ~CreateVerifySDKRequest() = default;
};
class CreateVerifySDKResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateVerifySDKResponse() {}

  explicit CreateVerifySDKResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!taskId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("taskId is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateVerifySDKResponse() = default;
};
class CreateAuthKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> userDeviceId{};
  shared_ptr<bool> test{};
  shared_ptr<int> authYears{};

  CreateAuthKeyRequest() {}

  explicit CreateAuthKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (userDeviceId) {
      res["UserDeviceId"] = boost::any(*userDeviceId);
    }
    if (test) {
      res["Test"] = boost::any(*test);
    }
    if (authYears) {
      res["AuthYears"] = boost::any(*authYears);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("UserDeviceId") != m.end() && !m["UserDeviceId"].empty()) {
      userDeviceId = make_shared<string>(boost::any_cast<string>(m["UserDeviceId"]));
    }
    if (m.find("Test") != m.end() && !m["Test"].empty()) {
      test = make_shared<bool>(boost::any_cast<bool>(m["Test"]));
    }
    if (m.find("AuthYears") != m.end() && !m["AuthYears"].empty()) {
      authYears = make_shared<int>(boost::any_cast<int>(m["AuthYears"]));
    }
  }


  virtual ~CreateAuthKeyRequest() = default;
};
class CreateAuthKeyResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> authKey{};

  CreateAuthKeyResponse() {}

  explicit CreateAuthKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!authKey) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("authKey is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (authKey) {
      res["AuthKey"] = boost::any(*authKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("AuthKey") != m.end() && !m["AuthKey"].empty()) {
      authKey = make_shared<string>(boost::any_cast<string>(m["AuthKey"]));
    }
  }


  virtual ~CreateAuthKeyResponse() = default;
};
class DetectFaceAttributesRequest : public Darabonba::Model {
public:
  shared_ptr<string> materialValue{};
  shared_ptr<string> bizType{};

  DetectFaceAttributesRequest() {}

  explicit DetectFaceAttributesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!materialValue) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("materialValue is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (materialValue) {
      res["MaterialValue"] = boost::any(*materialValue);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaterialValue") != m.end() && !m["MaterialValue"].empty()) {
      materialValue = make_shared<string>(boost::any_cast<string>(m["MaterialValue"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
  }


  virtual ~DetectFaceAttributesRequest() = default;
};
class DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceRect : public Darabonba::Model {
public:
  shared_ptr<int> top{};
  shared_ptr<int> left{};
  shared_ptr<int> width{};
  shared_ptr<int> height{};

  DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceRect() {}

  explicit DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceRect(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!top) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("top is required.")));
    }
    if (!left) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("left is required.")));
    }
    if (!width) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("width is required.")));
    }
    if (!height) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("height is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (left) {
      res["Left"] = boost::any(*left);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<int>(boost::any_cast<int>(m["Top"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<int>(boost::any_cast<int>(m["Left"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<int>(boost::any_cast<int>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<int>(boost::any_cast<int>(m["Height"]));
    }
  }


  virtual ~DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceRect() = default;
};
class DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling : public Darabonba::Model {
public:
  shared_ptr<double> value{};
  shared_ptr<double> threshold{};

  DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling() {}

  explicit DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!value) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("value is required.")));
    }
    if (!threshold) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("threshold is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
  }


  virtual ~DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling() = default;
};
class DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose : public Darabonba::Model {
public:
  shared_ptr<double> pitchAngle{};
  shared_ptr<double> rollAngle{};
  shared_ptr<double> yawAngle{};

  DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose() {}

  explicit DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!pitchAngle) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("pitchAngle is required.")));
    }
    if (!rollAngle) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("rollAngle is required.")));
    }
    if (!yawAngle) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("yawAngle is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pitchAngle) {
      res["PitchAngle"] = boost::any(*pitchAngle);
    }
    if (rollAngle) {
      res["RollAngle"] = boost::any(*rollAngle);
    }
    if (yawAngle) {
      res["YawAngle"] = boost::any(*yawAngle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PitchAngle") != m.end() && !m["PitchAngle"].empty()) {
      pitchAngle = make_shared<double>(boost::any_cast<double>(m["PitchAngle"]));
    }
    if (m.find("RollAngle") != m.end() && !m["RollAngle"].empty()) {
      rollAngle = make_shared<double>(boost::any_cast<double>(m["RollAngle"]));
    }
    if (m.find("YawAngle") != m.end() && !m["YawAngle"].empty()) {
      yawAngle = make_shared<double>(boost::any_cast<double>(m["YawAngle"]));
    }
  }


  virtual ~DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose() = default;
};
class DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceAttributes : public Darabonba::Model {
public:
  shared_ptr<string> glasses{};
  shared_ptr<string> facetype{};
  shared_ptr<double> blur{};
  shared_ptr<double> facequal{};
  shared_ptr<int> integrity{};
  shared_ptr<string> respirator{};
  shared_ptr<DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling> smiling{};
  shared_ptr<DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose> headpose{};

  DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceAttributes() {}

  explicit DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!glasses) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("glasses is required.")));
    }
    if (!facetype) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("facetype is required.")));
    }
    if (!blur) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("blur is required.")));
    }
    if (!facequal) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("facequal is required.")));
    }
    if (!integrity) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("integrity is required.")));
    }
    if (!respirator) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("respirator is required.")));
    }
    if (!smiling) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("smiling is required.")));
    }
    if (!headpose) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headpose is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (glasses) {
      res["Glasses"] = boost::any(*glasses);
    }
    if (facetype) {
      res["Facetype"] = boost::any(*facetype);
    }
    if (blur) {
      res["Blur"] = boost::any(*blur);
    }
    if (facequal) {
      res["Facequal"] = boost::any(*facequal);
    }
    if (integrity) {
      res["Integrity"] = boost::any(*integrity);
    }
    if (respirator) {
      res["Respirator"] = boost::any(*respirator);
    }
    if (smiling) {
      res["Smiling"] = smiling ? boost::any(smiling->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (headpose) {
      res["Headpose"] = headpose ? boost::any(headpose->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Glasses") != m.end() && !m["Glasses"].empty()) {
      glasses = make_shared<string>(boost::any_cast<string>(m["Glasses"]));
    }
    if (m.find("Facetype") != m.end() && !m["Facetype"].empty()) {
      facetype = make_shared<string>(boost::any_cast<string>(m["Facetype"]));
    }
    if (m.find("Blur") != m.end() && !m["Blur"].empty()) {
      blur = make_shared<double>(boost::any_cast<double>(m["Blur"]));
    }
    if (m.find("Facequal") != m.end() && !m["Facequal"].empty()) {
      facequal = make_shared<double>(boost::any_cast<double>(m["Facequal"]));
    }
    if (m.find("Integrity") != m.end() && !m["Integrity"].empty()) {
      integrity = make_shared<int>(boost::any_cast<int>(m["Integrity"]));
    }
    if (m.find("Respirator") != m.end() && !m["Respirator"].empty()) {
      respirator = make_shared<string>(boost::any_cast<string>(m["Respirator"]));
    }
    if (m.find("Smiling") != m.end() && !m["Smiling"].empty()) {
      if (typeid(map<string, boost::any>) == m["Smiling"].type()) {
        DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Smiling"]));
        smiling = make_shared<DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling>(model1);
      }
    }
    if (m.find("Headpose") != m.end() && !m["Headpose"].empty()) {
      if (typeid(map<string, boost::any>) == m["Headpose"].type()) {
        DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Headpose"]));
        headpose = make_shared<DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose>(model1);
      }
    }
  }


  virtual ~DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceAttributes() = default;
};
class DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfo : public Darabonba::Model {
public:
  shared_ptr<DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceRect> faceRect{};
  shared_ptr<DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceAttributes> faceAttributes{};

  DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfo() {}

  explicit DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!faceRect) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("faceRect is required.")));
    }
    if (!faceAttributes) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("faceAttributes is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceRect) {
      res["FaceRect"] = faceRect ? boost::any(faceRect->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceAttributes) {
      res["FaceAttributes"] = faceAttributes ? boost::any(faceAttributes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceRect") != m.end() && !m["FaceRect"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceRect"].type()) {
        DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceRect model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceRect"]));
        faceRect = make_shared<DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceRect>(model1);
      }
    }
    if (m.find("FaceAttributes") != m.end() && !m["FaceAttributes"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceAttributes"].type()) {
        DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceAttributes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceAttributes"]));
        faceAttributes = make_shared<DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfoFaceAttributes>(model1);
      }
    }
  }


  virtual ~DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfo() = default;
};
class DetectFaceAttributesResponseDataFaceInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfo>> faceAttributesDetectInfo{};

  DetectFaceAttributesResponseDataFaceInfos() {}

  explicit DetectFaceAttributesResponseDataFaceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!faceAttributesDetectInfo) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("faceAttributesDetectInfo is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceAttributesDetectInfo) {
      vector<boost::any> temp1;
      for(auto item1:*faceAttributesDetectInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FaceAttributesDetectInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceAttributesDetectInfo") != m.end() && !m["FaceAttributesDetectInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["FaceAttributesDetectInfo"].type()) {
        vector<DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FaceAttributesDetectInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faceAttributesDetectInfo = make_shared<vector<DetectFaceAttributesResponseDataFaceInfosFaceAttributesDetectInfo>>(expect1);
      }
    }
  }


  virtual ~DetectFaceAttributesResponseDataFaceInfos() = default;
};
class DetectFaceAttributesResponseData : public Darabonba::Model {
public:
  shared_ptr<int> imgWidth{};
  shared_ptr<int> imgHeight{};
  shared_ptr<DetectFaceAttributesResponseDataFaceInfos> faceInfos{};

  DetectFaceAttributesResponseData() {}

  explicit DetectFaceAttributesResponseData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imgWidth) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imgWidth is required.")));
    }
    if (!imgHeight) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imgHeight is required.")));
    }
    if (!faceInfos) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("faceInfos is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imgWidth) {
      res["ImgWidth"] = boost::any(*imgWidth);
    }
    if (imgHeight) {
      res["ImgHeight"] = boost::any(*imgHeight);
    }
    if (faceInfos) {
      res["FaceInfos"] = faceInfos ? boost::any(faceInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImgWidth") != m.end() && !m["ImgWidth"].empty()) {
      imgWidth = make_shared<int>(boost::any_cast<int>(m["ImgWidth"]));
    }
    if (m.find("ImgHeight") != m.end() && !m["ImgHeight"].empty()) {
      imgHeight = make_shared<int>(boost::any_cast<int>(m["ImgHeight"]));
    }
    if (m.find("FaceInfos") != m.end() && !m["FaceInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceInfos"].type()) {
        DetectFaceAttributesResponseDataFaceInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceInfos"]));
        faceInfos = make_shared<DetectFaceAttributesResponseDataFaceInfos>(model1);
      }
    }
  }


  virtual ~DetectFaceAttributesResponseData() = default;
};
class DetectFaceAttributesResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<DetectFaceAttributesResponseData> data{};

  DetectFaceAttributesResponse() {}

  explicit DetectFaceAttributesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!success) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("success is required.")));
    }
    if (!code) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("code is required.")));
    }
    if (!message) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("message is required.")));
    }
    if (!data) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("data is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DetectFaceAttributesResponseData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectFaceAttributesResponseData>(model1);
      }
    }
  }


  virtual ~DetectFaceAttributesResponse() = default;
};
class CompareFacesRequest : public Darabonba::Model {
public:
  shared_ptr<string> targetImageType{};
  shared_ptr<string> sourceImageType{};
  shared_ptr<string> sourceImageValue{};
  shared_ptr<string> targetImageValue{};

  CompareFacesRequest() {}

  explicit CompareFacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (targetImageType) {
      res["TargetImageType"] = boost::any(*targetImageType);
    }
    if (sourceImageType) {
      res["SourceImageType"] = boost::any(*sourceImageType);
    }
    if (sourceImageValue) {
      res["SourceImageValue"] = boost::any(*sourceImageValue);
    }
    if (targetImageValue) {
      res["TargetImageValue"] = boost::any(*targetImageValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TargetImageType") != m.end() && !m["TargetImageType"].empty()) {
      targetImageType = make_shared<string>(boost::any_cast<string>(m["TargetImageType"]));
    }
    if (m.find("SourceImageType") != m.end() && !m["SourceImageType"].empty()) {
      sourceImageType = make_shared<string>(boost::any_cast<string>(m["SourceImageType"]));
    }
    if (m.find("SourceImageValue") != m.end() && !m["SourceImageValue"].empty()) {
      sourceImageValue = make_shared<string>(boost::any_cast<string>(m["SourceImageValue"]));
    }
    if (m.find("TargetImageValue") != m.end() && !m["TargetImageValue"].empty()) {
      targetImageValue = make_shared<string>(boost::any_cast<string>(m["TargetImageValue"]));
    }
  }


  virtual ~CompareFacesRequest() = default;
};
class CompareFacesResponseData : public Darabonba::Model {
public:
  shared_ptr<double> similarityScore{};
  shared_ptr<string> confidenceThresholds{};

  CompareFacesResponseData() {}

  explicit CompareFacesResponseData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!similarityScore) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("similarityScore is required.")));
    }
    if (!confidenceThresholds) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("confidenceThresholds is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (similarityScore) {
      res["SimilarityScore"] = boost::any(*similarityScore);
    }
    if (confidenceThresholds) {
      res["ConfidenceThresholds"] = boost::any(*confidenceThresholds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SimilarityScore") != m.end() && !m["SimilarityScore"].empty()) {
      similarityScore = make_shared<double>(boost::any_cast<double>(m["SimilarityScore"]));
    }
    if (m.find("ConfidenceThresholds") != m.end() && !m["ConfidenceThresholds"].empty()) {
      confidenceThresholds = make_shared<string>(boost::any_cast<string>(m["ConfidenceThresholds"]));
    }
  }


  virtual ~CompareFacesResponseData() = default;
};
class CompareFacesResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<CompareFacesResponseData> data{};

  CompareFacesResponse() {}

  explicit CompareFacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!success) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("success is required.")));
    }
    if (!code) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("code is required.")));
    }
    if (!message) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("message is required.")));
    }
    if (!data) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("data is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CompareFacesResponseData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CompareFacesResponseData>(model1);
      }
    }
  }


  virtual ~CompareFacesResponse() = default;
};
class DescribeFaceUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> startDate{};
  shared_ptr<string> endDate{};

  DescribeFaceUsageRequest() {}

  explicit DescribeFaceUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!startDate) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("startDate is required.")));
    }
    if (!endDate) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("endDate is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~DescribeFaceUsageRequest() = default;
};
class DescribeFaceUsageResponseFaceUsageList : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<long> totalCount{};

  DescribeFaceUsageResponseFaceUsageList() {}

  explicit DescribeFaceUsageResponseFaceUsageList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!date) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("date is required.")));
    }
    if (!totalCount) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("totalCount is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeFaceUsageResponseFaceUsageList() = default;
};
class DescribeFaceUsageResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<int> totalCount{};
  shared_ptr<vector<DescribeFaceUsageResponseFaceUsageList>> faceUsageList{};

  DescribeFaceUsageResponse() {}

  explicit DescribeFaceUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!totalCount) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("totalCount is required.")));
    }
    if (!faceUsageList) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("faceUsageList is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (faceUsageList) {
      vector<boost::any> temp1;
      for(auto item1:*faceUsageList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FaceUsageList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<int>(boost::any_cast<int>(m["TotalCount"]));
    }
    if (m.find("FaceUsageList") != m.end() && !m["FaceUsageList"].empty()) {
      if (typeid(vector<boost::any>) == m["FaceUsageList"].type()) {
        vector<DescribeFaceUsageResponseFaceUsageList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FaceUsageList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaceUsageResponseFaceUsageList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faceUsageList = make_shared<vector<DescribeFaceUsageResponseFaceUsageList>>(expect1);
      }
    }
  }


  virtual ~DescribeFaceUsageResponse() = default;
};
class DescribeVerifyRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<int> totalCount{};
  shared_ptr<int> pageSize{};
  shared_ptr<int> currentPage{};
  shared_ptr<string> bizType{};
  shared_ptr<string> startDate{};
  shared_ptr<string> endDate{};
  shared_ptr<string> bizId{};
  shared_ptr<string> idCardNum{};
  shared_ptr<string> statusList{};
  shared_ptr<string> queryId{};

  DescribeVerifyRecordsRequest() {}

  explicit DescribeVerifyRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!pageSize) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("pageSize is required.")));
    }
    if (!currentPage) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("currentPage is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (idCardNum) {
      res["IdCardNum"] = boost::any(*idCardNum);
    }
    if (statusList) {
      res["StatusList"] = boost::any(*statusList);
    }
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<int>(boost::any_cast<int>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<int>(boost::any_cast<int>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<int>(boost::any_cast<int>(m["CurrentPage"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("IdCardNum") != m.end() && !m["IdCardNum"].empty()) {
      idCardNum = make_shared<string>(boost::any_cast<string>(m["IdCardNum"]));
    }
    if (m.find("StatusList") != m.end() && !m["StatusList"].empty()) {
      statusList = make_shared<string>(boost::any_cast<string>(m["StatusList"]));
    }
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
  }


  virtual ~DescribeVerifyRecordsRequest() = default;
};
class DescribeVerifyRecordsResponseRecordsListMaterialIdCardInfo : public Darabonba::Model {
public:
  shared_ptr<string> frontImageUrl{};
  shared_ptr<string> backImageUrl{};
  shared_ptr<string> name{};
  shared_ptr<string> number{};
  shared_ptr<string> address{};
  shared_ptr<string> birth{};
  shared_ptr<string> sex{};
  shared_ptr<string> nationality{};
  shared_ptr<string> authority{};
  shared_ptr<string> startDate{};
  shared_ptr<string> endDate{};

  DescribeVerifyRecordsResponseRecordsListMaterialIdCardInfo() {}

  explicit DescribeVerifyRecordsResponseRecordsListMaterialIdCardInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!frontImageUrl) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("frontImageUrl is required.")));
    }
    if (!backImageUrl) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("backImageUrl is required.")));
    }
    if (!name) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("name is required.")));
    }
    if (!number) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("number is required.")));
    }
    if (!address) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("address is required.")));
    }
    if (!birth) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("birth is required.")));
    }
    if (!sex) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("sex is required.")));
    }
    if (!nationality) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("nationality is required.")));
    }
    if (!authority) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("authority is required.")));
    }
    if (!startDate) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("startDate is required.")));
    }
    if (!endDate) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("endDate is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (frontImageUrl) {
      res["FrontImageUrl"] = boost::any(*frontImageUrl);
    }
    if (backImageUrl) {
      res["BackImageUrl"] = boost::any(*backImageUrl);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (birth) {
      res["Birth"] = boost::any(*birth);
    }
    if (sex) {
      res["Sex"] = boost::any(*sex);
    }
    if (nationality) {
      res["Nationality"] = boost::any(*nationality);
    }
    if (authority) {
      res["Authority"] = boost::any(*authority);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FrontImageUrl") != m.end() && !m["FrontImageUrl"].empty()) {
      frontImageUrl = make_shared<string>(boost::any_cast<string>(m["FrontImageUrl"]));
    }
    if (m.find("BackImageUrl") != m.end() && !m["BackImageUrl"].empty()) {
      backImageUrl = make_shared<string>(boost::any_cast<string>(m["BackImageUrl"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Birth") != m.end() && !m["Birth"].empty()) {
      birth = make_shared<string>(boost::any_cast<string>(m["Birth"]));
    }
    if (m.find("Sex") != m.end() && !m["Sex"].empty()) {
      sex = make_shared<string>(boost::any_cast<string>(m["Sex"]));
    }
    if (m.find("Nationality") != m.end() && !m["Nationality"].empty()) {
      nationality = make_shared<string>(boost::any_cast<string>(m["Nationality"]));
    }
    if (m.find("Authority") != m.end() && !m["Authority"].empty()) {
      authority = make_shared<string>(boost::any_cast<string>(m["Authority"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~DescribeVerifyRecordsResponseRecordsListMaterialIdCardInfo() = default;
};
class DescribeVerifyRecordsResponseRecordsListMaterial : public Darabonba::Model {
public:
  shared_ptr<string> faceImageUrl{};
  shared_ptr<string> idCardName{};
  shared_ptr<string> idCardNumber{};
  shared_ptr<DescribeVerifyRecordsResponseRecordsListMaterialIdCardInfo> idCardInfo{};

  DescribeVerifyRecordsResponseRecordsListMaterial() {}

  explicit DescribeVerifyRecordsResponseRecordsListMaterial(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!faceImageUrl) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("faceImageUrl is required.")));
    }
    if (!idCardName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("idCardName is required.")));
    }
    if (!idCardNumber) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("idCardNumber is required.")));
    }
    if (!idCardInfo) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("idCardInfo is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceImageUrl) {
      res["FaceImageUrl"] = boost::any(*faceImageUrl);
    }
    if (idCardName) {
      res["IdCardName"] = boost::any(*idCardName);
    }
    if (idCardNumber) {
      res["IdCardNumber"] = boost::any(*idCardNumber);
    }
    if (idCardInfo) {
      res["IdCardInfo"] = idCardInfo ? boost::any(idCardInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceImageUrl") != m.end() && !m["FaceImageUrl"].empty()) {
      faceImageUrl = make_shared<string>(boost::any_cast<string>(m["FaceImageUrl"]));
    }
    if (m.find("IdCardName") != m.end() && !m["IdCardName"].empty()) {
      idCardName = make_shared<string>(boost::any_cast<string>(m["IdCardName"]));
    }
    if (m.find("IdCardNumber") != m.end() && !m["IdCardNumber"].empty()) {
      idCardNumber = make_shared<string>(boost::any_cast<string>(m["IdCardNumber"]));
    }
    if (m.find("IdCardInfo") != m.end() && !m["IdCardInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["IdCardInfo"].type()) {
        DescribeVerifyRecordsResponseRecordsListMaterialIdCardInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IdCardInfo"]));
        idCardInfo = make_shared<DescribeVerifyRecordsResponseRecordsListMaterialIdCardInfo>(model1);
      }
    }
  }


  virtual ~DescribeVerifyRecordsResponseRecordsListMaterial() = default;
};
class DescribeVerifyRecordsResponseRecordsList : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> bizId{};
  shared_ptr<string> dataStats{};
  shared_ptr<string> verifyId{};
  shared_ptr<long> finishTime{};
  shared_ptr<int> status{};
  shared_ptr<double> idCardFaceComparisonScore{};
  shared_ptr<double> authorityComparisonScore{};
  shared_ptr<DescribeVerifyRecordsResponseRecordsListMaterial> material{};

  DescribeVerifyRecordsResponseRecordsList() {}

  explicit DescribeVerifyRecordsResponseRecordsList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!bizType) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizType is required.")));
    }
    if (!bizId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizId is required.")));
    }
    if (!dataStats) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("dataStats is required.")));
    }
    if (!verifyId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("verifyId is required.")));
    }
    if (!finishTime) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("finishTime is required.")));
    }
    if (!status) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("status is required.")));
    }
    if (!idCardFaceComparisonScore) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("idCardFaceComparisonScore is required.")));
    }
    if (!authorityComparisonScore) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("authorityComparisonScore is required.")));
    }
    if (!material) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("material is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (dataStats) {
      res["DataStats"] = boost::any(*dataStats);
    }
    if (verifyId) {
      res["VerifyId"] = boost::any(*verifyId);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (idCardFaceComparisonScore) {
      res["IdCardFaceComparisonScore"] = boost::any(*idCardFaceComparisonScore);
    }
    if (authorityComparisonScore) {
      res["AuthorityComparisonScore"] = boost::any(*authorityComparisonScore);
    }
    if (material) {
      res["Material"] = material ? boost::any(material->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("DataStats") != m.end() && !m["DataStats"].empty()) {
      dataStats = make_shared<string>(boost::any_cast<string>(m["DataStats"]));
    }
    if (m.find("VerifyId") != m.end() && !m["VerifyId"].empty()) {
      verifyId = make_shared<string>(boost::any_cast<string>(m["VerifyId"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<long>(boost::any_cast<long>(m["FinishTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<int>(boost::any_cast<int>(m["Status"]));
    }
    if (m.find("IdCardFaceComparisonScore") != m.end() && !m["IdCardFaceComparisonScore"].empty()) {
      idCardFaceComparisonScore = make_shared<double>(boost::any_cast<double>(m["IdCardFaceComparisonScore"]));
    }
    if (m.find("AuthorityComparisonScore") != m.end() && !m["AuthorityComparisonScore"].empty()) {
      authorityComparisonScore = make_shared<double>(boost::any_cast<double>(m["AuthorityComparisonScore"]));
    }
    if (m.find("Material") != m.end() && !m["Material"].empty()) {
      if (typeid(map<string, boost::any>) == m["Material"].type()) {
        DescribeVerifyRecordsResponseRecordsListMaterial model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Material"]));
        material = make_shared<DescribeVerifyRecordsResponseRecordsListMaterial>(model1);
      }
    }
  }


  virtual ~DescribeVerifyRecordsResponseRecordsList() = default;
};
class DescribeVerifyRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<int> totalCount{};
  shared_ptr<int> pageSize{};
  shared_ptr<int> currentPage{};
  shared_ptr<string> queryId{};
  shared_ptr<vector<DescribeVerifyRecordsResponseRecordsList>> recordsList{};

  DescribeVerifyRecordsResponse() {}

  explicit DescribeVerifyRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!totalCount) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("totalCount is required.")));
    }
    if (!pageSize) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("pageSize is required.")));
    }
    if (!currentPage) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("currentPage is required.")));
    }
    if (!queryId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("queryId is required.")));
    }
    if (!recordsList) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("recordsList is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (queryId) {
      res["QueryId"] = boost::any(*queryId);
    }
    if (recordsList) {
      vector<boost::any> temp1;
      for(auto item1:*recordsList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RecordsList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<int>(boost::any_cast<int>(m["TotalCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<int>(boost::any_cast<int>(m["PageSize"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<int>(boost::any_cast<int>(m["CurrentPage"]));
    }
    if (m.find("QueryId") != m.end() && !m["QueryId"].empty()) {
      queryId = make_shared<string>(boost::any_cast<string>(m["QueryId"]));
    }
    if (m.find("RecordsList") != m.end() && !m["RecordsList"].empty()) {
      if (typeid(vector<boost::any>) == m["RecordsList"].type()) {
        vector<DescribeVerifyRecordsResponseRecordsList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RecordsList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVerifyRecordsResponseRecordsList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        recordsList = make_shared<vector<DescribeVerifyRecordsResponseRecordsList>>(expect1);
      }
    }
  }


  virtual ~DescribeVerifyRecordsResponse() = default;
};
class UpdateVerifySettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> bizName{};
  shared_ptr<string> solution{};
  shared_ptr<bool> guideStep{};
  shared_ptr<bool> privacyStep{};
  shared_ptr<bool> resultStep{};

  UpdateVerifySettingRequest() {}

  explicit UpdateVerifySettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!bizType) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizType is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (solution) {
      res["Solution"] = boost::any(*solution);
    }
    if (guideStep) {
      res["GuideStep"] = boost::any(*guideStep);
    }
    if (privacyStep) {
      res["PrivacyStep"] = boost::any(*privacyStep);
    }
    if (resultStep) {
      res["ResultStep"] = boost::any(*resultStep);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("Solution") != m.end() && !m["Solution"].empty()) {
      solution = make_shared<string>(boost::any_cast<string>(m["Solution"]));
    }
    if (m.find("GuideStep") != m.end() && !m["GuideStep"].empty()) {
      guideStep = make_shared<bool>(boost::any_cast<bool>(m["GuideStep"]));
    }
    if (m.find("PrivacyStep") != m.end() && !m["PrivacyStep"].empty()) {
      privacyStep = make_shared<bool>(boost::any_cast<bool>(m["PrivacyStep"]));
    }
    if (m.find("ResultStep") != m.end() && !m["ResultStep"].empty()) {
      resultStep = make_shared<bool>(boost::any_cast<bool>(m["ResultStep"]));
    }
  }


  virtual ~UpdateVerifySettingRequest() = default;
};
class UpdateVerifySettingResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> bizType{};
  shared_ptr<string> bizName{};
  shared_ptr<string> solution{};
  shared_ptr<vector<string>> stepList{};

  UpdateVerifySettingResponse() {}

  explicit UpdateVerifySettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!bizType) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizType is required.")));
    }
    if (!bizName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizName is required.")));
    }
    if (!solution) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("solution is required.")));
    }
    if (!stepList) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("stepList is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (solution) {
      res["Solution"] = boost::any(*solution);
    }
    if (stepList) {
      res["StepList"] = boost::any(*stepList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("Solution") != m.end() && !m["Solution"].empty()) {
      solution = make_shared<string>(boost::any_cast<string>(m["Solution"]));
    }
    if (m.find("StepList") != m.end() && !m["StepList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StepList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StepList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      stepList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateVerifySettingResponse() = default;
};
class CreateVerifySettingRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> bizName{};
  shared_ptr<string> solution{};
  shared_ptr<bool> guideStep{};
  shared_ptr<bool> privacyStep{};
  shared_ptr<bool> resultStep{};

  CreateVerifySettingRequest() {}

  explicit CreateVerifySettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!bizType) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizType is required.")));
    }
    if (!bizName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizName is required.")));
    }
    if (!solution) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("solution is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (solution) {
      res["Solution"] = boost::any(*solution);
    }
    if (guideStep) {
      res["GuideStep"] = boost::any(*guideStep);
    }
    if (privacyStep) {
      res["PrivacyStep"] = boost::any(*privacyStep);
    }
    if (resultStep) {
      res["ResultStep"] = boost::any(*resultStep);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("Solution") != m.end() && !m["Solution"].empty()) {
      solution = make_shared<string>(boost::any_cast<string>(m["Solution"]));
    }
    if (m.find("GuideStep") != m.end() && !m["GuideStep"].empty()) {
      guideStep = make_shared<bool>(boost::any_cast<bool>(m["GuideStep"]));
    }
    if (m.find("PrivacyStep") != m.end() && !m["PrivacyStep"].empty()) {
      privacyStep = make_shared<bool>(boost::any_cast<bool>(m["PrivacyStep"]));
    }
    if (m.find("ResultStep") != m.end() && !m["ResultStep"].empty()) {
      resultStep = make_shared<bool>(boost::any_cast<bool>(m["ResultStep"]));
    }
  }


  virtual ~CreateVerifySettingRequest() = default;
};
class CreateVerifySettingResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> bizType{};
  shared_ptr<string> bizName{};
  shared_ptr<string> solution{};
  shared_ptr<vector<string>> stepList{};

  CreateVerifySettingResponse() {}

  explicit CreateVerifySettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!bizType) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizType is required.")));
    }
    if (!bizName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizName is required.")));
    }
    if (!solution) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("solution is required.")));
    }
    if (!stepList) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("stepList is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (solution) {
      res["Solution"] = boost::any(*solution);
    }
    if (stepList) {
      res["StepList"] = boost::any(*stepList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("Solution") != m.end() && !m["Solution"].empty()) {
      solution = make_shared<string>(boost::any_cast<string>(m["Solution"]));
    }
    if (m.find("StepList") != m.end() && !m["StepList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StepList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StepList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      stepList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateVerifySettingResponse() = default;
};
class DescribeVerifySettingRequest : public Darabonba::Model {
public:

  DescribeVerifySettingRequest() {}

  explicit DescribeVerifySettingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
  }


  virtual ~DescribeVerifySettingRequest() = default;
};
class DescribeVerifySettingResponseVerifySettingList : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> bizName{};
  shared_ptr<string> solution{};
  shared_ptr<vector<string>> stepList{};

  DescribeVerifySettingResponseVerifySettingList() {}

  explicit DescribeVerifySettingResponseVerifySettingList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!bizType) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizType is required.")));
    }
    if (!bizName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizName is required.")));
    }
    if (!solution) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("solution is required.")));
    }
    if (!stepList) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("stepList is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizName) {
      res["BizName"] = boost::any(*bizName);
    }
    if (solution) {
      res["Solution"] = boost::any(*solution);
    }
    if (stepList) {
      res["StepList"] = boost::any(*stepList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizName") != m.end() && !m["BizName"].empty()) {
      bizName = make_shared<string>(boost::any_cast<string>(m["BizName"]));
    }
    if (m.find("Solution") != m.end() && !m["Solution"].empty()) {
      solution = make_shared<string>(boost::any_cast<string>(m["Solution"]));
    }
    if (m.find("StepList") != m.end() && !m["StepList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["StepList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["StepList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      stepList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeVerifySettingResponseVerifySettingList() = default;
};
class DescribeVerifySettingResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeVerifySettingResponseVerifySettingList>> verifySettingList{};

  DescribeVerifySettingResponse() {}

  explicit DescribeVerifySettingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!verifySettingList) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("verifySettingList is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (verifySettingList) {
      vector<boost::any> temp1;
      for(auto item1:*verifySettingList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VerifySettingList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VerifySettingList") != m.end() && !m["VerifySettingList"].empty()) {
      if (typeid(vector<boost::any>) == m["VerifySettingList"].type()) {
        vector<DescribeVerifySettingResponseVerifySettingList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VerifySettingList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVerifySettingResponseVerifySettingList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        verifySettingList = make_shared<vector<DescribeVerifySettingResponseVerifySettingList>>(expect1);
      }
    }
  }


  virtual ~DescribeVerifySettingResponse() = default;
};
class DescribeVerifyUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> startDate{};
  shared_ptr<string> endDate{};

  DescribeVerifyUsageRequest() {}

  explicit DescribeVerifyUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!startDate) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("startDate is required.")));
    }
    if (!endDate) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("endDate is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
  }


  virtual ~DescribeVerifyUsageRequest() = default;
};
class DescribeVerifyUsageResponseVerifyUsageList : public Darabonba::Model {
public:
  shared_ptr<string> bizType{};
  shared_ptr<string> date{};
  shared_ptr<long> totalCount{};
  shared_ptr<long> passCount{};
  shared_ptr<long> failCount{};

  DescribeVerifyUsageResponseVerifyUsageList() {}

  explicit DescribeVerifyUsageResponseVerifyUsageList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!bizType) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizType is required.")));
    }
    if (!date) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("date is required.")));
    }
    if (!totalCount) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("totalCount is required.")));
    }
    if (!passCount) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("passCount is required.")));
    }
    if (!failCount) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("failCount is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (passCount) {
      res["PassCount"] = boost::any(*passCount);
    }
    if (failCount) {
      res["FailCount"] = boost::any(*failCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("PassCount") != m.end() && !m["PassCount"].empty()) {
      passCount = make_shared<long>(boost::any_cast<long>(m["PassCount"]));
    }
    if (m.find("FailCount") != m.end() && !m["FailCount"].empty()) {
      failCount = make_shared<long>(boost::any_cast<long>(m["FailCount"]));
    }
  }


  virtual ~DescribeVerifyUsageResponseVerifyUsageList() = default;
};
class DescribeVerifyUsageResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<int> totalCount{};
  shared_ptr<vector<DescribeVerifyUsageResponseVerifyUsageList>> verifyUsageList{};

  DescribeVerifyUsageResponse() {}

  explicit DescribeVerifyUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!totalCount) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("totalCount is required.")));
    }
    if (!verifyUsageList) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("verifyUsageList is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (verifyUsageList) {
      vector<boost::any> temp1;
      for(auto item1:*verifyUsageList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VerifyUsageList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<int>(boost::any_cast<int>(m["TotalCount"]));
    }
    if (m.find("VerifyUsageList") != m.end() && !m["VerifyUsageList"].empty()) {
      if (typeid(vector<boost::any>) == m["VerifyUsageList"].type()) {
        vector<DescribeVerifyUsageResponseVerifyUsageList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VerifyUsageList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVerifyUsageResponseVerifyUsageList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        verifyUsageList = make_shared<vector<DescribeVerifyUsageResponseVerifyUsageList>>(expect1);
      }
    }
  }


  virtual ~DescribeVerifyUsageResponse() = default;
};
class DescribeUserStatusRequest : public Darabonba::Model {
public:

  DescribeUserStatusRequest() {}

  explicit DescribeUserStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
  }


  virtual ~DescribeUserStatusRequest() = default;
};
class DescribeUserStatusResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> enabled{};

  DescribeUserStatusResponse() {}

  explicit DescribeUserStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!enabled) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("enabled is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
  }


  virtual ~DescribeUserStatusResponse() = default;
};
class DescribeUploadInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> biz{};

  DescribeUploadInfoRequest() {}

  explicit DescribeUploadInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (biz) {
      res["Biz"] = boost::any(*biz);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Biz") != m.end() && !m["Biz"].empty()) {
      biz = make_shared<string>(boost::any_cast<string>(m["Biz"]));
    }
  }


  virtual ~DescribeUploadInfoRequest() = default;
};
class DescribeUploadInfoResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> accessid{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};
  shared_ptr<string> folder{};
  shared_ptr<string> host{};
  shared_ptr<long> expire{};

  DescribeUploadInfoResponse() {}

  explicit DescribeUploadInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!accessid) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("accessid is required.")));
    }
    if (!policy) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("policy is required.")));
    }
    if (!signature) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("signature is required.")));
    }
    if (!folder) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("folder is required.")));
    }
    if (!host) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("host is required.")));
    }
    if (!expire) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("expire is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (accessid) {
      res["Accessid"] = boost::any(*accessid);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    if (folder) {
      res["Folder"] = boost::any(*folder);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Accessid") != m.end() && !m["Accessid"].empty()) {
      accessid = make_shared<string>(boost::any_cast<string>(m["Accessid"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
    if (m.find("Folder") != m.end() && !m["Folder"].empty()) {
      folder = make_shared<string>(boost::any_cast<string>(m["Folder"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<long>(boost::any_cast<long>(m["Expire"]));
    }
  }


  virtual ~DescribeUploadInfoResponse() = default;
};
class DescribeRPSDKRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> taskId{};

  DescribeRPSDKRequest() {}

  explicit DescribeRPSDKRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!taskId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("taskId is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeRPSDKRequest() = default;
};
class DescribeRPSDKResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> sdkUrl{};

  DescribeRPSDKResponse() {}

  explicit DescribeRPSDKResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!sdkUrl) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("sdkUrl is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sdkUrl) {
      res["SdkUrl"] = boost::any(*sdkUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SdkUrl") != m.end() && !m["SdkUrl"].empty()) {
      sdkUrl = make_shared<string>(boost::any_cast<string>(m["SdkUrl"]));
    }
  }


  virtual ~DescribeRPSDKResponse() = default;
};
class CreateRPSDKRequest : public Darabonba::Model {
public:
  shared_ptr<string> sourceIp{};
  shared_ptr<string> lang{};
  shared_ptr<string> appUrl{};
  shared_ptr<string> platform{};

  CreateRPSDKRequest() {}

  explicit CreateRPSDKRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!appUrl) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("appUrl is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sourceIp) {
      res["SourceIp"] = boost::any(*sourceIp);
    }
    if (lang) {
      res["Lang"] = boost::any(*lang);
    }
    if (appUrl) {
      res["AppUrl"] = boost::any(*appUrl);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SourceIp") != m.end() && !m["SourceIp"].empty()) {
      sourceIp = make_shared<string>(boost::any_cast<string>(m["SourceIp"]));
    }
    if (m.find("Lang") != m.end() && !m["Lang"].empty()) {
      lang = make_shared<string>(boost::any_cast<string>(m["Lang"]));
    }
    if (m.find("AppUrl") != m.end() && !m["AppUrl"].empty()) {
      appUrl = make_shared<string>(boost::any_cast<string>(m["AppUrl"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
  }


  virtual ~CreateRPSDKRequest() = default;
};
class CreateRPSDKResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateRPSDKResponse() {}

  explicit CreateRPSDKResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!taskId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("taskId is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateRPSDKResponse() = default;
};
class VerifyMaterialRequest : public Darabonba::Model {
public:
  shared_ptr<string> idCardBackImageUrl{};
  shared_ptr<string> faceImageUrl{};
  shared_ptr<string> bizType{};
  shared_ptr<string> bizId{};
  shared_ptr<string> name{};
  shared_ptr<string> idCardNumber{};
  shared_ptr<string> idCardFrontImageUrl{};
  shared_ptr<string> userId{};

  VerifyMaterialRequest() {}

  explicit VerifyMaterialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!faceImageUrl) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("faceImageUrl is required.")));
    }
    if (!bizType) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizType is required.")));
    }
    if (!bizId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizId is required.")));
    }
    if (!name) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("name is required.")));
    }
    if (!idCardNumber) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("idCardNumber is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idCardBackImageUrl) {
      res["IdCardBackImageUrl"] = boost::any(*idCardBackImageUrl);
    }
    if (faceImageUrl) {
      res["FaceImageUrl"] = boost::any(*faceImageUrl);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (idCardNumber) {
      res["IdCardNumber"] = boost::any(*idCardNumber);
    }
    if (idCardFrontImageUrl) {
      res["IdCardFrontImageUrl"] = boost::any(*idCardFrontImageUrl);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdCardBackImageUrl") != m.end() && !m["IdCardBackImageUrl"].empty()) {
      idCardBackImageUrl = make_shared<string>(boost::any_cast<string>(m["IdCardBackImageUrl"]));
    }
    if (m.find("FaceImageUrl") != m.end() && !m["FaceImageUrl"].empty()) {
      faceImageUrl = make_shared<string>(boost::any_cast<string>(m["FaceImageUrl"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("IdCardNumber") != m.end() && !m["IdCardNumber"].empty()) {
      idCardNumber = make_shared<string>(boost::any_cast<string>(m["IdCardNumber"]));
    }
    if (m.find("IdCardFrontImageUrl") != m.end() && !m["IdCardFrontImageUrl"].empty()) {
      idCardFrontImageUrl = make_shared<string>(boost::any_cast<string>(m["IdCardFrontImageUrl"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~VerifyMaterialRequest() = default;
};
class VerifyMaterialResponseMaterialIdCardInfo : public Darabonba::Model {
public:
  shared_ptr<string> number{};
  shared_ptr<string> address{};
  shared_ptr<string> nationality{};
  shared_ptr<string> endDate{};
  shared_ptr<string> frontImageUrl{};
  shared_ptr<string> authority{};
  shared_ptr<string> name{};
  shared_ptr<string> birth{};
  shared_ptr<string> backImageUrl{};
  shared_ptr<string> startDate{};

  VerifyMaterialResponseMaterialIdCardInfo() {}

  explicit VerifyMaterialResponseMaterialIdCardInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!number) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("number is required.")));
    }
    if (!address) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("address is required.")));
    }
    if (!nationality) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("nationality is required.")));
    }
    if (!endDate) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("endDate is required.")));
    }
    if (!frontImageUrl) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("frontImageUrl is required.")));
    }
    if (!authority) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("authority is required.")));
    }
    if (!name) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("name is required.")));
    }
    if (!birth) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("birth is required.")));
    }
    if (!backImageUrl) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("backImageUrl is required.")));
    }
    if (!startDate) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("startDate is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (nationality) {
      res["Nationality"] = boost::any(*nationality);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (frontImageUrl) {
      res["FrontImageUrl"] = boost::any(*frontImageUrl);
    }
    if (authority) {
      res["Authority"] = boost::any(*authority);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (birth) {
      res["Birth"] = boost::any(*birth);
    }
    if (backImageUrl) {
      res["BackImageUrl"] = boost::any(*backImageUrl);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Nationality") != m.end() && !m["Nationality"].empty()) {
      nationality = make_shared<string>(boost::any_cast<string>(m["Nationality"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("FrontImageUrl") != m.end() && !m["FrontImageUrl"].empty()) {
      frontImageUrl = make_shared<string>(boost::any_cast<string>(m["FrontImageUrl"]));
    }
    if (m.find("Authority") != m.end() && !m["Authority"].empty()) {
      authority = make_shared<string>(boost::any_cast<string>(m["Authority"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Birth") != m.end() && !m["Birth"].empty()) {
      birth = make_shared<string>(boost::any_cast<string>(m["Birth"]));
    }
    if (m.find("BackImageUrl") != m.end() && !m["BackImageUrl"].empty()) {
      backImageUrl = make_shared<string>(boost::any_cast<string>(m["BackImageUrl"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~VerifyMaterialResponseMaterialIdCardInfo() = default;
};
class VerifyMaterialResponseMaterial : public Darabonba::Model {
public:
  shared_ptr<string> faceImageUrl{};
  shared_ptr<string> idCardName{};
  shared_ptr<string> idCardNumber{};
  shared_ptr<string> faceQuality{};
  shared_ptr<string> faceGlobalUrl{};
  shared_ptr<string> faceMask{};
  shared_ptr<VerifyMaterialResponseMaterialIdCardInfo> idCardInfo{};

  VerifyMaterialResponseMaterial() {}

  explicit VerifyMaterialResponseMaterial(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!faceImageUrl) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("faceImageUrl is required.")));
    }
    if (!idCardName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("idCardName is required.")));
    }
    if (!idCardNumber) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("idCardNumber is required.")));
    }
    if (!faceQuality) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("faceQuality is required.")));
    }
    if (!faceGlobalUrl) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("faceGlobalUrl is required.")));
    }
    if (!faceMask) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("faceMask is required.")));
    }
    if (!idCardInfo) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("idCardInfo is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceImageUrl) {
      res["FaceImageUrl"] = boost::any(*faceImageUrl);
    }
    if (idCardName) {
      res["IdCardName"] = boost::any(*idCardName);
    }
    if (idCardNumber) {
      res["IdCardNumber"] = boost::any(*idCardNumber);
    }
    if (faceQuality) {
      res["FaceQuality"] = boost::any(*faceQuality);
    }
    if (faceGlobalUrl) {
      res["FaceGlobalUrl"] = boost::any(*faceGlobalUrl);
    }
    if (faceMask) {
      res["FaceMask"] = boost::any(*faceMask);
    }
    if (idCardInfo) {
      res["IdCardInfo"] = idCardInfo ? boost::any(idCardInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceImageUrl") != m.end() && !m["FaceImageUrl"].empty()) {
      faceImageUrl = make_shared<string>(boost::any_cast<string>(m["FaceImageUrl"]));
    }
    if (m.find("IdCardName") != m.end() && !m["IdCardName"].empty()) {
      idCardName = make_shared<string>(boost::any_cast<string>(m["IdCardName"]));
    }
    if (m.find("IdCardNumber") != m.end() && !m["IdCardNumber"].empty()) {
      idCardNumber = make_shared<string>(boost::any_cast<string>(m["IdCardNumber"]));
    }
    if (m.find("FaceQuality") != m.end() && !m["FaceQuality"].empty()) {
      faceQuality = make_shared<string>(boost::any_cast<string>(m["FaceQuality"]));
    }
    if (m.find("FaceGlobalUrl") != m.end() && !m["FaceGlobalUrl"].empty()) {
      faceGlobalUrl = make_shared<string>(boost::any_cast<string>(m["FaceGlobalUrl"]));
    }
    if (m.find("FaceMask") != m.end() && !m["FaceMask"].empty()) {
      faceMask = make_shared<string>(boost::any_cast<string>(m["FaceMask"]));
    }
    if (m.find("IdCardInfo") != m.end() && !m["IdCardInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["IdCardInfo"].type()) {
        VerifyMaterialResponseMaterialIdCardInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IdCardInfo"]));
        idCardInfo = make_shared<VerifyMaterialResponseMaterialIdCardInfo>(model1);
      }
    }
  }


  virtual ~VerifyMaterialResponseMaterial() = default;
};
class VerifyMaterialResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> verifyToken{};
  shared_ptr<int> verifyStatus{};
  shared_ptr<double> authorityComparisionScore{};
  shared_ptr<double> idCardFaceComparisonScore{};
  shared_ptr<VerifyMaterialResponseMaterial> material{};

  VerifyMaterialResponse() {}

  explicit VerifyMaterialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!verifyToken) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("verifyToken is required.")));
    }
    if (!verifyStatus) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("verifyStatus is required.")));
    }
    if (!authorityComparisionScore) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("authorityComparisionScore is required.")));
    }
    if (!idCardFaceComparisonScore) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("idCardFaceComparisonScore is required.")));
    }
    if (!material) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("material is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (verifyToken) {
      res["VerifyToken"] = boost::any(*verifyToken);
    }
    if (verifyStatus) {
      res["VerifyStatus"] = boost::any(*verifyStatus);
    }
    if (authorityComparisionScore) {
      res["AuthorityComparisionScore"] = boost::any(*authorityComparisionScore);
    }
    if (idCardFaceComparisonScore) {
      res["IdCardFaceComparisonScore"] = boost::any(*idCardFaceComparisonScore);
    }
    if (material) {
      res["Material"] = material ? boost::any(material->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VerifyToken") != m.end() && !m["VerifyToken"].empty()) {
      verifyToken = make_shared<string>(boost::any_cast<string>(m["VerifyToken"]));
    }
    if (m.find("VerifyStatus") != m.end() && !m["VerifyStatus"].empty()) {
      verifyStatus = make_shared<int>(boost::any_cast<int>(m["VerifyStatus"]));
    }
    if (m.find("AuthorityComparisionScore") != m.end() && !m["AuthorityComparisionScore"].empty()) {
      authorityComparisionScore = make_shared<double>(boost::any_cast<double>(m["AuthorityComparisionScore"]));
    }
    if (m.find("IdCardFaceComparisonScore") != m.end() && !m["IdCardFaceComparisonScore"].empty()) {
      idCardFaceComparisonScore = make_shared<double>(boost::any_cast<double>(m["IdCardFaceComparisonScore"]));
    }
    if (m.find("Material") != m.end() && !m["Material"].empty()) {
      if (typeid(map<string, boost::any>) == m["Material"].type()) {
        VerifyMaterialResponseMaterial model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Material"]));
        material = make_shared<VerifyMaterialResponseMaterial>(model1);
      }
    }
  }


  virtual ~VerifyMaterialResponse() = default;
};
class DescribeVerifyResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<string> bizType{};

  DescribeVerifyResultRequest() {}

  explicit DescribeVerifyResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!bizId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizId is required.")));
    }
    if (!bizType) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizType is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
  }


  virtual ~DescribeVerifyResultRequest() = default;
};
class DescribeVerifyResultResponseMaterialIdCardInfo : public Darabonba::Model {
public:
  shared_ptr<string> number{};
  shared_ptr<string> address{};
  shared_ptr<string> nationality{};
  shared_ptr<string> endDate{};
  shared_ptr<string> frontImageUrl{};
  shared_ptr<string> authority{};
  shared_ptr<string> name{};
  shared_ptr<string> birth{};
  shared_ptr<string> backImageUrl{};
  shared_ptr<string> startDate{};

  DescribeVerifyResultResponseMaterialIdCardInfo() {}

  explicit DescribeVerifyResultResponseMaterialIdCardInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!number) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("number is required.")));
    }
    if (!address) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("address is required.")));
    }
    if (!nationality) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("nationality is required.")));
    }
    if (!endDate) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("endDate is required.")));
    }
    if (!frontImageUrl) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("frontImageUrl is required.")));
    }
    if (!authority) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("authority is required.")));
    }
    if (!name) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("name is required.")));
    }
    if (!birth) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("birth is required.")));
    }
    if (!backImageUrl) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("backImageUrl is required.")));
    }
    if (!startDate) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("startDate is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (nationality) {
      res["Nationality"] = boost::any(*nationality);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (frontImageUrl) {
      res["FrontImageUrl"] = boost::any(*frontImageUrl);
    }
    if (authority) {
      res["Authority"] = boost::any(*authority);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (birth) {
      res["Birth"] = boost::any(*birth);
    }
    if (backImageUrl) {
      res["BackImageUrl"] = boost::any(*backImageUrl);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Nationality") != m.end() && !m["Nationality"].empty()) {
      nationality = make_shared<string>(boost::any_cast<string>(m["Nationality"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("FrontImageUrl") != m.end() && !m["FrontImageUrl"].empty()) {
      frontImageUrl = make_shared<string>(boost::any_cast<string>(m["FrontImageUrl"]));
    }
    if (m.find("Authority") != m.end() && !m["Authority"].empty()) {
      authority = make_shared<string>(boost::any_cast<string>(m["Authority"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Birth") != m.end() && !m["Birth"].empty()) {
      birth = make_shared<string>(boost::any_cast<string>(m["Birth"]));
    }
    if (m.find("BackImageUrl") != m.end() && !m["BackImageUrl"].empty()) {
      backImageUrl = make_shared<string>(boost::any_cast<string>(m["BackImageUrl"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~DescribeVerifyResultResponseMaterialIdCardInfo() = default;
};
class DescribeVerifyResultResponseMaterial : public Darabonba::Model {
public:
  shared_ptr<string> faceImageUrl{};
  shared_ptr<string> idCardName{};
  shared_ptr<string> idCardNumber{};
  shared_ptr<string> faceQuality{};
  shared_ptr<string> faceGlobalUrl{};
  shared_ptr<bool> faceMask{};
  shared_ptr<DescribeVerifyResultResponseMaterialIdCardInfo> idCardInfo{};
  shared_ptr<vector<string>> videoUrls{};

  DescribeVerifyResultResponseMaterial() {}

  explicit DescribeVerifyResultResponseMaterial(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!faceImageUrl) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("faceImageUrl is required.")));
    }
    if (!idCardName) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("idCardName is required.")));
    }
    if (!idCardNumber) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("idCardNumber is required.")));
    }
    if (!faceQuality) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("faceQuality is required.")));
    }
    if (!faceGlobalUrl) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("faceGlobalUrl is required.")));
    }
    if (!faceMask) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("faceMask is required.")));
    }
    if (!idCardInfo) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("idCardInfo is required.")));
    }
    if (!videoUrls) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("videoUrls is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceImageUrl) {
      res["FaceImageUrl"] = boost::any(*faceImageUrl);
    }
    if (idCardName) {
      res["IdCardName"] = boost::any(*idCardName);
    }
    if (idCardNumber) {
      res["IdCardNumber"] = boost::any(*idCardNumber);
    }
    if (faceQuality) {
      res["FaceQuality"] = boost::any(*faceQuality);
    }
    if (faceGlobalUrl) {
      res["FaceGlobalUrl"] = boost::any(*faceGlobalUrl);
    }
    if (faceMask) {
      res["FaceMask"] = boost::any(*faceMask);
    }
    if (idCardInfo) {
      res["IdCardInfo"] = idCardInfo ? boost::any(idCardInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (videoUrls) {
      res["VideoUrls"] = boost::any(*videoUrls);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceImageUrl") != m.end() && !m["FaceImageUrl"].empty()) {
      faceImageUrl = make_shared<string>(boost::any_cast<string>(m["FaceImageUrl"]));
    }
    if (m.find("IdCardName") != m.end() && !m["IdCardName"].empty()) {
      idCardName = make_shared<string>(boost::any_cast<string>(m["IdCardName"]));
    }
    if (m.find("IdCardNumber") != m.end() && !m["IdCardNumber"].empty()) {
      idCardNumber = make_shared<string>(boost::any_cast<string>(m["IdCardNumber"]));
    }
    if (m.find("FaceQuality") != m.end() && !m["FaceQuality"].empty()) {
      faceQuality = make_shared<string>(boost::any_cast<string>(m["FaceQuality"]));
    }
    if (m.find("FaceGlobalUrl") != m.end() && !m["FaceGlobalUrl"].empty()) {
      faceGlobalUrl = make_shared<string>(boost::any_cast<string>(m["FaceGlobalUrl"]));
    }
    if (m.find("FaceMask") != m.end() && !m["FaceMask"].empty()) {
      faceMask = make_shared<bool>(boost::any_cast<bool>(m["FaceMask"]));
    }
    if (m.find("IdCardInfo") != m.end() && !m["IdCardInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["IdCardInfo"].type()) {
        DescribeVerifyResultResponseMaterialIdCardInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IdCardInfo"]));
        idCardInfo = make_shared<DescribeVerifyResultResponseMaterialIdCardInfo>(model1);
      }
    }
    if (m.find("VideoUrls") != m.end() && !m["VideoUrls"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["VideoUrls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VideoUrls"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      videoUrls = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeVerifyResultResponseMaterial() = default;
};
class DescribeVerifyResultResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<int> verifyStatus{};
  shared_ptr<double> authorityComparisionScore{};
  shared_ptr<double> faceComparisonScore{};
  shared_ptr<double> idCardFaceComparisonScore{};
  shared_ptr<DescribeVerifyResultResponseMaterial> material{};

  DescribeVerifyResultResponse() {}

  explicit DescribeVerifyResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!verifyStatus) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("verifyStatus is required.")));
    }
    if (!authorityComparisionScore) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("authorityComparisionScore is required.")));
    }
    if (!faceComparisonScore) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("faceComparisonScore is required.")));
    }
    if (!idCardFaceComparisonScore) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("idCardFaceComparisonScore is required.")));
    }
    if (!material) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("material is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (verifyStatus) {
      res["VerifyStatus"] = boost::any(*verifyStatus);
    }
    if (authorityComparisionScore) {
      res["AuthorityComparisionScore"] = boost::any(*authorityComparisionScore);
    }
    if (faceComparisonScore) {
      res["FaceComparisonScore"] = boost::any(*faceComparisonScore);
    }
    if (idCardFaceComparisonScore) {
      res["IdCardFaceComparisonScore"] = boost::any(*idCardFaceComparisonScore);
    }
    if (material) {
      res["Material"] = material ? boost::any(material->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VerifyStatus") != m.end() && !m["VerifyStatus"].empty()) {
      verifyStatus = make_shared<int>(boost::any_cast<int>(m["VerifyStatus"]));
    }
    if (m.find("AuthorityComparisionScore") != m.end() && !m["AuthorityComparisionScore"].empty()) {
      authorityComparisionScore = make_shared<double>(boost::any_cast<double>(m["AuthorityComparisionScore"]));
    }
    if (m.find("FaceComparisonScore") != m.end() && !m["FaceComparisonScore"].empty()) {
      faceComparisonScore = make_shared<double>(boost::any_cast<double>(m["FaceComparisonScore"]));
    }
    if (m.find("IdCardFaceComparisonScore") != m.end() && !m["IdCardFaceComparisonScore"].empty()) {
      idCardFaceComparisonScore = make_shared<double>(boost::any_cast<double>(m["IdCardFaceComparisonScore"]));
    }
    if (m.find("Material") != m.end() && !m["Material"].empty()) {
      if (typeid(map<string, boost::any>) == m["Material"].type()) {
        DescribeVerifyResultResponseMaterial model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Material"]));
        material = make_shared<DescribeVerifyResultResponseMaterial>(model1);
      }
    }
  }


  virtual ~DescribeVerifyResultResponse() = default;
};
class DescribeOssUploadTokenRequest : public Darabonba::Model {
public:

  DescribeOssUploadTokenRequest() {}

  explicit DescribeOssUploadTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
  }


  virtual ~DescribeOssUploadTokenRequest() = default;
};
class DescribeOssUploadTokenResponseOssUploadToken : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> endPoint{};
  shared_ptr<string> path{};
  shared_ptr<long> expired{};
  shared_ptr<string> secret{};
  shared_ptr<string> key{};
  shared_ptr<string> token{};

  DescribeOssUploadTokenResponseOssUploadToken() {}

  explicit DescribeOssUploadTokenResponseOssUploadToken(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!bucket) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bucket is required.")));
    }
    if (!endPoint) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("endPoint is required.")));
    }
    if (!path) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("path is required.")));
    }
    if (!expired) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("expired is required.")));
    }
    if (!secret) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("secret is required.")));
    }
    if (!key) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("key is required.")));
    }
    if (!token) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("token is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (endPoint) {
      res["EndPoint"] = boost::any(*endPoint);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (secret) {
      res["Secret"] = boost::any(*secret);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("EndPoint") != m.end() && !m["EndPoint"].empty()) {
      endPoint = make_shared<string>(boost::any_cast<string>(m["EndPoint"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<long>(boost::any_cast<long>(m["Expired"]));
    }
    if (m.find("Secret") != m.end() && !m["Secret"].empty()) {
      secret = make_shared<string>(boost::any_cast<string>(m["Secret"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~DescribeOssUploadTokenResponseOssUploadToken() = default;
};
class DescribeOssUploadTokenResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeOssUploadTokenResponseOssUploadToken> ossUploadToken{};

  DescribeOssUploadTokenResponse() {}

  explicit DescribeOssUploadTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!ossUploadToken) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("ossUploadToken is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (ossUploadToken) {
      res["OssUploadToken"] = ossUploadToken ? boost::any(ossUploadToken->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("OssUploadToken") != m.end() && !m["OssUploadToken"].empty()) {
      if (typeid(map<string, boost::any>) == m["OssUploadToken"].type()) {
        DescribeOssUploadTokenResponseOssUploadToken model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OssUploadToken"]));
        ossUploadToken = make_shared<DescribeOssUploadTokenResponseOssUploadToken>(model1);
      }
    }
  }


  virtual ~DescribeOssUploadTokenResponse() = default;
};
class DescribeVerifyTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> idCardBackImageUrl{};
  shared_ptr<string> bizType{};
  shared_ptr<string> failedRedirectUrl{};
  shared_ptr<string> faceRetainedImageUrl{};
  shared_ptr<string> callbackSeed{};
  shared_ptr<string> idCardFrontImageUrl{};
  shared_ptr<string> userId{};
  shared_ptr<string> bizId{};
  shared_ptr<string> name{};
  shared_ptr<string> idCardNumber{};
  shared_ptr<string> passedRedirectUrl{};
  shared_ptr<string> callbackUrl{};
  shared_ptr<string> userIp{};
  shared_ptr<string> userPhoneNumber{};
  shared_ptr<long> userRegistTime{};

  DescribeVerifyTokenRequest() {}

  explicit DescribeVerifyTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!bizType) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizType is required.")));
    }
    if (!bizId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bizId is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idCardBackImageUrl) {
      res["IdCardBackImageUrl"] = boost::any(*idCardBackImageUrl);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (failedRedirectUrl) {
      res["FailedRedirectUrl"] = boost::any(*failedRedirectUrl);
    }
    if (faceRetainedImageUrl) {
      res["FaceRetainedImageUrl"] = boost::any(*faceRetainedImageUrl);
    }
    if (callbackSeed) {
      res["CallbackSeed"] = boost::any(*callbackSeed);
    }
    if (idCardFrontImageUrl) {
      res["IdCardFrontImageUrl"] = boost::any(*idCardFrontImageUrl);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (idCardNumber) {
      res["IdCardNumber"] = boost::any(*idCardNumber);
    }
    if (passedRedirectUrl) {
      res["PassedRedirectUrl"] = boost::any(*passedRedirectUrl);
    }
    if (callbackUrl) {
      res["CallbackUrl"] = boost::any(*callbackUrl);
    }
    if (userIp) {
      res["UserIp"] = boost::any(*userIp);
    }
    if (userPhoneNumber) {
      res["UserPhoneNumber"] = boost::any(*userPhoneNumber);
    }
    if (userRegistTime) {
      res["UserRegistTime"] = boost::any(*userRegistTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdCardBackImageUrl") != m.end() && !m["IdCardBackImageUrl"].empty()) {
      idCardBackImageUrl = make_shared<string>(boost::any_cast<string>(m["IdCardBackImageUrl"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("FailedRedirectUrl") != m.end() && !m["FailedRedirectUrl"].empty()) {
      failedRedirectUrl = make_shared<string>(boost::any_cast<string>(m["FailedRedirectUrl"]));
    }
    if (m.find("FaceRetainedImageUrl") != m.end() && !m["FaceRetainedImageUrl"].empty()) {
      faceRetainedImageUrl = make_shared<string>(boost::any_cast<string>(m["FaceRetainedImageUrl"]));
    }
    if (m.find("CallbackSeed") != m.end() && !m["CallbackSeed"].empty()) {
      callbackSeed = make_shared<string>(boost::any_cast<string>(m["CallbackSeed"]));
    }
    if (m.find("IdCardFrontImageUrl") != m.end() && !m["IdCardFrontImageUrl"].empty()) {
      idCardFrontImageUrl = make_shared<string>(boost::any_cast<string>(m["IdCardFrontImageUrl"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("IdCardNumber") != m.end() && !m["IdCardNumber"].empty()) {
      idCardNumber = make_shared<string>(boost::any_cast<string>(m["IdCardNumber"]));
    }
    if (m.find("PassedRedirectUrl") != m.end() && !m["PassedRedirectUrl"].empty()) {
      passedRedirectUrl = make_shared<string>(boost::any_cast<string>(m["PassedRedirectUrl"]));
    }
    if (m.find("CallbackUrl") != m.end() && !m["CallbackUrl"].empty()) {
      callbackUrl = make_shared<string>(boost::any_cast<string>(m["CallbackUrl"]));
    }
    if (m.find("UserIp") != m.end() && !m["UserIp"].empty()) {
      userIp = make_shared<string>(boost::any_cast<string>(m["UserIp"]));
    }
    if (m.find("UserPhoneNumber") != m.end() && !m["UserPhoneNumber"].empty()) {
      userPhoneNumber = make_shared<string>(boost::any_cast<string>(m["UserPhoneNumber"]));
    }
    if (m.find("UserRegistTime") != m.end() && !m["UserRegistTime"].empty()) {
      userRegistTime = make_shared<long>(boost::any_cast<long>(m["UserRegistTime"]));
    }
  }


  virtual ~DescribeVerifyTokenRequest() = default;
};
class DescribeVerifyTokenResponseOssUploadToken : public Darabonba::Model {
public:
  shared_ptr<string> bucket{};
  shared_ptr<string> endPoint{};
  shared_ptr<string> path{};
  shared_ptr<long> expired{};
  shared_ptr<string> secret{};
  shared_ptr<string> key{};
  shared_ptr<string> token{};

  DescribeVerifyTokenResponseOssUploadToken() {}

  explicit DescribeVerifyTokenResponseOssUploadToken(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!bucket) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("bucket is required.")));
    }
    if (!endPoint) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("endPoint is required.")));
    }
    if (!path) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("path is required.")));
    }
    if (!expired) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("expired is required.")));
    }
    if (!secret) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("secret is required.")));
    }
    if (!key) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("key is required.")));
    }
    if (!token) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("token is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      res["Bucket"] = boost::any(*bucket);
    }
    if (endPoint) {
      res["EndPoint"] = boost::any(*endPoint);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (expired) {
      res["Expired"] = boost::any(*expired);
    }
    if (secret) {
      res["Secret"] = boost::any(*secret);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      bucket = make_shared<string>(boost::any_cast<string>(m["Bucket"]));
    }
    if (m.find("EndPoint") != m.end() && !m["EndPoint"].empty()) {
      endPoint = make_shared<string>(boost::any_cast<string>(m["EndPoint"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Expired") != m.end() && !m["Expired"].empty()) {
      expired = make_shared<long>(boost::any_cast<long>(m["Expired"]));
    }
    if (m.find("Secret") != m.end() && !m["Secret"].empty()) {
      secret = make_shared<string>(boost::any_cast<string>(m["Secret"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~DescribeVerifyTokenResponseOssUploadToken() = default;
};
class DescribeVerifyTokenResponse : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> verifyPageUrl{};
  shared_ptr<string> verifyToken{};
  shared_ptr<DescribeVerifyTokenResponseOssUploadToken> ossUploadToken{};

  DescribeVerifyTokenResponse() {}

  explicit DescribeVerifyTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!requestId) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("requestId is required.")));
    }
    if (!verifyPageUrl) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("verifyPageUrl is required.")));
    }
    if (!verifyToken) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("verifyToken is required.")));
    }
    if (!ossUploadToken) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("ossUploadToken is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (verifyPageUrl) {
      res["VerifyPageUrl"] = boost::any(*verifyPageUrl);
    }
    if (verifyToken) {
      res["VerifyToken"] = boost::any(*verifyToken);
    }
    if (ossUploadToken) {
      res["OssUploadToken"] = ossUploadToken ? boost::any(ossUploadToken->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VerifyPageUrl") != m.end() && !m["VerifyPageUrl"].empty()) {
      verifyPageUrl = make_shared<string>(boost::any_cast<string>(m["VerifyPageUrl"]));
    }
    if (m.find("VerifyToken") != m.end() && !m["VerifyToken"].empty()) {
      verifyToken = make_shared<string>(boost::any_cast<string>(m["VerifyToken"]));
    }
    if (m.find("OssUploadToken") != m.end() && !m["OssUploadToken"].empty()) {
      if (typeid(map<string, boost::any>) == m["OssUploadToken"].type()) {
        DescribeVerifyTokenResponseOssUploadToken model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OssUploadToken"]));
        ossUploadToken = make_shared<DescribeVerifyTokenResponseOssUploadToken>(model1);
      }
    }
  }


  virtual ~DescribeVerifyTokenResponse() = default;
};
class Client : Alibabacloud_RPC::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_RPC::Config>& config);
  DescribeWhitelistSettingResponse describeWhitelistSetting(shared_ptr<DescribeWhitelistSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWhitelistSettingResponse describeWhitelistSettingSimply(shared_ptr<DescribeWhitelistSettingRequest> request);
  DeleteWhitelistSettingResponse deleteWhitelistSetting(shared_ptr<DeleteWhitelistSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWhitelistSettingResponse deleteWhitelistSettingSimply(shared_ptr<DeleteWhitelistSettingRequest> request);
  CreateWhitelistSettingResponse createWhitelistSetting(shared_ptr<CreateWhitelistSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWhitelistSettingResponse createWhitelistSettingSimply(shared_ptr<CreateWhitelistSettingRequest> request);
  DescribeWhitelistResponse describeWhitelist(shared_ptr<DescribeWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeWhitelistResponse describeWhitelistSimply(shared_ptr<DescribeWhitelistRequest> request);
  DeleteWhitelistResponse deleteWhitelist(shared_ptr<DeleteWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteWhitelistResponse deleteWhitelistSimply(shared_ptr<DeleteWhitelistRequest> request);
  CreateWhitelistResponse createWhitelist(shared_ptr<CreateWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateWhitelistResponse createWhitelistSimply(shared_ptr<CreateWhitelistRequest> request);
  DescribeFaceConfigResponse describeFaceConfig(shared_ptr<DescribeFaceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFaceConfigResponse describeFaceConfigSimply(shared_ptr<DescribeFaceConfigRequest> request);
  UpdateFaceConfigResponse updateFaceConfig(shared_ptr<UpdateFaceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFaceConfigResponse updateFaceConfigSimply(shared_ptr<UpdateFaceConfigRequest> request);
  CreateFaceConfigResponse createFaceConfig(shared_ptr<CreateFaceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFaceConfigResponse createFaceConfigSimply(shared_ptr<CreateFaceConfigRequest> request);
  LivenessFaceVerifyResponse livenessFaceVerify(shared_ptr<LivenessFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LivenessFaceVerifyResponse livenessFaceVerifySimply(shared_ptr<LivenessFaceVerifyRequest> request);
  CompareFaceVerifyResponse compareFaceVerify(shared_ptr<CompareFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CompareFaceVerifyResponse compareFaceVerifySimply(shared_ptr<CompareFaceVerifyRequest> request);
  DescribeSdkUrlResponse describeSdkUrl(shared_ptr<DescribeSdkUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSdkUrlResponse describeSdkUrlSimply(shared_ptr<DescribeSdkUrlRequest> request);
  DescribeUpdatePackageResultResponse describeUpdatePackageResult(shared_ptr<DescribeUpdatePackageResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUpdatePackageResultResponse describeUpdatePackageResultSimply(shared_ptr<DescribeUpdatePackageResultRequest> request);
  UpdateAppPackageResponse updateAppPackage(shared_ptr<UpdateAppPackageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAppPackageResponse updateAppPackageSimply(shared_ptr<UpdateAppPackageRequest> request);
  DescribeAppInfoResponse describeAppInfo(shared_ptr<DescribeAppInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppInfoResponse describeAppInfoSimply(shared_ptr<DescribeAppInfoRequest> request);
  ContrastFaceVerifyResponse contrastFaceVerify(shared_ptr<ContrastFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ContrastFaceVerifyResponse contrastFaceVerifySimply(shared_ptr<ContrastFaceVerifyRequest> request);
  ContrastFaceVerifyResponse contrastFaceVerifyAdvance(shared_ptr<ContrastFaceVerifyAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitDeviceResponse initDevice(shared_ptr<InitDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitDeviceResponse initDeviceSimply(shared_ptr<InitDeviceRequest> request);
  InitFaceVerifyResponse initFaceVerify(shared_ptr<InitFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InitFaceVerifyResponse initFaceVerifySimply(shared_ptr<InitFaceVerifyRequest> request);
  DescribeFaceVerifyResponse describeFaceVerify(shared_ptr<DescribeFaceVerifyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFaceVerifyResponse describeFaceVerifySimply(shared_ptr<DescribeFaceVerifyRequest> request);
  VerifyDeviceResponse verifyDevice(shared_ptr<VerifyDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyDeviceResponse verifyDeviceSimply(shared_ptr<VerifyDeviceRequest> request);
  ModifyDeviceInfoResponse modifyDeviceInfo(shared_ptr<ModifyDeviceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyDeviceInfoResponse modifyDeviceInfoSimply(shared_ptr<ModifyDeviceInfoRequest> request);
  DescribeVerifySDKResponse describeVerifySDK(shared_ptr<DescribeVerifySDKRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVerifySDKResponse describeVerifySDKSimply(shared_ptr<DescribeVerifySDKRequest> request);
  DescribeDeviceInfoResponse describeDeviceInfo(shared_ptr<DescribeDeviceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDeviceInfoResponse describeDeviceInfoSimply(shared_ptr<DescribeDeviceInfoRequest> request);
  CreateVerifySDKResponse createVerifySDK(shared_ptr<CreateVerifySDKRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVerifySDKResponse createVerifySDKSimply(shared_ptr<CreateVerifySDKRequest> request);
  CreateAuthKeyResponse createAuthKey(shared_ptr<CreateAuthKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAuthKeyResponse createAuthKeySimply(shared_ptr<CreateAuthKeyRequest> request);
  DetectFaceAttributesResponse detectFaceAttributes(shared_ptr<DetectFaceAttributesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectFaceAttributesResponse detectFaceAttributesSimply(shared_ptr<DetectFaceAttributesRequest> request);
  CompareFacesResponse compareFaces(shared_ptr<CompareFacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CompareFacesResponse compareFacesSimply(shared_ptr<CompareFacesRequest> request);
  DescribeFaceUsageResponse describeFaceUsage(shared_ptr<DescribeFaceUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFaceUsageResponse describeFaceUsageSimply(shared_ptr<DescribeFaceUsageRequest> request);
  DescribeVerifyRecordsResponse describeVerifyRecords(shared_ptr<DescribeVerifyRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVerifyRecordsResponse describeVerifyRecordsSimply(shared_ptr<DescribeVerifyRecordsRequest> request);
  UpdateVerifySettingResponse updateVerifySetting(shared_ptr<UpdateVerifySettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateVerifySettingResponse updateVerifySettingSimply(shared_ptr<UpdateVerifySettingRequest> request);
  CreateVerifySettingResponse createVerifySetting(shared_ptr<CreateVerifySettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVerifySettingResponse createVerifySettingSimply(shared_ptr<CreateVerifySettingRequest> request);
  DescribeVerifySettingResponse describeVerifySetting(shared_ptr<DescribeVerifySettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVerifySettingResponse describeVerifySettingSimply(shared_ptr<DescribeVerifySettingRequest> request);
  DescribeVerifyUsageResponse describeVerifyUsage(shared_ptr<DescribeVerifyUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVerifyUsageResponse describeVerifyUsageSimply(shared_ptr<DescribeVerifyUsageRequest> request);
  DescribeUserStatusResponse describeUserStatus(shared_ptr<DescribeUserStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserStatusResponse describeUserStatusSimply(shared_ptr<DescribeUserStatusRequest> request);
  DescribeUploadInfoResponse describeUploadInfo(shared_ptr<DescribeUploadInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUploadInfoResponse describeUploadInfoSimply(shared_ptr<DescribeUploadInfoRequest> request);
  DescribeRPSDKResponse describeRPSDK(shared_ptr<DescribeRPSDKRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRPSDKResponse describeRPSDKSimply(shared_ptr<DescribeRPSDKRequest> request);
  CreateRPSDKResponse createRPSDK(shared_ptr<CreateRPSDKRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRPSDKResponse createRPSDKSimply(shared_ptr<CreateRPSDKRequest> request);
  VerifyMaterialResponse verifyMaterial(shared_ptr<VerifyMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VerifyMaterialResponse verifyMaterialSimply(shared_ptr<VerifyMaterialRequest> request);
  DescribeVerifyResultResponse describeVerifyResult(shared_ptr<DescribeVerifyResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVerifyResultResponse describeVerifyResultSimply(shared_ptr<DescribeVerifyResultRequest> request);
  DescribeOssUploadTokenResponse describeOssUploadToken(shared_ptr<DescribeOssUploadTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOssUploadTokenResponse describeOssUploadTokenSimply(shared_ptr<DescribeOssUploadTokenRequest> request);
  DescribeVerifyTokenResponse describeVerifyToken(shared_ptr<DescribeVerifyTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVerifyTokenResponse describeVerifyTokenSimply(shared_ptr<DescribeVerifyTokenRequest> request);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cloudauth20190307

#endif
