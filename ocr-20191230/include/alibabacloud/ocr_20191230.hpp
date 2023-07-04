// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_OCR20191230_H_
#define ALIBABACLOUD_OCR20191230_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Ocr20191230 {
class GetAsyncJobResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  GetAsyncJobResultRequest() {}

  explicit GetAsyncJobResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~GetAsyncJobResultRequest() = default;
};
class GetAsyncJobResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> jobId{};
  shared_ptr<string> result{};
  shared_ptr<string> status{};

  GetAsyncJobResultResponseBodyData() {}

  explicit GetAsyncJobResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetAsyncJobResultResponseBodyData() = default;
};
class GetAsyncJobResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAsyncJobResultResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetAsyncJobResultResponseBody() {}

  explicit GetAsyncJobResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAsyncJobResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAsyncJobResultResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetAsyncJobResultResponseBody() = default;
};
class GetAsyncJobResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAsyncJobResultResponseBody> body{};

  GetAsyncJobResultResponse() {}

  explicit GetAsyncJobResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAsyncJobResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAsyncJobResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetAsyncJobResultResponse() = default;
};
class RecognizeBankCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeBankCardRequest() {}

  explicit RecognizeBankCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeBankCardRequest() = default;
};
class RecognizeBankCardAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeBankCardAdvanceRequest() {}

  explicit RecognizeBankCardAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeBankCardAdvanceRequest() = default;
};
class RecognizeBankCardResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> bankName{};
  shared_ptr<string> cardNumber{};
  shared_ptr<string> validDate{};

  RecognizeBankCardResponseBodyData() {}

  explicit RecognizeBankCardResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bankName) {
      res["BankName"] = boost::any(*bankName);
    }
    if (cardNumber) {
      res["CardNumber"] = boost::any(*cardNumber);
    }
    if (validDate) {
      res["ValidDate"] = boost::any(*validDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BankName") != m.end() && !m["BankName"].empty()) {
      bankName = make_shared<string>(boost::any_cast<string>(m["BankName"]));
    }
    if (m.find("CardNumber") != m.end() && !m["CardNumber"].empty()) {
      cardNumber = make_shared<string>(boost::any_cast<string>(m["CardNumber"]));
    }
    if (m.find("ValidDate") != m.end() && !m["ValidDate"].empty()) {
      validDate = make_shared<string>(boost::any_cast<string>(m["ValidDate"]));
    }
  }


  virtual ~RecognizeBankCardResponseBodyData() = default;
};
class RecognizeBankCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeBankCardResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeBankCardResponseBody() {}

  explicit RecognizeBankCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeBankCardResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeBankCardResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeBankCardResponseBody() = default;
};
class RecognizeBankCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeBankCardResponseBody> body{};

  RecognizeBankCardResponse() {}

  explicit RecognizeBankCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeBankCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeBankCardResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeBankCardResponse() = default;
};
class RecognizeBusinessCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeBusinessCardRequest() {}

  explicit RecognizeBusinessCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeBusinessCardRequest() = default;
};
class RecognizeBusinessCardAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeBusinessCardAdvanceRequest() {}

  explicit RecognizeBusinessCardAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeBusinessCardAdvanceRequest() = default;
};
class RecognizeBusinessCardResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> addresses{};
  shared_ptr<vector<string>> cellPhoneNumbers{};
  shared_ptr<vector<string>> companies{};
  shared_ptr<vector<string>> departments{};
  shared_ptr<vector<string>> emails{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> officePhoneNumbers{};
  shared_ptr<vector<string>> titles{};

  RecognizeBusinessCardResponseBodyData() {}

  explicit RecognizeBusinessCardResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addresses) {
      res["Addresses"] = boost::any(*addresses);
    }
    if (cellPhoneNumbers) {
      res["CellPhoneNumbers"] = boost::any(*cellPhoneNumbers);
    }
    if (companies) {
      res["Companies"] = boost::any(*companies);
    }
    if (departments) {
      res["Departments"] = boost::any(*departments);
    }
    if (emails) {
      res["Emails"] = boost::any(*emails);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (officePhoneNumbers) {
      res["OfficePhoneNumbers"] = boost::any(*officePhoneNumbers);
    }
    if (titles) {
      res["Titles"] = boost::any(*titles);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Addresses") != m.end() && !m["Addresses"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Addresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Addresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      addresses = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CellPhoneNumbers") != m.end() && !m["CellPhoneNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["CellPhoneNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CellPhoneNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      cellPhoneNumbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Companies") != m.end() && !m["Companies"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Companies"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Companies"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      companies = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Departments") != m.end() && !m["Departments"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Departments"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Departments"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      departments = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Emails") != m.end() && !m["Emails"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Emails"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Emails"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      emails = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OfficePhoneNumbers") != m.end() && !m["OfficePhoneNumbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["OfficePhoneNumbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["OfficePhoneNumbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      officePhoneNumbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Titles") != m.end() && !m["Titles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Titles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Titles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      titles = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RecognizeBusinessCardResponseBodyData() = default;
};
class RecognizeBusinessCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeBusinessCardResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeBusinessCardResponseBody() {}

  explicit RecognizeBusinessCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeBusinessCardResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeBusinessCardResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeBusinessCardResponseBody() = default;
};
class RecognizeBusinessCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeBusinessCardResponseBody> body{};

  RecognizeBusinessCardResponse() {}

  explicit RecognizeBusinessCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeBusinessCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeBusinessCardResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeBusinessCardResponse() = default;
};
class RecognizeBusinessLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeBusinessLicenseRequest() {}

  explicit RecognizeBusinessLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeBusinessLicenseRequest() = default;
};
class RecognizeBusinessLicenseAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeBusinessLicenseAdvanceRequest() {}

  explicit RecognizeBusinessLicenseAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeBusinessLicenseAdvanceRequest() = default;
};
class RecognizeBusinessLicenseResponseBodyDataEmblem : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  RecognizeBusinessLicenseResponseBodyDataEmblem() {}

  explicit RecognizeBusinessLicenseResponseBodyDataEmblem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (left) {
      res["Left"] = boost::any(*left);
    }
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeBusinessLicenseResponseBodyDataEmblem() = default;
};
class RecognizeBusinessLicenseResponseBodyDataQRCode : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  RecognizeBusinessLicenseResponseBodyDataQRCode() {}

  explicit RecognizeBusinessLicenseResponseBodyDataQRCode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (left) {
      res["Left"] = boost::any(*left);
    }
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeBusinessLicenseResponseBodyDataQRCode() = default;
};
class RecognizeBusinessLicenseResponseBodyDataStamp : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  RecognizeBusinessLicenseResponseBodyDataStamp() {}

  explicit RecognizeBusinessLicenseResponseBodyDataStamp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (left) {
      res["Left"] = boost::any(*left);
    }
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeBusinessLicenseResponseBodyDataStamp() = default;
};
class RecognizeBusinessLicenseResponseBodyDataTitle : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  RecognizeBusinessLicenseResponseBodyDataTitle() {}

  explicit RecognizeBusinessLicenseResponseBodyDataTitle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (left) {
      res["Left"] = boost::any(*left);
    }
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeBusinessLicenseResponseBodyDataTitle() = default;
};
class RecognizeBusinessLicenseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<double> angle{};
  shared_ptr<string> business{};
  shared_ptr<string> capital{};
  shared_ptr<RecognizeBusinessLicenseResponseBodyDataEmblem> emblem{};
  shared_ptr<string> establishDate{};
  shared_ptr<string> legalPerson{};
  shared_ptr<string> name{};
  shared_ptr<RecognizeBusinessLicenseResponseBodyDataQRCode> QRCode{};
  shared_ptr<string> registerNumber{};
  shared_ptr<RecognizeBusinessLicenseResponseBodyDataStamp> stamp{};
  shared_ptr<RecognizeBusinessLicenseResponseBodyDataTitle> title{};
  shared_ptr<string> type{};
  shared_ptr<string> validPeriod{};

  RecognizeBusinessLicenseResponseBodyData() {}

  explicit RecognizeBusinessLicenseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (business) {
      res["Business"] = boost::any(*business);
    }
    if (capital) {
      res["Capital"] = boost::any(*capital);
    }
    if (emblem) {
      res["Emblem"] = emblem ? boost::any(emblem->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (establishDate) {
      res["EstablishDate"] = boost::any(*establishDate);
    }
    if (legalPerson) {
      res["LegalPerson"] = boost::any(*legalPerson);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (QRCode) {
      res["QRCode"] = QRCode ? boost::any(QRCode->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (registerNumber) {
      res["RegisterNumber"] = boost::any(*registerNumber);
    }
    if (stamp) {
      res["Stamp"] = stamp ? boost::any(stamp->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (title) {
      res["Title"] = title ? boost::any(title->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (validPeriod) {
      res["ValidPeriod"] = boost::any(*validPeriod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<double>(boost::any_cast<double>(m["Angle"]));
    }
    if (m.find("Business") != m.end() && !m["Business"].empty()) {
      business = make_shared<string>(boost::any_cast<string>(m["Business"]));
    }
    if (m.find("Capital") != m.end() && !m["Capital"].empty()) {
      capital = make_shared<string>(boost::any_cast<string>(m["Capital"]));
    }
    if (m.find("Emblem") != m.end() && !m["Emblem"].empty()) {
      if (typeid(map<string, boost::any>) == m["Emblem"].type()) {
        RecognizeBusinessLicenseResponseBodyDataEmblem model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Emblem"]));
        emblem = make_shared<RecognizeBusinessLicenseResponseBodyDataEmblem>(model1);
      }
    }
    if (m.find("EstablishDate") != m.end() && !m["EstablishDate"].empty()) {
      establishDate = make_shared<string>(boost::any_cast<string>(m["EstablishDate"]));
    }
    if (m.find("LegalPerson") != m.end() && !m["LegalPerson"].empty()) {
      legalPerson = make_shared<string>(boost::any_cast<string>(m["LegalPerson"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("QRCode") != m.end() && !m["QRCode"].empty()) {
      if (typeid(map<string, boost::any>) == m["QRCode"].type()) {
        RecognizeBusinessLicenseResponseBodyDataQRCode model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QRCode"]));
        QRCode = make_shared<RecognizeBusinessLicenseResponseBodyDataQRCode>(model1);
      }
    }
    if (m.find("RegisterNumber") != m.end() && !m["RegisterNumber"].empty()) {
      registerNumber = make_shared<string>(boost::any_cast<string>(m["RegisterNumber"]));
    }
    if (m.find("Stamp") != m.end() && !m["Stamp"].empty()) {
      if (typeid(map<string, boost::any>) == m["Stamp"].type()) {
        RecognizeBusinessLicenseResponseBodyDataStamp model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Stamp"]));
        stamp = make_shared<RecognizeBusinessLicenseResponseBodyDataStamp>(model1);
      }
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      if (typeid(map<string, boost::any>) == m["Title"].type()) {
        RecognizeBusinessLicenseResponseBodyDataTitle model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Title"]));
        title = make_shared<RecognizeBusinessLicenseResponseBodyDataTitle>(model1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("ValidPeriod") != m.end() && !m["ValidPeriod"].empty()) {
      validPeriod = make_shared<string>(boost::any_cast<string>(m["ValidPeriod"]));
    }
  }


  virtual ~RecognizeBusinessLicenseResponseBodyData() = default;
};
class RecognizeBusinessLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeBusinessLicenseResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeBusinessLicenseResponseBody() {}

  explicit RecognizeBusinessLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeBusinessLicenseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeBusinessLicenseResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeBusinessLicenseResponseBody() = default;
};
class RecognizeBusinessLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeBusinessLicenseResponseBody> body{};

  RecognizeBusinessLicenseResponse() {}

  explicit RecognizeBusinessLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeBusinessLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeBusinessLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeBusinessLicenseResponse() = default;
};
class RecognizeCharacterRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<long> minHeight{};
  shared_ptr<bool> outputProbability{};

  RecognizeCharacterRequest() {}

  explicit RecognizeCharacterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (minHeight) {
      res["MinHeight"] = boost::any(*minHeight);
    }
    if (outputProbability) {
      res["OutputProbability"] = boost::any(*outputProbability);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("MinHeight") != m.end() && !m["MinHeight"].empty()) {
      minHeight = make_shared<long>(boost::any_cast<long>(m["MinHeight"]));
    }
    if (m.find("OutputProbability") != m.end() && !m["OutputProbability"].empty()) {
      outputProbability = make_shared<bool>(boost::any_cast<bool>(m["OutputProbability"]));
    }
  }


  virtual ~RecognizeCharacterRequest() = default;
};
class RecognizeCharacterAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<long> minHeight{};
  shared_ptr<bool> outputProbability{};

  RecognizeCharacterAdvanceRequest() {}

  explicit RecognizeCharacterAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURL"] = boost::any(*imageURLObject);
    }
    if (minHeight) {
      res["MinHeight"] = boost::any(*minHeight);
    }
    if (outputProbability) {
      res["OutputProbability"] = boost::any(*outputProbability);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURL"]));
    }
    if (m.find("MinHeight") != m.end() && !m["MinHeight"].empty()) {
      minHeight = make_shared<long>(boost::any_cast<long>(m["MinHeight"]));
    }
    if (m.find("OutputProbability") != m.end() && !m["OutputProbability"].empty()) {
      outputProbability = make_shared<bool>(boost::any_cast<bool>(m["OutputProbability"]));
    }
  }


  virtual ~RecognizeCharacterAdvanceRequest() = default;
};
class RecognizeCharacterResponseBodyDataResultsTextRectangles : public Darabonba::Model {
public:
  shared_ptr<long> angle{};
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  RecognizeCharacterResponseBodyDataResultsTextRectangles() {}

  explicit RecognizeCharacterResponseBodyDataResultsTextRectangles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (left) {
      res["Left"] = boost::any(*left);
    }
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<long>(boost::any_cast<long>(m["Angle"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeCharacterResponseBodyDataResultsTextRectangles() = default;
};
class RecognizeCharacterResponseBodyDataResults : public Darabonba::Model {
public:
  shared_ptr<double> probability{};
  shared_ptr<string> text{};
  shared_ptr<RecognizeCharacterResponseBodyDataResultsTextRectangles> textRectangles{};

  RecognizeCharacterResponseBodyDataResults() {}

  explicit RecognizeCharacterResponseBodyDataResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (probability) {
      res["Probability"] = boost::any(*probability);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (textRectangles) {
      res["TextRectangles"] = textRectangles ? boost::any(textRectangles->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Probability") != m.end() && !m["Probability"].empty()) {
      probability = make_shared<double>(boost::any_cast<double>(m["Probability"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("TextRectangles") != m.end() && !m["TextRectangles"].empty()) {
      if (typeid(map<string, boost::any>) == m["TextRectangles"].type()) {
        RecognizeCharacterResponseBodyDataResultsTextRectangles model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TextRectangles"]));
        textRectangles = make_shared<RecognizeCharacterResponseBodyDataResultsTextRectangles>(model1);
      }
    }
  }


  virtual ~RecognizeCharacterResponseBodyDataResults() = default;
};
class RecognizeCharacterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeCharacterResponseBodyDataResults>> results{};

  RecognizeCharacterResponseBodyData() {}

  explicit RecognizeCharacterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<RecognizeCharacterResponseBodyDataResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeCharacterResponseBodyDataResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<RecognizeCharacterResponseBodyDataResults>>(expect1);
      }
    }
  }


  virtual ~RecognizeCharacterResponseBodyData() = default;
};
class RecognizeCharacterResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeCharacterResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeCharacterResponseBody() {}

  explicit RecognizeCharacterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeCharacterResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeCharacterResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeCharacterResponseBody() = default;
};
class RecognizeCharacterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeCharacterResponseBody> body{};

  RecognizeCharacterResponse() {}

  explicit RecognizeCharacterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeCharacterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeCharacterResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeCharacterResponse() = default;
};
class RecognizeDriverLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> side{};

  RecognizeDriverLicenseRequest() {}

  explicit RecognizeDriverLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (side) {
      res["Side"] = boost::any(*side);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("Side") != m.end() && !m["Side"].empty()) {
      side = make_shared<string>(boost::any_cast<string>(m["Side"]));
    }
  }


  virtual ~RecognizeDriverLicenseRequest() = default;
};
class RecognizeDriverLicenseAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> side{};

  RecognizeDriverLicenseAdvanceRequest() {}

  explicit RecognizeDriverLicenseAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURL"] = boost::any(*imageURLObject);
    }
    if (side) {
      res["Side"] = boost::any(*side);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURL"]));
    }
    if (m.find("Side") != m.end() && !m["Side"].empty()) {
      side = make_shared<string>(boost::any_cast<string>(m["Side"]));
    }
  }


  virtual ~RecognizeDriverLicenseAdvanceRequest() = default;
};
class RecognizeDriverLicenseResponseBodyDataBackResult : public Darabonba::Model {
public:
  shared_ptr<string> archiveNumber{};
  shared_ptr<string> cardNumber{};
  shared_ptr<string> name{};
  shared_ptr<string> record{};

  RecognizeDriverLicenseResponseBodyDataBackResult() {}

  explicit RecognizeDriverLicenseResponseBodyDataBackResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (archiveNumber) {
      res["ArchiveNumber"] = boost::any(*archiveNumber);
    }
    if (cardNumber) {
      res["CardNumber"] = boost::any(*cardNumber);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (record) {
      res["Record"] = boost::any(*record);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ArchiveNumber") != m.end() && !m["ArchiveNumber"].empty()) {
      archiveNumber = make_shared<string>(boost::any_cast<string>(m["ArchiveNumber"]));
    }
    if (m.find("CardNumber") != m.end() && !m["CardNumber"].empty()) {
      cardNumber = make_shared<string>(boost::any_cast<string>(m["CardNumber"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Record") != m.end() && !m["Record"].empty()) {
      record = make_shared<string>(boost::any_cast<string>(m["Record"]));
    }
  }


  virtual ~RecognizeDriverLicenseResponseBodyDataBackResult() = default;
};
class RecognizeDriverLicenseResponseBodyDataFaceResult : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> endDate{};
  shared_ptr<string> gender{};
  shared_ptr<string> issueDate{};
  shared_ptr<string> issueUnit{};
  shared_ptr<string> licenseNumber{};
  shared_ptr<string> name{};
  shared_ptr<string> startDate{};
  shared_ptr<string> vehicleType{};

  RecognizeDriverLicenseResponseBodyDataFaceResult() {}

  explicit RecognizeDriverLicenseResponseBodyDataFaceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (issueDate) {
      res["IssueDate"] = boost::any(*issueDate);
    }
    if (issueUnit) {
      res["IssueUnit"] = boost::any(*issueUnit);
    }
    if (licenseNumber) {
      res["LicenseNumber"] = boost::any(*licenseNumber);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (vehicleType) {
      res["VehicleType"] = boost::any(*vehicleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("IssueDate") != m.end() && !m["IssueDate"].empty()) {
      issueDate = make_shared<string>(boost::any_cast<string>(m["IssueDate"]));
    }
    if (m.find("IssueUnit") != m.end() && !m["IssueUnit"].empty()) {
      issueUnit = make_shared<string>(boost::any_cast<string>(m["IssueUnit"]));
    }
    if (m.find("LicenseNumber") != m.end() && !m["LicenseNumber"].empty()) {
      licenseNumber = make_shared<string>(boost::any_cast<string>(m["LicenseNumber"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("VehicleType") != m.end() && !m["VehicleType"].empty()) {
      vehicleType = make_shared<string>(boost::any_cast<string>(m["VehicleType"]));
    }
  }


  virtual ~RecognizeDriverLicenseResponseBodyDataFaceResult() = default;
};
class RecognizeDriverLicenseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<RecognizeDriverLicenseResponseBodyDataBackResult> backResult{};
  shared_ptr<RecognizeDriverLicenseResponseBodyDataFaceResult> faceResult{};

  RecognizeDriverLicenseResponseBodyData() {}

  explicit RecognizeDriverLicenseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backResult) {
      res["BackResult"] = backResult ? boost::any(backResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceResult) {
      res["FaceResult"] = faceResult ? boost::any(faceResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackResult") != m.end() && !m["BackResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackResult"].type()) {
        RecognizeDriverLicenseResponseBodyDataBackResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackResult"]));
        backResult = make_shared<RecognizeDriverLicenseResponseBodyDataBackResult>(model1);
      }
    }
    if (m.find("FaceResult") != m.end() && !m["FaceResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceResult"].type()) {
        RecognizeDriverLicenseResponseBodyDataFaceResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceResult"]));
        faceResult = make_shared<RecognizeDriverLicenseResponseBodyDataFaceResult>(model1);
      }
    }
  }


  virtual ~RecognizeDriverLicenseResponseBodyData() = default;
};
class RecognizeDriverLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeDriverLicenseResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeDriverLicenseResponseBody() {}

  explicit RecognizeDriverLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeDriverLicenseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeDriverLicenseResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeDriverLicenseResponseBody() = default;
};
class RecognizeDriverLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeDriverLicenseResponseBody> body{};

  RecognizeDriverLicenseResponse() {}

  explicit RecognizeDriverLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeDriverLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeDriverLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeDriverLicenseResponse() = default;
};
class RecognizeDrivingLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> side{};

  RecognizeDrivingLicenseRequest() {}

  explicit RecognizeDrivingLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (side) {
      res["Side"] = boost::any(*side);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("Side") != m.end() && !m["Side"].empty()) {
      side = make_shared<string>(boost::any_cast<string>(m["Side"]));
    }
  }


  virtual ~RecognizeDrivingLicenseRequest() = default;
};
class RecognizeDrivingLicenseAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> side{};

  RecognizeDrivingLicenseAdvanceRequest() {}

  explicit RecognizeDrivingLicenseAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURL"] = boost::any(*imageURLObject);
    }
    if (side) {
      res["Side"] = boost::any(*side);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURL"]));
    }
    if (m.find("Side") != m.end() && !m["Side"].empty()) {
      side = make_shared<string>(boost::any_cast<string>(m["Side"]));
    }
  }


  virtual ~RecognizeDrivingLicenseAdvanceRequest() = default;
};
class RecognizeDrivingLicenseResponseBodyDataBackResult : public Darabonba::Model {
public:
  shared_ptr<string> approvedLoad{};
  shared_ptr<string> approvedPassengerCapacity{};
  shared_ptr<string> energyType{};
  shared_ptr<string> fileNumber{};
  shared_ptr<string> grossMass{};
  shared_ptr<string> inspectionRecord{};
  shared_ptr<string> overallDimension{};
  shared_ptr<string> plateNumber{};
  shared_ptr<string> tractionMass{};
  shared_ptr<string> unladenMass{};

  RecognizeDrivingLicenseResponseBodyDataBackResult() {}

  explicit RecognizeDrivingLicenseResponseBodyDataBackResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvedLoad) {
      res["ApprovedLoad"] = boost::any(*approvedLoad);
    }
    if (approvedPassengerCapacity) {
      res["ApprovedPassengerCapacity"] = boost::any(*approvedPassengerCapacity);
    }
    if (energyType) {
      res["EnergyType"] = boost::any(*energyType);
    }
    if (fileNumber) {
      res["FileNumber"] = boost::any(*fileNumber);
    }
    if (grossMass) {
      res["GrossMass"] = boost::any(*grossMass);
    }
    if (inspectionRecord) {
      res["InspectionRecord"] = boost::any(*inspectionRecord);
    }
    if (overallDimension) {
      res["OverallDimension"] = boost::any(*overallDimension);
    }
    if (plateNumber) {
      res["PlateNumber"] = boost::any(*plateNumber);
    }
    if (tractionMass) {
      res["TractionMass"] = boost::any(*tractionMass);
    }
    if (unladenMass) {
      res["UnladenMass"] = boost::any(*unladenMass);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovedLoad") != m.end() && !m["ApprovedLoad"].empty()) {
      approvedLoad = make_shared<string>(boost::any_cast<string>(m["ApprovedLoad"]));
    }
    if (m.find("ApprovedPassengerCapacity") != m.end() && !m["ApprovedPassengerCapacity"].empty()) {
      approvedPassengerCapacity = make_shared<string>(boost::any_cast<string>(m["ApprovedPassengerCapacity"]));
    }
    if (m.find("EnergyType") != m.end() && !m["EnergyType"].empty()) {
      energyType = make_shared<string>(boost::any_cast<string>(m["EnergyType"]));
    }
    if (m.find("FileNumber") != m.end() && !m["FileNumber"].empty()) {
      fileNumber = make_shared<string>(boost::any_cast<string>(m["FileNumber"]));
    }
    if (m.find("GrossMass") != m.end() && !m["GrossMass"].empty()) {
      grossMass = make_shared<string>(boost::any_cast<string>(m["GrossMass"]));
    }
    if (m.find("InspectionRecord") != m.end() && !m["InspectionRecord"].empty()) {
      inspectionRecord = make_shared<string>(boost::any_cast<string>(m["InspectionRecord"]));
    }
    if (m.find("OverallDimension") != m.end() && !m["OverallDimension"].empty()) {
      overallDimension = make_shared<string>(boost::any_cast<string>(m["OverallDimension"]));
    }
    if (m.find("PlateNumber") != m.end() && !m["PlateNumber"].empty()) {
      plateNumber = make_shared<string>(boost::any_cast<string>(m["PlateNumber"]));
    }
    if (m.find("TractionMass") != m.end() && !m["TractionMass"].empty()) {
      tractionMass = make_shared<string>(boost::any_cast<string>(m["TractionMass"]));
    }
    if (m.find("UnladenMass") != m.end() && !m["UnladenMass"].empty()) {
      unladenMass = make_shared<string>(boost::any_cast<string>(m["UnladenMass"]));
    }
  }


  virtual ~RecognizeDrivingLicenseResponseBodyDataBackResult() = default;
};
class RecognizeDrivingLicenseResponseBodyDataFaceResult : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> engineNumber{};
  shared_ptr<string> issueDate{};
  shared_ptr<string> model{};
  shared_ptr<string> owner{};
  shared_ptr<string> plateNumber{};
  shared_ptr<string> registerDate{};
  shared_ptr<string> useCharacter{};
  shared_ptr<string> vehicleType{};
  shared_ptr<string> vin{};

  RecognizeDrivingLicenseResponseBodyDataFaceResult() {}

  explicit RecognizeDrivingLicenseResponseBodyDataFaceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (engineNumber) {
      res["EngineNumber"] = boost::any(*engineNumber);
    }
    if (issueDate) {
      res["IssueDate"] = boost::any(*issueDate);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (owner) {
      res["Owner"] = boost::any(*owner);
    }
    if (plateNumber) {
      res["PlateNumber"] = boost::any(*plateNumber);
    }
    if (registerDate) {
      res["RegisterDate"] = boost::any(*registerDate);
    }
    if (useCharacter) {
      res["UseCharacter"] = boost::any(*useCharacter);
    }
    if (vehicleType) {
      res["VehicleType"] = boost::any(*vehicleType);
    }
    if (vin) {
      res["Vin"] = boost::any(*vin);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("EngineNumber") != m.end() && !m["EngineNumber"].empty()) {
      engineNumber = make_shared<string>(boost::any_cast<string>(m["EngineNumber"]));
    }
    if (m.find("IssueDate") != m.end() && !m["IssueDate"].empty()) {
      issueDate = make_shared<string>(boost::any_cast<string>(m["IssueDate"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("Owner") != m.end() && !m["Owner"].empty()) {
      owner = make_shared<string>(boost::any_cast<string>(m["Owner"]));
    }
    if (m.find("PlateNumber") != m.end() && !m["PlateNumber"].empty()) {
      plateNumber = make_shared<string>(boost::any_cast<string>(m["PlateNumber"]));
    }
    if (m.find("RegisterDate") != m.end() && !m["RegisterDate"].empty()) {
      registerDate = make_shared<string>(boost::any_cast<string>(m["RegisterDate"]));
    }
    if (m.find("UseCharacter") != m.end() && !m["UseCharacter"].empty()) {
      useCharacter = make_shared<string>(boost::any_cast<string>(m["UseCharacter"]));
    }
    if (m.find("VehicleType") != m.end() && !m["VehicleType"].empty()) {
      vehicleType = make_shared<string>(boost::any_cast<string>(m["VehicleType"]));
    }
    if (m.find("Vin") != m.end() && !m["Vin"].empty()) {
      vin = make_shared<string>(boost::any_cast<string>(m["Vin"]));
    }
  }


  virtual ~RecognizeDrivingLicenseResponseBodyDataFaceResult() = default;
};
class RecognizeDrivingLicenseResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<RecognizeDrivingLicenseResponseBodyDataBackResult> backResult{};
  shared_ptr<RecognizeDrivingLicenseResponseBodyDataFaceResult> faceResult{};

  RecognizeDrivingLicenseResponseBodyData() {}

  explicit RecognizeDrivingLicenseResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backResult) {
      res["BackResult"] = backResult ? boost::any(backResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceResult) {
      res["FaceResult"] = faceResult ? boost::any(faceResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackResult") != m.end() && !m["BackResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackResult"].type()) {
        RecognizeDrivingLicenseResponseBodyDataBackResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackResult"]));
        backResult = make_shared<RecognizeDrivingLicenseResponseBodyDataBackResult>(model1);
      }
    }
    if (m.find("FaceResult") != m.end() && !m["FaceResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceResult"].type()) {
        RecognizeDrivingLicenseResponseBodyDataFaceResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceResult"]));
        faceResult = make_shared<RecognizeDrivingLicenseResponseBodyDataFaceResult>(model1);
      }
    }
  }


  virtual ~RecognizeDrivingLicenseResponseBodyData() = default;
};
class RecognizeDrivingLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeDrivingLicenseResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeDrivingLicenseResponseBody() {}

  explicit RecognizeDrivingLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeDrivingLicenseResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeDrivingLicenseResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeDrivingLicenseResponseBody() = default;
};
class RecognizeDrivingLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeDrivingLicenseResponseBody> body{};

  RecognizeDrivingLicenseResponse() {}

  explicit RecognizeDrivingLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeDrivingLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeDrivingLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeDrivingLicenseResponse() = default;
};
class RecognizeIdentityCardRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> side{};

  RecognizeIdentityCardRequest() {}

  explicit RecognizeIdentityCardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (side) {
      res["Side"] = boost::any(*side);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("Side") != m.end() && !m["Side"].empty()) {
      side = make_shared<string>(boost::any_cast<string>(m["Side"]));
    }
  }


  virtual ~RecognizeIdentityCardRequest() = default;
};
class RecognizeIdentityCardAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> side{};

  RecognizeIdentityCardAdvanceRequest() {}

  explicit RecognizeIdentityCardAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURL"] = boost::any(*imageURLObject);
    }
    if (side) {
      res["Side"] = boost::any(*side);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURL"]));
    }
    if (m.find("Side") != m.end() && !m["Side"].empty()) {
      side = make_shared<string>(boost::any_cast<string>(m["Side"]));
    }
  }


  virtual ~RecognizeIdentityCardAdvanceRequest() = default;
};
class RecognizeIdentityCardResponseBodyDataBackResult : public Darabonba::Model {
public:
  shared_ptr<string> endDate{};
  shared_ptr<string> issue{};
  shared_ptr<string> startDate{};

  RecognizeIdentityCardResponseBodyDataBackResult() {}

  explicit RecognizeIdentityCardResponseBodyDataBackResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (issue) {
      res["Issue"] = boost::any(*issue);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("Issue") != m.end() && !m["Issue"].empty()) {
      issue = make_shared<string>(boost::any_cast<string>(m["Issue"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyDataBackResult() = default;
};
class RecognizeIdentityCardResponseBodyDataFrontResultCardAreas : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIdentityCardResponseBodyDataFrontResultCardAreas() {}

  explicit RecognizeIdentityCardResponseBodyDataFrontResultCardAreas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyDataFrontResultCardAreas() = default;
};
class RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices() {}

  explicit RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices() = default;
};
class RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter() {}

  explicit RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter() = default;
};
class RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize : public Darabonba::Model {
public:
  shared_ptr<double> height{};
  shared_ptr<double> width{};

  RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize() {}

  explicit RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize() = default;
};
class RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle : public Darabonba::Model {
public:
  shared_ptr<double> angle{};
  shared_ptr<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter> center{};
  shared_ptr<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize> size{};

  RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle() {}

  explicit RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (center) {
      res["Center"] = center ? boost::any(center->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (size) {
      res["Size"] = size ? boost::any(size->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<double>(boost::any_cast<double>(m["Angle"]));
    }
    if (m.find("Center") != m.end() && !m["Center"].empty()) {
      if (typeid(map<string, boost::any>) == m["Center"].type()) {
        RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Center"]));
        center = make_shared<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleCenter>(model1);
      }
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      if (typeid(map<string, boost::any>) == m["Size"].type()) {
        RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Size"]));
        size = make_shared<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangleSize>(model1);
      }
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle() = default;
};
class RecognizeIdentityCardResponseBodyDataFrontResult : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> birthDate{};
  shared_ptr<vector<RecognizeIdentityCardResponseBodyDataFrontResultCardAreas>> cardAreas{};
  shared_ptr<vector<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices>> faceRectVertices{};
  shared_ptr<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle> faceRectangle{};
  shared_ptr<string> gender{};
  shared_ptr<string> IDNumber{};
  shared_ptr<string> name{};
  shared_ptr<string> nationality{};

  RecognizeIdentityCardResponseBodyDataFrontResult() {}

  explicit RecognizeIdentityCardResponseBodyDataFrontResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (birthDate) {
      res["BirthDate"] = boost::any(*birthDate);
    }
    if (cardAreas) {
      vector<boost::any> temp1;
      for(auto item1:*cardAreas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CardAreas"] = boost::any(temp1);
    }
    if (faceRectVertices) {
      vector<boost::any> temp1;
      for(auto item1:*faceRectVertices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FaceRectVertices"] = boost::any(temp1);
    }
    if (faceRectangle) {
      res["FaceRectangle"] = faceRectangle ? boost::any(faceRectangle->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (IDNumber) {
      res["IDNumber"] = boost::any(*IDNumber);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nationality) {
      res["Nationality"] = boost::any(*nationality);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("BirthDate") != m.end() && !m["BirthDate"].empty()) {
      birthDate = make_shared<string>(boost::any_cast<string>(m["BirthDate"]));
    }
    if (m.find("CardAreas") != m.end() && !m["CardAreas"].empty()) {
      if (typeid(vector<boost::any>) == m["CardAreas"].type()) {
        vector<RecognizeIdentityCardResponseBodyDataFrontResultCardAreas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CardAreas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIdentityCardResponseBodyDataFrontResultCardAreas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cardAreas = make_shared<vector<RecognizeIdentityCardResponseBodyDataFrontResultCardAreas>>(expect1);
      }
    }
    if (m.find("FaceRectVertices") != m.end() && !m["FaceRectVertices"].empty()) {
      if (typeid(vector<boost::any>) == m["FaceRectVertices"].type()) {
        vector<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FaceRectVertices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faceRectVertices = make_shared<vector<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectVertices>>(expect1);
      }
    }
    if (m.find("FaceRectangle") != m.end() && !m["FaceRectangle"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceRectangle"].type()) {
        RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceRectangle"]));
        faceRectangle = make_shared<RecognizeIdentityCardResponseBodyDataFrontResultFaceRectangle>(model1);
      }
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("IDNumber") != m.end() && !m["IDNumber"].empty()) {
      IDNumber = make_shared<string>(boost::any_cast<string>(m["IDNumber"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Nationality") != m.end() && !m["Nationality"].empty()) {
      nationality = make_shared<string>(boost::any_cast<string>(m["Nationality"]));
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyDataFrontResult() = default;
};
class RecognizeIdentityCardResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<RecognizeIdentityCardResponseBodyDataBackResult> backResult{};
  shared_ptr<RecognizeIdentityCardResponseBodyDataFrontResult> frontResult{};

  RecognizeIdentityCardResponseBodyData() {}

  explicit RecognizeIdentityCardResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backResult) {
      res["BackResult"] = backResult ? boost::any(backResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (frontResult) {
      res["FrontResult"] = frontResult ? boost::any(frontResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackResult") != m.end() && !m["BackResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["BackResult"].type()) {
        RecognizeIdentityCardResponseBodyDataBackResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BackResult"]));
        backResult = make_shared<RecognizeIdentityCardResponseBodyDataBackResult>(model1);
      }
    }
    if (m.find("FrontResult") != m.end() && !m["FrontResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["FrontResult"].type()) {
        RecognizeIdentityCardResponseBodyDataFrontResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FrontResult"]));
        frontResult = make_shared<RecognizeIdentityCardResponseBodyDataFrontResult>(model1);
      }
    }
  }


  virtual ~RecognizeIdentityCardResponseBodyData() = default;
};
class RecognizeIdentityCardResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeIdentityCardResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeIdentityCardResponseBody() {}

  explicit RecognizeIdentityCardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeIdentityCardResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeIdentityCardResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeIdentityCardResponseBody() = default;
};
class RecognizeIdentityCardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeIdentityCardResponseBody> body{};

  RecognizeIdentityCardResponse() {}

  explicit RecognizeIdentityCardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeIdentityCardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeIdentityCardResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeIdentityCardResponse() = default;
};
class RecognizeLicensePlateRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeLicensePlateRequest() {}

  explicit RecognizeLicensePlateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeLicensePlateRequest() = default;
};
class RecognizeLicensePlateAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeLicensePlateAdvanceRequest() {}

  explicit RecognizeLicensePlateAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeLicensePlateAdvanceRequest() = default;
};
class RecognizeLicensePlateResponseBodyDataPlatesPositions : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizeLicensePlateResponseBodyDataPlatesPositions() {}

  explicit RecognizeLicensePlateResponseBodyDataPlatesPositions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~RecognizeLicensePlateResponseBodyDataPlatesPositions() = default;
};
class RecognizeLicensePlateResponseBodyDataPlatesRoi : public Darabonba::Model {
public:
  shared_ptr<long> h{};
  shared_ptr<long> w{};
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizeLicensePlateResponseBodyDataPlatesRoi() {}

  explicit RecognizeLicensePlateResponseBodyDataPlatesRoi(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (h) {
      res["H"] = boost::any(*h);
    }
    if (w) {
      res["W"] = boost::any(*w);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("H") != m.end() && !m["H"].empty()) {
      h = make_shared<long>(boost::any_cast<long>(m["H"]));
    }
    if (m.find("W") != m.end() && !m["W"].empty()) {
      w = make_shared<long>(boost::any_cast<long>(m["W"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~RecognizeLicensePlateResponseBodyDataPlatesRoi() = default;
};
class RecognizeLicensePlateResponseBodyDataPlates : public Darabonba::Model {
public:
  shared_ptr<double> confidence{};
  shared_ptr<string> plateNumber{};
  shared_ptr<string> plateType{};
  shared_ptr<double> plateTypeConfidence{};
  shared_ptr<vector<RecognizeLicensePlateResponseBodyDataPlatesPositions>> positions{};
  shared_ptr<RecognizeLicensePlateResponseBodyDataPlatesRoi> roi{};

  RecognizeLicensePlateResponseBodyDataPlates() {}

  explicit RecognizeLicensePlateResponseBodyDataPlates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (plateNumber) {
      res["PlateNumber"] = boost::any(*plateNumber);
    }
    if (plateType) {
      res["PlateType"] = boost::any(*plateType);
    }
    if (plateTypeConfidence) {
      res["PlateTypeConfidence"] = boost::any(*plateTypeConfidence);
    }
    if (positions) {
      vector<boost::any> temp1;
      for(auto item1:*positions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Positions"] = boost::any(temp1);
    }
    if (roi) {
      res["Roi"] = roi ? boost::any(roi->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("PlateNumber") != m.end() && !m["PlateNumber"].empty()) {
      plateNumber = make_shared<string>(boost::any_cast<string>(m["PlateNumber"]));
    }
    if (m.find("PlateType") != m.end() && !m["PlateType"].empty()) {
      plateType = make_shared<string>(boost::any_cast<string>(m["PlateType"]));
    }
    if (m.find("PlateTypeConfidence") != m.end() && !m["PlateTypeConfidence"].empty()) {
      plateTypeConfidence = make_shared<double>(boost::any_cast<double>(m["PlateTypeConfidence"]));
    }
    if (m.find("Positions") != m.end() && !m["Positions"].empty()) {
      if (typeid(vector<boost::any>) == m["Positions"].type()) {
        vector<RecognizeLicensePlateResponseBodyDataPlatesPositions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Positions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeLicensePlateResponseBodyDataPlatesPositions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        positions = make_shared<vector<RecognizeLicensePlateResponseBodyDataPlatesPositions>>(expect1);
      }
    }
    if (m.find("Roi") != m.end() && !m["Roi"].empty()) {
      if (typeid(map<string, boost::any>) == m["Roi"].type()) {
        RecognizeLicensePlateResponseBodyDataPlatesRoi model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Roi"]));
        roi = make_shared<RecognizeLicensePlateResponseBodyDataPlatesRoi>(model1);
      }
    }
  }


  virtual ~RecognizeLicensePlateResponseBodyDataPlates() = default;
};
class RecognizeLicensePlateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeLicensePlateResponseBodyDataPlates>> plates{};

  RecognizeLicensePlateResponseBodyData() {}

  explicit RecognizeLicensePlateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (plates) {
      vector<boost::any> temp1;
      for(auto item1:*plates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Plates"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Plates") != m.end() && !m["Plates"].empty()) {
      if (typeid(vector<boost::any>) == m["Plates"].type()) {
        vector<RecognizeLicensePlateResponseBodyDataPlates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Plates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeLicensePlateResponseBodyDataPlates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        plates = make_shared<vector<RecognizeLicensePlateResponseBodyDataPlates>>(expect1);
      }
    }
  }


  virtual ~RecognizeLicensePlateResponseBodyData() = default;
};
class RecognizeLicensePlateResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeLicensePlateResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeLicensePlateResponseBody() {}

  explicit RecognizeLicensePlateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeLicensePlateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeLicensePlateResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeLicensePlateResponseBody() = default;
};
class RecognizeLicensePlateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeLicensePlateResponseBody> body{};

  RecognizeLicensePlateResponse() {}

  explicit RecognizeLicensePlateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeLicensePlateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeLicensePlateResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeLicensePlateResponse() = default;
};
class RecognizePdfRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileURL{};

  RecognizePdfRequest() {}

  explicit RecognizePdfRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileURL) {
      res["FileURL"] = boost::any(*fileURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileURL") != m.end() && !m["FileURL"].empty()) {
      fileURL = make_shared<string>(boost::any_cast<string>(m["FileURL"]));
    }
  }


  virtual ~RecognizePdfRequest() = default;
};
class RecognizePdfAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> fileURLObject{};

  RecognizePdfAdvanceRequest() {}

  explicit RecognizePdfAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileURLObject) {
      res["FileURL"] = boost::any(*fileURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileURL") != m.end() && !m["FileURL"].empty()) {
      fileURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FileURL"]));
    }
  }


  virtual ~RecognizePdfAdvanceRequest() = default;
};
class RecognizePdfResponseBodyDataWordsInfoPositions : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizePdfResponseBodyDataWordsInfoPositions() {}

  explicit RecognizePdfResponseBodyDataWordsInfoPositions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~RecognizePdfResponseBodyDataWordsInfoPositions() = default;
};
class RecognizePdfResponseBodyDataWordsInfo : public Darabonba::Model {
public:
  shared_ptr<long> angle{};
  shared_ptr<long> height{};
  shared_ptr<vector<RecognizePdfResponseBodyDataWordsInfoPositions>> positions{};
  shared_ptr<long> width{};
  shared_ptr<string> word{};
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizePdfResponseBodyDataWordsInfo() {}

  explicit RecognizePdfResponseBodyDataWordsInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (positions) {
      vector<boost::any> temp1;
      for(auto item1:*positions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Positions"] = boost::any(temp1);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (word) {
      res["Word"] = boost::any(*word);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<long>(boost::any_cast<long>(m["Angle"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Positions") != m.end() && !m["Positions"].empty()) {
      if (typeid(vector<boost::any>) == m["Positions"].type()) {
        vector<RecognizePdfResponseBodyDataWordsInfoPositions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Positions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizePdfResponseBodyDataWordsInfoPositions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        positions = make_shared<vector<RecognizePdfResponseBodyDataWordsInfoPositions>>(expect1);
      }
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Word") != m.end() && !m["Word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["Word"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~RecognizePdfResponseBodyDataWordsInfo() = default;
};
class RecognizePdfResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> angle{};
  shared_ptr<long> height{};
  shared_ptr<long> orgHeight{};
  shared_ptr<long> orgWidth{};
  shared_ptr<long> pageIndex{};
  shared_ptr<long> width{};
  shared_ptr<vector<RecognizePdfResponseBodyDataWordsInfo>> wordsInfo{};

  RecognizePdfResponseBodyData() {}

  explicit RecognizePdfResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (orgHeight) {
      res["OrgHeight"] = boost::any(*orgHeight);
    }
    if (orgWidth) {
      res["OrgWidth"] = boost::any(*orgWidth);
    }
    if (pageIndex) {
      res["PageIndex"] = boost::any(*pageIndex);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (wordsInfo) {
      vector<boost::any> temp1;
      for(auto item1:*wordsInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["WordsInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<long>(boost::any_cast<long>(m["Angle"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("OrgHeight") != m.end() && !m["OrgHeight"].empty()) {
      orgHeight = make_shared<long>(boost::any_cast<long>(m["OrgHeight"]));
    }
    if (m.find("OrgWidth") != m.end() && !m["OrgWidth"].empty()) {
      orgWidth = make_shared<long>(boost::any_cast<long>(m["OrgWidth"]));
    }
    if (m.find("PageIndex") != m.end() && !m["PageIndex"].empty()) {
      pageIndex = make_shared<long>(boost::any_cast<long>(m["PageIndex"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("WordsInfo") != m.end() && !m["WordsInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["WordsInfo"].type()) {
        vector<RecognizePdfResponseBodyDataWordsInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["WordsInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizePdfResponseBodyDataWordsInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        wordsInfo = make_shared<vector<RecognizePdfResponseBodyDataWordsInfo>>(expect1);
      }
    }
  }


  virtual ~RecognizePdfResponseBodyData() = default;
};
class RecognizePdfResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizePdfResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizePdfResponseBody() {}

  explicit RecognizePdfResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizePdfResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizePdfResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizePdfResponseBody() = default;
};
class RecognizePdfResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizePdfResponseBody> body{};

  RecognizePdfResponse() {}

  explicit RecognizePdfResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizePdfResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizePdfResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizePdfResponse() = default;
};
class RecognizeQrCodeRequestTasks : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeQrCodeRequestTasks() {}

  explicit RecognizeQrCodeRequestTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeQrCodeRequestTasks() = default;
};
class RecognizeQrCodeRequest : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeQrCodeRequestTasks>> tasks{};

  RecognizeQrCodeRequest() {}

  explicit RecognizeQrCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tasks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<RecognizeQrCodeRequestTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeQrCodeRequestTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<RecognizeQrCodeRequestTasks>>(expect1);
      }
    }
  }


  virtual ~RecognizeQrCodeRequest() = default;
};
class RecognizeQrCodeAdvanceRequestTasks : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeQrCodeAdvanceRequestTasks() {}

  explicit RecognizeQrCodeAdvanceRequestTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeQrCodeAdvanceRequestTasks() = default;
};
class RecognizeQrCodeAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeQrCodeAdvanceRequestTasks>> tasks{};

  RecognizeQrCodeAdvanceRequest() {}

  explicit RecognizeQrCodeAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tasks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<RecognizeQrCodeAdvanceRequestTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeQrCodeAdvanceRequestTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<RecognizeQrCodeAdvanceRequestTasks>>(expect1);
      }
    }
  }


  virtual ~RecognizeQrCodeAdvanceRequest() = default;
};
class RecognizeQrCodeResponseBodyDataElementsResults : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<vector<string>> qrCodesData{};
  shared_ptr<double> rate{};
  shared_ptr<string> suggestion{};

  RecognizeQrCodeResponseBodyDataElementsResults() {}

  explicit RecognizeQrCodeResponseBodyDataElementsResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (qrCodesData) {
      res["QrCodesData"] = boost::any(*qrCodesData);
    }
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    if (suggestion) {
      res["Suggestion"] = boost::any(*suggestion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("QrCodesData") != m.end() && !m["QrCodesData"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["QrCodesData"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["QrCodesData"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      qrCodesData = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
    if (m.find("Suggestion") != m.end() && !m["Suggestion"].empty()) {
      suggestion = make_shared<string>(boost::any_cast<string>(m["Suggestion"]));
    }
  }


  virtual ~RecognizeQrCodeResponseBodyDataElementsResults() = default;
};
class RecognizeQrCodeResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<vector<RecognizeQrCodeResponseBodyDataElementsResults>> results{};
  shared_ptr<string> taskId{};

  RecognizeQrCodeResponseBodyDataElements() {}

  explicit RecognizeQrCodeResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<RecognizeQrCodeResponseBodyDataElementsResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeQrCodeResponseBodyDataElementsResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<RecognizeQrCodeResponseBodyDataElementsResults>>(expect1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~RecognizeQrCodeResponseBodyDataElements() = default;
};
class RecognizeQrCodeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeQrCodeResponseBodyDataElements>> elements{};

  RecognizeQrCodeResponseBodyData() {}

  explicit RecognizeQrCodeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elements) {
      vector<boost::any> temp1;
      for(auto item1:*elements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Elements"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Elements") != m.end() && !m["Elements"].empty()) {
      if (typeid(vector<boost::any>) == m["Elements"].type()) {
        vector<RecognizeQrCodeResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeQrCodeResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<RecognizeQrCodeResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~RecognizeQrCodeResponseBodyData() = default;
};
class RecognizeQrCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeQrCodeResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeQrCodeResponseBody() {}

  explicit RecognizeQrCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeQrCodeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeQrCodeResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeQrCodeResponseBody() = default;
};
class RecognizeQrCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeQrCodeResponseBody> body{};

  RecognizeQrCodeResponse() {}

  explicit RecognizeQrCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeQrCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeQrCodeResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeQrCodeResponse() = default;
};
class RecognizeQuotaInvoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeQuotaInvoiceRequest() {}

  explicit RecognizeQuotaInvoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeQuotaInvoiceRequest() = default;
};
class RecognizeQuotaInvoiceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeQuotaInvoiceAdvanceRequest() {}

  explicit RecognizeQuotaInvoiceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeQuotaInvoiceAdvanceRequest() = default;
};
class RecognizeQuotaInvoiceResponseBodyDataContent : public Darabonba::Model {
public:
  shared_ptr<string> invoiceAmount{};
  shared_ptr<string> invoiceCode{};
  shared_ptr<string> invoiceDetails{};
  shared_ptr<string> invoiceNo{};
  shared_ptr<string> sumAmount{};

  RecognizeQuotaInvoiceResponseBodyDataContent() {}

  explicit RecognizeQuotaInvoiceResponseBodyDataContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invoiceAmount) {
      res["InvoiceAmount"] = boost::any(*invoiceAmount);
    }
    if (invoiceCode) {
      res["InvoiceCode"] = boost::any(*invoiceCode);
    }
    if (invoiceDetails) {
      res["InvoiceDetails"] = boost::any(*invoiceDetails);
    }
    if (invoiceNo) {
      res["InvoiceNo"] = boost::any(*invoiceNo);
    }
    if (sumAmount) {
      res["SumAmount"] = boost::any(*sumAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvoiceAmount") != m.end() && !m["InvoiceAmount"].empty()) {
      invoiceAmount = make_shared<string>(boost::any_cast<string>(m["InvoiceAmount"]));
    }
    if (m.find("InvoiceCode") != m.end() && !m["InvoiceCode"].empty()) {
      invoiceCode = make_shared<string>(boost::any_cast<string>(m["InvoiceCode"]));
    }
    if (m.find("InvoiceDetails") != m.end() && !m["InvoiceDetails"].empty()) {
      invoiceDetails = make_shared<string>(boost::any_cast<string>(m["InvoiceDetails"]));
    }
    if (m.find("InvoiceNo") != m.end() && !m["InvoiceNo"].empty()) {
      invoiceNo = make_shared<string>(boost::any_cast<string>(m["InvoiceNo"]));
    }
    if (m.find("SumAmount") != m.end() && !m["SumAmount"].empty()) {
      sumAmount = make_shared<string>(boost::any_cast<string>(m["SumAmount"]));
    }
  }


  virtual ~RecognizeQuotaInvoiceResponseBodyDataContent() = default;
};
class RecognizeQuotaInvoiceResponseBodyDataKeyValueInfosValuePositions : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizeQuotaInvoiceResponseBodyDataKeyValueInfosValuePositions() {}

  explicit RecognizeQuotaInvoiceResponseBodyDataKeyValueInfosValuePositions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~RecognizeQuotaInvoiceResponseBodyDataKeyValueInfosValuePositions() = default;
};
class RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};
  shared_ptr<vector<RecognizeQuotaInvoiceResponseBodyDataKeyValueInfosValuePositions>> valuePositions{};
  shared_ptr<double> valueScore{};

  RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos() {}

  explicit RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (valuePositions) {
      vector<boost::any> temp1;
      for(auto item1:*valuePositions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ValuePositions"] = boost::any(temp1);
    }
    if (valueScore) {
      res["ValueScore"] = boost::any(*valueScore);
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
    if (m.find("ValuePositions") != m.end() && !m["ValuePositions"].empty()) {
      if (typeid(vector<boost::any>) == m["ValuePositions"].type()) {
        vector<RecognizeQuotaInvoiceResponseBodyDataKeyValueInfosValuePositions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ValuePositions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeQuotaInvoiceResponseBodyDataKeyValueInfosValuePositions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        valuePositions = make_shared<vector<RecognizeQuotaInvoiceResponseBodyDataKeyValueInfosValuePositions>>(expect1);
      }
    }
    if (m.find("ValueScore") != m.end() && !m["ValueScore"].empty()) {
      valueScore = make_shared<double>(boost::any_cast<double>(m["ValueScore"]));
    }
  }


  virtual ~RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos() = default;
};
class RecognizeQuotaInvoiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> angle{};
  shared_ptr<RecognizeQuotaInvoiceResponseBodyDataContent> content{};
  shared_ptr<long> height{};
  shared_ptr<vector<RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos>> keyValueInfos{};
  shared_ptr<long> orgHeight{};
  shared_ptr<long> orgWidth{};
  shared_ptr<long> width{};

  RecognizeQuotaInvoiceResponseBodyData() {}

  explicit RecognizeQuotaInvoiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (keyValueInfos) {
      vector<boost::any> temp1;
      for(auto item1:*keyValueInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyValueInfos"] = boost::any(temp1);
    }
    if (orgHeight) {
      res["OrgHeight"] = boost::any(*orgHeight);
    }
    if (orgWidth) {
      res["OrgWidth"] = boost::any(*orgWidth);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<long>(boost::any_cast<long>(m["Angle"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        RecognizeQuotaInvoiceResponseBodyDataContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<RecognizeQuotaInvoiceResponseBodyDataContent>(model1);
      }
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("KeyValueInfos") != m.end() && !m["KeyValueInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyValueInfos"].type()) {
        vector<RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyValueInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyValueInfos = make_shared<vector<RecognizeQuotaInvoiceResponseBodyDataKeyValueInfos>>(expect1);
      }
    }
    if (m.find("OrgHeight") != m.end() && !m["OrgHeight"].empty()) {
      orgHeight = make_shared<long>(boost::any_cast<long>(m["OrgHeight"]));
    }
    if (m.find("OrgWidth") != m.end() && !m["OrgWidth"].empty()) {
      orgWidth = make_shared<long>(boost::any_cast<long>(m["OrgWidth"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeQuotaInvoiceResponseBodyData() = default;
};
class RecognizeQuotaInvoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeQuotaInvoiceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeQuotaInvoiceResponseBody() {}

  explicit RecognizeQuotaInvoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeQuotaInvoiceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeQuotaInvoiceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeQuotaInvoiceResponseBody() = default;
};
class RecognizeQuotaInvoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeQuotaInvoiceResponseBody> body{};

  RecognizeQuotaInvoiceResponse() {}

  explicit RecognizeQuotaInvoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeQuotaInvoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeQuotaInvoiceResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeQuotaInvoiceResponse() = default;
};
class RecognizeStampRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeStampRequest() {}

  explicit RecognizeStampRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeStampRequest() = default;
};
class RecognizeStampAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeStampAdvanceRequest() {}

  explicit RecognizeStampAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeStampAdvanceRequest() = default;
};
class RecognizeStampResponseBodyDataResultsGeneralText : public Darabonba::Model {
public:
  shared_ptr<double> confidence{};
  shared_ptr<string> content{};

  RecognizeStampResponseBodyDataResultsGeneralText() {}

  explicit RecognizeStampResponseBodyDataResultsGeneralText(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~RecognizeStampResponseBodyDataResultsGeneralText() = default;
};
class RecognizeStampResponseBodyDataResultsRoi : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  RecognizeStampResponseBodyDataResultsRoi() {}

  explicit RecognizeStampResponseBodyDataResultsRoi(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (left) {
      res["Left"] = boost::any(*left);
    }
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeStampResponseBodyDataResultsRoi() = default;
};
class RecognizeStampResponseBodyDataResultsText : public Darabonba::Model {
public:
  shared_ptr<double> confidence{};
  shared_ptr<string> content{};

  RecognizeStampResponseBodyDataResultsText() {}

  explicit RecognizeStampResponseBodyDataResultsText(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~RecognizeStampResponseBodyDataResultsText() = default;
};
class RecognizeStampResponseBodyDataResults : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeStampResponseBodyDataResultsGeneralText>> generalText{};
  shared_ptr<RecognizeStampResponseBodyDataResultsRoi> roi{};
  shared_ptr<RecognizeStampResponseBodyDataResultsText> text{};

  RecognizeStampResponseBodyDataResults() {}

  explicit RecognizeStampResponseBodyDataResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (generalText) {
      vector<boost::any> temp1;
      for(auto item1:*generalText){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GeneralText"] = boost::any(temp1);
    }
    if (roi) {
      res["Roi"] = roi ? boost::any(roi->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (text) {
      res["Text"] = text ? boost::any(text->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GeneralText") != m.end() && !m["GeneralText"].empty()) {
      if (typeid(vector<boost::any>) == m["GeneralText"].type()) {
        vector<RecognizeStampResponseBodyDataResultsGeneralText> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GeneralText"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeStampResponseBodyDataResultsGeneralText model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        generalText = make_shared<vector<RecognizeStampResponseBodyDataResultsGeneralText>>(expect1);
      }
    }
    if (m.find("Roi") != m.end() && !m["Roi"].empty()) {
      if (typeid(map<string, boost::any>) == m["Roi"].type()) {
        RecognizeStampResponseBodyDataResultsRoi model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Roi"]));
        roi = make_shared<RecognizeStampResponseBodyDataResultsRoi>(model1);
      }
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      if (typeid(map<string, boost::any>) == m["Text"].type()) {
        RecognizeStampResponseBodyDataResultsText model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Text"]));
        text = make_shared<RecognizeStampResponseBodyDataResultsText>(model1);
      }
    }
  }


  virtual ~RecognizeStampResponseBodyDataResults() = default;
};
class RecognizeStampResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeStampResponseBodyDataResults>> results{};

  RecognizeStampResponseBodyData() {}

  explicit RecognizeStampResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<RecognizeStampResponseBodyDataResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeStampResponseBodyDataResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<RecognizeStampResponseBodyDataResults>>(expect1);
      }
    }
  }


  virtual ~RecognizeStampResponseBodyData() = default;
};
class RecognizeStampResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeStampResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeStampResponseBody() {}

  explicit RecognizeStampResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeStampResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeStampResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeStampResponseBody() = default;
};
class RecognizeStampResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeStampResponseBody> body{};

  RecognizeStampResponse() {}

  explicit RecognizeStampResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeStampResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeStampResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeStampResponse() = default;
};
class RecognizeTableRequest : public Darabonba::Model {
public:
  shared_ptr<bool> assureDirection{};
  shared_ptr<bool> hasLine{};
  shared_ptr<string> imageURL{};
  shared_ptr<string> outputFormat{};
  shared_ptr<bool> skipDetection{};
  shared_ptr<bool> useFinanceModel{};

  RecognizeTableRequest() {}

  explicit RecognizeTableRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assureDirection) {
      res["AssureDirection"] = boost::any(*assureDirection);
    }
    if (hasLine) {
      res["HasLine"] = boost::any(*hasLine);
    }
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (outputFormat) {
      res["OutputFormat"] = boost::any(*outputFormat);
    }
    if (skipDetection) {
      res["SkipDetection"] = boost::any(*skipDetection);
    }
    if (useFinanceModel) {
      res["UseFinanceModel"] = boost::any(*useFinanceModel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssureDirection") != m.end() && !m["AssureDirection"].empty()) {
      assureDirection = make_shared<bool>(boost::any_cast<bool>(m["AssureDirection"]));
    }
    if (m.find("HasLine") != m.end() && !m["HasLine"].empty()) {
      hasLine = make_shared<bool>(boost::any_cast<bool>(m["HasLine"]));
    }
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("OutputFormat") != m.end() && !m["OutputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["OutputFormat"]));
    }
    if (m.find("SkipDetection") != m.end() && !m["SkipDetection"].empty()) {
      skipDetection = make_shared<bool>(boost::any_cast<bool>(m["SkipDetection"]));
    }
    if (m.find("UseFinanceModel") != m.end() && !m["UseFinanceModel"].empty()) {
      useFinanceModel = make_shared<bool>(boost::any_cast<bool>(m["UseFinanceModel"]));
    }
  }


  virtual ~RecognizeTableRequest() = default;
};
class RecognizeTableAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> assureDirection{};
  shared_ptr<bool> hasLine{};
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> outputFormat{};
  shared_ptr<bool> skipDetection{};
  shared_ptr<bool> useFinanceModel{};

  RecognizeTableAdvanceRequest() {}

  explicit RecognizeTableAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assureDirection) {
      res["AssureDirection"] = boost::any(*assureDirection);
    }
    if (hasLine) {
      res["HasLine"] = boost::any(*hasLine);
    }
    if (imageURLObject) {
      res["ImageURL"] = boost::any(*imageURLObject);
    }
    if (outputFormat) {
      res["OutputFormat"] = boost::any(*outputFormat);
    }
    if (skipDetection) {
      res["SkipDetection"] = boost::any(*skipDetection);
    }
    if (useFinanceModel) {
      res["UseFinanceModel"] = boost::any(*useFinanceModel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssureDirection") != m.end() && !m["AssureDirection"].empty()) {
      assureDirection = make_shared<bool>(boost::any_cast<bool>(m["AssureDirection"]));
    }
    if (m.find("HasLine") != m.end() && !m["HasLine"].empty()) {
      hasLine = make_shared<bool>(boost::any_cast<bool>(m["HasLine"]));
    }
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURL"]));
    }
    if (m.find("OutputFormat") != m.end() && !m["OutputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["OutputFormat"]));
    }
    if (m.find("SkipDetection") != m.end() && !m["SkipDetection"].empty()) {
      skipDetection = make_shared<bool>(boost::any_cast<bool>(m["SkipDetection"]));
    }
    if (m.find("UseFinanceModel") != m.end() && !m["UseFinanceModel"].empty()) {
      useFinanceModel = make_shared<bool>(boost::any_cast<bool>(m["UseFinanceModel"]));
    }
  }


  virtual ~RecognizeTableAdvanceRequest() = default;
};
class RecognizeTableResponseBodyDataTablesTableRowsTableColumns : public Darabonba::Model {
public:
  shared_ptr<long> endColumn{};
  shared_ptr<long> endRow{};
  shared_ptr<long> height{};
  shared_ptr<long> startColumn{};
  shared_ptr<long> startRow{};
  shared_ptr<vector<string>> texts{};
  shared_ptr<long> width{};

  RecognizeTableResponseBodyDataTablesTableRowsTableColumns() {}

  explicit RecognizeTableResponseBodyDataTablesTableRowsTableColumns(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endColumn) {
      res["EndColumn"] = boost::any(*endColumn);
    }
    if (endRow) {
      res["EndRow"] = boost::any(*endRow);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (startColumn) {
      res["StartColumn"] = boost::any(*startColumn);
    }
    if (startRow) {
      res["StartRow"] = boost::any(*startRow);
    }
    if (texts) {
      res["Texts"] = boost::any(*texts);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndColumn") != m.end() && !m["EndColumn"].empty()) {
      endColumn = make_shared<long>(boost::any_cast<long>(m["EndColumn"]));
    }
    if (m.find("EndRow") != m.end() && !m["EndRow"].empty()) {
      endRow = make_shared<long>(boost::any_cast<long>(m["EndRow"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("StartColumn") != m.end() && !m["StartColumn"].empty()) {
      startColumn = make_shared<long>(boost::any_cast<long>(m["StartColumn"]));
    }
    if (m.find("StartRow") != m.end() && !m["StartRow"].empty()) {
      startRow = make_shared<long>(boost::any_cast<long>(m["StartRow"]));
    }
    if (m.find("Texts") != m.end() && !m["Texts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Texts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Texts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      texts = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeTableResponseBodyDataTablesTableRowsTableColumns() = default;
};
class RecognizeTableResponseBodyDataTablesTableRows : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTableResponseBodyDataTablesTableRowsTableColumns>> tableColumns{};

  RecognizeTableResponseBodyDataTablesTableRows() {}

  explicit RecognizeTableResponseBodyDataTablesTableRows(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tableColumns) {
      vector<boost::any> temp1;
      for(auto item1:*tableColumns){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TableColumns"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TableColumns") != m.end() && !m["TableColumns"].empty()) {
      if (typeid(vector<boost::any>) == m["TableColumns"].type()) {
        vector<RecognizeTableResponseBodyDataTablesTableRowsTableColumns> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TableColumns"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTableResponseBodyDataTablesTableRowsTableColumns model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableColumns = make_shared<vector<RecognizeTableResponseBodyDataTablesTableRowsTableColumns>>(expect1);
      }
    }
  }


  virtual ~RecognizeTableResponseBodyDataTablesTableRows() = default;
};
class RecognizeTableResponseBodyDataTables : public Darabonba::Model {
public:
  shared_ptr<vector<string>> head{};
  shared_ptr<vector<RecognizeTableResponseBodyDataTablesTableRows>> tableRows{};
  shared_ptr<vector<string>> tail{};

  RecognizeTableResponseBodyDataTables() {}

  explicit RecognizeTableResponseBodyDataTables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (head) {
      res["Head"] = boost::any(*head);
    }
    if (tableRows) {
      vector<boost::any> temp1;
      for(auto item1:*tableRows){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TableRows"] = boost::any(temp1);
    }
    if (tail) {
      res["Tail"] = boost::any(*tail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Head") != m.end() && !m["Head"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Head"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Head"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      head = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TableRows") != m.end() && !m["TableRows"].empty()) {
      if (typeid(vector<boost::any>) == m["TableRows"].type()) {
        vector<RecognizeTableResponseBodyDataTablesTableRows> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TableRows"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTableResponseBodyDataTablesTableRows model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tableRows = make_shared<vector<RecognizeTableResponseBodyDataTablesTableRows>>(expect1);
      }
    }
    if (m.find("Tail") != m.end() && !m["Tail"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tail"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tail"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tail = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RecognizeTableResponseBodyDataTables() = default;
};
class RecognizeTableResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> fileContent{};
  shared_ptr<vector<RecognizeTableResponseBodyDataTables>> tables{};

  RecognizeTableResponseBodyData() {}

  explicit RecognizeTableResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileContent) {
      res["FileContent"] = boost::any(*fileContent);
    }
    if (tables) {
      vector<boost::any> temp1;
      for(auto item1:*tables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileContent") != m.end() && !m["FileContent"].empty()) {
      fileContent = make_shared<string>(boost::any_cast<string>(m["FileContent"]));
    }
    if (m.find("Tables") != m.end() && !m["Tables"].empty()) {
      if (typeid(vector<boost::any>) == m["Tables"].type()) {
        vector<RecognizeTableResponseBodyDataTables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTableResponseBodyDataTables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tables = make_shared<vector<RecognizeTableResponseBodyDataTables>>(expect1);
      }
    }
  }


  virtual ~RecognizeTableResponseBodyData() = default;
};
class RecognizeTableResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeTableResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeTableResponseBody() {}

  explicit RecognizeTableResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTableResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeTableResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeTableResponseBody() = default;
};
class RecognizeTableResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeTableResponseBody> body{};

  RecognizeTableResponse() {}

  explicit RecognizeTableResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTableResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeTableResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeTableResponse() = default;
};
class RecognizeTaxiInvoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeTaxiInvoiceRequest() {}

  explicit RecognizeTaxiInvoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeTaxiInvoiceRequest() = default;
};
class RecognizeTaxiInvoiceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeTaxiInvoiceAdvanceRequest() {}

  explicit RecognizeTaxiInvoiceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeTaxiInvoiceAdvanceRequest() = default;
};
class RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi : public Darabonba::Model {
public:
  shared_ptr<double> h{};
  shared_ptr<double> w{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi() {}

  explicit RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (h) {
      res["H"] = boost::any(*h);
    }
    if (w) {
      res["W"] = boost::any(*w);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("H") != m.end() && !m["H"].empty()) {
      h = make_shared<double>(boost::any_cast<double>(m["H"]));
    }
    if (m.find("W") != m.end() && !m["W"].empty()) {
      w = make_shared<double>(boost::any_cast<double>(m["W"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi() = default;
};
class RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter : public Darabonba::Model {
public:
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter() {}

  explicit RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter() = default;
};
class RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize : public Darabonba::Model {
public:
  shared_ptr<double> h{};
  shared_ptr<double> w{};

  RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize() {}

  explicit RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (h) {
      res["H"] = boost::any(*h);
    }
    if (w) {
      res["W"] = boost::any(*w);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("H") != m.end() && !m["H"].empty()) {
      h = make_shared<double>(boost::any_cast<double>(m["H"]));
    }
    if (m.find("W") != m.end() && !m["W"].empty()) {
      w = make_shared<double>(boost::any_cast<double>(m["W"]));
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize() = default;
};
class RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi : public Darabonba::Model {
public:
  shared_ptr<double> angle{};
  shared_ptr<RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter> center{};
  shared_ptr<RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize> size{};

  RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi() {}

  explicit RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (center) {
      res["Center"] = center ? boost::any(center->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (size) {
      res["Size"] = size ? boost::any(size->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<double>(boost::any_cast<double>(m["Angle"]));
    }
    if (m.find("Center") != m.end() && !m["Center"].empty()) {
      if (typeid(map<string, boost::any>) == m["Center"].type()) {
        RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Center"]));
        center = make_shared<RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiCenter>(model1);
      }
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      if (typeid(map<string, boost::any>) == m["Size"].type()) {
        RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Size"]));
        size = make_shared<RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoiSize>(model1);
      }
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi() = default;
};
class RecognizeTaxiInvoiceResponseBodyDataInvoicesItems : public Darabonba::Model {
public:
  shared_ptr<RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi> itemRoi{};
  shared_ptr<string> text{};

  RecognizeTaxiInvoiceResponseBodyDataInvoicesItems() {}

  explicit RecognizeTaxiInvoiceResponseBodyDataInvoicesItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemRoi) {
      res["ItemRoi"] = itemRoi ? boost::any(itemRoi->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemRoi") != m.end() && !m["ItemRoi"].empty()) {
      if (typeid(map<string, boost::any>) == m["ItemRoi"].type()) {
        RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ItemRoi"]));
        itemRoi = make_shared<RecognizeTaxiInvoiceResponseBodyDataInvoicesItemsItemRoi>(model1);
      }
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBodyDataInvoicesItems() = default;
};
class RecognizeTaxiInvoiceResponseBodyDataInvoices : public Darabonba::Model {
public:
  shared_ptr<RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi> invoiceRoi{};
  shared_ptr<vector<RecognizeTaxiInvoiceResponseBodyDataInvoicesItems>> items{};
  shared_ptr<long> rotateType{};

  RecognizeTaxiInvoiceResponseBodyDataInvoices() {}

  explicit RecognizeTaxiInvoiceResponseBodyDataInvoices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invoiceRoi) {
      res["InvoiceRoi"] = invoiceRoi ? boost::any(invoiceRoi->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
    }
    if (rotateType) {
      res["RotateType"] = boost::any(*rotateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InvoiceRoi") != m.end() && !m["InvoiceRoi"].empty()) {
      if (typeid(map<string, boost::any>) == m["InvoiceRoi"].type()) {
        RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["InvoiceRoi"]));
        invoiceRoi = make_shared<RecognizeTaxiInvoiceResponseBodyDataInvoicesInvoiceRoi>(model1);
      }
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<RecognizeTaxiInvoiceResponseBodyDataInvoicesItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTaxiInvoiceResponseBodyDataInvoicesItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<RecognizeTaxiInvoiceResponseBodyDataInvoicesItems>>(expect1);
      }
    }
    if (m.find("RotateType") != m.end() && !m["RotateType"].empty()) {
      rotateType = make_shared<long>(boost::any_cast<long>(m["RotateType"]));
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBodyDataInvoices() = default;
};
class RecognizeTaxiInvoiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeTaxiInvoiceResponseBodyDataInvoices>> invoices{};

  RecognizeTaxiInvoiceResponseBodyData() {}

  explicit RecognizeTaxiInvoiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (invoices) {
      vector<boost::any> temp1;
      for(auto item1:*invoices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Invoices"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Invoices") != m.end() && !m["Invoices"].empty()) {
      if (typeid(vector<boost::any>) == m["Invoices"].type()) {
        vector<RecognizeTaxiInvoiceResponseBodyDataInvoices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Invoices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTaxiInvoiceResponseBodyDataInvoices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        invoices = make_shared<vector<RecognizeTaxiInvoiceResponseBodyDataInvoices>>(expect1);
      }
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBodyData() = default;
};
class RecognizeTaxiInvoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeTaxiInvoiceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeTaxiInvoiceResponseBody() {}

  explicit RecognizeTaxiInvoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTaxiInvoiceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeTaxiInvoiceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeTaxiInvoiceResponseBody() = default;
};
class RecognizeTaxiInvoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeTaxiInvoiceResponseBody> body{};

  RecognizeTaxiInvoiceResponse() {}

  explicit RecognizeTaxiInvoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTaxiInvoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeTaxiInvoiceResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeTaxiInvoiceResponse() = default;
};
class RecognizeTicketInvoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeTicketInvoiceRequest() {}

  explicit RecognizeTicketInvoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeTicketInvoiceRequest() = default;
};
class RecognizeTicketInvoiceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeTicketInvoiceAdvanceRequest() {}

  explicit RecognizeTicketInvoiceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeTicketInvoiceAdvanceRequest() = default;
};
class RecognizeTicketInvoiceResponseBodyDataResultsContent : public Darabonba::Model {
public:
  shared_ptr<string> antiFakeCode{};
  shared_ptr<string> invoiceCode{};
  shared_ptr<string> invoiceDate{};
  shared_ptr<string> invoiceNumber{};
  shared_ptr<string> payeeName{};
  shared_ptr<string> payeeRegisterNo{};
  shared_ptr<string> payerName{};
  shared_ptr<string> payerRegisterNo{};
  shared_ptr<string> sumAmount{};

  RecognizeTicketInvoiceResponseBodyDataResultsContent() {}

  explicit RecognizeTicketInvoiceResponseBodyDataResultsContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (antiFakeCode) {
      res["AntiFakeCode"] = boost::any(*antiFakeCode);
    }
    if (invoiceCode) {
      res["InvoiceCode"] = boost::any(*invoiceCode);
    }
    if (invoiceDate) {
      res["InvoiceDate"] = boost::any(*invoiceDate);
    }
    if (invoiceNumber) {
      res["InvoiceNumber"] = boost::any(*invoiceNumber);
    }
    if (payeeName) {
      res["PayeeName"] = boost::any(*payeeName);
    }
    if (payeeRegisterNo) {
      res["PayeeRegisterNo"] = boost::any(*payeeRegisterNo);
    }
    if (payerName) {
      res["PayerName"] = boost::any(*payerName);
    }
    if (payerRegisterNo) {
      res["PayerRegisterNo"] = boost::any(*payerRegisterNo);
    }
    if (sumAmount) {
      res["SumAmount"] = boost::any(*sumAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AntiFakeCode") != m.end() && !m["AntiFakeCode"].empty()) {
      antiFakeCode = make_shared<string>(boost::any_cast<string>(m["AntiFakeCode"]));
    }
    if (m.find("InvoiceCode") != m.end() && !m["InvoiceCode"].empty()) {
      invoiceCode = make_shared<string>(boost::any_cast<string>(m["InvoiceCode"]));
    }
    if (m.find("InvoiceDate") != m.end() && !m["InvoiceDate"].empty()) {
      invoiceDate = make_shared<string>(boost::any_cast<string>(m["InvoiceDate"]));
    }
    if (m.find("InvoiceNumber") != m.end() && !m["InvoiceNumber"].empty()) {
      invoiceNumber = make_shared<string>(boost::any_cast<string>(m["InvoiceNumber"]));
    }
    if (m.find("PayeeName") != m.end() && !m["PayeeName"].empty()) {
      payeeName = make_shared<string>(boost::any_cast<string>(m["PayeeName"]));
    }
    if (m.find("PayeeRegisterNo") != m.end() && !m["PayeeRegisterNo"].empty()) {
      payeeRegisterNo = make_shared<string>(boost::any_cast<string>(m["PayeeRegisterNo"]));
    }
    if (m.find("PayerName") != m.end() && !m["PayerName"].empty()) {
      payerName = make_shared<string>(boost::any_cast<string>(m["PayerName"]));
    }
    if (m.find("PayerRegisterNo") != m.end() && !m["PayerRegisterNo"].empty()) {
      payerRegisterNo = make_shared<string>(boost::any_cast<string>(m["PayerRegisterNo"]));
    }
    if (m.find("SumAmount") != m.end() && !m["SumAmount"].empty()) {
      sumAmount = make_shared<string>(boost::any_cast<string>(m["SumAmount"]));
    }
  }


  virtual ~RecognizeTicketInvoiceResponseBodyDataResultsContent() = default;
};
class RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions() {}

  explicit RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions() = default;
};
class RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};
  shared_ptr<vector<RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions>> valuePositions{};
  shared_ptr<double> valueScore{};

  RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos() {}

  explicit RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (valuePositions) {
      vector<boost::any> temp1;
      for(auto item1:*valuePositions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ValuePositions"] = boost::any(temp1);
    }
    if (valueScore) {
      res["ValueScore"] = boost::any(*valueScore);
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
    if (m.find("ValuePositions") != m.end() && !m["ValuePositions"].empty()) {
      if (typeid(vector<boost::any>) == m["ValuePositions"].type()) {
        vector<RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ValuePositions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        valuePositions = make_shared<vector<RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfosValuePositions>>(expect1);
      }
    }
    if (m.find("ValueScore") != m.end() && !m["ValueScore"].empty()) {
      valueScore = make_shared<double>(boost::any_cast<double>(m["ValueScore"]));
    }
  }


  virtual ~RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos() = default;
};
class RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle() {}

  explicit RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["X"] = boost::any(*x);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
  }


  virtual ~RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle() = default;
};
class RecognizeTicketInvoiceResponseBodyDataResults : public Darabonba::Model {
public:
  shared_ptr<RecognizeTicketInvoiceResponseBodyDataResultsContent> content{};
  shared_ptr<long> index{};
  shared_ptr<vector<RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos>> keyValueInfos{};
  shared_ptr<vector<RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle>> sliceRectangle{};
  shared_ptr<string> type{};

  RecognizeTicketInvoiceResponseBodyDataResults() {}

  explicit RecognizeTicketInvoiceResponseBodyDataResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (keyValueInfos) {
      vector<boost::any> temp1;
      for(auto item1:*keyValueInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["KeyValueInfos"] = boost::any(temp1);
    }
    if (sliceRectangle) {
      vector<boost::any> temp1;
      for(auto item1:*sliceRectangle){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SliceRectangle"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        RecognizeTicketInvoiceResponseBodyDataResultsContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<RecognizeTicketInvoiceResponseBodyDataResultsContent>(model1);
      }
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("KeyValueInfos") != m.end() && !m["KeyValueInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["KeyValueInfos"].type()) {
        vector<RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["KeyValueInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        keyValueInfos = make_shared<vector<RecognizeTicketInvoiceResponseBodyDataResultsKeyValueInfos>>(expect1);
      }
    }
    if (m.find("SliceRectangle") != m.end() && !m["SliceRectangle"].empty()) {
      if (typeid(vector<boost::any>) == m["SliceRectangle"].type()) {
        vector<RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SliceRectangle"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sliceRectangle = make_shared<vector<RecognizeTicketInvoiceResponseBodyDataResultsSliceRectangle>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~RecognizeTicketInvoiceResponseBodyDataResults() = default;
};
class RecognizeTicketInvoiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<long> height{};
  shared_ptr<long> orgHeight{};
  shared_ptr<long> orgWidth{};
  shared_ptr<vector<RecognizeTicketInvoiceResponseBodyDataResults>> results{};
  shared_ptr<long> width{};

  RecognizeTicketInvoiceResponseBodyData() {}

  explicit RecognizeTicketInvoiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (orgHeight) {
      res["OrgHeight"] = boost::any(*orgHeight);
    }
    if (orgWidth) {
      res["OrgWidth"] = boost::any(*orgWidth);
    }
    if (results) {
      vector<boost::any> temp1;
      for(auto item1:*results){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Results"] = boost::any(temp1);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("OrgHeight") != m.end() && !m["OrgHeight"].empty()) {
      orgHeight = make_shared<long>(boost::any_cast<long>(m["OrgHeight"]));
    }
    if (m.find("OrgWidth") != m.end() && !m["OrgWidth"].empty()) {
      orgWidth = make_shared<long>(boost::any_cast<long>(m["OrgWidth"]));
    }
    if (m.find("Results") != m.end() && !m["Results"].empty()) {
      if (typeid(vector<boost::any>) == m["Results"].type()) {
        vector<RecognizeTicketInvoiceResponseBodyDataResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Results"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeTicketInvoiceResponseBodyDataResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        results = make_shared<vector<RecognizeTicketInvoiceResponseBodyDataResults>>(expect1);
      }
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeTicketInvoiceResponseBodyData() = default;
};
class RecognizeTicketInvoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeTicketInvoiceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeTicketInvoiceResponseBody() {}

  explicit RecognizeTicketInvoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTicketInvoiceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeTicketInvoiceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeTicketInvoiceResponseBody() = default;
};
class RecognizeTicketInvoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeTicketInvoiceResponseBody> body{};

  RecognizeTicketInvoiceResponse() {}

  explicit RecognizeTicketInvoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTicketInvoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeTicketInvoiceResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeTicketInvoiceResponse() = default;
};
class RecognizeTrainTicketRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeTrainTicketRequest() {}

  explicit RecognizeTrainTicketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeTrainTicketRequest() = default;
};
class RecognizeTrainTicketAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeTrainTicketAdvanceRequest() {}

  explicit RecognizeTrainTicketAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeTrainTicketAdvanceRequest() = default;
};
class RecognizeTrainTicketResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> date{};
  shared_ptr<string> departureStation{};
  shared_ptr<string> destination{};
  shared_ptr<string> level{};
  shared_ptr<string> name{};
  shared_ptr<string> number{};
  shared_ptr<double> price{};
  shared_ptr<string> seat{};

  RecognizeTrainTicketResponseBodyData() {}

  explicit RecognizeTrainTicketResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (date) {
      res["Date"] = boost::any(*date);
    }
    if (departureStation) {
      res["DepartureStation"] = boost::any(*departureStation);
    }
    if (destination) {
      res["Destination"] = boost::any(*destination);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (price) {
      res["Price"] = boost::any(*price);
    }
    if (seat) {
      res["Seat"] = boost::any(*seat);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      date = make_shared<string>(boost::any_cast<string>(m["Date"]));
    }
    if (m.find("DepartureStation") != m.end() && !m["DepartureStation"].empty()) {
      departureStation = make_shared<string>(boost::any_cast<string>(m["DepartureStation"]));
    }
    if (m.find("Destination") != m.end() && !m["Destination"].empty()) {
      destination = make_shared<string>(boost::any_cast<string>(m["Destination"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("Price") != m.end() && !m["Price"].empty()) {
      price = make_shared<double>(boost::any_cast<double>(m["Price"]));
    }
    if (m.find("Seat") != m.end() && !m["Seat"].empty()) {
      seat = make_shared<string>(boost::any_cast<string>(m["Seat"]));
    }
  }


  virtual ~RecognizeTrainTicketResponseBodyData() = default;
};
class RecognizeTrainTicketResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeTrainTicketResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeTrainTicketResponseBody() {}

  explicit RecognizeTrainTicketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTrainTicketResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeTrainTicketResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeTrainTicketResponseBody() = default;
};
class RecognizeTrainTicketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeTrainTicketResponseBody> body{};

  RecognizeTrainTicketResponse() {}

  explicit RecognizeTrainTicketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeTrainTicketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeTrainTicketResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeTrainTicketResponse() = default;
};
class RecognizeVATInvoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileType{};
  shared_ptr<string> fileURL{};

  RecognizeVATInvoiceRequest() {}

  explicit RecognizeVATInvoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileURL) {
      res["FileURL"] = boost::any(*fileURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileURL") != m.end() && !m["FileURL"].empty()) {
      fileURL = make_shared<string>(boost::any_cast<string>(m["FileURL"]));
    }
  }


  virtual ~RecognizeVATInvoiceRequest() = default;
};
class RecognizeVATInvoiceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileType{};
  shared_ptr<Darabonba::Stream> fileURLObject{};

  RecognizeVATInvoiceAdvanceRequest() {}

  explicit RecognizeVATInvoiceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileURLObject) {
      res["FileURL"] = boost::any(*fileURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileURL") != m.end() && !m["FileURL"].empty()) {
      fileURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FileURL"]));
    }
  }


  virtual ~RecognizeVATInvoiceAdvanceRequest() = default;
};
class RecognizeVATInvoiceResponseBodyDataBox : public Darabonba::Model {
public:
  shared_ptr<vector<double>> checkers{};
  shared_ptr<vector<double>> clerks{};
  shared_ptr<vector<double>> invoiceAmounts{};
  shared_ptr<vector<double>> invoiceCodes{};
  shared_ptr<vector<double>> invoiceDates{};
  shared_ptr<vector<double>> invoiceFakeCodes{};
  shared_ptr<vector<double>> invoiceNoes{};
  shared_ptr<vector<long>> itemNames{};
  shared_ptr<vector<double>> payeeAddresses{};
  shared_ptr<vector<double>> payeeBankNames{};
  shared_ptr<vector<double>> payeeNames{};
  shared_ptr<vector<double>> payeeRegisterNoes{};
  shared_ptr<vector<double>> payees{};
  shared_ptr<vector<double>> payerAddresses{};
  shared_ptr<vector<double>> payerBankNames{};
  shared_ptr<vector<double>> payerNames{};
  shared_ptr<vector<double>> payerRegisterNoes{};
  shared_ptr<vector<double>> sumAmounts{};
  shared_ptr<vector<double>> taxAmounts{};
  shared_ptr<vector<double>> withoutTaxAmounts{};

  RecognizeVATInvoiceResponseBodyDataBox() {}

  explicit RecognizeVATInvoiceResponseBodyDataBox(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkers) {
      res["Checkers"] = boost::any(*checkers);
    }
    if (clerks) {
      res["Clerks"] = boost::any(*clerks);
    }
    if (invoiceAmounts) {
      res["InvoiceAmounts"] = boost::any(*invoiceAmounts);
    }
    if (invoiceCodes) {
      res["InvoiceCodes"] = boost::any(*invoiceCodes);
    }
    if (invoiceDates) {
      res["InvoiceDates"] = boost::any(*invoiceDates);
    }
    if (invoiceFakeCodes) {
      res["InvoiceFakeCodes"] = boost::any(*invoiceFakeCodes);
    }
    if (invoiceNoes) {
      res["InvoiceNoes"] = boost::any(*invoiceNoes);
    }
    if (itemNames) {
      res["ItemNames"] = boost::any(*itemNames);
    }
    if (payeeAddresses) {
      res["PayeeAddresses"] = boost::any(*payeeAddresses);
    }
    if (payeeBankNames) {
      res["PayeeBankNames"] = boost::any(*payeeBankNames);
    }
    if (payeeNames) {
      res["PayeeNames"] = boost::any(*payeeNames);
    }
    if (payeeRegisterNoes) {
      res["PayeeRegisterNoes"] = boost::any(*payeeRegisterNoes);
    }
    if (payees) {
      res["Payees"] = boost::any(*payees);
    }
    if (payerAddresses) {
      res["PayerAddresses"] = boost::any(*payerAddresses);
    }
    if (payerBankNames) {
      res["PayerBankNames"] = boost::any(*payerBankNames);
    }
    if (payerNames) {
      res["PayerNames"] = boost::any(*payerNames);
    }
    if (payerRegisterNoes) {
      res["PayerRegisterNoes"] = boost::any(*payerRegisterNoes);
    }
    if (sumAmounts) {
      res["SumAmounts"] = boost::any(*sumAmounts);
    }
    if (taxAmounts) {
      res["TaxAmounts"] = boost::any(*taxAmounts);
    }
    if (withoutTaxAmounts) {
      res["WithoutTaxAmounts"] = boost::any(*withoutTaxAmounts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Checkers") != m.end() && !m["Checkers"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Checkers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Checkers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      checkers = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Clerks") != m.end() && !m["Clerks"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Clerks"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Clerks"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      clerks = make_shared<vector<double>>(toVec1);
    }
    if (m.find("InvoiceAmounts") != m.end() && !m["InvoiceAmounts"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["InvoiceAmounts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvoiceAmounts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      invoiceAmounts = make_shared<vector<double>>(toVec1);
    }
    if (m.find("InvoiceCodes") != m.end() && !m["InvoiceCodes"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["InvoiceCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvoiceCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      invoiceCodes = make_shared<vector<double>>(toVec1);
    }
    if (m.find("InvoiceDates") != m.end() && !m["InvoiceDates"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["InvoiceDates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvoiceDates"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      invoiceDates = make_shared<vector<double>>(toVec1);
    }
    if (m.find("InvoiceFakeCodes") != m.end() && !m["InvoiceFakeCodes"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["InvoiceFakeCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvoiceFakeCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      invoiceFakeCodes = make_shared<vector<double>>(toVec1);
    }
    if (m.find("InvoiceNoes") != m.end() && !m["InvoiceNoes"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["InvoiceNoes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InvoiceNoes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      invoiceNoes = make_shared<vector<double>>(toVec1);
    }
    if (m.find("ItemNames") != m.end() && !m["ItemNames"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ItemNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ItemNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      itemNames = make_shared<vector<long>>(toVec1);
    }
    if (m.find("PayeeAddresses") != m.end() && !m["PayeeAddresses"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayeeAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayeeAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payeeAddresses = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PayeeBankNames") != m.end() && !m["PayeeBankNames"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayeeBankNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayeeBankNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payeeBankNames = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PayeeNames") != m.end() && !m["PayeeNames"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayeeNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayeeNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payeeNames = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PayeeRegisterNoes") != m.end() && !m["PayeeRegisterNoes"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayeeRegisterNoes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayeeRegisterNoes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payeeRegisterNoes = make_shared<vector<double>>(toVec1);
    }
    if (m.find("Payees") != m.end() && !m["Payees"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Payees"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Payees"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payees = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PayerAddresses") != m.end() && !m["PayerAddresses"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayerAddresses"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayerAddresses"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payerAddresses = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PayerBankNames") != m.end() && !m["PayerBankNames"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayerBankNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayerBankNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payerBankNames = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PayerNames") != m.end() && !m["PayerNames"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayerNames"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayerNames"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payerNames = make_shared<vector<double>>(toVec1);
    }
    if (m.find("PayerRegisterNoes") != m.end() && !m["PayerRegisterNoes"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["PayerRegisterNoes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PayerRegisterNoes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      payerRegisterNoes = make_shared<vector<double>>(toVec1);
    }
    if (m.find("SumAmounts") != m.end() && !m["SumAmounts"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["SumAmounts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SumAmounts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      sumAmounts = make_shared<vector<double>>(toVec1);
    }
    if (m.find("TaxAmounts") != m.end() && !m["TaxAmounts"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["TaxAmounts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaxAmounts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      taxAmounts = make_shared<vector<double>>(toVec1);
    }
    if (m.find("WithoutTaxAmounts") != m.end() && !m["WithoutTaxAmounts"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["WithoutTaxAmounts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WithoutTaxAmounts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      withoutTaxAmounts = make_shared<vector<double>>(toVec1);
    }
  }


  virtual ~RecognizeVATInvoiceResponseBodyDataBox() = default;
};
class RecognizeVATInvoiceResponseBodyDataContent : public Darabonba::Model {
public:
  shared_ptr<string> antiFakeCode{};
  shared_ptr<string> checker{};
  shared_ptr<string> clerk{};
  shared_ptr<string> invoiceAmount{};
  shared_ptr<string> invoiceCode{};
  shared_ptr<string> invoiceDate{};
  shared_ptr<string> invoiceNo{};
  shared_ptr<vector<string>> itemName{};
  shared_ptr<string> payee{};
  shared_ptr<string> payeeAddress{};
  shared_ptr<string> payeeBankName{};
  shared_ptr<string> payeeName{};
  shared_ptr<string> payeeRegisterNo{};
  shared_ptr<string> payerAddress{};
  shared_ptr<string> payerBankName{};
  shared_ptr<string> payerName{};
  shared_ptr<string> payerRegisterNo{};
  shared_ptr<string> sumAmount{};
  shared_ptr<string> taxAmount{};
  shared_ptr<string> withoutTaxAmount{};

  RecognizeVATInvoiceResponseBodyDataContent() {}

  explicit RecognizeVATInvoiceResponseBodyDataContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (antiFakeCode) {
      res["AntiFakeCode"] = boost::any(*antiFakeCode);
    }
    if (checker) {
      res["Checker"] = boost::any(*checker);
    }
    if (clerk) {
      res["Clerk"] = boost::any(*clerk);
    }
    if (invoiceAmount) {
      res["InvoiceAmount"] = boost::any(*invoiceAmount);
    }
    if (invoiceCode) {
      res["InvoiceCode"] = boost::any(*invoiceCode);
    }
    if (invoiceDate) {
      res["InvoiceDate"] = boost::any(*invoiceDate);
    }
    if (invoiceNo) {
      res["InvoiceNo"] = boost::any(*invoiceNo);
    }
    if (itemName) {
      res["ItemName"] = boost::any(*itemName);
    }
    if (payee) {
      res["Payee"] = boost::any(*payee);
    }
    if (payeeAddress) {
      res["PayeeAddress"] = boost::any(*payeeAddress);
    }
    if (payeeBankName) {
      res["PayeeBankName"] = boost::any(*payeeBankName);
    }
    if (payeeName) {
      res["PayeeName"] = boost::any(*payeeName);
    }
    if (payeeRegisterNo) {
      res["PayeeRegisterNo"] = boost::any(*payeeRegisterNo);
    }
    if (payerAddress) {
      res["PayerAddress"] = boost::any(*payerAddress);
    }
    if (payerBankName) {
      res["PayerBankName"] = boost::any(*payerBankName);
    }
    if (payerName) {
      res["PayerName"] = boost::any(*payerName);
    }
    if (payerRegisterNo) {
      res["PayerRegisterNo"] = boost::any(*payerRegisterNo);
    }
    if (sumAmount) {
      res["SumAmount"] = boost::any(*sumAmount);
    }
    if (taxAmount) {
      res["TaxAmount"] = boost::any(*taxAmount);
    }
    if (withoutTaxAmount) {
      res["WithoutTaxAmount"] = boost::any(*withoutTaxAmount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AntiFakeCode") != m.end() && !m["AntiFakeCode"].empty()) {
      antiFakeCode = make_shared<string>(boost::any_cast<string>(m["AntiFakeCode"]));
    }
    if (m.find("Checker") != m.end() && !m["Checker"].empty()) {
      checker = make_shared<string>(boost::any_cast<string>(m["Checker"]));
    }
    if (m.find("Clerk") != m.end() && !m["Clerk"].empty()) {
      clerk = make_shared<string>(boost::any_cast<string>(m["Clerk"]));
    }
    if (m.find("InvoiceAmount") != m.end() && !m["InvoiceAmount"].empty()) {
      invoiceAmount = make_shared<string>(boost::any_cast<string>(m["InvoiceAmount"]));
    }
    if (m.find("InvoiceCode") != m.end() && !m["InvoiceCode"].empty()) {
      invoiceCode = make_shared<string>(boost::any_cast<string>(m["InvoiceCode"]));
    }
    if (m.find("InvoiceDate") != m.end() && !m["InvoiceDate"].empty()) {
      invoiceDate = make_shared<string>(boost::any_cast<string>(m["InvoiceDate"]));
    }
    if (m.find("InvoiceNo") != m.end() && !m["InvoiceNo"].empty()) {
      invoiceNo = make_shared<string>(boost::any_cast<string>(m["InvoiceNo"]));
    }
    if (m.find("ItemName") != m.end() && !m["ItemName"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ItemName"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ItemName"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      itemName = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Payee") != m.end() && !m["Payee"].empty()) {
      payee = make_shared<string>(boost::any_cast<string>(m["Payee"]));
    }
    if (m.find("PayeeAddress") != m.end() && !m["PayeeAddress"].empty()) {
      payeeAddress = make_shared<string>(boost::any_cast<string>(m["PayeeAddress"]));
    }
    if (m.find("PayeeBankName") != m.end() && !m["PayeeBankName"].empty()) {
      payeeBankName = make_shared<string>(boost::any_cast<string>(m["PayeeBankName"]));
    }
    if (m.find("PayeeName") != m.end() && !m["PayeeName"].empty()) {
      payeeName = make_shared<string>(boost::any_cast<string>(m["PayeeName"]));
    }
    if (m.find("PayeeRegisterNo") != m.end() && !m["PayeeRegisterNo"].empty()) {
      payeeRegisterNo = make_shared<string>(boost::any_cast<string>(m["PayeeRegisterNo"]));
    }
    if (m.find("PayerAddress") != m.end() && !m["PayerAddress"].empty()) {
      payerAddress = make_shared<string>(boost::any_cast<string>(m["PayerAddress"]));
    }
    if (m.find("PayerBankName") != m.end() && !m["PayerBankName"].empty()) {
      payerBankName = make_shared<string>(boost::any_cast<string>(m["PayerBankName"]));
    }
    if (m.find("PayerName") != m.end() && !m["PayerName"].empty()) {
      payerName = make_shared<string>(boost::any_cast<string>(m["PayerName"]));
    }
    if (m.find("PayerRegisterNo") != m.end() && !m["PayerRegisterNo"].empty()) {
      payerRegisterNo = make_shared<string>(boost::any_cast<string>(m["PayerRegisterNo"]));
    }
    if (m.find("SumAmount") != m.end() && !m["SumAmount"].empty()) {
      sumAmount = make_shared<string>(boost::any_cast<string>(m["SumAmount"]));
    }
    if (m.find("TaxAmount") != m.end() && !m["TaxAmount"].empty()) {
      taxAmount = make_shared<string>(boost::any_cast<string>(m["TaxAmount"]));
    }
    if (m.find("WithoutTaxAmount") != m.end() && !m["WithoutTaxAmount"].empty()) {
      withoutTaxAmount = make_shared<string>(boost::any_cast<string>(m["WithoutTaxAmount"]));
    }
  }


  virtual ~RecognizeVATInvoiceResponseBodyDataContent() = default;
};
class RecognizeVATInvoiceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<RecognizeVATInvoiceResponseBodyDataBox> box{};
  shared_ptr<RecognizeVATInvoiceResponseBodyDataContent> content{};

  RecognizeVATInvoiceResponseBodyData() {}

  explicit RecognizeVATInvoiceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (box) {
      res["Box"] = box ? boost::any(box->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (content) {
      res["Content"] = content ? boost::any(content->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Box") != m.end() && !m["Box"].empty()) {
      if (typeid(map<string, boost::any>) == m["Box"].type()) {
        RecognizeVATInvoiceResponseBodyDataBox model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Box"]));
        box = make_shared<RecognizeVATInvoiceResponseBodyDataBox>(model1);
      }
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      if (typeid(map<string, boost::any>) == m["Content"].type()) {
        RecognizeVATInvoiceResponseBodyDataContent model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Content"]));
        content = make_shared<RecognizeVATInvoiceResponseBodyDataContent>(model1);
      }
    }
  }


  virtual ~RecognizeVATInvoiceResponseBodyData() = default;
};
class RecognizeVATInvoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeVATInvoiceResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeVATInvoiceResponseBody() {}

  explicit RecognizeVATInvoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVATInvoiceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeVATInvoiceResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeVATInvoiceResponseBody() = default;
};
class RecognizeVATInvoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeVATInvoiceResponseBody> body{};

  RecognizeVATInvoiceResponse() {}

  explicit RecognizeVATInvoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVATInvoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeVATInvoiceResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeVATInvoiceResponse() = default;
};
class RecognizeVINCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RecognizeVINCodeRequest() {}

  explicit RecognizeVINCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeVINCodeRequest() = default;
};
class RecognizeVINCodeAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RecognizeVINCodeAdvanceRequest() {}

  explicit RecognizeVINCodeAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RecognizeVINCodeAdvanceRequest() = default;
};
class RecognizeVINCodeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> vinCode{};

  RecognizeVINCodeResponseBodyData() {}

  explicit RecognizeVINCodeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vinCode) {
      res["VinCode"] = boost::any(*vinCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VinCode") != m.end() && !m["VinCode"].empty()) {
      vinCode = make_shared<string>(boost::any_cast<string>(m["VinCode"]));
    }
  }


  virtual ~RecognizeVINCodeResponseBodyData() = default;
};
class RecognizeVINCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeVINCodeResponseBodyData> data{};
  shared_ptr<string> requestId{};

  RecognizeVINCodeResponseBody() {}

  explicit RecognizeVINCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVINCodeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeVINCodeResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeVINCodeResponseBody() = default;
};
class RecognizeVINCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeVINCodeResponseBody> body{};

  RecognizeVINCodeResponse() {}

  explicit RecognizeVINCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVINCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeVINCodeResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeVINCodeResponse() = default;
};
class RecognizeVideoCharacterRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoURL{};

  RecognizeVideoCharacterRequest() {}

  explicit RecognizeVideoCharacterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoURL) {
      res["VideoURL"] = boost::any(*videoURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURL = make_shared<string>(boost::any_cast<string>(m["VideoURL"]));
    }
  }


  virtual ~RecognizeVideoCharacterRequest() = default;
};
class RecognizeVideoCharacterAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoURLObject{};

  RecognizeVideoCharacterAdvanceRequest() {}

  explicit RecognizeVideoCharacterAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoURLObject) {
      res["VideoURL"] = boost::any(*videoURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoURL"]));
    }
  }


  virtual ~RecognizeVideoCharacterAdvanceRequest() = default;
};
class RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles : public Darabonba::Model {
public:
  shared_ptr<long> angle{};
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles() {}

  explicit RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (angle) {
      res["Angle"] = boost::any(*angle);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (left) {
      res["Left"] = boost::any(*left);
    }
    if (top) {
      res["Top"] = boost::any(*top);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Angle") != m.end() && !m["Angle"].empty()) {
      angle = make_shared<long>(boost::any_cast<long>(m["Angle"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<long>(boost::any_cast<long>(m["Left"]));
    }
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<long>(boost::any_cast<long>(m["Top"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles() = default;
};
class RecognizeVideoCharacterResponseBodyDataFramesElements : public Darabonba::Model {
public:
  shared_ptr<double> score{};
  shared_ptr<string> text{};
  shared_ptr<vector<RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles>> textRectangles{};

  RecognizeVideoCharacterResponseBodyDataFramesElements() {}

  explicit RecognizeVideoCharacterResponseBodyDataFramesElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (textRectangles) {
      vector<boost::any> temp1;
      for(auto item1:*textRectangles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TextRectangles"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("TextRectangles") != m.end() && !m["TextRectangles"].empty()) {
      if (typeid(vector<boost::any>) == m["TextRectangles"].type()) {
        vector<RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TextRectangles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        textRectangles = make_shared<vector<RecognizeVideoCharacterResponseBodyDataFramesElementsTextRectangles>>(expect1);
      }
    }
  }


  virtual ~RecognizeVideoCharacterResponseBodyDataFramesElements() = default;
};
class RecognizeVideoCharacterResponseBodyDataFrames : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVideoCharacterResponseBodyDataFramesElements>> elements{};
  shared_ptr<long> timestamp{};

  RecognizeVideoCharacterResponseBodyDataFrames() {}

  explicit RecognizeVideoCharacterResponseBodyDataFrames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elements) {
      vector<boost::any> temp1;
      for(auto item1:*elements){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Elements"] = boost::any(temp1);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Elements") != m.end() && !m["Elements"].empty()) {
      if (typeid(vector<boost::any>) == m["Elements"].type()) {
        vector<RecognizeVideoCharacterResponseBodyDataFramesElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVideoCharacterResponseBodyDataFramesElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<RecognizeVideoCharacterResponseBodyDataFramesElements>>(expect1);
      }
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~RecognizeVideoCharacterResponseBodyDataFrames() = default;
};
class RecognizeVideoCharacterResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<RecognizeVideoCharacterResponseBodyDataFrames>> frames{};
  shared_ptr<long> height{};
  shared_ptr<string> inputFile{};
  shared_ptr<long> width{};

  RecognizeVideoCharacterResponseBodyData() {}

  explicit RecognizeVideoCharacterResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (frames) {
      vector<boost::any> temp1;
      for(auto item1:*frames){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Frames"] = boost::any(temp1);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (inputFile) {
      res["InputFile"] = boost::any(*inputFile);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Frames") != m.end() && !m["Frames"].empty()) {
      if (typeid(vector<boost::any>) == m["Frames"].type()) {
        vector<RecognizeVideoCharacterResponseBodyDataFrames> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Frames"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecognizeVideoCharacterResponseBodyDataFrames model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        frames = make_shared<vector<RecognizeVideoCharacterResponseBodyDataFrames>>(expect1);
      }
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("InputFile") != m.end() && !m["InputFile"].empty()) {
      inputFile = make_shared<string>(boost::any_cast<string>(m["InputFile"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~RecognizeVideoCharacterResponseBodyData() = default;
};
class RecognizeVideoCharacterResponseBody : public Darabonba::Model {
public:
  shared_ptr<RecognizeVideoCharacterResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  RecognizeVideoCharacterResponseBody() {}

  explicit RecognizeVideoCharacterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        RecognizeVideoCharacterResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecognizeVideoCharacterResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecognizeVideoCharacterResponseBody() = default;
};
class RecognizeVideoCharacterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecognizeVideoCharacterResponseBody> body{};

  RecognizeVideoCharacterResponse() {}

  explicit RecognizeVideoCharacterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecognizeVideoCharacterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecognizeVideoCharacterResponseBody>(model1);
      }
    }
  }


  virtual ~RecognizeVideoCharacterResponse() = default;
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
  GetAsyncJobResultResponse getAsyncJobResultWithOptions(shared_ptr<GetAsyncJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResult(shared_ptr<GetAsyncJobResultRequest> request);
  RecognizeBankCardResponse recognizeBankCardWithOptions(shared_ptr<RecognizeBankCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBankCardResponse recognizeBankCard(shared_ptr<RecognizeBankCardRequest> request);
  RecognizeBankCardResponse recognizeBankCardAdvance(shared_ptr<RecognizeBankCardAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBusinessCardResponse recognizeBusinessCardWithOptions(shared_ptr<RecognizeBusinessCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBusinessCardResponse recognizeBusinessCard(shared_ptr<RecognizeBusinessCardRequest> request);
  RecognizeBusinessCardResponse recognizeBusinessCardAdvance(shared_ptr<RecognizeBusinessCardAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBusinessLicenseResponse recognizeBusinessLicenseWithOptions(shared_ptr<RecognizeBusinessLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeBusinessLicenseResponse recognizeBusinessLicense(shared_ptr<RecognizeBusinessLicenseRequest> request);
  RecognizeBusinessLicenseResponse recognizeBusinessLicenseAdvance(shared_ptr<RecognizeBusinessLicenseAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeCharacterResponse recognizeCharacterWithOptions(shared_ptr<RecognizeCharacterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeCharacterResponse recognizeCharacter(shared_ptr<RecognizeCharacterRequest> request);
  RecognizeCharacterResponse recognizeCharacterAdvance(shared_ptr<RecognizeCharacterAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeDriverLicenseResponse recognizeDriverLicenseWithOptions(shared_ptr<RecognizeDriverLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeDriverLicenseResponse recognizeDriverLicense(shared_ptr<RecognizeDriverLicenseRequest> request);
  RecognizeDriverLicenseResponse recognizeDriverLicenseAdvance(shared_ptr<RecognizeDriverLicenseAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeDrivingLicenseResponse recognizeDrivingLicenseWithOptions(shared_ptr<RecognizeDrivingLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeDrivingLicenseResponse recognizeDrivingLicense(shared_ptr<RecognizeDrivingLicenseRequest> request);
  RecognizeDrivingLicenseResponse recognizeDrivingLicenseAdvance(shared_ptr<RecognizeDrivingLicenseAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeIdentityCardResponse recognizeIdentityCardWithOptions(shared_ptr<RecognizeIdentityCardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeIdentityCardResponse recognizeIdentityCard(shared_ptr<RecognizeIdentityCardRequest> request);
  RecognizeIdentityCardResponse recognizeIdentityCardAdvance(shared_ptr<RecognizeIdentityCardAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeLicensePlateResponse recognizeLicensePlateWithOptions(shared_ptr<RecognizeLicensePlateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeLicensePlateResponse recognizeLicensePlate(shared_ptr<RecognizeLicensePlateRequest> request);
  RecognizeLicensePlateResponse recognizeLicensePlateAdvance(shared_ptr<RecognizeLicensePlateAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizePdfResponse recognizePdfWithOptions(shared_ptr<RecognizePdfRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizePdfResponse recognizePdf(shared_ptr<RecognizePdfRequest> request);
  RecognizePdfResponse recognizePdfAdvance(shared_ptr<RecognizePdfAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeQrCodeResponse recognizeQrCodeWithOptions(shared_ptr<RecognizeQrCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeQrCodeResponse recognizeQrCode(shared_ptr<RecognizeQrCodeRequest> request);
  RecognizeQrCodeResponse recognizeQrCodeAdvance(shared_ptr<RecognizeQrCodeAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeQuotaInvoiceResponse recognizeQuotaInvoiceWithOptions(shared_ptr<RecognizeQuotaInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeQuotaInvoiceResponse recognizeQuotaInvoice(shared_ptr<RecognizeQuotaInvoiceRequest> request);
  RecognizeQuotaInvoiceResponse recognizeQuotaInvoiceAdvance(shared_ptr<RecognizeQuotaInvoiceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeStampResponse recognizeStampWithOptions(shared_ptr<RecognizeStampRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeStampResponse recognizeStamp(shared_ptr<RecognizeStampRequest> request);
  RecognizeStampResponse recognizeStampAdvance(shared_ptr<RecognizeStampAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTableResponse recognizeTableWithOptions(shared_ptr<RecognizeTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTableResponse recognizeTable(shared_ptr<RecognizeTableRequest> request);
  RecognizeTableResponse recognizeTableAdvance(shared_ptr<RecognizeTableAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTaxiInvoiceResponse recognizeTaxiInvoiceWithOptions(shared_ptr<RecognizeTaxiInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTaxiInvoiceResponse recognizeTaxiInvoice(shared_ptr<RecognizeTaxiInvoiceRequest> request);
  RecognizeTaxiInvoiceResponse recognizeTaxiInvoiceAdvance(shared_ptr<RecognizeTaxiInvoiceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTicketInvoiceResponse recognizeTicketInvoiceWithOptions(shared_ptr<RecognizeTicketInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTicketInvoiceResponse recognizeTicketInvoice(shared_ptr<RecognizeTicketInvoiceRequest> request);
  RecognizeTicketInvoiceResponse recognizeTicketInvoiceAdvance(shared_ptr<RecognizeTicketInvoiceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTrainTicketResponse recognizeTrainTicketWithOptions(shared_ptr<RecognizeTrainTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeTrainTicketResponse recognizeTrainTicket(shared_ptr<RecognizeTrainTicketRequest> request);
  RecognizeTrainTicketResponse recognizeTrainTicketAdvance(shared_ptr<RecognizeTrainTicketAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVATInvoiceResponse recognizeVATInvoiceWithOptions(shared_ptr<RecognizeVATInvoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVATInvoiceResponse recognizeVATInvoice(shared_ptr<RecognizeVATInvoiceRequest> request);
  RecognizeVATInvoiceResponse recognizeVATInvoiceAdvance(shared_ptr<RecognizeVATInvoiceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVINCodeResponse recognizeVINCodeWithOptions(shared_ptr<RecognizeVINCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVINCodeResponse recognizeVINCode(shared_ptr<RecognizeVINCodeRequest> request);
  RecognizeVINCodeResponse recognizeVINCodeAdvance(shared_ptr<RecognizeVINCodeAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVideoCharacterResponse recognizeVideoCharacterWithOptions(shared_ptr<RecognizeVideoCharacterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecognizeVideoCharacterResponse recognizeVideoCharacter(shared_ptr<RecognizeVideoCharacterRequest> request);
  RecognizeVideoCharacterResponse recognizeVideoCharacterAdvance(shared_ptr<RecognizeVideoCharacterAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Ocr20191230

#endif
