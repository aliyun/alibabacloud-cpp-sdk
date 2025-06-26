// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ENERGYEXPERTEXTERNAL20220923_H_
#define ALIBABACLOUD_ENERGYEXPERTEXTERNAL20220923_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_EnergyExpertExternal20220923 {
class CarbonEmissionElecSummaryItem : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmissionData{};
  shared_ptr<string> dataUnit{};
  shared_ptr<string> name{};
  shared_ptr<double> ratio{};
  shared_ptr<double> rawData{};

  CarbonEmissionElecSummaryItem() {}

  explicit CarbonEmissionElecSummaryItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmissionData) {
      res["carbonEmissionData"] = boost::any(*carbonEmissionData);
    }
    if (dataUnit) {
      res["dataUnit"] = boost::any(*dataUnit);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (ratio) {
      res["ratio"] = boost::any(*ratio);
    }
    if (rawData) {
      res["rawData"] = boost::any(*rawData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmissionData") != m.end() && !m["carbonEmissionData"].empty()) {
      carbonEmissionData = make_shared<double>(boost::any_cast<double>(m["carbonEmissionData"]));
    }
    if (m.find("dataUnit") != m.end() && !m["dataUnit"].empty()) {
      dataUnit = make_shared<string>(boost::any_cast<string>(m["dataUnit"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("ratio") != m.end() && !m["ratio"].empty()) {
      ratio = make_shared<double>(boost::any_cast<double>(m["ratio"]));
    }
    if (m.find("rawData") != m.end() && !m["rawData"].empty()) {
      rawData = make_shared<double>(boost::any_cast<double>(m["rawData"]));
    }
  }


  virtual ~CarbonEmissionElecSummaryItem() = default;
};
class ChatRefDocPostion : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  ChatRefDocPostion() {}

  explicit ChatRefDocPostion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["x"] = boost::any(*x);
    }
    if (y) {
      res["y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("x") != m.end() && !m["x"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["x"]));
    }
    if (m.find("y") != m.end() && !m["y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["y"]));
    }
  }


  virtual ~ChatRefDocPostion() = default;
};
class ChatDocumentPageNum : public Darabonba::Model {
public:
  shared_ptr<long> num{};
  shared_ptr<vector<vector<ChatRefDocPostion>>> pos{};

  ChatDocumentPageNum() {}

  explicit ChatDocumentPageNum(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (num) {
      res["num"] = boost::any(*num);
    }
    if (pos) {
      vector<boost::any> temp1;
      for(auto item1:*pos){
        vector<boost::any> temp2;
        for(auto item2:item1){
          temp2.push_back(boost::any(item2.toMap()));
        }
        temp1 = boost::any(temp2);
      }
      res["pos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("num") != m.end() && !m["num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["num"]));
    }
    if (m.find("pos") != m.end() && !m["pos"].empty()) {
      if (typeid(vector<boost::any>) == m["pos"].type()) {
        vector<vector<ChatRefDocPostion>> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["pos"])){
          if (typeid(vector<boost::any>) == item1.type()) {
            vector<ChatRefDocPostion> expect2;
            for(auto item2:boost::any_cast<vector<boost::any>>(item1)){
              if (typeid(map<string, boost::any>) == item2.type()) {
                ChatRefDocPostion model3;
                model3.fromMap(boost::any_cast<map<string, boost::any>>(item2));
                expect2.push_back(model3);
              }
            }
            expect1.push_back(expect2);
          }
        }
        pos = make_shared<vector<vector<ChatRefDocPostion>>>(expect1);
      }
    }
  }


  virtual ~ChatDocumentPageNum() = default;
};
class ChatRefDocPageInfo : public Darabonba::Model {
public:
  shared_ptr<double> angle{};
  shared_ptr<string> excelParseResult{};
  shared_ptr<long> imageHeight{};
  shared_ptr<string> imageUrl{};
  shared_ptr<long> imageWidth{};
  shared_ptr<long> pageIdCurDoc{};
  shared_ptr<string> pdfParseResult{};
  shared_ptr<string> wordParseResult{};

  ChatRefDocPageInfo() {}

  explicit ChatRefDocPageInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (angle) {
      res["angle"] = boost::any(*angle);
    }
    if (excelParseResult) {
      res["excelParseResult"] = boost::any(*excelParseResult);
    }
    if (imageHeight) {
      res["imageHeight"] = boost::any(*imageHeight);
    }
    if (imageUrl) {
      res["imageUrl"] = boost::any(*imageUrl);
    }
    if (imageWidth) {
      res["imageWidth"] = boost::any(*imageWidth);
    }
    if (pageIdCurDoc) {
      res["pageIdCurDoc"] = boost::any(*pageIdCurDoc);
    }
    if (pdfParseResult) {
      res["pdfParseResult"] = boost::any(*pdfParseResult);
    }
    if (wordParseResult) {
      res["wordParseResult"] = boost::any(*wordParseResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("angle") != m.end() && !m["angle"].empty()) {
      angle = make_shared<double>(boost::any_cast<double>(m["angle"]));
    }
    if (m.find("excelParseResult") != m.end() && !m["excelParseResult"].empty()) {
      excelParseResult = make_shared<string>(boost::any_cast<string>(m["excelParseResult"]));
    }
    if (m.find("imageHeight") != m.end() && !m["imageHeight"].empty()) {
      imageHeight = make_shared<long>(boost::any_cast<long>(m["imageHeight"]));
    }
    if (m.find("imageUrl") != m.end() && !m["imageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["imageUrl"]));
    }
    if (m.find("imageWidth") != m.end() && !m["imageWidth"].empty()) {
      imageWidth = make_shared<long>(boost::any_cast<long>(m["imageWidth"]));
    }
    if (m.find("pageIdCurDoc") != m.end() && !m["pageIdCurDoc"].empty()) {
      pageIdCurDoc = make_shared<long>(boost::any_cast<long>(m["pageIdCurDoc"]));
    }
    if (m.find("pdfParseResult") != m.end() && !m["pdfParseResult"].empty()) {
      pdfParseResult = make_shared<string>(boost::any_cast<string>(m["pdfParseResult"]));
    }
    if (m.find("wordParseResult") != m.end() && !m["wordParseResult"].empty()) {
      wordParseResult = make_shared<string>(boost::any_cast<string>(m["wordParseResult"]));
    }
  }


  virtual ~ChatRefDocPageInfo() = default;
};
class ChatRefDocInfo : public Darabonba::Model {
public:
  shared_ptr<vector<ChatRefDocPageInfo>> pageListInfo{};
  shared_ptr<long> pages{};

  ChatRefDocInfo() {}

  explicit ChatRefDocInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageListInfo) {
      vector<boost::any> temp1;
      for(auto item1:*pageListInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["pageListInfo"] = boost::any(temp1);
    }
    if (pages) {
      res["pages"] = boost::any(*pages);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageListInfo") != m.end() && !m["pageListInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["pageListInfo"].type()) {
        vector<ChatRefDocPageInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["pageListInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChatRefDocPageInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageListInfo = make_shared<vector<ChatRefDocPageInfo>>(expect1);
      }
    }
    if (m.find("pages") != m.end() && !m["pages"].empty()) {
      pages = make_shared<long>(boost::any_cast<long>(m["pages"]));
    }
  }


  virtual ~ChatRefDocInfo() = default;
};
class ChatRefDocItem : public Darabonba::Model {
public:
  shared_ptr<ChatRefDocInfo> docInfo{};
  shared_ptr<string> docName{};
  shared_ptr<string> docUrl{};
  shared_ptr<string> originDocName{};
  shared_ptr<string> originDocUrl{};
  shared_ptr<vector<ChatDocumentPageNum>> pageNum{};
  shared_ptr<string> sourceType{};

  ChatRefDocItem() {}

  explicit ChatRefDocItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docInfo) {
      res["docInfo"] = docInfo ? boost::any(docInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (docName) {
      res["docName"] = boost::any(*docName);
    }
    if (docUrl) {
      res["docUrl"] = boost::any(*docUrl);
    }
    if (originDocName) {
      res["originDocName"] = boost::any(*originDocName);
    }
    if (originDocUrl) {
      res["originDocUrl"] = boost::any(*originDocUrl);
    }
    if (pageNum) {
      vector<boost::any> temp1;
      for(auto item1:*pageNum){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["pageNum"] = boost::any(temp1);
    }
    if (sourceType) {
      res["sourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("docInfo") != m.end() && !m["docInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["docInfo"].type()) {
        ChatRefDocInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["docInfo"]));
        docInfo = make_shared<ChatRefDocInfo>(model1);
      }
    }
    if (m.find("docName") != m.end() && !m["docName"].empty()) {
      docName = make_shared<string>(boost::any_cast<string>(m["docName"]));
    }
    if (m.find("docUrl") != m.end() && !m["docUrl"].empty()) {
      docUrl = make_shared<string>(boost::any_cast<string>(m["docUrl"]));
    }
    if (m.find("originDocName") != m.end() && !m["originDocName"].empty()) {
      originDocName = make_shared<string>(boost::any_cast<string>(m["originDocName"]));
    }
    if (m.find("originDocUrl") != m.end() && !m["originDocUrl"].empty()) {
      originDocUrl = make_shared<string>(boost::any_cast<string>(m["originDocUrl"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      if (typeid(vector<boost::any>) == m["pageNum"].type()) {
        vector<ChatDocumentPageNum> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["pageNum"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChatDocumentPageNum model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageNum = make_shared<vector<ChatDocumentPageNum>>(expect1);
      }
    }
    if (m.find("sourceType") != m.end() && !m["sourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["sourceType"]));
    }
  }


  virtual ~ChatRefDocItem() = default;
};
class ChatItem : public Darabonba::Model {
public:
  shared_ptr<string> answer{};
  shared_ptr<long> createTime{};
  shared_ptr<string> folderId{};
  shared_ptr<string> folderName{};
  shared_ptr<string> question{};
  shared_ptr<vector<ChatRefDocItem>> refDocList{};

  ChatItem() {}

  explicit ChatItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answer) {
      res["answer"] = boost::any(*answer);
    }
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (folderId) {
      res["folderId"] = boost::any(*folderId);
    }
    if (folderName) {
      res["folderName"] = boost::any(*folderName);
    }
    if (question) {
      res["question"] = boost::any(*question);
    }
    if (refDocList) {
      vector<boost::any> temp1;
      for(auto item1:*refDocList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["refDocList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("answer") != m.end() && !m["answer"].empty()) {
      answer = make_shared<string>(boost::any_cast<string>(m["answer"]));
    }
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("folderId") != m.end() && !m["folderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["folderId"]));
    }
    if (m.find("folderName") != m.end() && !m["folderName"].empty()) {
      folderName = make_shared<string>(boost::any_cast<string>(m["folderName"]));
    }
    if (m.find("question") != m.end() && !m["question"].empty()) {
      question = make_shared<string>(boost::any_cast<string>(m["question"]));
    }
    if (m.find("refDocList") != m.end() && !m["refDocList"].empty()) {
      if (typeid(vector<boost::any>) == m["refDocList"].type()) {
        vector<ChatRefDocItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["refDocList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChatRefDocItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        refDocList = make_shared<vector<ChatRefDocItem>>(expect1);
      }
    }
  }


  virtual ~ChatItem() = default;
};
class ChatFolderItem : public Darabonba::Model {
public:
  shared_ptr<string> folderId{};
  shared_ptr<string> folderName{};
  shared_ptr<vector<ChatItem>> subFolders{};

  ChatFolderItem() {}

  explicit ChatFolderItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folderId) {
      res["folderId"] = boost::any(*folderId);
    }
    if (folderName) {
      res["folderName"] = boost::any(*folderName);
    }
    if (subFolders) {
      vector<boost::any> temp1;
      for(auto item1:*subFolders){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subFolders"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("folderId") != m.end() && !m["folderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["folderId"]));
    }
    if (m.find("folderName") != m.end() && !m["folderName"].empty()) {
      folderName = make_shared<string>(boost::any_cast<string>(m["folderName"]));
    }
    if (m.find("subFolders") != m.end() && !m["subFolders"].empty()) {
      if (typeid(vector<boost::any>) == m["subFolders"].type()) {
        vector<ChatItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subFolders"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChatItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subFolders = make_shared<vector<ChatItem>>(expect1);
      }
    }
  }


  virtual ~ChatFolderItem() = default;
};
class ChatRefDocPageNum : public Darabonba::Model {
public:
  shared_ptr<long> num{};
  shared_ptr<vector<vector<ChatRefDocPostion>>> pos{};

  ChatRefDocPageNum() {}

  explicit ChatRefDocPageNum(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (num) {
      res["num"] = boost::any(*num);
    }
    if (pos) {
      vector<boost::any> temp1;
      for(auto item1:*pos){
        vector<boost::any> temp2;
        for(auto item2:item1){
          temp2.push_back(boost::any(item2.toMap()));
        }
        temp1 = boost::any(temp2);
      }
      res["pos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("num") != m.end() && !m["num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["num"]));
    }
    if (m.find("pos") != m.end() && !m["pos"].empty()) {
      if (typeid(vector<boost::any>) == m["pos"].type()) {
        vector<vector<ChatRefDocPostion>> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["pos"])){
          if (typeid(vector<boost::any>) == item1.type()) {
            vector<ChatRefDocPostion> expect2;
            for(auto item2:boost::any_cast<vector<boost::any>>(item1)){
              if (typeid(map<string, boost::any>) == item2.type()) {
                ChatRefDocPostion model3;
                model3.fromMap(boost::any_cast<map<string, boost::any>>(item2));
                expect2.push_back(model3);
              }
            }
            expect1.push_back(expect2);
          }
        }
        pos = make_shared<vector<vector<ChatRefDocPostion>>>(expect1);
      }
    }
  }


  virtual ~ChatRefDocPageNum() = default;
};
class ConstituteItemEnvGasEmissions : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmissionData{};
  shared_ptr<double> gasEmissionData{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  ConstituteItemEnvGasEmissions() {}

  explicit ConstituteItemEnvGasEmissions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmissionData) {
      res["carbonEmissionData"] = boost::any(*carbonEmissionData);
    }
    if (gasEmissionData) {
      res["gasEmissionData"] = boost::any(*gasEmissionData);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmissionData") != m.end() && !m["carbonEmissionData"].empty()) {
      carbonEmissionData = make_shared<double>(boost::any_cast<double>(m["carbonEmissionData"]));
    }
    if (m.find("gasEmissionData") != m.end() && !m["gasEmissionData"].empty()) {
      gasEmissionData = make_shared<double>(boost::any_cast<double>(m["gasEmissionData"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ConstituteItemEnvGasEmissions() = default;
};
class ConstituteItem : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmissionData{};
  shared_ptr<string> dataUnit{};
  shared_ptr<string> emissionSource{};
  shared_ptr<string> emissionSourceKey{};
  shared_ptr<string> enterpriseName{};
  shared_ptr<vector<ConstituteItemEnvGasEmissions>> envGasEmissions{};
  shared_ptr<string> name{};
  shared_ptr<string> nameKey{};
  shared_ptr<double> ratio{};
  shared_ptr<double> rawData{};
  shared_ptr<vector<ConstituteItem>> subConstituteItems{};

  ConstituteItem() {}

  explicit ConstituteItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmissionData) {
      res["carbonEmissionData"] = boost::any(*carbonEmissionData);
    }
    if (dataUnit) {
      res["dataUnit"] = boost::any(*dataUnit);
    }
    if (emissionSource) {
      res["emissionSource"] = boost::any(*emissionSource);
    }
    if (emissionSourceKey) {
      res["emissionSourceKey"] = boost::any(*emissionSourceKey);
    }
    if (enterpriseName) {
      res["enterpriseName"] = boost::any(*enterpriseName);
    }
    if (envGasEmissions) {
      vector<boost::any> temp1;
      for(auto item1:*envGasEmissions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["envGasEmissions"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameKey) {
      res["nameKey"] = boost::any(*nameKey);
    }
    if (ratio) {
      res["ratio"] = boost::any(*ratio);
    }
    if (rawData) {
      res["rawData"] = boost::any(*rawData);
    }
    if (subConstituteItems) {
      vector<boost::any> temp1;
      for(auto item1:*subConstituteItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subConstituteItems"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmissionData") != m.end() && !m["carbonEmissionData"].empty()) {
      carbonEmissionData = make_shared<double>(boost::any_cast<double>(m["carbonEmissionData"]));
    }
    if (m.find("dataUnit") != m.end() && !m["dataUnit"].empty()) {
      dataUnit = make_shared<string>(boost::any_cast<string>(m["dataUnit"]));
    }
    if (m.find("emissionSource") != m.end() && !m["emissionSource"].empty()) {
      emissionSource = make_shared<string>(boost::any_cast<string>(m["emissionSource"]));
    }
    if (m.find("emissionSourceKey") != m.end() && !m["emissionSourceKey"].empty()) {
      emissionSourceKey = make_shared<string>(boost::any_cast<string>(m["emissionSourceKey"]));
    }
    if (m.find("enterpriseName") != m.end() && !m["enterpriseName"].empty()) {
      enterpriseName = make_shared<string>(boost::any_cast<string>(m["enterpriseName"]));
    }
    if (m.find("envGasEmissions") != m.end() && !m["envGasEmissions"].empty()) {
      if (typeid(vector<boost::any>) == m["envGasEmissions"].type()) {
        vector<ConstituteItemEnvGasEmissions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["envGasEmissions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ConstituteItemEnvGasEmissions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        envGasEmissions = make_shared<vector<ConstituteItemEnvGasEmissions>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameKey") != m.end() && !m["nameKey"].empty()) {
      nameKey = make_shared<string>(boost::any_cast<string>(m["nameKey"]));
    }
    if (m.find("ratio") != m.end() && !m["ratio"].empty()) {
      ratio = make_shared<double>(boost::any_cast<double>(m["ratio"]));
    }
    if (m.find("rawData") != m.end() && !m["rawData"].empty()) {
      rawData = make_shared<double>(boost::any_cast<double>(m["rawData"]));
    }
    if (m.find("subConstituteItems") != m.end() && !m["subConstituteItems"].empty()) {
      if (typeid(vector<boost::any>) == m["subConstituteItems"].type()) {
        vector<ConstituteItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subConstituteItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ConstituteItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subConstituteItems = make_shared<vector<ConstituteItem>>(expect1);
      }
    }
  }


  virtual ~ConstituteItem() = default;
};
class ContentItemExtInfoPos : public Darabonba::Model {
public:
  shared_ptr<long> x{};
  shared_ptr<long> y{};

  ContentItemExtInfoPos() {}

  explicit ContentItemExtInfoPos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (x) {
      res["x"] = boost::any(*x);
    }
    if (y) {
      res["y"] = boost::any(*y);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("x") != m.end() && !m["x"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["x"]));
    }
    if (m.find("y") != m.end() && !m["y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["y"]));
    }
  }


  virtual ~ContentItemExtInfoPos() = default;
};
class ContentItemExtInfo : public Darabonba::Model {
public:
  shared_ptr<string> alignment{};
  shared_ptr<long> index{};
  shared_ptr<long> level{};
  shared_ptr<vector<long>> pageNum{};
  shared_ptr<vector<ContentItemExtInfoPos>> pos{};
  shared_ptr<string> subType{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};
  shared_ptr<string> uniqueId{};

  ContentItemExtInfo() {}

  explicit ContentItemExtInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alignment) {
      res["alignment"] = boost::any(*alignment);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (pageNum) {
      res["pageNum"] = boost::any(*pageNum);
    }
    if (pos) {
      vector<boost::any> temp1;
      for(auto item1:*pos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["pos"] = boost::any(temp1);
    }
    if (subType) {
      res["subType"] = boost::any(*subType);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (uniqueId) {
      res["uniqueId"] = boost::any(*uniqueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("alignment") != m.end() && !m["alignment"].empty()) {
      alignment = make_shared<string>(boost::any_cast<string>(m["alignment"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["level"]));
    }
    if (m.find("pageNum") != m.end() && !m["pageNum"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["pageNum"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["pageNum"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      pageNum = make_shared<vector<long>>(toVec1);
    }
    if (m.find("pos") != m.end() && !m["pos"].empty()) {
      if (typeid(vector<boost::any>) == m["pos"].type()) {
        vector<ContentItemExtInfoPos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["pos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ContentItemExtInfoPos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pos = make_shared<vector<ContentItemExtInfoPos>>(expect1);
      }
    }
    if (m.find("subType") != m.end() && !m["subType"].empty()) {
      subType = make_shared<string>(boost::any_cast<string>(m["subType"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("uniqueId") != m.end() && !m["uniqueId"].empty()) {
      uniqueId = make_shared<string>(boost::any_cast<string>(m["uniqueId"]));
    }
  }


  virtual ~ContentItemExtInfo() = default;
};
class ContentItem : public Darabonba::Model {
public:
  shared_ptr<vector<ContentItemExtInfo>> extInfo{};
  shared_ptr<double> score{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};

  ContentItem() {}

  explicit ContentItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extInfo) {
      vector<boost::any> temp1;
      for(auto item1:*extInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["extInfo"] = boost::any(temp1);
    }
    if (score) {
      res["score"] = boost::any(*score);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("extInfo") != m.end() && !m["extInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["extInfo"].type()) {
        vector<ContentItemExtInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["extInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ContentItemExtInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        extInfo = make_shared<vector<ContentItemExtInfo>>(expect1);
      }
    }
    if (m.find("score") != m.end() && !m["score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["score"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ContentItem() = default;
};
class EpdInventoryConstituteItem : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmission{};
  shared_ptr<string> factor{};
  shared_ptr<string> factorDataset{};
  shared_ptr<string> factorId{};
  shared_ptr<long> factorType{};
  shared_ptr<string> factorUnit{};
  shared_ptr<long> inventoryId{};
  shared_ptr<string> inventoryUnit{};
  shared_ptr<double> inventoryValue{};
  shared_ptr<double> inventoryValuePerProduct{};
  shared_ptr<string> inventoryValuePerProductUnit{};
  shared_ptr<vector<EpdInventoryConstituteItem>> items{};
  shared_ptr<string> name{};
  shared_ptr<long> num{};
  shared_ptr<double> percent{};
  shared_ptr<double> quantity{};
  shared_ptr<string> resourceType{};
  shared_ptr<long> state{};
  shared_ptr<string> unit{};

  EpdInventoryConstituteItem() {}

  explicit EpdInventoryConstituteItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmission) {
      res["carbonEmission"] = boost::any(*carbonEmission);
    }
    if (factor) {
      res["factor"] = boost::any(*factor);
    }
    if (factorDataset) {
      res["factorDataset"] = boost::any(*factorDataset);
    }
    if (factorId) {
      res["factorId"] = boost::any(*factorId);
    }
    if (factorType) {
      res["factorType"] = boost::any(*factorType);
    }
    if (factorUnit) {
      res["factorUnit"] = boost::any(*factorUnit);
    }
    if (inventoryId) {
      res["inventoryId"] = boost::any(*inventoryId);
    }
    if (inventoryUnit) {
      res["inventoryUnit"] = boost::any(*inventoryUnit);
    }
    if (inventoryValue) {
      res["inventoryValue"] = boost::any(*inventoryValue);
    }
    if (inventoryValuePerProduct) {
      res["inventoryValuePerProduct"] = boost::any(*inventoryValuePerProduct);
    }
    if (inventoryValuePerProductUnit) {
      res["inventoryValuePerProductUnit"] = boost::any(*inventoryValuePerProductUnit);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (num) {
      res["num"] = boost::any(*num);
    }
    if (percent) {
      res["percent"] = boost::any(*percent);
    }
    if (quantity) {
      res["quantity"] = boost::any(*quantity);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    if (unit) {
      res["unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmission") != m.end() && !m["carbonEmission"].empty()) {
      carbonEmission = make_shared<double>(boost::any_cast<double>(m["carbonEmission"]));
    }
    if (m.find("factor") != m.end() && !m["factor"].empty()) {
      factor = make_shared<string>(boost::any_cast<string>(m["factor"]));
    }
    if (m.find("factorDataset") != m.end() && !m["factorDataset"].empty()) {
      factorDataset = make_shared<string>(boost::any_cast<string>(m["factorDataset"]));
    }
    if (m.find("factorId") != m.end() && !m["factorId"].empty()) {
      factorId = make_shared<string>(boost::any_cast<string>(m["factorId"]));
    }
    if (m.find("factorType") != m.end() && !m["factorType"].empty()) {
      factorType = make_shared<long>(boost::any_cast<long>(m["factorType"]));
    }
    if (m.find("factorUnit") != m.end() && !m["factorUnit"].empty()) {
      factorUnit = make_shared<string>(boost::any_cast<string>(m["factorUnit"]));
    }
    if (m.find("inventoryId") != m.end() && !m["inventoryId"].empty()) {
      inventoryId = make_shared<long>(boost::any_cast<long>(m["inventoryId"]));
    }
    if (m.find("inventoryUnit") != m.end() && !m["inventoryUnit"].empty()) {
      inventoryUnit = make_shared<string>(boost::any_cast<string>(m["inventoryUnit"]));
    }
    if (m.find("inventoryValue") != m.end() && !m["inventoryValue"].empty()) {
      inventoryValue = make_shared<double>(boost::any_cast<double>(m["inventoryValue"]));
    }
    if (m.find("inventoryValuePerProduct") != m.end() && !m["inventoryValuePerProduct"].empty()) {
      inventoryValuePerProduct = make_shared<double>(boost::any_cast<double>(m["inventoryValuePerProduct"]));
    }
    if (m.find("inventoryValuePerProductUnit") != m.end() && !m["inventoryValuePerProductUnit"].empty()) {
      inventoryValuePerProductUnit = make_shared<string>(boost::any_cast<string>(m["inventoryValuePerProductUnit"]));
    }
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<EpdInventoryConstituteItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EpdInventoryConstituteItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<EpdInventoryConstituteItem>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("num") != m.end() && !m["num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["num"]));
    }
    if (m.find("percent") != m.end() && !m["percent"].empty()) {
      percent = make_shared<double>(boost::any_cast<double>(m["percent"]));
    }
    if (m.find("quantity") != m.end() && !m["quantity"].empty()) {
      quantity = make_shared<double>(boost::any_cast<double>(m["quantity"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<long>(boost::any_cast<long>(m["state"]));
    }
    if (m.find("unit") != m.end() && !m["unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["unit"]));
    }
  }


  virtual ~EpdInventoryConstituteItem() = default;
};
class GwpResourceConstitute : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmission{};
  shared_ptr<string> name{};
  shared_ptr<string> percent{};
  shared_ptr<long> resourceType{};
  shared_ptr<string> unit{};

  GwpResourceConstitute() {}

  explicit GwpResourceConstitute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmission) {
      res["carbonEmission"] = boost::any(*carbonEmission);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (percent) {
      res["percent"] = boost::any(*percent);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (unit) {
      res["unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmission") != m.end() && !m["carbonEmission"].empty()) {
      carbonEmission = make_shared<double>(boost::any_cast<double>(m["carbonEmission"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("percent") != m.end() && !m["percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["percent"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<long>(boost::any_cast<long>(m["resourceType"]));
    }
    if (m.find("unit") != m.end() && !m["unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["unit"]));
    }
  }


  virtual ~GwpResourceConstitute() = default;
};
class GwpInventoryConstitute : public Darabonba::Model {
public:
  shared_ptr<vector<GwpResourceConstitute>> byResourceType{};
  shared_ptr<double> carbonEmission{};
  shared_ptr<vector<GwpInventoryConstitute>> items{};
  shared_ptr<string> name{};
  shared_ptr<double> percent{};
  shared_ptr<long> resourceType{};
  shared_ptr<string> unit{};

  GwpInventoryConstitute() {}

  explicit GwpInventoryConstitute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (byResourceType) {
      vector<boost::any> temp1;
      for(auto item1:*byResourceType){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["byResourceType"] = boost::any(temp1);
    }
    if (carbonEmission) {
      res["carbonEmission"] = boost::any(*carbonEmission);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (percent) {
      res["percent"] = boost::any(*percent);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (unit) {
      res["unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("byResourceType") != m.end() && !m["byResourceType"].empty()) {
      if (typeid(vector<boost::any>) == m["byResourceType"].type()) {
        vector<GwpResourceConstitute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["byResourceType"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GwpResourceConstitute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        byResourceType = make_shared<vector<GwpResourceConstitute>>(expect1);
      }
    }
    if (m.find("carbonEmission") != m.end() && !m["carbonEmission"].empty()) {
      carbonEmission = make_shared<double>(boost::any_cast<double>(m["carbonEmission"]));
    }
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<GwpInventoryConstitute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GwpInventoryConstitute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<GwpInventoryConstitute>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("percent") != m.end() && !m["percent"].empty()) {
      percent = make_shared<double>(boost::any_cast<double>(m["percent"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<long>(boost::any_cast<long>(m["resourceType"]));
    }
    if (m.find("unit") != m.end() && !m["unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["unit"]));
    }
  }


  virtual ~GwpInventoryConstitute() = default;
};
class OrgEmissionModuleEmissionList : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmissionData{};
  shared_ptr<string> name{};
  shared_ptr<string> nameKey{};
  shared_ptr<double> ratio{};

  OrgEmissionModuleEmissionList() {}

  explicit OrgEmissionModuleEmissionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmissionData) {
      res["carbonEmissionData"] = boost::any(*carbonEmissionData);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameKey) {
      res["nameKey"] = boost::any(*nameKey);
    }
    if (ratio) {
      res["ratio"] = boost::any(*ratio);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmissionData") != m.end() && !m["carbonEmissionData"].empty()) {
      carbonEmissionData = make_shared<double>(boost::any_cast<double>(m["carbonEmissionData"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameKey") != m.end() && !m["nameKey"].empty()) {
      nameKey = make_shared<string>(boost::any_cast<string>(m["nameKey"]));
    }
    if (m.find("ratio") != m.end() && !m["ratio"].empty()) {
      ratio = make_shared<double>(boost::any_cast<double>(m["ratio"]));
    }
  }


  virtual ~OrgEmissionModuleEmissionList() = default;
};
class OrgEmission : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmissionData{};
  shared_ptr<vector<OrgEmissionModuleEmissionList>> moduleEmissionList{};
  shared_ptr<string> name{};
  shared_ptr<string> nameKey{};
  shared_ptr<double> ratio{};
  shared_ptr<vector<OrgEmission>> subEmissionItems{};
  shared_ptr<double> weightingCarbonEmissionData{};
  shared_ptr<double> weightingProportion{};
  shared_ptr<double> weightingRatio{};

  OrgEmission() {}

  explicit OrgEmission(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmissionData) {
      res["carbonEmissionData"] = boost::any(*carbonEmissionData);
    }
    if (moduleEmissionList) {
      vector<boost::any> temp1;
      for(auto item1:*moduleEmissionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["moduleEmissionList"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameKey) {
      res["nameKey"] = boost::any(*nameKey);
    }
    if (ratio) {
      res["ratio"] = boost::any(*ratio);
    }
    if (subEmissionItems) {
      vector<boost::any> temp1;
      for(auto item1:*subEmissionItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subEmissionItems"] = boost::any(temp1);
    }
    if (weightingCarbonEmissionData) {
      res["weightingCarbonEmissionData"] = boost::any(*weightingCarbonEmissionData);
    }
    if (weightingProportion) {
      res["weightingProportion"] = boost::any(*weightingProportion);
    }
    if (weightingRatio) {
      res["weightingRatio"] = boost::any(*weightingRatio);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmissionData") != m.end() && !m["carbonEmissionData"].empty()) {
      carbonEmissionData = make_shared<double>(boost::any_cast<double>(m["carbonEmissionData"]));
    }
    if (m.find("moduleEmissionList") != m.end() && !m["moduleEmissionList"].empty()) {
      if (typeid(vector<boost::any>) == m["moduleEmissionList"].type()) {
        vector<OrgEmissionModuleEmissionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["moduleEmissionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OrgEmissionModuleEmissionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        moduleEmissionList = make_shared<vector<OrgEmissionModuleEmissionList>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameKey") != m.end() && !m["nameKey"].empty()) {
      nameKey = make_shared<string>(boost::any_cast<string>(m["nameKey"]));
    }
    if (m.find("ratio") != m.end() && !m["ratio"].empty()) {
      ratio = make_shared<double>(boost::any_cast<double>(m["ratio"]));
    }
    if (m.find("subEmissionItems") != m.end() && !m["subEmissionItems"].empty()) {
      if (typeid(vector<boost::any>) == m["subEmissionItems"].type()) {
        vector<OrgEmission> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subEmissionItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OrgEmission model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subEmissionItems = make_shared<vector<OrgEmission>>(expect1);
      }
    }
    if (m.find("weightingCarbonEmissionData") != m.end() && !m["weightingCarbonEmissionData"].empty()) {
      weightingCarbonEmissionData = make_shared<double>(boost::any_cast<double>(m["weightingCarbonEmissionData"]));
    }
    if (m.find("weightingProportion") != m.end() && !m["weightingProportion"].empty()) {
      weightingProportion = make_shared<double>(boost::any_cast<double>(m["weightingProportion"]));
    }
    if (m.find("weightingRatio") != m.end() && !m["weightingRatio"].empty()) {
      weightingRatio = make_shared<double>(boost::any_cast<double>(m["weightingRatio"]));
    }
  }


  virtual ~OrgEmission() = default;
};
class AnalyzeVlRealtimeRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileUrl{};
  shared_ptr<string> language{};
  shared_ptr<string> templateId{};

  AnalyzeVlRealtimeRequest() {}

  explicit AnalyzeVlRealtimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileUrl) {
      res["fileUrl"] = boost::any(*fileUrl);
    }
    if (language) {
      res["language"] = boost::any(*language);
    }
    if (templateId) {
      res["templateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fileUrl") != m.end() && !m["fileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["fileUrl"]));
    }
    if (m.find("language") != m.end() && !m["language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["language"]));
    }
    if (m.find("templateId") != m.end() && !m["templateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["templateId"]));
    }
  }


  virtual ~AnalyzeVlRealtimeRequest() = default;
};
class AnalyzeVlRealtimeAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> fileUrlObject{};
  shared_ptr<string> language{};
  shared_ptr<string> templateId{};

  AnalyzeVlRealtimeAdvanceRequest() {}

  explicit AnalyzeVlRealtimeAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileUrlObject) {
      res["fileUrl"] = boost::any(*fileUrlObject);
    }
    if (language) {
      res["language"] = boost::any(*language);
    }
    if (templateId) {
      res["templateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fileUrl") != m.end() && !m["fileUrl"].empty()) {
      fileUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["fileUrl"]));
    }
    if (m.find("language") != m.end() && !m["language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["language"]));
    }
    if (m.find("templateId") != m.end() && !m["templateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["templateId"]));
    }
  }


  virtual ~AnalyzeVlRealtimeAdvanceRequest() = default;
};
class AnalyzeVlRealtimeResponseBodyDataKvListInfoContextConfidence : public Darabonba::Model {
public:
  shared_ptr<double> keyConfidence{};
  shared_ptr<double> valueConfidence{};

  AnalyzeVlRealtimeResponseBodyDataKvListInfoContextConfidence() {}

  explicit AnalyzeVlRealtimeResponseBodyDataKvListInfoContextConfidence(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyConfidence) {
      res["keyConfidence"] = boost::any(*keyConfidence);
    }
    if (valueConfidence) {
      res["valueConfidence"] = boost::any(*valueConfidence);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyConfidence") != m.end() && !m["keyConfidence"].empty()) {
      keyConfidence = make_shared<double>(boost::any_cast<double>(m["keyConfidence"]));
    }
    if (m.find("valueConfidence") != m.end() && !m["valueConfidence"].empty()) {
      valueConfidence = make_shared<double>(boost::any_cast<double>(m["valueConfidence"]));
    }
  }


  virtual ~AnalyzeVlRealtimeResponseBodyDataKvListInfoContextConfidence() = default;
};
class AnalyzeVlRealtimeResponseBodyDataKvListInfoContext : public Darabonba::Model {
public:
  shared_ptr<AnalyzeVlRealtimeResponseBodyDataKvListInfoContextConfidence> confidence{};
  shared_ptr<vector<ContentItem>> key{};
  shared_ptr<vector<ContentItem>> value{};

  AnalyzeVlRealtimeResponseBodyDataKvListInfoContext() {}

  explicit AnalyzeVlRealtimeResponseBodyDataKvListInfoContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidence) {
      res["confidence"] = confidence ? boost::any(confidence->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (key) {
      vector<boost::any> temp1;
      for(auto item1:*key){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["key"] = boost::any(temp1);
    }
    if (value) {
      vector<boost::any> temp1;
      for(auto item1:*value){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["value"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("confidence") != m.end() && !m["confidence"].empty()) {
      if (typeid(map<string, boost::any>) == m["confidence"].type()) {
        AnalyzeVlRealtimeResponseBodyDataKvListInfoContextConfidence model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["confidence"]));
        confidence = make_shared<AnalyzeVlRealtimeResponseBodyDataKvListInfoContextConfidence>(model1);
      }
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      if (typeid(vector<boost::any>) == m["key"].type()) {
        vector<ContentItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["key"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ContentItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        key = make_shared<vector<ContentItem>>(expect1);
      }
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      if (typeid(vector<boost::any>) == m["value"].type()) {
        vector<ContentItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["value"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ContentItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        value = make_shared<vector<ContentItem>>(expect1);
      }
    }
  }


  virtual ~AnalyzeVlRealtimeResponseBodyDataKvListInfoContext() = default;
};
class AnalyzeVlRealtimeResponseBodyDataKvListInfo : public Darabonba::Model {
public:
  shared_ptr<AnalyzeVlRealtimeResponseBodyDataKvListInfoContext> context{};
  shared_ptr<string> keyName{};
  shared_ptr<string> keyValue{};

  AnalyzeVlRealtimeResponseBodyDataKvListInfo() {}

  explicit AnalyzeVlRealtimeResponseBodyDataKvListInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (context) {
      res["context"] = context ? boost::any(context->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (keyName) {
      res["keyName"] = boost::any(*keyName);
    }
    if (keyValue) {
      res["keyValue"] = boost::any(*keyValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("context") != m.end() && !m["context"].empty()) {
      if (typeid(map<string, boost::any>) == m["context"].type()) {
        AnalyzeVlRealtimeResponseBodyDataKvListInfoContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["context"]));
        context = make_shared<AnalyzeVlRealtimeResponseBodyDataKvListInfoContext>(model1);
      }
    }
    if (m.find("keyName") != m.end() && !m["keyName"].empty()) {
      keyName = make_shared<string>(boost::any_cast<string>(m["keyName"]));
    }
    if (m.find("keyValue") != m.end() && !m["keyValue"].empty()) {
      keyValue = make_shared<string>(boost::any_cast<string>(m["keyValue"]));
    }
  }


  virtual ~AnalyzeVlRealtimeResponseBodyDataKvListInfo() = default;
};
class AnalyzeVlRealtimeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<AnalyzeVlRealtimeResponseBodyDataKvListInfo>> kvListInfo{};

  AnalyzeVlRealtimeResponseBodyData() {}

  explicit AnalyzeVlRealtimeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (kvListInfo) {
      vector<boost::any> temp1;
      for(auto item1:*kvListInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["kvListInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("kvListInfo") != m.end() && !m["kvListInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["kvListInfo"].type()) {
        vector<AnalyzeVlRealtimeResponseBodyDataKvListInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["kvListInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AnalyzeVlRealtimeResponseBodyDataKvListInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        kvListInfo = make_shared<vector<AnalyzeVlRealtimeResponseBodyDataKvListInfo>>(expect1);
      }
    }
  }


  virtual ~AnalyzeVlRealtimeResponseBodyData() = default;
};
class AnalyzeVlRealtimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<AnalyzeVlRealtimeResponseBodyData> data{};
  shared_ptr<string> requestId{};

  AnalyzeVlRealtimeResponseBody() {}

  explicit AnalyzeVlRealtimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        AnalyzeVlRealtimeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<AnalyzeVlRealtimeResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~AnalyzeVlRealtimeResponseBody() = default;
};
class AnalyzeVlRealtimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AnalyzeVlRealtimeResponseBody> body{};

  AnalyzeVlRealtimeResponse() {}

  explicit AnalyzeVlRealtimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AnalyzeVlRealtimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AnalyzeVlRealtimeResponseBody>(model1);
      }
    }
  }


  virtual ~AnalyzeVlRealtimeResponse() = default;
};
class BatchSaveInstructionStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> factoryId{};
  shared_ptr<string> pKey{};
  shared_ptr<string> statusList{};

  BatchSaveInstructionStatusRequest() {}

  explicit BatchSaveInstructionStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (factoryId) {
      res["factoryId"] = boost::any(*factoryId);
    }
    if (pKey) {
      res["pKey"] = boost::any(*pKey);
    }
    if (statusList) {
      res["statusList"] = boost::any(*statusList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("factoryId") != m.end() && !m["factoryId"].empty()) {
      factoryId = make_shared<string>(boost::any_cast<string>(m["factoryId"]));
    }
    if (m.find("pKey") != m.end() && !m["pKey"].empty()) {
      pKey = make_shared<string>(boost::any_cast<string>(m["pKey"]));
    }
    if (m.find("statusList") != m.end() && !m["statusList"].empty()) {
      statusList = make_shared<string>(boost::any_cast<string>(m["statusList"]));
    }
  }


  virtual ~BatchSaveInstructionStatusRequest() = default;
};
class BatchSaveInstructionStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  BatchSaveInstructionStatusResponseBody() {}

  explicit BatchSaveInstructionStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~BatchSaveInstructionStatusResponseBody() = default;
};
class BatchSaveInstructionStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchSaveInstructionStatusResponseBody> body{};

  BatchSaveInstructionStatusResponse() {}

  explicit BatchSaveInstructionStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchSaveInstructionStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchSaveInstructionStatusResponseBody>(model1);
      }
    }
  }


  virtual ~BatchSaveInstructionStatusResponse() = default;
};
class BatchUpdateSystemRunningPlanRequest : public Darabonba::Model {
public:
  shared_ptr<long> controlType{};
  shared_ptr<long> dateType{};
  shared_ptr<string> earliestStartupTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> factoryId{};
  shared_ptr<string> latestShutdownTime{};
  shared_ptr<double> maxCarbonDioxide{};
  shared_ptr<double> maxTem{};
  shared_ptr<double> minTem{};
  shared_ptr<long> seasonMode{};
  shared_ptr<string> startTime{};
  shared_ptr<string> systemId{};
  shared_ptr<string> workingEndTime{};
  shared_ptr<string> workingStartTime{};

  BatchUpdateSystemRunningPlanRequest() {}

  explicit BatchUpdateSystemRunningPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlType) {
      res["controlType"] = boost::any(*controlType);
    }
    if (dateType) {
      res["dateType"] = boost::any(*dateType);
    }
    if (earliestStartupTime) {
      res["earliestStartupTime"] = boost::any(*earliestStartupTime);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (factoryId) {
      res["factoryId"] = boost::any(*factoryId);
    }
    if (latestShutdownTime) {
      res["latestShutdownTime"] = boost::any(*latestShutdownTime);
    }
    if (maxCarbonDioxide) {
      res["maxCarbonDioxide"] = boost::any(*maxCarbonDioxide);
    }
    if (maxTem) {
      res["maxTem"] = boost::any(*maxTem);
    }
    if (minTem) {
      res["minTem"] = boost::any(*minTem);
    }
    if (seasonMode) {
      res["seasonMode"] = boost::any(*seasonMode);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (systemId) {
      res["systemId"] = boost::any(*systemId);
    }
    if (workingEndTime) {
      res["workingEndTime"] = boost::any(*workingEndTime);
    }
    if (workingStartTime) {
      res["workingStartTime"] = boost::any(*workingStartTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("controlType") != m.end() && !m["controlType"].empty()) {
      controlType = make_shared<long>(boost::any_cast<long>(m["controlType"]));
    }
    if (m.find("dateType") != m.end() && !m["dateType"].empty()) {
      dateType = make_shared<long>(boost::any_cast<long>(m["dateType"]));
    }
    if (m.find("earliestStartupTime") != m.end() && !m["earliestStartupTime"].empty()) {
      earliestStartupTime = make_shared<string>(boost::any_cast<string>(m["earliestStartupTime"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("factoryId") != m.end() && !m["factoryId"].empty()) {
      factoryId = make_shared<string>(boost::any_cast<string>(m["factoryId"]));
    }
    if (m.find("latestShutdownTime") != m.end() && !m["latestShutdownTime"].empty()) {
      latestShutdownTime = make_shared<string>(boost::any_cast<string>(m["latestShutdownTime"]));
    }
    if (m.find("maxCarbonDioxide") != m.end() && !m["maxCarbonDioxide"].empty()) {
      maxCarbonDioxide = make_shared<double>(boost::any_cast<double>(m["maxCarbonDioxide"]));
    }
    if (m.find("maxTem") != m.end() && !m["maxTem"].empty()) {
      maxTem = make_shared<double>(boost::any_cast<double>(m["maxTem"]));
    }
    if (m.find("minTem") != m.end() && !m["minTem"].empty()) {
      minTem = make_shared<double>(boost::any_cast<double>(m["minTem"]));
    }
    if (m.find("seasonMode") != m.end() && !m["seasonMode"].empty()) {
      seasonMode = make_shared<long>(boost::any_cast<long>(m["seasonMode"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("systemId") != m.end() && !m["systemId"].empty()) {
      systemId = make_shared<string>(boost::any_cast<string>(m["systemId"]));
    }
    if (m.find("workingEndTime") != m.end() && !m["workingEndTime"].empty()) {
      workingEndTime = make_shared<string>(boost::any_cast<string>(m["workingEndTime"]));
    }
    if (m.find("workingStartTime") != m.end() && !m["workingStartTime"].empty()) {
      workingStartTime = make_shared<string>(boost::any_cast<string>(m["workingStartTime"]));
    }
  }


  virtual ~BatchUpdateSystemRunningPlanRequest() = default;
};
class BatchUpdateSystemRunningPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  BatchUpdateSystemRunningPlanResponseBody() {}

  explicit BatchUpdateSystemRunningPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~BatchUpdateSystemRunningPlanResponseBody() = default;
};
class BatchUpdateSystemRunningPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchUpdateSystemRunningPlanResponseBody> body{};

  BatchUpdateSystemRunningPlanResponse() {}

  explicit BatchUpdateSystemRunningPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchUpdateSystemRunningPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchUpdateSystemRunningPlanResponseBody>(model1);
      }
    }
  }


  virtual ~BatchUpdateSystemRunningPlanResponse() = default;
};
class ChatRequest : public Darabonba::Model {
public:
  shared_ptr<string> question{};
  shared_ptr<string> sessionId{};

  ChatRequest() {}

  explicit ChatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (question) {
      res["question"] = boost::any(*question);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("question") != m.end() && !m["question"].empty()) {
      question = make_shared<string>(boost::any_cast<string>(m["question"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
  }


  virtual ~ChatRequest() = default;
};
class ChatResponseBody : public Darabonba::Model {
public:
  shared_ptr<ChatItem> data{};
  shared_ptr<string> requestId{};

  ChatResponseBody() {}

  explicit ChatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ChatItem model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ChatItem>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ChatResponseBody() = default;
};
class ChatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChatResponseBody> body{};

  ChatResponse() {}

  explicit ChatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChatResponseBody>(model1);
      }
    }
  }


  virtual ~ChatResponse() = default;
};
class CreateChatSessionRequest : public Darabonba::Model {
public:
  shared_ptr<string> folderId{};
  shared_ptr<string> name{};
  shared_ptr<string> userId{};

  CreateChatSessionRequest() {}

  explicit CreateChatSessionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folderId) {
      res["folderId"] = boost::any(*folderId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("folderId") != m.end() && !m["folderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["folderId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~CreateChatSessionRequest() = default;
};
class CreateChatSessionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> sessionId{};

  CreateChatSessionResponseBodyData() {}

  explicit CreateChatSessionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
  }


  virtual ~CreateChatSessionResponseBodyData() = default;
};
class CreateChatSessionResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateChatSessionResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateChatSessionResponseBody() {}

  explicit CreateChatSessionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateChatSessionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateChatSessionResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~CreateChatSessionResponseBody() = default;
};
class CreateChatSessionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateChatSessionResponseBody> body{};

  CreateChatSessionResponse() {}

  explicit CreateChatSessionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateChatSessionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateChatSessionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateChatSessionResponse() = default;
};
class EditProhibitedDevicesRequestHvacDeviceConfigVOList : public Darabonba::Model {
public:
  shared_ptr<string> buildingId{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> deviceType{};
  shared_ptr<string> fenceId{};
  shared_ptr<string> floorId{};
  shared_ptr<long> isForbidden{};
  shared_ptr<long> isUnfavorableArea{};

  EditProhibitedDevicesRequestHvacDeviceConfigVOList() {}

  explicit EditProhibitedDevicesRequestHvacDeviceConfigVOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildingId) {
      res["buildingId"] = boost::any(*buildingId);
    }
    if (deviceId) {
      res["deviceId"] = boost::any(*deviceId);
    }
    if (deviceName) {
      res["deviceName"] = boost::any(*deviceName);
    }
    if (deviceType) {
      res["deviceType"] = boost::any(*deviceType);
    }
    if (fenceId) {
      res["fenceId"] = boost::any(*fenceId);
    }
    if (floorId) {
      res["floorId"] = boost::any(*floorId);
    }
    if (isForbidden) {
      res["isForbidden"] = boost::any(*isForbidden);
    }
    if (isUnfavorableArea) {
      res["isUnfavorableArea"] = boost::any(*isUnfavorableArea);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("buildingId") != m.end() && !m["buildingId"].empty()) {
      buildingId = make_shared<string>(boost::any_cast<string>(m["buildingId"]));
    }
    if (m.find("deviceId") != m.end() && !m["deviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["deviceId"]));
    }
    if (m.find("deviceName") != m.end() && !m["deviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["deviceName"]));
    }
    if (m.find("deviceType") != m.end() && !m["deviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["deviceType"]));
    }
    if (m.find("fenceId") != m.end() && !m["fenceId"].empty()) {
      fenceId = make_shared<string>(boost::any_cast<string>(m["fenceId"]));
    }
    if (m.find("floorId") != m.end() && !m["floorId"].empty()) {
      floorId = make_shared<string>(boost::any_cast<string>(m["floorId"]));
    }
    if (m.find("isForbidden") != m.end() && !m["isForbidden"].empty()) {
      isForbidden = make_shared<long>(boost::any_cast<long>(m["isForbidden"]));
    }
    if (m.find("isUnfavorableArea") != m.end() && !m["isUnfavorableArea"].empty()) {
      isUnfavorableArea = make_shared<long>(boost::any_cast<long>(m["isUnfavorableArea"]));
    }
  }


  virtual ~EditProhibitedDevicesRequestHvacDeviceConfigVOList() = default;
};
class EditProhibitedDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> factoryId{};
  shared_ptr<vector<EditProhibitedDevicesRequestHvacDeviceConfigVOList>> hvacDeviceConfigVOList{};
  shared_ptr<string> systemId{};

  EditProhibitedDevicesRequest() {}

  explicit EditProhibitedDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (factoryId) {
      res["factoryId"] = boost::any(*factoryId);
    }
    if (hvacDeviceConfigVOList) {
      vector<boost::any> temp1;
      for(auto item1:*hvacDeviceConfigVOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["hvacDeviceConfigVOList"] = boost::any(temp1);
    }
    if (systemId) {
      res["systemId"] = boost::any(*systemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("factoryId") != m.end() && !m["factoryId"].empty()) {
      factoryId = make_shared<string>(boost::any_cast<string>(m["factoryId"]));
    }
    if (m.find("hvacDeviceConfigVOList") != m.end() && !m["hvacDeviceConfigVOList"].empty()) {
      if (typeid(vector<boost::any>) == m["hvacDeviceConfigVOList"].type()) {
        vector<EditProhibitedDevicesRequestHvacDeviceConfigVOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["hvacDeviceConfigVOList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EditProhibitedDevicesRequestHvacDeviceConfigVOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hvacDeviceConfigVOList = make_shared<vector<EditProhibitedDevicesRequestHvacDeviceConfigVOList>>(expect1);
      }
    }
    if (m.find("systemId") != m.end() && !m["systemId"].empty()) {
      systemId = make_shared<string>(boost::any_cast<string>(m["systemId"]));
    }
  }


  virtual ~EditProhibitedDevicesRequest() = default;
};
class EditProhibitedDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  EditProhibitedDevicesResponseBody() {}

  explicit EditProhibitedDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~EditProhibitedDevicesResponseBody() = default;
};
class EditProhibitedDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EditProhibitedDevicesResponseBody> body{};

  EditProhibitedDevicesResponse() {}

  explicit EditProhibitedDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EditProhibitedDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EditProhibitedDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~EditProhibitedDevicesResponse() = default;
};
class EditUnfavorableAreaDevicesRequestHvacDeviceConfigVOList : public Darabonba::Model {
public:
  shared_ptr<string> buildingId{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> deviceType{};
  shared_ptr<string> fenceId{};
  shared_ptr<string> floorId{};
  shared_ptr<long> isForbidden{};
  shared_ptr<long> isUnfavorableArea{};

  EditUnfavorableAreaDevicesRequestHvacDeviceConfigVOList() {}

  explicit EditUnfavorableAreaDevicesRequestHvacDeviceConfigVOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buildingId) {
      res["buildingId"] = boost::any(*buildingId);
    }
    if (deviceId) {
      res["deviceId"] = boost::any(*deviceId);
    }
    if (deviceName) {
      res["deviceName"] = boost::any(*deviceName);
    }
    if (deviceType) {
      res["deviceType"] = boost::any(*deviceType);
    }
    if (fenceId) {
      res["fenceId"] = boost::any(*fenceId);
    }
    if (floorId) {
      res["floorId"] = boost::any(*floorId);
    }
    if (isForbidden) {
      res["isForbidden"] = boost::any(*isForbidden);
    }
    if (isUnfavorableArea) {
      res["isUnfavorableArea"] = boost::any(*isUnfavorableArea);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("buildingId") != m.end() && !m["buildingId"].empty()) {
      buildingId = make_shared<string>(boost::any_cast<string>(m["buildingId"]));
    }
    if (m.find("deviceId") != m.end() && !m["deviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["deviceId"]));
    }
    if (m.find("deviceName") != m.end() && !m["deviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["deviceName"]));
    }
    if (m.find("deviceType") != m.end() && !m["deviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["deviceType"]));
    }
    if (m.find("fenceId") != m.end() && !m["fenceId"].empty()) {
      fenceId = make_shared<string>(boost::any_cast<string>(m["fenceId"]));
    }
    if (m.find("floorId") != m.end() && !m["floorId"].empty()) {
      floorId = make_shared<string>(boost::any_cast<string>(m["floorId"]));
    }
    if (m.find("isForbidden") != m.end() && !m["isForbidden"].empty()) {
      isForbidden = make_shared<long>(boost::any_cast<long>(m["isForbidden"]));
    }
    if (m.find("isUnfavorableArea") != m.end() && !m["isUnfavorableArea"].empty()) {
      isUnfavorableArea = make_shared<long>(boost::any_cast<long>(m["isUnfavorableArea"]));
    }
  }


  virtual ~EditUnfavorableAreaDevicesRequestHvacDeviceConfigVOList() = default;
};
class EditUnfavorableAreaDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> factoryId{};
  shared_ptr<vector<EditUnfavorableAreaDevicesRequestHvacDeviceConfigVOList>> hvacDeviceConfigVOList{};
  shared_ptr<string> systemId{};

  EditUnfavorableAreaDevicesRequest() {}

  explicit EditUnfavorableAreaDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (factoryId) {
      res["factoryId"] = boost::any(*factoryId);
    }
    if (hvacDeviceConfigVOList) {
      vector<boost::any> temp1;
      for(auto item1:*hvacDeviceConfigVOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["hvacDeviceConfigVOList"] = boost::any(temp1);
    }
    if (systemId) {
      res["systemId"] = boost::any(*systemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("factoryId") != m.end() && !m["factoryId"].empty()) {
      factoryId = make_shared<string>(boost::any_cast<string>(m["factoryId"]));
    }
    if (m.find("hvacDeviceConfigVOList") != m.end() && !m["hvacDeviceConfigVOList"].empty()) {
      if (typeid(vector<boost::any>) == m["hvacDeviceConfigVOList"].type()) {
        vector<EditUnfavorableAreaDevicesRequestHvacDeviceConfigVOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["hvacDeviceConfigVOList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EditUnfavorableAreaDevicesRequestHvacDeviceConfigVOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        hvacDeviceConfigVOList = make_shared<vector<EditUnfavorableAreaDevicesRequestHvacDeviceConfigVOList>>(expect1);
      }
    }
    if (m.find("systemId") != m.end() && !m["systemId"].empty()) {
      systemId = make_shared<string>(boost::any_cast<string>(m["systemId"]));
    }
  }


  virtual ~EditUnfavorableAreaDevicesRequest() = default;
};
class EditUnfavorableAreaDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  EditUnfavorableAreaDevicesResponseBody() {}

  explicit EditUnfavorableAreaDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~EditUnfavorableAreaDevicesResponseBody() = default;
};
class EditUnfavorableAreaDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EditUnfavorableAreaDevicesResponseBody> body{};

  EditUnfavorableAreaDevicesResponse() {}

  explicit EditUnfavorableAreaDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EditUnfavorableAreaDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EditUnfavorableAreaDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~EditUnfavorableAreaDevicesResponse() = default;
};
class GenerateResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> productId{};
  shared_ptr<long> productType{};

  GenerateResultRequest() {}

  explicit GenerateResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (productType) {
      res["productType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["productId"]));
    }
    if (m.find("productType") != m.end() && !m["productType"].empty()) {
      productType = make_shared<long>(boost::any_cast<long>(m["productType"]));
    }
  }


  virtual ~GenerateResultRequest() = default;
};
class GenerateResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  GenerateResultResponseBody() {}

  explicit GenerateResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GenerateResultResponseBody() = default;
};
class GenerateResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateResultResponseBody> body{};

  GenerateResultResponse() {}

  explicit GenerateResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateResultResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateResultResponse() = default;
};
class GetAreaElecConstituteRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> year{};

  GetAreaElecConstituteRequest() {}

  explicit GetAreaElecConstituteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (year) {
      res["year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("year") != m.end() && !m["year"].empty()) {
      year = make_shared<long>(boost::any_cast<long>(m["year"]));
    }
  }


  virtual ~GetAreaElecConstituteRequest() = default;
};
class GetAreaElecConstituteResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<CarbonEmissionElecSummaryItem>> light{};
  shared_ptr<vector<CarbonEmissionElecSummaryItem>> nuclear{};
  shared_ptr<vector<CarbonEmissionElecSummaryItem>> renewing{};
  shared_ptr<vector<CarbonEmissionElecSummaryItem>> urban{};
  shared_ptr<vector<CarbonEmissionElecSummaryItem>> water{};
  shared_ptr<vector<CarbonEmissionElecSummaryItem>> wind{};
  shared_ptr<vector<CarbonEmissionElecSummaryItem>> zero{};

  GetAreaElecConstituteResponseBodyData() {}

  explicit GetAreaElecConstituteResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (light) {
      vector<boost::any> temp1;
      for(auto item1:*light){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["light"] = boost::any(temp1);
    }
    if (nuclear) {
      vector<boost::any> temp1;
      for(auto item1:*nuclear){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["nuclear"] = boost::any(temp1);
    }
    if (renewing) {
      vector<boost::any> temp1;
      for(auto item1:*renewing){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["renewing"] = boost::any(temp1);
    }
    if (urban) {
      vector<boost::any> temp1;
      for(auto item1:*urban){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["urban"] = boost::any(temp1);
    }
    if (water) {
      vector<boost::any> temp1;
      for(auto item1:*water){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["water"] = boost::any(temp1);
    }
    if (wind) {
      vector<boost::any> temp1;
      for(auto item1:*wind){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["wind"] = boost::any(temp1);
    }
    if (zero) {
      vector<boost::any> temp1;
      for(auto item1:*zero){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["zero"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("light") != m.end() && !m["light"].empty()) {
      if (typeid(vector<boost::any>) == m["light"].type()) {
        vector<CarbonEmissionElecSummaryItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["light"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CarbonEmissionElecSummaryItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        light = make_shared<vector<CarbonEmissionElecSummaryItem>>(expect1);
      }
    }
    if (m.find("nuclear") != m.end() && !m["nuclear"].empty()) {
      if (typeid(vector<boost::any>) == m["nuclear"].type()) {
        vector<CarbonEmissionElecSummaryItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["nuclear"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CarbonEmissionElecSummaryItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nuclear = make_shared<vector<CarbonEmissionElecSummaryItem>>(expect1);
      }
    }
    if (m.find("renewing") != m.end() && !m["renewing"].empty()) {
      if (typeid(vector<boost::any>) == m["renewing"].type()) {
        vector<CarbonEmissionElecSummaryItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["renewing"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CarbonEmissionElecSummaryItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        renewing = make_shared<vector<CarbonEmissionElecSummaryItem>>(expect1);
      }
    }
    if (m.find("urban") != m.end() && !m["urban"].empty()) {
      if (typeid(vector<boost::any>) == m["urban"].type()) {
        vector<CarbonEmissionElecSummaryItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["urban"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CarbonEmissionElecSummaryItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        urban = make_shared<vector<CarbonEmissionElecSummaryItem>>(expect1);
      }
    }
    if (m.find("water") != m.end() && !m["water"].empty()) {
      if (typeid(vector<boost::any>) == m["water"].type()) {
        vector<CarbonEmissionElecSummaryItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["water"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CarbonEmissionElecSummaryItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        water = make_shared<vector<CarbonEmissionElecSummaryItem>>(expect1);
      }
    }
    if (m.find("wind") != m.end() && !m["wind"].empty()) {
      if (typeid(vector<boost::any>) == m["wind"].type()) {
        vector<CarbonEmissionElecSummaryItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["wind"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CarbonEmissionElecSummaryItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        wind = make_shared<vector<CarbonEmissionElecSummaryItem>>(expect1);
      }
    }
    if (m.find("zero") != m.end() && !m["zero"].empty()) {
      if (typeid(vector<boost::any>) == m["zero"].type()) {
        vector<CarbonEmissionElecSummaryItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["zero"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CarbonEmissionElecSummaryItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zero = make_shared<vector<CarbonEmissionElecSummaryItem>>(expect1);
      }
    }
  }


  virtual ~GetAreaElecConstituteResponseBodyData() = default;
};
class GetAreaElecConstituteResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetAreaElecConstituteResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetAreaElecConstituteResponseBody() {}

  explicit GetAreaElecConstituteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetAreaElecConstituteResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetAreaElecConstituteResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetAreaElecConstituteResponseBody() = default;
};
class GetAreaElecConstituteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAreaElecConstituteResponseBody> body{};

  GetAreaElecConstituteResponse() {}

  explicit GetAreaElecConstituteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAreaElecConstituteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAreaElecConstituteResponseBody>(model1);
      }
    }
  }


  virtual ~GetAreaElecConstituteResponse() = default;
};
class GetCarbonEmissionTrendRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> moduleCode{};
  shared_ptr<long> moduleType{};
  shared_ptr<long> trendType{};
  shared_ptr<vector<long>> yearList{};

  GetCarbonEmissionTrendRequest() {}

  explicit GetCarbonEmissionTrendRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (moduleCode) {
      res["moduleCode"] = boost::any(*moduleCode);
    }
    if (moduleType) {
      res["moduleType"] = boost::any(*moduleType);
    }
    if (trendType) {
      res["trendType"] = boost::any(*trendType);
    }
    if (yearList) {
      res["yearList"] = boost::any(*yearList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("moduleCode") != m.end() && !m["moduleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["moduleCode"]));
    }
    if (m.find("moduleType") != m.end() && !m["moduleType"].empty()) {
      moduleType = make_shared<long>(boost::any_cast<long>(m["moduleType"]));
    }
    if (m.find("trendType") != m.end() && !m["trendType"].empty()) {
      trendType = make_shared<long>(boost::any_cast<long>(m["trendType"]));
    }
    if (m.find("yearList") != m.end() && !m["yearList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["yearList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["yearList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      yearList = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~GetCarbonEmissionTrendRequest() = default;
};
class GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmissionData{};
  shared_ptr<long> month{};
  shared_ptr<string> year{};

  GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems() {}

  explicit GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmissionData) {
      res["carbonEmissionData"] = boost::any(*carbonEmissionData);
    }
    if (month) {
      res["month"] = boost::any(*month);
    }
    if (year) {
      res["year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmissionData") != m.end() && !m["carbonEmissionData"].empty()) {
      carbonEmissionData = make_shared<double>(boost::any_cast<double>(m["carbonEmissionData"]));
    }
    if (m.find("month") != m.end() && !m["month"].empty()) {
      month = make_shared<long>(boost::any_cast<long>(m["month"]));
    }
    if (m.find("year") != m.end() && !m["year"].empty()) {
      year = make_shared<string>(boost::any_cast<string>(m["year"]));
    }
  }


  virtual ~GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems() = default;
};
class GetCarbonEmissionTrendResponseBodyDataActualEmissionList : public Darabonba::Model {
public:
  shared_ptr<vector<GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems>> items{};
  shared_ptr<string> year{};

  GetCarbonEmissionTrendResponseBodyDataActualEmissionList() {}

  explicit GetCarbonEmissionTrendResponseBodyDataActualEmissionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (year) {
      res["year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<GetCarbonEmissionTrendResponseBodyDataActualEmissionListItems>>(expect1);
      }
    }
    if (m.find("year") != m.end() && !m["year"].empty()) {
      year = make_shared<string>(boost::any_cast<string>(m["year"]));
    }
  }


  virtual ~GetCarbonEmissionTrendResponseBodyDataActualEmissionList() = default;
};
class GetCarbonEmissionTrendResponseBodyDataTargetEmissionListItems : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmissionData{};
  shared_ptr<long> month{};
  shared_ptr<string> year{};

  GetCarbonEmissionTrendResponseBodyDataTargetEmissionListItems() {}

  explicit GetCarbonEmissionTrendResponseBodyDataTargetEmissionListItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmissionData) {
      res["carbonEmissionData"] = boost::any(*carbonEmissionData);
    }
    if (month) {
      res["month"] = boost::any(*month);
    }
    if (year) {
      res["year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmissionData") != m.end() && !m["carbonEmissionData"].empty()) {
      carbonEmissionData = make_shared<double>(boost::any_cast<double>(m["carbonEmissionData"]));
    }
    if (m.find("month") != m.end() && !m["month"].empty()) {
      month = make_shared<long>(boost::any_cast<long>(m["month"]));
    }
    if (m.find("year") != m.end() && !m["year"].empty()) {
      year = make_shared<string>(boost::any_cast<string>(m["year"]));
    }
  }


  virtual ~GetCarbonEmissionTrendResponseBodyDataTargetEmissionListItems() = default;
};
class GetCarbonEmissionTrendResponseBodyDataTargetEmissionList : public Darabonba::Model {
public:
  shared_ptr<vector<GetCarbonEmissionTrendResponseBodyDataTargetEmissionListItems>> items{};
  shared_ptr<string> year{};

  GetCarbonEmissionTrendResponseBodyDataTargetEmissionList() {}

  explicit GetCarbonEmissionTrendResponseBodyDataTargetEmissionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (year) {
      res["year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<GetCarbonEmissionTrendResponseBodyDataTargetEmissionListItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCarbonEmissionTrendResponseBodyDataTargetEmissionListItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<GetCarbonEmissionTrendResponseBodyDataTargetEmissionListItems>>(expect1);
      }
    }
    if (m.find("year") != m.end() && !m["year"].empty()) {
      year = make_shared<string>(boost::any_cast<string>(m["year"]));
    }
  }


  virtual ~GetCarbonEmissionTrendResponseBodyDataTargetEmissionList() = default;
};
class GetCarbonEmissionTrendResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetCarbonEmissionTrendResponseBodyDataActualEmissionList>> actualEmissionList{};
  shared_ptr<vector<GetCarbonEmissionTrendResponseBodyDataTargetEmissionList>> targetEmissionList{};

  GetCarbonEmissionTrendResponseBodyData() {}

  explicit GetCarbonEmissionTrendResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualEmissionList) {
      vector<boost::any> temp1;
      for(auto item1:*actualEmissionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["actualEmissionList"] = boost::any(temp1);
    }
    if (targetEmissionList) {
      vector<boost::any> temp1;
      for(auto item1:*targetEmissionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["targetEmissionList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actualEmissionList") != m.end() && !m["actualEmissionList"].empty()) {
      if (typeid(vector<boost::any>) == m["actualEmissionList"].type()) {
        vector<GetCarbonEmissionTrendResponseBodyDataActualEmissionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["actualEmissionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCarbonEmissionTrendResponseBodyDataActualEmissionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        actualEmissionList = make_shared<vector<GetCarbonEmissionTrendResponseBodyDataActualEmissionList>>(expect1);
      }
    }
    if (m.find("targetEmissionList") != m.end() && !m["targetEmissionList"].empty()) {
      if (typeid(vector<boost::any>) == m["targetEmissionList"].type()) {
        vector<GetCarbonEmissionTrendResponseBodyDataTargetEmissionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["targetEmissionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetCarbonEmissionTrendResponseBodyDataTargetEmissionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targetEmissionList = make_shared<vector<GetCarbonEmissionTrendResponseBodyDataTargetEmissionList>>(expect1);
      }
    }
  }


  virtual ~GetCarbonEmissionTrendResponseBodyData() = default;
};
class GetCarbonEmissionTrendResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetCarbonEmissionTrendResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetCarbonEmissionTrendResponseBody() {}

  explicit GetCarbonEmissionTrendResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetCarbonEmissionTrendResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetCarbonEmissionTrendResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetCarbonEmissionTrendResponseBody() = default;
};
class GetCarbonEmissionTrendResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCarbonEmissionTrendResponseBody> body{};

  GetCarbonEmissionTrendResponse() {}

  explicit GetCarbonEmissionTrendResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCarbonEmissionTrendResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCarbonEmissionTrendResponseBody>(model1);
      }
    }
  }


  virtual ~GetCarbonEmissionTrendResponse() = default;
};
class GetChatFolderListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ChatFolderItem>> data{};
  shared_ptr<string> requestId{};

  GetChatFolderListResponseBody() {}

  explicit GetChatFolderListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ChatFolderItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChatFolderItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ChatFolderItem>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetChatFolderListResponseBody() = default;
};
class GetChatFolderListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetChatFolderListResponseBody> body{};

  GetChatFolderListResponse() {}

  explicit GetChatFolderListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetChatFolderListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetChatFolderListResponseBody>(model1);
      }
    }
  }


  virtual ~GetChatFolderListResponse() = default;
};
class GetChatListRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sessionId{};

  GetChatListRequest() {}

  explicit GetChatListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["currentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currentPage") != m.end() && !m["currentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["currentPage"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
  }


  virtual ~GetChatListRequest() = default;
};
class GetChatListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ChatItem>> chatList{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};
  shared_ptr<long> totalPage{};

  GetChatListResponseBodyData() {}

  explicit GetChatListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chatList) {
      vector<boost::any> temp1;
      for(auto item1:*chatList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["chatList"] = boost::any(temp1);
    }
    if (currentPage) {
      res["currentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    if (totalPage) {
      res["totalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chatList") != m.end() && !m["chatList"].empty()) {
      if (typeid(vector<boost::any>) == m["chatList"].type()) {
        vector<ChatItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["chatList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChatItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        chatList = make_shared<vector<ChatItem>>(expect1);
      }
    }
    if (m.find("currentPage") != m.end() && !m["currentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["currentPage"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
    if (m.find("totalPage") != m.end() && !m["totalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["totalPage"]));
    }
  }


  virtual ~GetChatListResponseBodyData() = default;
};
class GetChatListResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetChatListResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetChatListResponseBody() {}

  explicit GetChatListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetChatListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetChatListResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetChatListResponseBody() = default;
};
class GetChatListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetChatListResponseBody> body{};

  GetChatListResponse() {}

  explicit GetChatListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetChatListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetChatListResponseBody>(model1);
      }
    }
  }


  virtual ~GetChatListResponse() = default;
};
class GetChatSessionListRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> name{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> userId{};

  GetChatSessionListRequest() {}

  explicit GetChatSessionListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["currentPage"] = boost::any(*currentPage);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currentPage") != m.end() && !m["currentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["currentPage"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~GetChatSessionListRequest() = default;
};
class GetChatSessionListResponseBodyDataSessionList : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> folderId{};
  shared_ptr<string> name{};
  shared_ptr<string> sessionId{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> userId{};

  GetChatSessionListResponseBodyDataSessionList() {}

  explicit GetChatSessionListResponseBodyDataSessionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (folderId) {
      res["folderId"] = boost::any(*folderId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (updateTime) {
      res["updateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["createTime"]));
    }
    if (m.find("folderId") != m.end() && !m["folderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["folderId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("updateTime") != m.end() && !m["updateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["updateTime"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~GetChatSessionListResponseBodyDataSessionList() = default;
};
class GetChatSessionListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<GetChatSessionListResponseBodyDataSessionList>> sessionList{};
  shared_ptr<long> total{};
  shared_ptr<long> totalPage{};

  GetChatSessionListResponseBodyData() {}

  explicit GetChatSessionListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["currentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (sessionList) {
      vector<boost::any> temp1;
      for(auto item1:*sessionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sessionList"] = boost::any(temp1);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    if (totalPage) {
      res["totalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currentPage") != m.end() && !m["currentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["currentPage"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("sessionList") != m.end() && !m["sessionList"].empty()) {
      if (typeid(vector<boost::any>) == m["sessionList"].type()) {
        vector<GetChatSessionListResponseBodyDataSessionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sessionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetChatSessionListResponseBodyDataSessionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sessionList = make_shared<vector<GetChatSessionListResponseBodyDataSessionList>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
    if (m.find("totalPage") != m.end() && !m["totalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["totalPage"]));
    }
  }


  virtual ~GetChatSessionListResponseBodyData() = default;
};
class GetChatSessionListResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetChatSessionListResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetChatSessionListResponseBody() {}

  explicit GetChatSessionListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetChatSessionListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetChatSessionListResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetChatSessionListResponseBody() = default;
};
class GetChatSessionListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetChatSessionListResponseBody> body{};

  GetChatSessionListResponse() {}

  explicit GetChatSessionListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetChatSessionListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetChatSessionListResponseBody>(model1);
      }
    }
  }


  virtual ~GetChatSessionListResponse() = default;
};
class GetDataItemListRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};

  GetDataItemListRequest() {}

  explicit GetDataItemListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
  }


  virtual ~GetDataItemListRequest() = default;
};
class GetDataItemListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> name{};
  shared_ptr<long> period{};
  shared_ptr<string> unit{};

  GetDataItemListResponseBodyData() {}

  explicit GetDataItemListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (period) {
      res["period"] = boost::any(*period);
    }
    if (unit) {
      res["unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("period") != m.end() && !m["period"].empty()) {
      period = make_shared<long>(boost::any_cast<long>(m["period"]));
    }
    if (m.find("unit") != m.end() && !m["unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["unit"]));
    }
  }


  virtual ~GetDataItemListResponseBodyData() = default;
};
class GetDataItemListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetDataItemListResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  GetDataItemListResponseBody() {}

  explicit GetDataItemListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetDataItemListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDataItemListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetDataItemListResponseBodyData>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetDataItemListResponseBody() = default;
};
class GetDataItemListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDataItemListResponseBody> body{};

  GetDataItemListResponse() {}

  explicit GetDataItemListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDataItemListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataItemListResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataItemListResponse() = default;
};
class GetDataQualityAnalysisRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> dataQualityEvaluationType{};
  shared_ptr<long> productId{};
  shared_ptr<long> productType{};

  GetDataQualityAnalysisRequest() {}

  explicit GetDataQualityAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (dataQualityEvaluationType) {
      res["dataQualityEvaluationType"] = boost::any(*dataQualityEvaluationType);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (productType) {
      res["productType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("dataQualityEvaluationType") != m.end() && !m["dataQualityEvaluationType"].empty()) {
      dataQualityEvaluationType = make_shared<long>(boost::any_cast<long>(m["dataQualityEvaluationType"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["productId"]));
    }
    if (m.find("productType") != m.end() && !m["productType"].empty()) {
      productType = make_shared<long>(boost::any_cast<long>(m["productType"]));
    }
  }


  virtual ~GetDataQualityAnalysisRequest() = default;
};
class GetDataQualityAnalysisResponseBodyDataDataQualityScore : public Darabonba::Model {
public:
  shared_ptr<double> g1{};
  shared_ptr<double> g2{};
  shared_ptr<double> g3{};
  shared_ptr<double> g4{};

  GetDataQualityAnalysisResponseBodyDataDataQualityScore() {}

  explicit GetDataQualityAnalysisResponseBodyDataDataQualityScore(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (g1) {
      res["g1"] = boost::any(*g1);
    }
    if (g2) {
      res["g2"] = boost::any(*g2);
    }
    if (g3) {
      res["g3"] = boost::any(*g3);
    }
    if (g4) {
      res["g4"] = boost::any(*g4);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("g1") != m.end() && !m["g1"].empty()) {
      g1 = make_shared<double>(boost::any_cast<double>(m["g1"]));
    }
    if (m.find("g2") != m.end() && !m["g2"].empty()) {
      g2 = make_shared<double>(boost::any_cast<double>(m["g2"]));
    }
    if (m.find("g3") != m.end() && !m["g3"].empty()) {
      g3 = make_shared<double>(boost::any_cast<double>(m["g3"]));
    }
    if (m.find("g4") != m.end() && !m["g4"].empty()) {
      g4 = make_shared<double>(boost::any_cast<double>(m["g4"]));
    }
  }


  virtual ~GetDataQualityAnalysisResponseBodyDataDataQualityScore() = default;
};
class GetDataQualityAnalysisResponseBodyDataDataQuality : public Darabonba::Model {
public:
  shared_ptr<string> inventory{};
  shared_ptr<GetDataQualityAnalysisResponseBodyDataDataQualityScore> score{};

  GetDataQualityAnalysisResponseBodyDataDataQuality() {}

  explicit GetDataQualityAnalysisResponseBodyDataDataQuality(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inventory) {
      res["inventory"] = boost::any(*inventory);
    }
    if (score) {
      res["score"] = score ? boost::any(score->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inventory") != m.end() && !m["inventory"].empty()) {
      inventory = make_shared<string>(boost::any_cast<string>(m["inventory"]));
    }
    if (m.find("score") != m.end() && !m["score"].empty()) {
      if (typeid(map<string, boost::any>) == m["score"].type()) {
        GetDataQualityAnalysisResponseBodyDataDataQualityScore model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["score"]));
        score = make_shared<GetDataQualityAnalysisResponseBodyDataDataQualityScore>(model1);
      }
    }
  }


  virtual ~GetDataQualityAnalysisResponseBodyDataDataQuality() = default;
};
class GetDataQualityAnalysisResponseBodyDataDataQualityResult : public Darabonba::Model {
public:
  shared_ptr<double> dataQualityScore{};
  shared_ptr<double> g1{};
  shared_ptr<double> g2{};
  shared_ptr<double> g3{};
  shared_ptr<double> g4{};

  GetDataQualityAnalysisResponseBodyDataDataQualityResult() {}

  explicit GetDataQualityAnalysisResponseBodyDataDataQualityResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataQualityScore) {
      res["data_quality_score"] = boost::any(*dataQualityScore);
    }
    if (g1) {
      res["g1"] = boost::any(*g1);
    }
    if (g2) {
      res["g2"] = boost::any(*g2);
    }
    if (g3) {
      res["g3"] = boost::any(*g3);
    }
    if (g4) {
      res["g4"] = boost::any(*g4);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data_quality_score") != m.end() && !m["data_quality_score"].empty()) {
      dataQualityScore = make_shared<double>(boost::any_cast<double>(m["data_quality_score"]));
    }
    if (m.find("g1") != m.end() && !m["g1"].empty()) {
      g1 = make_shared<double>(boost::any_cast<double>(m["g1"]));
    }
    if (m.find("g2") != m.end() && !m["g2"].empty()) {
      g2 = make_shared<double>(boost::any_cast<double>(m["g2"]));
    }
    if (m.find("g3") != m.end() && !m["g3"].empty()) {
      g3 = make_shared<double>(boost::any_cast<double>(m["g3"]));
    }
    if (m.find("g4") != m.end() && !m["g4"].empty()) {
      g4 = make_shared<double>(boost::any_cast<double>(m["g4"]));
    }
  }


  virtual ~GetDataQualityAnalysisResponseBodyDataDataQualityResult() = default;
};
class GetDataQualityAnalysisResponseBodyDataSensitivityList : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> inventory{};
  shared_ptr<vector<string>> reductionList{};
  shared_ptr<double> sensitivity{};

  GetDataQualityAnalysisResponseBodyDataSensitivityList() {}

  explicit GetDataQualityAnalysisResponseBodyDataSensitivityList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (inventory) {
      res["inventory"] = boost::any(*inventory);
    }
    if (reductionList) {
      res["reductionList"] = boost::any(*reductionList);
    }
    if (sensitivity) {
      res["sensitivity"] = boost::any(*sensitivity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("inventory") != m.end() && !m["inventory"].empty()) {
      inventory = make_shared<string>(boost::any_cast<string>(m["inventory"]));
    }
    if (m.find("reductionList") != m.end() && !m["reductionList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["reductionList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["reductionList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      reductionList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("sensitivity") != m.end() && !m["sensitivity"].empty()) {
      sensitivity = make_shared<double>(boost::any_cast<double>(m["sensitivity"]));
    }
  }


  virtual ~GetDataQualityAnalysisResponseBodyDataSensitivityList() = default;
};
class GetDataQualityAnalysisResponseBodyDataUncertaintyValues : public Darabonba::Model {
public:
  shared_ptr<string> inventory{};
  shared_ptr<string> uncertaintyContribution{};

  GetDataQualityAnalysisResponseBodyDataUncertaintyValues() {}

  explicit GetDataQualityAnalysisResponseBodyDataUncertaintyValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inventory) {
      res["inventory"] = boost::any(*inventory);
    }
    if (uncertaintyContribution) {
      res["uncertaintyContribution"] = boost::any(*uncertaintyContribution);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inventory") != m.end() && !m["inventory"].empty()) {
      inventory = make_shared<string>(boost::any_cast<string>(m["inventory"]));
    }
    if (m.find("uncertaintyContribution") != m.end() && !m["uncertaintyContribution"].empty()) {
      uncertaintyContribution = make_shared<string>(boost::any_cast<string>(m["uncertaintyContribution"]));
    }
  }


  virtual ~GetDataQualityAnalysisResponseBodyDataUncertaintyValues() = default;
};
class GetDataQualityAnalysisResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetDataQualityAnalysisResponseBodyDataDataQuality>> dataQuality{};
  shared_ptr<GetDataQualityAnalysisResponseBodyDataDataQualityResult> dataQualityResult{};
  shared_ptr<vector<GetDataQualityAnalysisResponseBodyDataSensitivityList>> sensitivityList{};
  shared_ptr<string> uncertainty{};
  shared_ptr<vector<GetDataQualityAnalysisResponseBodyDataUncertaintyValues>> uncertaintyValues{};

  GetDataQualityAnalysisResponseBodyData() {}

  explicit GetDataQualityAnalysisResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataQuality) {
      vector<boost::any> temp1;
      for(auto item1:*dataQuality){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dataQuality"] = boost::any(temp1);
    }
    if (dataQualityResult) {
      res["dataQualityResult"] = dataQualityResult ? boost::any(dataQualityResult->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sensitivityList) {
      vector<boost::any> temp1;
      for(auto item1:*sensitivityList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sensitivityList"] = boost::any(temp1);
    }
    if (uncertainty) {
      res["uncertainty"] = boost::any(*uncertainty);
    }
    if (uncertaintyValues) {
      vector<boost::any> temp1;
      for(auto item1:*uncertaintyValues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["uncertaintyValues"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dataQuality") != m.end() && !m["dataQuality"].empty()) {
      if (typeid(vector<boost::any>) == m["dataQuality"].type()) {
        vector<GetDataQualityAnalysisResponseBodyDataDataQuality> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dataQuality"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDataQualityAnalysisResponseBodyDataDataQuality model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataQuality = make_shared<vector<GetDataQualityAnalysisResponseBodyDataDataQuality>>(expect1);
      }
    }
    if (m.find("dataQualityResult") != m.end() && !m["dataQualityResult"].empty()) {
      if (typeid(map<string, boost::any>) == m["dataQualityResult"].type()) {
        GetDataQualityAnalysisResponseBodyDataDataQualityResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["dataQualityResult"]));
        dataQualityResult = make_shared<GetDataQualityAnalysisResponseBodyDataDataQualityResult>(model1);
      }
    }
    if (m.find("sensitivityList") != m.end() && !m["sensitivityList"].empty()) {
      if (typeid(vector<boost::any>) == m["sensitivityList"].type()) {
        vector<GetDataQualityAnalysisResponseBodyDataSensitivityList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sensitivityList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDataQualityAnalysisResponseBodyDataSensitivityList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sensitivityList = make_shared<vector<GetDataQualityAnalysisResponseBodyDataSensitivityList>>(expect1);
      }
    }
    if (m.find("uncertainty") != m.end() && !m["uncertainty"].empty()) {
      uncertainty = make_shared<string>(boost::any_cast<string>(m["uncertainty"]));
    }
    if (m.find("uncertaintyValues") != m.end() && !m["uncertaintyValues"].empty()) {
      if (typeid(vector<boost::any>) == m["uncertaintyValues"].type()) {
        vector<GetDataQualityAnalysisResponseBodyDataUncertaintyValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["uncertaintyValues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDataQualityAnalysisResponseBodyDataUncertaintyValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        uncertaintyValues = make_shared<vector<GetDataQualityAnalysisResponseBodyDataUncertaintyValues>>(expect1);
      }
    }
  }


  virtual ~GetDataQualityAnalysisResponseBodyData() = default;
};
class GetDataQualityAnalysisResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDataQualityAnalysisResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetDataQualityAnalysisResponseBody() {}

  explicit GetDataQualityAnalysisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetDataQualityAnalysisResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetDataQualityAnalysisResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetDataQualityAnalysisResponseBody() = default;
};
class GetDataQualityAnalysisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDataQualityAnalysisResponseBody> body{};

  GetDataQualityAnalysisResponse() {}

  explicit GetDataQualityAnalysisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDataQualityAnalysisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDataQualityAnalysisResponseBody>(model1);
      }
    }
  }


  virtual ~GetDataQualityAnalysisResponse() = default;
};
class GetDeviceInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};
  shared_ptr<string> ds{};
  shared_ptr<string> factoryId{};

  GetDeviceInfoRequest() {}

  explicit GetDeviceInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["deviceId"] = boost::any(*deviceId);
    }
    if (ds) {
      res["ds"] = boost::any(*ds);
    }
    if (factoryId) {
      res["factoryId"] = boost::any(*factoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deviceId") != m.end() && !m["deviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["deviceId"]));
    }
    if (m.find("ds") != m.end() && !m["ds"].empty()) {
      ds = make_shared<string>(boost::any_cast<string>(m["ds"]));
    }
    if (m.find("factoryId") != m.end() && !m["factoryId"].empty()) {
      factoryId = make_shared<string>(boost::any_cast<string>(m["factoryId"]));
    }
  }


  virtual ~GetDeviceInfoRequest() = default;
};
class GetDeviceInfoResponseBodyDataRecordList : public Darabonba::Model {
public:
  shared_ptr<string> identifier{};
  shared_ptr<string> paramName{};
  shared_ptr<string> statisticsDate{};
  shared_ptr<string> type{};
  shared_ptr<string> unit{};
  shared_ptr<double> value{};

  GetDeviceInfoResponseBodyDataRecordList() {}

  explicit GetDeviceInfoResponseBodyDataRecordList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (identifier) {
      res["identifier"] = boost::any(*identifier);
    }
    if (paramName) {
      res["paramName"] = boost::any(*paramName);
    }
    if (statisticsDate) {
      res["statisticsDate"] = boost::any(*statisticsDate);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (unit) {
      res["unit"] = boost::any(*unit);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("identifier") != m.end() && !m["identifier"].empty()) {
      identifier = make_shared<string>(boost::any_cast<string>(m["identifier"]));
    }
    if (m.find("paramName") != m.end() && !m["paramName"].empty()) {
      paramName = make_shared<string>(boost::any_cast<string>(m["paramName"]));
    }
    if (m.find("statisticsDate") != m.end() && !m["statisticsDate"].empty()) {
      statisticsDate = make_shared<string>(boost::any_cast<string>(m["statisticsDate"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("unit") != m.end() && !m["unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["unit"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["value"]));
    }
  }


  virtual ~GetDeviceInfoResponseBodyDataRecordList() = default;
};
class GetDeviceInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> firstTypeName{};
  shared_ptr<vector<GetDeviceInfoResponseBodyDataRecordList>> recordList{};
  shared_ptr<string> secondTypeName{};

  GetDeviceInfoResponseBodyData() {}

  explicit GetDeviceInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["deviceId"] = boost::any(*deviceId);
    }
    if (deviceName) {
      res["deviceName"] = boost::any(*deviceName);
    }
    if (firstTypeName) {
      res["firstTypeName"] = boost::any(*firstTypeName);
    }
    if (recordList) {
      vector<boost::any> temp1;
      for(auto item1:*recordList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["recordList"] = boost::any(temp1);
    }
    if (secondTypeName) {
      res["secondTypeName"] = boost::any(*secondTypeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deviceId") != m.end() && !m["deviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["deviceId"]));
    }
    if (m.find("deviceName") != m.end() && !m["deviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["deviceName"]));
    }
    if (m.find("firstTypeName") != m.end() && !m["firstTypeName"].empty()) {
      firstTypeName = make_shared<string>(boost::any_cast<string>(m["firstTypeName"]));
    }
    if (m.find("recordList") != m.end() && !m["recordList"].empty()) {
      if (typeid(vector<boost::any>) == m["recordList"].type()) {
        vector<GetDeviceInfoResponseBodyDataRecordList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["recordList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDeviceInfoResponseBodyDataRecordList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        recordList = make_shared<vector<GetDeviceInfoResponseBodyDataRecordList>>(expect1);
      }
    }
    if (m.find("secondTypeName") != m.end() && !m["secondTypeName"].empty()) {
      secondTypeName = make_shared<string>(boost::any_cast<string>(m["secondTypeName"]));
    }
  }


  virtual ~GetDeviceInfoResponseBodyData() = default;
};
class GetDeviceInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDeviceInfoResponseBodyData> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDeviceInfoResponseBody() {}

  explicit GetDeviceInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetDeviceInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetDeviceInfoResponseBodyData>(model1);
      }
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetDeviceInfoResponseBody() = default;
};
class GetDeviceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeviceInfoResponseBody> body{};

  GetDeviceInfoResponse() {}

  explicit GetDeviceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeviceInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeviceInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeviceInfoResponse() = default;
};
class GetDeviceListRequest : public Darabonba::Model {
public:
  shared_ptr<string> factoryId{};

  GetDeviceListRequest() {}

  explicit GetDeviceListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (factoryId) {
      res["factoryId"] = boost::any(*factoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("factoryId") != m.end() && !m["factoryId"].empty()) {
      factoryId = make_shared<string>(boost::any_cast<string>(m["factoryId"]));
    }
  }


  virtual ~GetDeviceListRequest() = default;
};
class GetDeviceListResponseBodyDataDeviceListInfo : public Darabonba::Model {
public:
  shared_ptr<long> constKva{};
  shared_ptr<long> ct{};
  shared_ptr<long> magnification{};
  shared_ptr<long> pressure{};
  shared_ptr<long> pt{};

  GetDeviceListResponseBodyDataDeviceListInfo() {}

  explicit GetDeviceListResponseBodyDataDeviceListInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (constKva) {
      res["constKva"] = boost::any(*constKva);
    }
    if (ct) {
      res["ct"] = boost::any(*ct);
    }
    if (magnification) {
      res["magnification"] = boost::any(*magnification);
    }
    if (pressure) {
      res["pressure"] = boost::any(*pressure);
    }
    if (pt) {
      res["pt"] = boost::any(*pt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("constKva") != m.end() && !m["constKva"].empty()) {
      constKva = make_shared<long>(boost::any_cast<long>(m["constKva"]));
    }
    if (m.find("ct") != m.end() && !m["ct"].empty()) {
      ct = make_shared<long>(boost::any_cast<long>(m["ct"]));
    }
    if (m.find("magnification") != m.end() && !m["magnification"].empty()) {
      magnification = make_shared<long>(boost::any_cast<long>(m["magnification"]));
    }
    if (m.find("pressure") != m.end() && !m["pressure"].empty()) {
      pressure = make_shared<long>(boost::any_cast<long>(m["pressure"]));
    }
    if (m.find("pt") != m.end() && !m["pt"].empty()) {
      pt = make_shared<long>(boost::any_cast<long>(m["pt"]));
    }
  }


  virtual ~GetDeviceListResponseBodyDataDeviceListInfo() = default;
};
class GetDeviceListResponseBodyDataDeviceList : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> firstTypeName{};
  shared_ptr<GetDeviceListResponseBodyDataDeviceListInfo> info{};
  shared_ptr<string> parentDevice{};
  shared_ptr<string> secondTypeName{};

  GetDeviceListResponseBodyDataDeviceList() {}

  explicit GetDeviceListResponseBodyDataDeviceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["deviceId"] = boost::any(*deviceId);
    }
    if (deviceName) {
      res["deviceName"] = boost::any(*deviceName);
    }
    if (firstTypeName) {
      res["firstTypeName"] = boost::any(*firstTypeName);
    }
    if (info) {
      res["info"] = info ? boost::any(info->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (parentDevice) {
      res["parentDevice"] = boost::any(*parentDevice);
    }
    if (secondTypeName) {
      res["secondTypeName"] = boost::any(*secondTypeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deviceId") != m.end() && !m["deviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["deviceId"]));
    }
    if (m.find("deviceName") != m.end() && !m["deviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["deviceName"]));
    }
    if (m.find("firstTypeName") != m.end() && !m["firstTypeName"].empty()) {
      firstTypeName = make_shared<string>(boost::any_cast<string>(m["firstTypeName"]));
    }
    if (m.find("info") != m.end() && !m["info"].empty()) {
      if (typeid(map<string, boost::any>) == m["info"].type()) {
        GetDeviceListResponseBodyDataDeviceListInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["info"]));
        info = make_shared<GetDeviceListResponseBodyDataDeviceListInfo>(model1);
      }
    }
    if (m.find("parentDevice") != m.end() && !m["parentDevice"].empty()) {
      parentDevice = make_shared<string>(boost::any_cast<string>(m["parentDevice"]));
    }
    if (m.find("secondTypeName") != m.end() && !m["secondTypeName"].empty()) {
      secondTypeName = make_shared<string>(boost::any_cast<string>(m["secondTypeName"]));
    }
  }


  virtual ~GetDeviceListResponseBodyDataDeviceList() = default;
};
class GetDeviceListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetDeviceListResponseBodyDataDeviceList>> deviceList{};
  shared_ptr<string> factoryId{};
  shared_ptr<long> httpCode{};
  shared_ptr<bool> success{};

  GetDeviceListResponseBodyData() {}

  explicit GetDeviceListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (deviceList) {
      vector<boost::any> temp1;
      for(auto item1:*deviceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["deviceList"] = boost::any(temp1);
    }
    if (factoryId) {
      res["factoryId"] = boost::any(*factoryId);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("deviceList") != m.end() && !m["deviceList"].empty()) {
      if (typeid(vector<boost::any>) == m["deviceList"].type()) {
        vector<GetDeviceListResponseBodyDataDeviceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["deviceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDeviceListResponseBodyDataDeviceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deviceList = make_shared<vector<GetDeviceListResponseBodyDataDeviceList>>(expect1);
      }
    }
    if (m.find("factoryId") != m.end() && !m["factoryId"].empty()) {
      factoryId = make_shared<string>(boost::any_cast<string>(m["factoryId"]));
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetDeviceListResponseBodyData() = default;
};
class GetDeviceListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDeviceListResponseBodyData> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetDeviceListResponseBody() {}

  explicit GetDeviceListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetDeviceListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetDeviceListResponseBodyData>(model1);
      }
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetDeviceListResponseBody() = default;
};
class GetDeviceListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeviceListResponseBody> body{};

  GetDeviceListResponse() {}

  explicit GetDeviceListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeviceListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeviceListResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeviceListResponse() = default;
};
class GetDocExtractionResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetDocExtractionResultRequest() {}

  explicit GetDocExtractionResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~GetDocExtractionResultRequest() = default;
};
class GetDocExtractionResultResponseBodyDataKvListInfoContextConfidence : public Darabonba::Model {
public:
  shared_ptr<double> keyConfidence{};
  shared_ptr<double> valueConfidence{};

  GetDocExtractionResultResponseBodyDataKvListInfoContextConfidence() {}

  explicit GetDocExtractionResultResponseBodyDataKvListInfoContextConfidence(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyConfidence) {
      res["keyConfidence"] = boost::any(*keyConfidence);
    }
    if (valueConfidence) {
      res["valueConfidence"] = boost::any(*valueConfidence);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyConfidence") != m.end() && !m["keyConfidence"].empty()) {
      keyConfidence = make_shared<double>(boost::any_cast<double>(m["keyConfidence"]));
    }
    if (m.find("valueConfidence") != m.end() && !m["valueConfidence"].empty()) {
      valueConfidence = make_shared<double>(boost::any_cast<double>(m["valueConfidence"]));
    }
  }


  virtual ~GetDocExtractionResultResponseBodyDataKvListInfoContextConfidence() = default;
};
class GetDocExtractionResultResponseBodyDataKvListInfoContext : public Darabonba::Model {
public:
  shared_ptr<GetDocExtractionResultResponseBodyDataKvListInfoContextConfidence> confidence{};
  shared_ptr<vector<ContentItem>> key{};
  shared_ptr<vector<ContentItem>> value{};

  GetDocExtractionResultResponseBodyDataKvListInfoContext() {}

  explicit GetDocExtractionResultResponseBodyDataKvListInfoContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidence) {
      res["confidence"] = confidence ? boost::any(confidence->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (key) {
      vector<boost::any> temp1;
      for(auto item1:*key){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["key"] = boost::any(temp1);
    }
    if (value) {
      vector<boost::any> temp1;
      for(auto item1:*value){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["value"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("confidence") != m.end() && !m["confidence"].empty()) {
      if (typeid(map<string, boost::any>) == m["confidence"].type()) {
        GetDocExtractionResultResponseBodyDataKvListInfoContextConfidence model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["confidence"]));
        confidence = make_shared<GetDocExtractionResultResponseBodyDataKvListInfoContextConfidence>(model1);
      }
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      if (typeid(vector<boost::any>) == m["key"].type()) {
        vector<ContentItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["key"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ContentItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        key = make_shared<vector<ContentItem>>(expect1);
      }
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      if (typeid(vector<boost::any>) == m["value"].type()) {
        vector<ContentItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["value"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ContentItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        value = make_shared<vector<ContentItem>>(expect1);
      }
    }
  }


  virtual ~GetDocExtractionResultResponseBodyDataKvListInfoContext() = default;
};
class GetDocExtractionResultResponseBodyDataKvListInfo : public Darabonba::Model {
public:
  shared_ptr<GetDocExtractionResultResponseBodyDataKvListInfoContext> context{};
  shared_ptr<string> keyName{};
  shared_ptr<string> keyValue{};

  GetDocExtractionResultResponseBodyDataKvListInfo() {}

  explicit GetDocExtractionResultResponseBodyDataKvListInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (context) {
      res["context"] = context ? boost::any(context->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (keyName) {
      res["keyName"] = boost::any(*keyName);
    }
    if (keyValue) {
      res["keyValue"] = boost::any(*keyValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("context") != m.end() && !m["context"].empty()) {
      if (typeid(map<string, boost::any>) == m["context"].type()) {
        GetDocExtractionResultResponseBodyDataKvListInfoContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["context"]));
        context = make_shared<GetDocExtractionResultResponseBodyDataKvListInfoContext>(model1);
      }
    }
    if (m.find("keyName") != m.end() && !m["keyName"].empty()) {
      keyName = make_shared<string>(boost::any_cast<string>(m["keyName"]));
    }
    if (m.find("keyValue") != m.end() && !m["keyValue"].empty()) {
      keyValue = make_shared<string>(boost::any_cast<string>(m["keyValue"]));
    }
  }


  virtual ~GetDocExtractionResultResponseBodyDataKvListInfo() = default;
};
class GetDocExtractionResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetDocExtractionResultResponseBodyDataKvListInfo>> kvListInfo{};

  GetDocExtractionResultResponseBodyData() {}

  explicit GetDocExtractionResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (kvListInfo) {
      vector<boost::any> temp1;
      for(auto item1:*kvListInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["kvListInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("kvListInfo") != m.end() && !m["kvListInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["kvListInfo"].type()) {
        vector<GetDocExtractionResultResponseBodyDataKvListInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["kvListInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDocExtractionResultResponseBodyDataKvListInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        kvListInfo = make_shared<vector<GetDocExtractionResultResponseBodyDataKvListInfo>>(expect1);
      }
    }
  }


  virtual ~GetDocExtractionResultResponseBodyData() = default;
};
class GetDocExtractionResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDocExtractionResultResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetDocExtractionResultResponseBody() {}

  explicit GetDocExtractionResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetDocExtractionResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetDocExtractionResultResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetDocExtractionResultResponseBody() = default;
};
class GetDocExtractionResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDocExtractionResultResponseBody> body{};

  GetDocExtractionResultResponse() {}

  explicit GetDocExtractionResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDocExtractionResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDocExtractionResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetDocExtractionResultResponse() = default;
};
class GetDocParsingResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> returnFormat{};
  shared_ptr<string> taskId{};

  GetDocParsingResultRequest() {}

  explicit GetDocParsingResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (returnFormat) {
      res["returnFormat"] = boost::any(*returnFormat);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("returnFormat") != m.end() && !m["returnFormat"].empty()) {
      returnFormat = make_shared<string>(boost::any_cast<string>(m["returnFormat"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~GetDocParsingResultRequest() = default;
};
class GetDocParsingResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};

  GetDocParsingResultResponseBodyData() {}

  explicit GetDocParsingResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
  }


  virtual ~GetDocParsingResultResponseBodyData() = default;
};
class GetDocParsingResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDocParsingResultResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetDocParsingResultResponseBody() {}

  explicit GetDocParsingResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetDocParsingResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetDocParsingResultResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetDocParsingResultResponseBody() = default;
};
class GetDocParsingResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDocParsingResultResponseBody> body{};

  GetDocParsingResultResponse() {}

  explicit GetDocParsingResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDocParsingResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDocParsingResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetDocParsingResultResponse() = default;
};
class GetDocumentAnalyzeResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  GetDocumentAnalyzeResultRequest() {}

  explicit GetDocumentAnalyzeResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["jobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("jobId") != m.end() && !m["jobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["jobId"]));
    }
  }


  virtual ~GetDocumentAnalyzeResultRequest() = default;
};
class GetDocumentAnalyzeResultResponseBodyDataKvListInfoContextConfidence : public Darabonba::Model {
public:
  shared_ptr<double> keyConfidence{};
  shared_ptr<double> valueConfidence{};

  GetDocumentAnalyzeResultResponseBodyDataKvListInfoContextConfidence() {}

  explicit GetDocumentAnalyzeResultResponseBodyDataKvListInfoContextConfidence(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyConfidence) {
      res["keyConfidence"] = boost::any(*keyConfidence);
    }
    if (valueConfidence) {
      res["valueConfidence"] = boost::any(*valueConfidence);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyConfidence") != m.end() && !m["keyConfidence"].empty()) {
      keyConfidence = make_shared<double>(boost::any_cast<double>(m["keyConfidence"]));
    }
    if (m.find("valueConfidence") != m.end() && !m["valueConfidence"].empty()) {
      valueConfidence = make_shared<double>(boost::any_cast<double>(m["valueConfidence"]));
    }
  }


  virtual ~GetDocumentAnalyzeResultResponseBodyDataKvListInfoContextConfidence() = default;
};
class GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext : public Darabonba::Model {
public:
  shared_ptr<GetDocumentAnalyzeResultResponseBodyDataKvListInfoContextConfidence> confidence{};
  shared_ptr<vector<ContentItem>> key{};
  shared_ptr<vector<ContentItem>> value{};

  GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext() {}

  explicit GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidence) {
      res["confidence"] = confidence ? boost::any(confidence->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (key) {
      vector<boost::any> temp1;
      for(auto item1:*key){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["key"] = boost::any(temp1);
    }
    if (value) {
      vector<boost::any> temp1;
      for(auto item1:*value){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["value"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("confidence") != m.end() && !m["confidence"].empty()) {
      if (typeid(map<string, boost::any>) == m["confidence"].type()) {
        GetDocumentAnalyzeResultResponseBodyDataKvListInfoContextConfidence model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["confidence"]));
        confidence = make_shared<GetDocumentAnalyzeResultResponseBodyDataKvListInfoContextConfidence>(model1);
      }
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      if (typeid(vector<boost::any>) == m["key"].type()) {
        vector<ContentItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["key"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ContentItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        key = make_shared<vector<ContentItem>>(expect1);
      }
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      if (typeid(vector<boost::any>) == m["value"].type()) {
        vector<ContentItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["value"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ContentItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        value = make_shared<vector<ContentItem>>(expect1);
      }
    }
  }


  virtual ~GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext() = default;
};
class GetDocumentAnalyzeResultResponseBodyDataKvListInfo : public Darabonba::Model {
public:
  shared_ptr<GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext> context{};
  shared_ptr<string> keyName{};
  shared_ptr<string> keyValue{};

  GetDocumentAnalyzeResultResponseBodyDataKvListInfo() {}

  explicit GetDocumentAnalyzeResultResponseBodyDataKvListInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (context) {
      res["context"] = context ? boost::any(context->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (keyName) {
      res["keyName"] = boost::any(*keyName);
    }
    if (keyValue) {
      res["keyValue"] = boost::any(*keyValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("context") != m.end() && !m["context"].empty()) {
      if (typeid(map<string, boost::any>) == m["context"].type()) {
        GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["context"]));
        context = make_shared<GetDocumentAnalyzeResultResponseBodyDataKvListInfoContext>(model1);
      }
    }
    if (m.find("keyName") != m.end() && !m["keyName"].empty()) {
      keyName = make_shared<string>(boost::any_cast<string>(m["keyName"]));
    }
    if (m.find("keyValue") != m.end() && !m["keyValue"].empty()) {
      keyValue = make_shared<string>(boost::any_cast<string>(m["keyValue"]));
    }
  }


  virtual ~GetDocumentAnalyzeResultResponseBodyDataKvListInfo() = default;
};
class GetDocumentAnalyzeResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetDocumentAnalyzeResultResponseBodyDataKvListInfo>> kvListInfo{};

  GetDocumentAnalyzeResultResponseBodyData() {}

  explicit GetDocumentAnalyzeResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (kvListInfo) {
      vector<boost::any> temp1;
      for(auto item1:*kvListInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["kvListInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("kvListInfo") != m.end() && !m["kvListInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["kvListInfo"].type()) {
        vector<GetDocumentAnalyzeResultResponseBodyDataKvListInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["kvListInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetDocumentAnalyzeResultResponseBodyDataKvListInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        kvListInfo = make_shared<vector<GetDocumentAnalyzeResultResponseBodyDataKvListInfo>>(expect1);
      }
    }
  }


  virtual ~GetDocumentAnalyzeResultResponseBodyData() = default;
};
class GetDocumentAnalyzeResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDocumentAnalyzeResultResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetDocumentAnalyzeResultResponseBody() {}

  explicit GetDocumentAnalyzeResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetDocumentAnalyzeResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetDocumentAnalyzeResultResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetDocumentAnalyzeResultResponseBody() = default;
};
class GetDocumentAnalyzeResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDocumentAnalyzeResultResponseBody> body{};

  GetDocumentAnalyzeResultResponse() {}

  explicit GetDocumentAnalyzeResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDocumentAnalyzeResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDocumentAnalyzeResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetDocumentAnalyzeResultResponse() = default;
};
class GetElecConstituteRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> year{};

  GetElecConstituteRequest() {}

  explicit GetElecConstituteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (year) {
      res["year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("year") != m.end() && !m["year"].empty()) {
      year = make_shared<long>(boost::any_cast<long>(m["year"]));
    }
  }


  virtual ~GetElecConstituteRequest() = default;
};
class GetElecConstituteResponseBodyDataLight : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmissionData{};
  shared_ptr<string> dataUnit{};
  shared_ptr<string> name{};
  shared_ptr<string> nameKey{};
  shared_ptr<double> ratio{};
  shared_ptr<double> rawData{};

  GetElecConstituteResponseBodyDataLight() {}

  explicit GetElecConstituteResponseBodyDataLight(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmissionData) {
      res["carbonEmissionData"] = boost::any(*carbonEmissionData);
    }
    if (dataUnit) {
      res["dataUnit"] = boost::any(*dataUnit);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameKey) {
      res["nameKey"] = boost::any(*nameKey);
    }
    if (ratio) {
      res["ratio"] = boost::any(*ratio);
    }
    if (rawData) {
      res["rawData"] = boost::any(*rawData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmissionData") != m.end() && !m["carbonEmissionData"].empty()) {
      carbonEmissionData = make_shared<double>(boost::any_cast<double>(m["carbonEmissionData"]));
    }
    if (m.find("dataUnit") != m.end() && !m["dataUnit"].empty()) {
      dataUnit = make_shared<string>(boost::any_cast<string>(m["dataUnit"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameKey") != m.end() && !m["nameKey"].empty()) {
      nameKey = make_shared<string>(boost::any_cast<string>(m["nameKey"]));
    }
    if (m.find("ratio") != m.end() && !m["ratio"].empty()) {
      ratio = make_shared<double>(boost::any_cast<double>(m["ratio"]));
    }
    if (m.find("rawData") != m.end() && !m["rawData"].empty()) {
      rawData = make_shared<double>(boost::any_cast<double>(m["rawData"]));
    }
  }


  virtual ~GetElecConstituteResponseBodyDataLight() = default;
};
class GetElecConstituteResponseBodyDataNuclear : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmissionData{};
  shared_ptr<string> dataUnit{};
  shared_ptr<string> name{};
  shared_ptr<string> nameKey{};
  shared_ptr<double> ratio{};
  shared_ptr<double> rawData{};

  GetElecConstituteResponseBodyDataNuclear() {}

  explicit GetElecConstituteResponseBodyDataNuclear(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmissionData) {
      res["carbonEmissionData"] = boost::any(*carbonEmissionData);
    }
    if (dataUnit) {
      res["dataUnit"] = boost::any(*dataUnit);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameKey) {
      res["nameKey"] = boost::any(*nameKey);
    }
    if (ratio) {
      res["ratio"] = boost::any(*ratio);
    }
    if (rawData) {
      res["rawData"] = boost::any(*rawData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmissionData") != m.end() && !m["carbonEmissionData"].empty()) {
      carbonEmissionData = make_shared<double>(boost::any_cast<double>(m["carbonEmissionData"]));
    }
    if (m.find("dataUnit") != m.end() && !m["dataUnit"].empty()) {
      dataUnit = make_shared<string>(boost::any_cast<string>(m["dataUnit"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameKey") != m.end() && !m["nameKey"].empty()) {
      nameKey = make_shared<string>(boost::any_cast<string>(m["nameKey"]));
    }
    if (m.find("ratio") != m.end() && !m["ratio"].empty()) {
      ratio = make_shared<double>(boost::any_cast<double>(m["ratio"]));
    }
    if (m.find("rawData") != m.end() && !m["rawData"].empty()) {
      rawData = make_shared<double>(boost::any_cast<double>(m["rawData"]));
    }
  }


  virtual ~GetElecConstituteResponseBodyDataNuclear() = default;
};
class GetElecConstituteResponseBodyDataRenewing : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmissionData{};
  shared_ptr<string> dataUnit{};
  shared_ptr<string> name{};
  shared_ptr<string> nameKey{};
  shared_ptr<double> ratio{};
  shared_ptr<double> rawData{};

  GetElecConstituteResponseBodyDataRenewing() {}

  explicit GetElecConstituteResponseBodyDataRenewing(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmissionData) {
      res["carbonEmissionData"] = boost::any(*carbonEmissionData);
    }
    if (dataUnit) {
      res["dataUnit"] = boost::any(*dataUnit);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameKey) {
      res["nameKey"] = boost::any(*nameKey);
    }
    if (ratio) {
      res["ratio"] = boost::any(*ratio);
    }
    if (rawData) {
      res["rawData"] = boost::any(*rawData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmissionData") != m.end() && !m["carbonEmissionData"].empty()) {
      carbonEmissionData = make_shared<double>(boost::any_cast<double>(m["carbonEmissionData"]));
    }
    if (m.find("dataUnit") != m.end() && !m["dataUnit"].empty()) {
      dataUnit = make_shared<string>(boost::any_cast<string>(m["dataUnit"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameKey") != m.end() && !m["nameKey"].empty()) {
      nameKey = make_shared<string>(boost::any_cast<string>(m["nameKey"]));
    }
    if (m.find("ratio") != m.end() && !m["ratio"].empty()) {
      ratio = make_shared<double>(boost::any_cast<double>(m["ratio"]));
    }
    if (m.find("rawData") != m.end() && !m["rawData"].empty()) {
      rawData = make_shared<double>(boost::any_cast<double>(m["rawData"]));
    }
  }


  virtual ~GetElecConstituteResponseBodyDataRenewing() = default;
};
class GetElecConstituteResponseBodyDataUrban : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmissionData{};
  shared_ptr<string> dataUnit{};
  shared_ptr<string> name{};
  shared_ptr<string> nameKey{};
  shared_ptr<double> ratio{};
  shared_ptr<double> rawData{};

  GetElecConstituteResponseBodyDataUrban() {}

  explicit GetElecConstituteResponseBodyDataUrban(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmissionData) {
      res["carbonEmissionData"] = boost::any(*carbonEmissionData);
    }
    if (dataUnit) {
      res["dataUnit"] = boost::any(*dataUnit);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameKey) {
      res["nameKey"] = boost::any(*nameKey);
    }
    if (ratio) {
      res["ratio"] = boost::any(*ratio);
    }
    if (rawData) {
      res["rawData"] = boost::any(*rawData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmissionData") != m.end() && !m["carbonEmissionData"].empty()) {
      carbonEmissionData = make_shared<double>(boost::any_cast<double>(m["carbonEmissionData"]));
    }
    if (m.find("dataUnit") != m.end() && !m["dataUnit"].empty()) {
      dataUnit = make_shared<string>(boost::any_cast<string>(m["dataUnit"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameKey") != m.end() && !m["nameKey"].empty()) {
      nameKey = make_shared<string>(boost::any_cast<string>(m["nameKey"]));
    }
    if (m.find("ratio") != m.end() && !m["ratio"].empty()) {
      ratio = make_shared<double>(boost::any_cast<double>(m["ratio"]));
    }
    if (m.find("rawData") != m.end() && !m["rawData"].empty()) {
      rawData = make_shared<double>(boost::any_cast<double>(m["rawData"]));
    }
  }


  virtual ~GetElecConstituteResponseBodyDataUrban() = default;
};
class GetElecConstituteResponseBodyDataWater : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmissionData{};
  shared_ptr<string> dataUnit{};
  shared_ptr<string> name{};
  shared_ptr<string> nameKey{};
  shared_ptr<double> ratio{};
  shared_ptr<double> rawData{};

  GetElecConstituteResponseBodyDataWater() {}

  explicit GetElecConstituteResponseBodyDataWater(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmissionData) {
      res["carbonEmissionData"] = boost::any(*carbonEmissionData);
    }
    if (dataUnit) {
      res["dataUnit"] = boost::any(*dataUnit);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameKey) {
      res["nameKey"] = boost::any(*nameKey);
    }
    if (ratio) {
      res["ratio"] = boost::any(*ratio);
    }
    if (rawData) {
      res["rawData"] = boost::any(*rawData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmissionData") != m.end() && !m["carbonEmissionData"].empty()) {
      carbonEmissionData = make_shared<double>(boost::any_cast<double>(m["carbonEmissionData"]));
    }
    if (m.find("dataUnit") != m.end() && !m["dataUnit"].empty()) {
      dataUnit = make_shared<string>(boost::any_cast<string>(m["dataUnit"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameKey") != m.end() && !m["nameKey"].empty()) {
      nameKey = make_shared<string>(boost::any_cast<string>(m["nameKey"]));
    }
    if (m.find("ratio") != m.end() && !m["ratio"].empty()) {
      ratio = make_shared<double>(boost::any_cast<double>(m["ratio"]));
    }
    if (m.find("rawData") != m.end() && !m["rawData"].empty()) {
      rawData = make_shared<double>(boost::any_cast<double>(m["rawData"]));
    }
  }


  virtual ~GetElecConstituteResponseBodyDataWater() = default;
};
class GetElecConstituteResponseBodyDataWind : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmissionData{};
  shared_ptr<string> dataUnit{};
  shared_ptr<string> name{};
  shared_ptr<string> nameKey{};
  shared_ptr<double> ratio{};
  shared_ptr<double> rawData{};

  GetElecConstituteResponseBodyDataWind() {}

  explicit GetElecConstituteResponseBodyDataWind(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmissionData) {
      res["carbonEmissionData"] = boost::any(*carbonEmissionData);
    }
    if (dataUnit) {
      res["dataUnit"] = boost::any(*dataUnit);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameKey) {
      res["nameKey"] = boost::any(*nameKey);
    }
    if (ratio) {
      res["ratio"] = boost::any(*ratio);
    }
    if (rawData) {
      res["rawData"] = boost::any(*rawData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmissionData") != m.end() && !m["carbonEmissionData"].empty()) {
      carbonEmissionData = make_shared<double>(boost::any_cast<double>(m["carbonEmissionData"]));
    }
    if (m.find("dataUnit") != m.end() && !m["dataUnit"].empty()) {
      dataUnit = make_shared<string>(boost::any_cast<string>(m["dataUnit"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameKey") != m.end() && !m["nameKey"].empty()) {
      nameKey = make_shared<string>(boost::any_cast<string>(m["nameKey"]));
    }
    if (m.find("ratio") != m.end() && !m["ratio"].empty()) {
      ratio = make_shared<double>(boost::any_cast<double>(m["ratio"]));
    }
    if (m.find("rawData") != m.end() && !m["rawData"].empty()) {
      rawData = make_shared<double>(boost::any_cast<double>(m["rawData"]));
    }
  }


  virtual ~GetElecConstituteResponseBodyDataWind() = default;
};
class GetElecConstituteResponseBodyDataZero : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmissionData{};
  shared_ptr<string> dataUnit{};
  shared_ptr<string> name{};
  shared_ptr<string> nameKey{};
  shared_ptr<double> ratio{};
  shared_ptr<double> rawData{};

  GetElecConstituteResponseBodyDataZero() {}

  explicit GetElecConstituteResponseBodyDataZero(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmissionData) {
      res["carbonEmissionData"] = boost::any(*carbonEmissionData);
    }
    if (dataUnit) {
      res["dataUnit"] = boost::any(*dataUnit);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameKey) {
      res["nameKey"] = boost::any(*nameKey);
    }
    if (ratio) {
      res["ratio"] = boost::any(*ratio);
    }
    if (rawData) {
      res["rawData"] = boost::any(*rawData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmissionData") != m.end() && !m["carbonEmissionData"].empty()) {
      carbonEmissionData = make_shared<double>(boost::any_cast<double>(m["carbonEmissionData"]));
    }
    if (m.find("dataUnit") != m.end() && !m["dataUnit"].empty()) {
      dataUnit = make_shared<string>(boost::any_cast<string>(m["dataUnit"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameKey") != m.end() && !m["nameKey"].empty()) {
      nameKey = make_shared<string>(boost::any_cast<string>(m["nameKey"]));
    }
    if (m.find("ratio") != m.end() && !m["ratio"].empty()) {
      ratio = make_shared<double>(boost::any_cast<double>(m["ratio"]));
    }
    if (m.find("rawData") != m.end() && !m["rawData"].empty()) {
      rawData = make_shared<double>(boost::any_cast<double>(m["rawData"]));
    }
  }


  virtual ~GetElecConstituteResponseBodyDataZero() = default;
};
class GetElecConstituteResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<GetElecConstituteResponseBodyDataLight> light{};
  shared_ptr<GetElecConstituteResponseBodyDataNuclear> nuclear{};
  shared_ptr<GetElecConstituteResponseBodyDataRenewing> renewing{};
  shared_ptr<GetElecConstituteResponseBodyDataUrban> urban{};
  shared_ptr<GetElecConstituteResponseBodyDataWater> water{};
  shared_ptr<GetElecConstituteResponseBodyDataWind> wind{};
  shared_ptr<GetElecConstituteResponseBodyDataZero> zero{};

  GetElecConstituteResponseBodyData() {}

  explicit GetElecConstituteResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (light) {
      res["light"] = light ? boost::any(light->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (nuclear) {
      res["nuclear"] = nuclear ? boost::any(nuclear->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (renewing) {
      res["renewing"] = renewing ? boost::any(renewing->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (urban) {
      res["urban"] = urban ? boost::any(urban->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (water) {
      res["water"] = water ? boost::any(water->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (wind) {
      res["wind"] = wind ? boost::any(wind->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (zero) {
      res["zero"] = zero ? boost::any(zero->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("light") != m.end() && !m["light"].empty()) {
      if (typeid(map<string, boost::any>) == m["light"].type()) {
        GetElecConstituteResponseBodyDataLight model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["light"]));
        light = make_shared<GetElecConstituteResponseBodyDataLight>(model1);
      }
    }
    if (m.find("nuclear") != m.end() && !m["nuclear"].empty()) {
      if (typeid(map<string, boost::any>) == m["nuclear"].type()) {
        GetElecConstituteResponseBodyDataNuclear model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["nuclear"]));
        nuclear = make_shared<GetElecConstituteResponseBodyDataNuclear>(model1);
      }
    }
    if (m.find("renewing") != m.end() && !m["renewing"].empty()) {
      if (typeid(map<string, boost::any>) == m["renewing"].type()) {
        GetElecConstituteResponseBodyDataRenewing model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["renewing"]));
        renewing = make_shared<GetElecConstituteResponseBodyDataRenewing>(model1);
      }
    }
    if (m.find("urban") != m.end() && !m["urban"].empty()) {
      if (typeid(map<string, boost::any>) == m["urban"].type()) {
        GetElecConstituteResponseBodyDataUrban model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["urban"]));
        urban = make_shared<GetElecConstituteResponseBodyDataUrban>(model1);
      }
    }
    if (m.find("water") != m.end() && !m["water"].empty()) {
      if (typeid(map<string, boost::any>) == m["water"].type()) {
        GetElecConstituteResponseBodyDataWater model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["water"]));
        water = make_shared<GetElecConstituteResponseBodyDataWater>(model1);
      }
    }
    if (m.find("wind") != m.end() && !m["wind"].empty()) {
      if (typeid(map<string, boost::any>) == m["wind"].type()) {
        GetElecConstituteResponseBodyDataWind model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["wind"]));
        wind = make_shared<GetElecConstituteResponseBodyDataWind>(model1);
      }
    }
    if (m.find("zero") != m.end() && !m["zero"].empty()) {
      if (typeid(map<string, boost::any>) == m["zero"].type()) {
        GetElecConstituteResponseBodyDataZero model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["zero"]));
        zero = make_shared<GetElecConstituteResponseBodyDataZero>(model1);
      }
    }
  }


  virtual ~GetElecConstituteResponseBodyData() = default;
};
class GetElecConstituteResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetElecConstituteResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetElecConstituteResponseBody() {}

  explicit GetElecConstituteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetElecConstituteResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetElecConstituteResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetElecConstituteResponseBody() = default;
};
class GetElecConstituteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetElecConstituteResponseBody> body{};

  GetElecConstituteResponse() {}

  explicit GetElecConstituteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetElecConstituteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetElecConstituteResponseBody>(model1);
      }
    }
  }


  virtual ~GetElecConstituteResponse() = default;
};
class GetElecTrendRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<long>> yearList{};

  GetElecTrendRequest() {}

  explicit GetElecTrendRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (yearList) {
      res["yearList"] = boost::any(*yearList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("yearList") != m.end() && !m["yearList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["yearList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["yearList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      yearList = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~GetElecTrendRequest() = default;
};
class GetElecTrendResponseBodyDataLight : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmissionData{};
  shared_ptr<string> dataUnit{};
  shared_ptr<long> month{};
  shared_ptr<string> name{};
  shared_ptr<string> nameKey{};
  shared_ptr<double> ratio{};
  shared_ptr<double> rawData{};
  shared_ptr<string> year{};

  GetElecTrendResponseBodyDataLight() {}

  explicit GetElecTrendResponseBodyDataLight(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmissionData) {
      res["carbonEmissionData"] = boost::any(*carbonEmissionData);
    }
    if (dataUnit) {
      res["dataUnit"] = boost::any(*dataUnit);
    }
    if (month) {
      res["month"] = boost::any(*month);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameKey) {
      res["nameKey"] = boost::any(*nameKey);
    }
    if (ratio) {
      res["ratio"] = boost::any(*ratio);
    }
    if (rawData) {
      res["rawData"] = boost::any(*rawData);
    }
    if (year) {
      res["year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmissionData") != m.end() && !m["carbonEmissionData"].empty()) {
      carbonEmissionData = make_shared<double>(boost::any_cast<double>(m["carbonEmissionData"]));
    }
    if (m.find("dataUnit") != m.end() && !m["dataUnit"].empty()) {
      dataUnit = make_shared<string>(boost::any_cast<string>(m["dataUnit"]));
    }
    if (m.find("month") != m.end() && !m["month"].empty()) {
      month = make_shared<long>(boost::any_cast<long>(m["month"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameKey") != m.end() && !m["nameKey"].empty()) {
      nameKey = make_shared<string>(boost::any_cast<string>(m["nameKey"]));
    }
    if (m.find("ratio") != m.end() && !m["ratio"].empty()) {
      ratio = make_shared<double>(boost::any_cast<double>(m["ratio"]));
    }
    if (m.find("rawData") != m.end() && !m["rawData"].empty()) {
      rawData = make_shared<double>(boost::any_cast<double>(m["rawData"]));
    }
    if (m.find("year") != m.end() && !m["year"].empty()) {
      year = make_shared<string>(boost::any_cast<string>(m["year"]));
    }
  }


  virtual ~GetElecTrendResponseBodyDataLight() = default;
};
class GetElecTrendResponseBodyDataNuclear : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmissionData{};
  shared_ptr<string> dataUnit{};
  shared_ptr<long> month{};
  shared_ptr<string> name{};
  shared_ptr<string> nameKey{};
  shared_ptr<double> ratio{};
  shared_ptr<double> rawData{};
  shared_ptr<string> year{};

  GetElecTrendResponseBodyDataNuclear() {}

  explicit GetElecTrendResponseBodyDataNuclear(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmissionData) {
      res["carbonEmissionData"] = boost::any(*carbonEmissionData);
    }
    if (dataUnit) {
      res["dataUnit"] = boost::any(*dataUnit);
    }
    if (month) {
      res["month"] = boost::any(*month);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameKey) {
      res["nameKey"] = boost::any(*nameKey);
    }
    if (ratio) {
      res["ratio"] = boost::any(*ratio);
    }
    if (rawData) {
      res["rawData"] = boost::any(*rawData);
    }
    if (year) {
      res["year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmissionData") != m.end() && !m["carbonEmissionData"].empty()) {
      carbonEmissionData = make_shared<double>(boost::any_cast<double>(m["carbonEmissionData"]));
    }
    if (m.find("dataUnit") != m.end() && !m["dataUnit"].empty()) {
      dataUnit = make_shared<string>(boost::any_cast<string>(m["dataUnit"]));
    }
    if (m.find("month") != m.end() && !m["month"].empty()) {
      month = make_shared<long>(boost::any_cast<long>(m["month"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameKey") != m.end() && !m["nameKey"].empty()) {
      nameKey = make_shared<string>(boost::any_cast<string>(m["nameKey"]));
    }
    if (m.find("ratio") != m.end() && !m["ratio"].empty()) {
      ratio = make_shared<double>(boost::any_cast<double>(m["ratio"]));
    }
    if (m.find("rawData") != m.end() && !m["rawData"].empty()) {
      rawData = make_shared<double>(boost::any_cast<double>(m["rawData"]));
    }
    if (m.find("year") != m.end() && !m["year"].empty()) {
      year = make_shared<string>(boost::any_cast<string>(m["year"]));
    }
  }


  virtual ~GetElecTrendResponseBodyDataNuclear() = default;
};
class GetElecTrendResponseBodyDataRenewing : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmissionData{};
  shared_ptr<string> dataUnit{};
  shared_ptr<long> month{};
  shared_ptr<string> name{};
  shared_ptr<string> nameKey{};
  shared_ptr<double> ratio{};
  shared_ptr<double> rawData{};
  shared_ptr<string> year{};

  GetElecTrendResponseBodyDataRenewing() {}

  explicit GetElecTrendResponseBodyDataRenewing(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmissionData) {
      res["carbonEmissionData"] = boost::any(*carbonEmissionData);
    }
    if (dataUnit) {
      res["dataUnit"] = boost::any(*dataUnit);
    }
    if (month) {
      res["month"] = boost::any(*month);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameKey) {
      res["nameKey"] = boost::any(*nameKey);
    }
    if (ratio) {
      res["ratio"] = boost::any(*ratio);
    }
    if (rawData) {
      res["rawData"] = boost::any(*rawData);
    }
    if (year) {
      res["year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmissionData") != m.end() && !m["carbonEmissionData"].empty()) {
      carbonEmissionData = make_shared<double>(boost::any_cast<double>(m["carbonEmissionData"]));
    }
    if (m.find("dataUnit") != m.end() && !m["dataUnit"].empty()) {
      dataUnit = make_shared<string>(boost::any_cast<string>(m["dataUnit"]));
    }
    if (m.find("month") != m.end() && !m["month"].empty()) {
      month = make_shared<long>(boost::any_cast<long>(m["month"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameKey") != m.end() && !m["nameKey"].empty()) {
      nameKey = make_shared<string>(boost::any_cast<string>(m["nameKey"]));
    }
    if (m.find("ratio") != m.end() && !m["ratio"].empty()) {
      ratio = make_shared<double>(boost::any_cast<double>(m["ratio"]));
    }
    if (m.find("rawData") != m.end() && !m["rawData"].empty()) {
      rawData = make_shared<double>(boost::any_cast<double>(m["rawData"]));
    }
    if (m.find("year") != m.end() && !m["year"].empty()) {
      year = make_shared<string>(boost::any_cast<string>(m["year"]));
    }
  }


  virtual ~GetElecTrendResponseBodyDataRenewing() = default;
};
class GetElecTrendResponseBodyDataUrban : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmissionData{};
  shared_ptr<string> dataUnit{};
  shared_ptr<long> month{};
  shared_ptr<string> name{};
  shared_ptr<string> nameKey{};
  shared_ptr<double> ratio{};
  shared_ptr<double> rawData{};
  shared_ptr<string> year{};

  GetElecTrendResponseBodyDataUrban() {}

  explicit GetElecTrendResponseBodyDataUrban(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmissionData) {
      res["carbonEmissionData"] = boost::any(*carbonEmissionData);
    }
    if (dataUnit) {
      res["dataUnit"] = boost::any(*dataUnit);
    }
    if (month) {
      res["month"] = boost::any(*month);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameKey) {
      res["nameKey"] = boost::any(*nameKey);
    }
    if (ratio) {
      res["ratio"] = boost::any(*ratio);
    }
    if (rawData) {
      res["rawData"] = boost::any(*rawData);
    }
    if (year) {
      res["year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmissionData") != m.end() && !m["carbonEmissionData"].empty()) {
      carbonEmissionData = make_shared<double>(boost::any_cast<double>(m["carbonEmissionData"]));
    }
    if (m.find("dataUnit") != m.end() && !m["dataUnit"].empty()) {
      dataUnit = make_shared<string>(boost::any_cast<string>(m["dataUnit"]));
    }
    if (m.find("month") != m.end() && !m["month"].empty()) {
      month = make_shared<long>(boost::any_cast<long>(m["month"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameKey") != m.end() && !m["nameKey"].empty()) {
      nameKey = make_shared<string>(boost::any_cast<string>(m["nameKey"]));
    }
    if (m.find("ratio") != m.end() && !m["ratio"].empty()) {
      ratio = make_shared<double>(boost::any_cast<double>(m["ratio"]));
    }
    if (m.find("rawData") != m.end() && !m["rawData"].empty()) {
      rawData = make_shared<double>(boost::any_cast<double>(m["rawData"]));
    }
    if (m.find("year") != m.end() && !m["year"].empty()) {
      year = make_shared<string>(boost::any_cast<string>(m["year"]));
    }
  }


  virtual ~GetElecTrendResponseBodyDataUrban() = default;
};
class GetElecTrendResponseBodyDataWater : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmissionData{};
  shared_ptr<string> dataUnit{};
  shared_ptr<long> month{};
  shared_ptr<string> name{};
  shared_ptr<string> nameKey{};
  shared_ptr<double> ratio{};
  shared_ptr<double> rawData{};
  shared_ptr<string> year{};

  GetElecTrendResponseBodyDataWater() {}

  explicit GetElecTrendResponseBodyDataWater(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmissionData) {
      res["carbonEmissionData"] = boost::any(*carbonEmissionData);
    }
    if (dataUnit) {
      res["dataUnit"] = boost::any(*dataUnit);
    }
    if (month) {
      res["month"] = boost::any(*month);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameKey) {
      res["nameKey"] = boost::any(*nameKey);
    }
    if (ratio) {
      res["ratio"] = boost::any(*ratio);
    }
    if (rawData) {
      res["rawData"] = boost::any(*rawData);
    }
    if (year) {
      res["year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmissionData") != m.end() && !m["carbonEmissionData"].empty()) {
      carbonEmissionData = make_shared<double>(boost::any_cast<double>(m["carbonEmissionData"]));
    }
    if (m.find("dataUnit") != m.end() && !m["dataUnit"].empty()) {
      dataUnit = make_shared<string>(boost::any_cast<string>(m["dataUnit"]));
    }
    if (m.find("month") != m.end() && !m["month"].empty()) {
      month = make_shared<long>(boost::any_cast<long>(m["month"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameKey") != m.end() && !m["nameKey"].empty()) {
      nameKey = make_shared<string>(boost::any_cast<string>(m["nameKey"]));
    }
    if (m.find("ratio") != m.end() && !m["ratio"].empty()) {
      ratio = make_shared<double>(boost::any_cast<double>(m["ratio"]));
    }
    if (m.find("rawData") != m.end() && !m["rawData"].empty()) {
      rawData = make_shared<double>(boost::any_cast<double>(m["rawData"]));
    }
    if (m.find("year") != m.end() && !m["year"].empty()) {
      year = make_shared<string>(boost::any_cast<string>(m["year"]));
    }
  }


  virtual ~GetElecTrendResponseBodyDataWater() = default;
};
class GetElecTrendResponseBodyDataWind : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmissionData{};
  shared_ptr<string> dataUnit{};
  shared_ptr<long> month{};
  shared_ptr<string> name{};
  shared_ptr<string> nameKey{};
  shared_ptr<double> ratio{};
  shared_ptr<double> rawData{};
  shared_ptr<string> year{};

  GetElecTrendResponseBodyDataWind() {}

  explicit GetElecTrendResponseBodyDataWind(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmissionData) {
      res["carbonEmissionData"] = boost::any(*carbonEmissionData);
    }
    if (dataUnit) {
      res["dataUnit"] = boost::any(*dataUnit);
    }
    if (month) {
      res["month"] = boost::any(*month);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameKey) {
      res["nameKey"] = boost::any(*nameKey);
    }
    if (ratio) {
      res["ratio"] = boost::any(*ratio);
    }
    if (rawData) {
      res["rawData"] = boost::any(*rawData);
    }
    if (year) {
      res["year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmissionData") != m.end() && !m["carbonEmissionData"].empty()) {
      carbonEmissionData = make_shared<double>(boost::any_cast<double>(m["carbonEmissionData"]));
    }
    if (m.find("dataUnit") != m.end() && !m["dataUnit"].empty()) {
      dataUnit = make_shared<string>(boost::any_cast<string>(m["dataUnit"]));
    }
    if (m.find("month") != m.end() && !m["month"].empty()) {
      month = make_shared<long>(boost::any_cast<long>(m["month"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameKey") != m.end() && !m["nameKey"].empty()) {
      nameKey = make_shared<string>(boost::any_cast<string>(m["nameKey"]));
    }
    if (m.find("ratio") != m.end() && !m["ratio"].empty()) {
      ratio = make_shared<double>(boost::any_cast<double>(m["ratio"]));
    }
    if (m.find("rawData") != m.end() && !m["rawData"].empty()) {
      rawData = make_shared<double>(boost::any_cast<double>(m["rawData"]));
    }
    if (m.find("year") != m.end() && !m["year"].empty()) {
      year = make_shared<string>(boost::any_cast<string>(m["year"]));
    }
  }


  virtual ~GetElecTrendResponseBodyDataWind() = default;
};
class GetElecTrendResponseBodyDataZero : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmissionData{};
  shared_ptr<string> dataUnit{};
  shared_ptr<long> month{};
  shared_ptr<string> name{};
  shared_ptr<string> nameKey{};
  shared_ptr<double> ratio{};
  shared_ptr<double> rawData{};
  shared_ptr<string> year{};

  GetElecTrendResponseBodyDataZero() {}

  explicit GetElecTrendResponseBodyDataZero(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmissionData) {
      res["carbonEmissionData"] = boost::any(*carbonEmissionData);
    }
    if (dataUnit) {
      res["dataUnit"] = boost::any(*dataUnit);
    }
    if (month) {
      res["month"] = boost::any(*month);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (nameKey) {
      res["nameKey"] = boost::any(*nameKey);
    }
    if (ratio) {
      res["ratio"] = boost::any(*ratio);
    }
    if (rawData) {
      res["rawData"] = boost::any(*rawData);
    }
    if (year) {
      res["year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmissionData") != m.end() && !m["carbonEmissionData"].empty()) {
      carbonEmissionData = make_shared<double>(boost::any_cast<double>(m["carbonEmissionData"]));
    }
    if (m.find("dataUnit") != m.end() && !m["dataUnit"].empty()) {
      dataUnit = make_shared<string>(boost::any_cast<string>(m["dataUnit"]));
    }
    if (m.find("month") != m.end() && !m["month"].empty()) {
      month = make_shared<long>(boost::any_cast<long>(m["month"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("nameKey") != m.end() && !m["nameKey"].empty()) {
      nameKey = make_shared<string>(boost::any_cast<string>(m["nameKey"]));
    }
    if (m.find("ratio") != m.end() && !m["ratio"].empty()) {
      ratio = make_shared<double>(boost::any_cast<double>(m["ratio"]));
    }
    if (m.find("rawData") != m.end() && !m["rawData"].empty()) {
      rawData = make_shared<double>(boost::any_cast<double>(m["rawData"]));
    }
    if (m.find("year") != m.end() && !m["year"].empty()) {
      year = make_shared<string>(boost::any_cast<string>(m["year"]));
    }
  }


  virtual ~GetElecTrendResponseBodyDataZero() = default;
};
class GetElecTrendResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetElecTrendResponseBodyDataLight>> light{};
  shared_ptr<vector<GetElecTrendResponseBodyDataNuclear>> nuclear{};
  shared_ptr<vector<GetElecTrendResponseBodyDataRenewing>> renewing{};
  shared_ptr<vector<GetElecTrendResponseBodyDataUrban>> urban{};
  shared_ptr<vector<GetElecTrendResponseBodyDataWater>> water{};
  shared_ptr<vector<GetElecTrendResponseBodyDataWind>> wind{};
  shared_ptr<vector<GetElecTrendResponseBodyDataZero>> zero{};

  GetElecTrendResponseBodyData() {}

  explicit GetElecTrendResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (light) {
      vector<boost::any> temp1;
      for(auto item1:*light){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["light"] = boost::any(temp1);
    }
    if (nuclear) {
      vector<boost::any> temp1;
      for(auto item1:*nuclear){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["nuclear"] = boost::any(temp1);
    }
    if (renewing) {
      vector<boost::any> temp1;
      for(auto item1:*renewing){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["renewing"] = boost::any(temp1);
    }
    if (urban) {
      vector<boost::any> temp1;
      for(auto item1:*urban){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["urban"] = boost::any(temp1);
    }
    if (water) {
      vector<boost::any> temp1;
      for(auto item1:*water){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["water"] = boost::any(temp1);
    }
    if (wind) {
      vector<boost::any> temp1;
      for(auto item1:*wind){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["wind"] = boost::any(temp1);
    }
    if (zero) {
      vector<boost::any> temp1;
      for(auto item1:*zero){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["zero"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("light") != m.end() && !m["light"].empty()) {
      if (typeid(vector<boost::any>) == m["light"].type()) {
        vector<GetElecTrendResponseBodyDataLight> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["light"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetElecTrendResponseBodyDataLight model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        light = make_shared<vector<GetElecTrendResponseBodyDataLight>>(expect1);
      }
    }
    if (m.find("nuclear") != m.end() && !m["nuclear"].empty()) {
      if (typeid(vector<boost::any>) == m["nuclear"].type()) {
        vector<GetElecTrendResponseBodyDataNuclear> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["nuclear"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetElecTrendResponseBodyDataNuclear model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        nuclear = make_shared<vector<GetElecTrendResponseBodyDataNuclear>>(expect1);
      }
    }
    if (m.find("renewing") != m.end() && !m["renewing"].empty()) {
      if (typeid(vector<boost::any>) == m["renewing"].type()) {
        vector<GetElecTrendResponseBodyDataRenewing> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["renewing"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetElecTrendResponseBodyDataRenewing model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        renewing = make_shared<vector<GetElecTrendResponseBodyDataRenewing>>(expect1);
      }
    }
    if (m.find("urban") != m.end() && !m["urban"].empty()) {
      if (typeid(vector<boost::any>) == m["urban"].type()) {
        vector<GetElecTrendResponseBodyDataUrban> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["urban"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetElecTrendResponseBodyDataUrban model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        urban = make_shared<vector<GetElecTrendResponseBodyDataUrban>>(expect1);
      }
    }
    if (m.find("water") != m.end() && !m["water"].empty()) {
      if (typeid(vector<boost::any>) == m["water"].type()) {
        vector<GetElecTrendResponseBodyDataWater> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["water"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetElecTrendResponseBodyDataWater model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        water = make_shared<vector<GetElecTrendResponseBodyDataWater>>(expect1);
      }
    }
    if (m.find("wind") != m.end() && !m["wind"].empty()) {
      if (typeid(vector<boost::any>) == m["wind"].type()) {
        vector<GetElecTrendResponseBodyDataWind> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["wind"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetElecTrendResponseBodyDataWind model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        wind = make_shared<vector<GetElecTrendResponseBodyDataWind>>(expect1);
      }
    }
    if (m.find("zero") != m.end() && !m["zero"].empty()) {
      if (typeid(vector<boost::any>) == m["zero"].type()) {
        vector<GetElecTrendResponseBodyDataZero> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["zero"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetElecTrendResponseBodyDataZero model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zero = make_shared<vector<GetElecTrendResponseBodyDataZero>>(expect1);
      }
    }
  }


  virtual ~GetElecTrendResponseBodyData() = default;
};
class GetElecTrendResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetElecTrendResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetElecTrendResponseBody() {}

  explicit GetElecTrendResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetElecTrendResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetElecTrendResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetElecTrendResponseBody() = default;
};
class GetElecTrendResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetElecTrendResponseBody> body{};

  GetElecTrendResponse() {}

  explicit GetElecTrendResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetElecTrendResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetElecTrendResponseBody>(model1);
      }
    }
  }


  virtual ~GetElecTrendResponse() = default;
};
class GetEmissionSourceConstituteRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> moduleCode{};
  shared_ptr<long> moduleType{};
  shared_ptr<long> year{};

  GetEmissionSourceConstituteRequest() {}

  explicit GetEmissionSourceConstituteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (moduleCode) {
      res["moduleCode"] = boost::any(*moduleCode);
    }
    if (moduleType) {
      res["moduleType"] = boost::any(*moduleType);
    }
    if (year) {
      res["year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("moduleCode") != m.end() && !m["moduleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["moduleCode"]));
    }
    if (m.find("moduleType") != m.end() && !m["moduleType"].empty()) {
      moduleType = make_shared<long>(boost::any_cast<long>(m["moduleType"]));
    }
    if (m.find("year") != m.end() && !m["year"].empty()) {
      year = make_shared<long>(boost::any_cast<long>(m["year"]));
    }
  }


  virtual ~GetEmissionSourceConstituteRequest() = default;
};
class GetEmissionSourceConstituteResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ConstituteItem>> data{};
  shared_ptr<string> requestId{};

  GetEmissionSourceConstituteResponseBody() {}

  explicit GetEmissionSourceConstituteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ConstituteItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ConstituteItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ConstituteItem>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetEmissionSourceConstituteResponseBody() = default;
};
class GetEmissionSourceConstituteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEmissionSourceConstituteResponseBody> body{};

  GetEmissionSourceConstituteResponse() {}

  explicit GetEmissionSourceConstituteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEmissionSourceConstituteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEmissionSourceConstituteResponseBody>(model1);
      }
    }
  }


  virtual ~GetEmissionSourceConstituteResponse() = default;
};
class GetEmissionSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> moduleCode{};
  shared_ptr<long> moduleType{};
  shared_ptr<long> year{};

  GetEmissionSummaryRequest() {}

  explicit GetEmissionSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (moduleCode) {
      res["moduleCode"] = boost::any(*moduleCode);
    }
    if (moduleType) {
      res["moduleType"] = boost::any(*moduleType);
    }
    if (year) {
      res["year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("moduleCode") != m.end() && !m["moduleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["moduleCode"]));
    }
    if (m.find("moduleType") != m.end() && !m["moduleType"].empty()) {
      moduleType = make_shared<long>(boost::any_cast<long>(m["moduleType"]));
    }
    if (m.find("year") != m.end() && !m["year"].empty()) {
      year = make_shared<long>(boost::any_cast<long>(m["year"]));
    }
  }


  virtual ~GetEmissionSummaryRequest() = default;
};
class GetEmissionSummaryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> actualEmissionRatio{};
  shared_ptr<double> carbonSaveConversion{};
  shared_ptr<double> currentPeriodCarbonEmissionData{};
  shared_ptr<bool> isWeighting{};
  shared_ptr<double> lastPeriodCarbonEmissionData{};
  shared_ptr<double> lastPeriodWeightingCarbonEmissionData{};
  shared_ptr<double> ratio{};
  shared_ptr<double> totalCarbonEmissionData{};
  shared_ptr<double> weightingCarbonEmissionData{};
  shared_ptr<double> weightingRatio{};

  GetEmissionSummaryResponseBodyData() {}

  explicit GetEmissionSummaryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualEmissionRatio) {
      res["actualEmissionRatio"] = boost::any(*actualEmissionRatio);
    }
    if (carbonSaveConversion) {
      res["carbonSaveConversion"] = boost::any(*carbonSaveConversion);
    }
    if (currentPeriodCarbonEmissionData) {
      res["currentPeriodCarbonEmissionData"] = boost::any(*currentPeriodCarbonEmissionData);
    }
    if (isWeighting) {
      res["isWeighting"] = boost::any(*isWeighting);
    }
    if (lastPeriodCarbonEmissionData) {
      res["lastPeriodCarbonEmissionData"] = boost::any(*lastPeriodCarbonEmissionData);
    }
    if (lastPeriodWeightingCarbonEmissionData) {
      res["lastPeriodWeightingCarbonEmissionData"] = boost::any(*lastPeriodWeightingCarbonEmissionData);
    }
    if (ratio) {
      res["ratio"] = boost::any(*ratio);
    }
    if (totalCarbonEmissionData) {
      res["totalCarbonEmissionData"] = boost::any(*totalCarbonEmissionData);
    }
    if (weightingCarbonEmissionData) {
      res["weightingCarbonEmissionData"] = boost::any(*weightingCarbonEmissionData);
    }
    if (weightingRatio) {
      res["weightingRatio"] = boost::any(*weightingRatio);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("actualEmissionRatio") != m.end() && !m["actualEmissionRatio"].empty()) {
      actualEmissionRatio = make_shared<double>(boost::any_cast<double>(m["actualEmissionRatio"]));
    }
    if (m.find("carbonSaveConversion") != m.end() && !m["carbonSaveConversion"].empty()) {
      carbonSaveConversion = make_shared<double>(boost::any_cast<double>(m["carbonSaveConversion"]));
    }
    if (m.find("currentPeriodCarbonEmissionData") != m.end() && !m["currentPeriodCarbonEmissionData"].empty()) {
      currentPeriodCarbonEmissionData = make_shared<double>(boost::any_cast<double>(m["currentPeriodCarbonEmissionData"]));
    }
    if (m.find("isWeighting") != m.end() && !m["isWeighting"].empty()) {
      isWeighting = make_shared<bool>(boost::any_cast<bool>(m["isWeighting"]));
    }
    if (m.find("lastPeriodCarbonEmissionData") != m.end() && !m["lastPeriodCarbonEmissionData"].empty()) {
      lastPeriodCarbonEmissionData = make_shared<double>(boost::any_cast<double>(m["lastPeriodCarbonEmissionData"]));
    }
    if (m.find("lastPeriodWeightingCarbonEmissionData") != m.end() && !m["lastPeriodWeightingCarbonEmissionData"].empty()) {
      lastPeriodWeightingCarbonEmissionData = make_shared<double>(boost::any_cast<double>(m["lastPeriodWeightingCarbonEmissionData"]));
    }
    if (m.find("ratio") != m.end() && !m["ratio"].empty()) {
      ratio = make_shared<double>(boost::any_cast<double>(m["ratio"]));
    }
    if (m.find("totalCarbonEmissionData") != m.end() && !m["totalCarbonEmissionData"].empty()) {
      totalCarbonEmissionData = make_shared<double>(boost::any_cast<double>(m["totalCarbonEmissionData"]));
    }
    if (m.find("weightingCarbonEmissionData") != m.end() && !m["weightingCarbonEmissionData"].empty()) {
      weightingCarbonEmissionData = make_shared<double>(boost::any_cast<double>(m["weightingCarbonEmissionData"]));
    }
    if (m.find("weightingRatio") != m.end() && !m["weightingRatio"].empty()) {
      weightingRatio = make_shared<double>(boost::any_cast<double>(m["weightingRatio"]));
    }
  }


  virtual ~GetEmissionSummaryResponseBodyData() = default;
};
class GetEmissionSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetEmissionSummaryResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetEmissionSummaryResponseBody() {}

  explicit GetEmissionSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetEmissionSummaryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetEmissionSummaryResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetEmissionSummaryResponseBody() = default;
};
class GetEmissionSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEmissionSummaryResponseBody> body{};

  GetEmissionSummaryResponse() {}

  explicit GetEmissionSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEmissionSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEmissionSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~GetEmissionSummaryResponse() = default;
};
class GetEpdInventoryConstituteRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> productId{};
  shared_ptr<long> productType{};

  GetEpdInventoryConstituteRequest() {}

  explicit GetEpdInventoryConstituteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (productType) {
      res["productType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["productId"]));
    }
    if (m.find("productType") != m.end() && !m["productType"].empty()) {
      productType = make_shared<long>(boost::any_cast<long>(m["productType"]));
    }
  }


  virtual ~GetEpdInventoryConstituteRequest() = default;
};
class GetEpdInventoryConstituteResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<EpdInventoryConstituteItem>> data{};
  shared_ptr<string> requestId{};

  GetEpdInventoryConstituteResponseBody() {}

  explicit GetEpdInventoryConstituteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<EpdInventoryConstituteItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EpdInventoryConstituteItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<EpdInventoryConstituteItem>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetEpdInventoryConstituteResponseBody() = default;
};
class GetEpdInventoryConstituteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEpdInventoryConstituteResponseBody> body{};

  GetEpdInventoryConstituteResponse() {}

  explicit GetEpdInventoryConstituteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEpdInventoryConstituteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEpdInventoryConstituteResponseBody>(model1);
      }
    }
  }


  virtual ~GetEpdInventoryConstituteResponse() = default;
};
class GetEpdSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> productId{};
  shared_ptr<long> productType{};

  GetEpdSummaryRequest() {}

  explicit GetEpdSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (productType) {
      res["productType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["productId"]));
    }
    if (m.find("productType") != m.end() && !m["productType"].empty()) {
      productType = make_shared<long>(boost::any_cast<long>(m["productType"]));
    }
  }


  virtual ~GetEpdSummaryRequest() = default;
};
class GetEpdSummaryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmission{};
  shared_ptr<string> indicator{};
  shared_ptr<string> key{};
  shared_ptr<string> method{};
  shared_ptr<string> name{};
  shared_ptr<long> num{};
  shared_ptr<string> preUnit{};
  shared_ptr<long> state{};

  GetEpdSummaryResponseBodyData() {}

  explicit GetEpdSummaryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmission) {
      res["carbonEmission"] = boost::any(*carbonEmission);
    }
    if (indicator) {
      res["indicator"] = boost::any(*indicator);
    }
    if (key) {
      res["key"] = boost::any(*key);
    }
    if (method) {
      res["method"] = boost::any(*method);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (num) {
      res["num"] = boost::any(*num);
    }
    if (preUnit) {
      res["preUnit"] = boost::any(*preUnit);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmission") != m.end() && !m["carbonEmission"].empty()) {
      carbonEmission = make_shared<double>(boost::any_cast<double>(m["carbonEmission"]));
    }
    if (m.find("indicator") != m.end() && !m["indicator"].empty()) {
      indicator = make_shared<string>(boost::any_cast<string>(m["indicator"]));
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["key"]));
    }
    if (m.find("method") != m.end() && !m["method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["method"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("num") != m.end() && !m["num"].empty()) {
      num = make_shared<long>(boost::any_cast<long>(m["num"]));
    }
    if (m.find("preUnit") != m.end() && !m["preUnit"].empty()) {
      preUnit = make_shared<string>(boost::any_cast<string>(m["preUnit"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<long>(boost::any_cast<long>(m["state"]));
    }
  }


  virtual ~GetEpdSummaryResponseBodyData() = default;
};
class GetEpdSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetEpdSummaryResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  GetEpdSummaryResponseBody() {}

  explicit GetEpdSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetEpdSummaryResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEpdSummaryResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetEpdSummaryResponseBodyData>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetEpdSummaryResponseBody() = default;
};
class GetEpdSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEpdSummaryResponseBody> body{};

  GetEpdSummaryResponse() {}

  explicit GetEpdSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEpdSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEpdSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~GetEpdSummaryResponse() = default;
};
class GetFootprintListRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> productType{};

  GetFootprintListRequest() {}

  explicit GetFootprintListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (currentPage) {
      res["currentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (productType) {
      res["productType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("currentPage") != m.end() && !m["currentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["currentPage"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("productType") != m.end() && !m["productType"].empty()) {
      productType = make_shared<long>(boost::any_cast<long>(m["productType"]));
    }
  }


  virtual ~GetFootprintListRequest() = default;
};
class GetFootprintListResponseBodyDataRecords : public Darabonba::Model {
public:
  shared_ptr<double> amount{};
  shared_ptr<long> authStatus{};
  shared_ptr<string> checkEndTime{};
  shared_ptr<string> checkStartTime{};
  shared_ptr<string> code{};
  shared_ptr<string> createdBy{};
  shared_ptr<long> id{};
  shared_ptr<long> isDemoModel{};
  shared_ptr<string> lifeCycle{};
  shared_ptr<long> lifeCycleType{};
  shared_ptr<string> name{};
  shared_ptr<string> type{};
  shared_ptr<string> unit{};

  GetFootprintListResponseBodyDataRecords() {}

  explicit GetFootprintListResponseBodyDataRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (amount) {
      res["amount"] = boost::any(*amount);
    }
    if (authStatus) {
      res["authStatus"] = boost::any(*authStatus);
    }
    if (checkEndTime) {
      res["checkEndTime"] = boost::any(*checkEndTime);
    }
    if (checkStartTime) {
      res["checkStartTime"] = boost::any(*checkStartTime);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (createdBy) {
      res["createdBy"] = boost::any(*createdBy);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (isDemoModel) {
      res["isDemoModel"] = boost::any(*isDemoModel);
    }
    if (lifeCycle) {
      res["lifeCycle"] = boost::any(*lifeCycle);
    }
    if (lifeCycleType) {
      res["lifeCycleType"] = boost::any(*lifeCycleType);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (unit) {
      res["unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("amount") != m.end() && !m["amount"].empty()) {
      amount = make_shared<double>(boost::any_cast<double>(m["amount"]));
    }
    if (m.find("authStatus") != m.end() && !m["authStatus"].empty()) {
      authStatus = make_shared<long>(boost::any_cast<long>(m["authStatus"]));
    }
    if (m.find("checkEndTime") != m.end() && !m["checkEndTime"].empty()) {
      checkEndTime = make_shared<string>(boost::any_cast<string>(m["checkEndTime"]));
    }
    if (m.find("checkStartTime") != m.end() && !m["checkStartTime"].empty()) {
      checkStartTime = make_shared<string>(boost::any_cast<string>(m["checkStartTime"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("createdBy") != m.end() && !m["createdBy"].empty()) {
      createdBy = make_shared<string>(boost::any_cast<string>(m["createdBy"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["id"]));
    }
    if (m.find("isDemoModel") != m.end() && !m["isDemoModel"].empty()) {
      isDemoModel = make_shared<long>(boost::any_cast<long>(m["isDemoModel"]));
    }
    if (m.find("lifeCycle") != m.end() && !m["lifeCycle"].empty()) {
      lifeCycle = make_shared<string>(boost::any_cast<string>(m["lifeCycle"]));
    }
    if (m.find("lifeCycleType") != m.end() && !m["lifeCycleType"].empty()) {
      lifeCycleType = make_shared<long>(boost::any_cast<long>(m["lifeCycleType"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("unit") != m.end() && !m["unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["unit"]));
    }
  }


  virtual ~GetFootprintListResponseBodyDataRecords() = default;
};
class GetFootprintListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<GetFootprintListResponseBodyDataRecords>> records{};
  shared_ptr<long> total{};
  shared_ptr<long> totalPage{};

  GetFootprintListResponseBodyData() {}

  explicit GetFootprintListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["currentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["records"] = boost::any(temp1);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    if (totalPage) {
      res["totalPage"] = boost::any(*totalPage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currentPage") != m.end() && !m["currentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["currentPage"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("records") != m.end() && !m["records"].empty()) {
      if (typeid(vector<boost::any>) == m["records"].type()) {
        vector<GetFootprintListResponseBodyDataRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetFootprintListResponseBodyDataRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<GetFootprintListResponseBodyDataRecords>>(expect1);
      }
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
    if (m.find("totalPage") != m.end() && !m["totalPage"].empty()) {
      totalPage = make_shared<long>(boost::any_cast<long>(m["totalPage"]));
    }
  }


  virtual ~GetFootprintListResponseBodyData() = default;
};
class GetFootprintListResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetFootprintListResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetFootprintListResponseBody() {}

  explicit GetFootprintListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetFootprintListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetFootprintListResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetFootprintListResponseBody() = default;
};
class GetFootprintListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFootprintListResponseBody> body{};

  GetFootprintListResponse() {}

  explicit GetFootprintListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFootprintListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFootprintListResponseBody>(model1);
      }
    }
  }


  virtual ~GetFootprintListResponse() = default;
};
class GetGasConstituteRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> moduleCode{};
  shared_ptr<long> moduleType{};
  shared_ptr<long> year{};

  GetGasConstituteRequest() {}

  explicit GetGasConstituteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (moduleCode) {
      res["moduleCode"] = boost::any(*moduleCode);
    }
    if (moduleType) {
      res["moduleType"] = boost::any(*moduleType);
    }
    if (year) {
      res["year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("moduleCode") != m.end() && !m["moduleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["moduleCode"]));
    }
    if (m.find("moduleType") != m.end() && !m["moduleType"].empty()) {
      moduleType = make_shared<long>(boost::any_cast<long>(m["moduleType"]));
    }
    if (m.find("year") != m.end() && !m["year"].empty()) {
      year = make_shared<long>(boost::any_cast<long>(m["year"]));
    }
  }


  virtual ~GetGasConstituteRequest() = default;
};
class GetGasConstituteResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmissionData{};
  shared_ptr<double> gasEmissionData{};
  shared_ptr<string> name{};
  shared_ptr<double> ratio{};
  shared_ptr<long> type{};

  GetGasConstituteResponseBodyData() {}

  explicit GetGasConstituteResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmissionData) {
      res["carbonEmissionData"] = boost::any(*carbonEmissionData);
    }
    if (gasEmissionData) {
      res["gasEmissionData"] = boost::any(*gasEmissionData);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (ratio) {
      res["ratio"] = boost::any(*ratio);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmissionData") != m.end() && !m["carbonEmissionData"].empty()) {
      carbonEmissionData = make_shared<double>(boost::any_cast<double>(m["carbonEmissionData"]));
    }
    if (m.find("gasEmissionData") != m.end() && !m["gasEmissionData"].empty()) {
      gasEmissionData = make_shared<double>(boost::any_cast<double>(m["gasEmissionData"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("ratio") != m.end() && !m["ratio"].empty()) {
      ratio = make_shared<double>(boost::any_cast<double>(m["ratio"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["type"]));
    }
  }


  virtual ~GetGasConstituteResponseBodyData() = default;
};
class GetGasConstituteResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetGasConstituteResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  GetGasConstituteResponseBody() {}

  explicit GetGasConstituteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetGasConstituteResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGasConstituteResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetGasConstituteResponseBodyData>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetGasConstituteResponseBody() = default;
};
class GetGasConstituteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetGasConstituteResponseBody> body{};

  GetGasConstituteResponse() {}

  explicit GetGasConstituteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGasConstituteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGasConstituteResponseBody>(model1);
      }
    }
  }


  virtual ~GetGasConstituteResponse() = default;
};
class GetGwpBenchmarkListRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> productId{};
  shared_ptr<long> productType{};

  GetGwpBenchmarkListRequest() {}

  explicit GetGwpBenchmarkListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (productType) {
      res["productType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["productId"]));
    }
    if (m.find("productType") != m.end() && !m["productType"].empty()) {
      productType = make_shared<long>(boost::any_cast<long>(m["productType"]));
    }
  }


  virtual ~GetGwpBenchmarkListRequest() = default;
};
class GetGwpBenchmarkListResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<double> activeReduction{};
  shared_ptr<double> benchmarkEmission{};
  shared_ptr<string> benchmarkName{};
  shared_ptr<double> carbonEmission{};
  shared_ptr<string> name{};
  shared_ptr<string> percent{};

  GetGwpBenchmarkListResponseBodyDataItems() {}

  explicit GetGwpBenchmarkListResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeReduction) {
      res["activeReduction"] = boost::any(*activeReduction);
    }
    if (benchmarkEmission) {
      res["benchmarkEmission"] = boost::any(*benchmarkEmission);
    }
    if (benchmarkName) {
      res["benchmarkName"] = boost::any(*benchmarkName);
    }
    if (carbonEmission) {
      res["carbonEmission"] = boost::any(*carbonEmission);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (percent) {
      res["percent"] = boost::any(*percent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("activeReduction") != m.end() && !m["activeReduction"].empty()) {
      activeReduction = make_shared<double>(boost::any_cast<double>(m["activeReduction"]));
    }
    if (m.find("benchmarkEmission") != m.end() && !m["benchmarkEmission"].empty()) {
      benchmarkEmission = make_shared<double>(boost::any_cast<double>(m["benchmarkEmission"]));
    }
    if (m.find("benchmarkName") != m.end() && !m["benchmarkName"].empty()) {
      benchmarkName = make_shared<string>(boost::any_cast<string>(m["benchmarkName"]));
    }
    if (m.find("carbonEmission") != m.end() && !m["carbonEmission"].empty()) {
      carbonEmission = make_shared<double>(boost::any_cast<double>(m["carbonEmission"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("percent") != m.end() && !m["percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["percent"]));
    }
  }


  virtual ~GetGwpBenchmarkListResponseBodyDataItems() = default;
};
class GetGwpBenchmarkListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetGwpBenchmarkListResponseBodyDataItems>> items{};
  shared_ptr<string> unit{};

  GetGwpBenchmarkListResponseBodyData() {}

  explicit GetGwpBenchmarkListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (unit) {
      res["unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<GetGwpBenchmarkListResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGwpBenchmarkListResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<GetGwpBenchmarkListResponseBodyDataItems>>(expect1);
      }
    }
    if (m.find("unit") != m.end() && !m["unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["unit"]));
    }
  }


  virtual ~GetGwpBenchmarkListResponseBodyData() = default;
};
class GetGwpBenchmarkListResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetGwpBenchmarkListResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetGwpBenchmarkListResponseBody() {}

  explicit GetGwpBenchmarkListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetGwpBenchmarkListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetGwpBenchmarkListResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetGwpBenchmarkListResponseBody() = default;
};
class GetGwpBenchmarkListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetGwpBenchmarkListResponseBody> body{};

  GetGwpBenchmarkListResponse() {}

  explicit GetGwpBenchmarkListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGwpBenchmarkListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGwpBenchmarkListResponseBody>(model1);
      }
    }
  }


  virtual ~GetGwpBenchmarkListResponse() = default;
};
class GetGwpBenchmarkSummaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> productId{};
  shared_ptr<long> productType{};

  GetGwpBenchmarkSummaryRequest() {}

  explicit GetGwpBenchmarkSummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (productType) {
      res["productType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["productId"]));
    }
    if (m.find("productType") != m.end() && !m["productType"].empty()) {
      productType = make_shared<long>(boost::any_cast<long>(m["productType"]));
    }
  }


  virtual ~GetGwpBenchmarkSummaryRequest() = default;
};
class GetGwpBenchmarkSummaryResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> percent{};
  shared_ptr<long> quantity{};
  shared_ptr<string> unit{};

  GetGwpBenchmarkSummaryResponseBodyDataItems() {}

  explicit GetGwpBenchmarkSummaryResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (percent) {
      res["percent"] = boost::any(*percent);
    }
    if (quantity) {
      res["quantity"] = boost::any(*quantity);
    }
    if (unit) {
      res["unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("percent") != m.end() && !m["percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["percent"]));
    }
    if (m.find("quantity") != m.end() && !m["quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["quantity"]));
    }
    if (m.find("unit") != m.end() && !m["unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["unit"]));
    }
  }


  virtual ~GetGwpBenchmarkSummaryResponseBodyDataItems() = default;
};
class GetGwpBenchmarkSummaryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetGwpBenchmarkSummaryResponseBodyDataItems>> items{};
  shared_ptr<long> quantity{};
  shared_ptr<string> unit{};

  GetGwpBenchmarkSummaryResponseBodyData() {}

  explicit GetGwpBenchmarkSummaryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (quantity) {
      res["quantity"] = boost::any(*quantity);
    }
    if (unit) {
      res["unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<GetGwpBenchmarkSummaryResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGwpBenchmarkSummaryResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<GetGwpBenchmarkSummaryResponseBodyDataItems>>(expect1);
      }
    }
    if (m.find("quantity") != m.end() && !m["quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["quantity"]));
    }
    if (m.find("unit") != m.end() && !m["unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["unit"]));
    }
  }


  virtual ~GetGwpBenchmarkSummaryResponseBodyData() = default;
};
class GetGwpBenchmarkSummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetGwpBenchmarkSummaryResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetGwpBenchmarkSummaryResponseBody() {}

  explicit GetGwpBenchmarkSummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetGwpBenchmarkSummaryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetGwpBenchmarkSummaryResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetGwpBenchmarkSummaryResponseBody() = default;
};
class GetGwpBenchmarkSummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetGwpBenchmarkSummaryResponseBody> body{};

  GetGwpBenchmarkSummaryResponse() {}

  explicit GetGwpBenchmarkSummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGwpBenchmarkSummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGwpBenchmarkSummaryResponseBody>(model1);
      }
    }
  }


  virtual ~GetGwpBenchmarkSummaryResponse() = default;
};
class GetGwpInventoryConstituteRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> productId{};
  shared_ptr<long> productType{};

  GetGwpInventoryConstituteRequest() {}

  explicit GetGwpInventoryConstituteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (productType) {
      res["productType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["productId"]));
    }
    if (m.find("productType") != m.end() && !m["productType"].empty()) {
      productType = make_shared<long>(boost::any_cast<long>(m["productType"]));
    }
  }


  virtual ~GetGwpInventoryConstituteRequest() = default;
};
class GetGwpInventoryConstituteResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GwpInventoryConstitute>> byResourceType{};
  shared_ptr<double> carbonEmission{};
  shared_ptr<vector<GwpInventoryConstitute>> items{};
  shared_ptr<string> name{};
  shared_ptr<string> unit{};

  GetGwpInventoryConstituteResponseBodyData() {}

  explicit GetGwpInventoryConstituteResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (byResourceType) {
      vector<boost::any> temp1;
      for(auto item1:*byResourceType){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["byResourceType"] = boost::any(temp1);
    }
    if (carbonEmission) {
      res["carbonEmission"] = boost::any(*carbonEmission);
    }
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (unit) {
      res["unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("byResourceType") != m.end() && !m["byResourceType"].empty()) {
      if (typeid(vector<boost::any>) == m["byResourceType"].type()) {
        vector<GwpInventoryConstitute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["byResourceType"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GwpInventoryConstitute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        byResourceType = make_shared<vector<GwpInventoryConstitute>>(expect1);
      }
    }
    if (m.find("carbonEmission") != m.end() && !m["carbonEmission"].empty()) {
      carbonEmission = make_shared<double>(boost::any_cast<double>(m["carbonEmission"]));
    }
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<GwpInventoryConstitute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GwpInventoryConstitute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<GwpInventoryConstitute>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("unit") != m.end() && !m["unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["unit"]));
    }
  }


  virtual ~GetGwpInventoryConstituteResponseBodyData() = default;
};
class GetGwpInventoryConstituteResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetGwpInventoryConstituteResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetGwpInventoryConstituteResponseBody() {}

  explicit GetGwpInventoryConstituteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetGwpInventoryConstituteResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetGwpInventoryConstituteResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetGwpInventoryConstituteResponseBody() = default;
};
class GetGwpInventoryConstituteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetGwpInventoryConstituteResponseBody> body{};

  GetGwpInventoryConstituteResponse() {}

  explicit GetGwpInventoryConstituteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGwpInventoryConstituteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGwpInventoryConstituteResponseBody>(model1);
      }
    }
  }


  virtual ~GetGwpInventoryConstituteResponse() = default;
};
class GetGwpInventorySummaryRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> productId{};
  shared_ptr<long> productType{};

  GetGwpInventorySummaryRequest() {}

  explicit GetGwpInventorySummaryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (productType) {
      res["productType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["productId"]));
    }
    if (m.find("productType") != m.end() && !m["productType"].empty()) {
      productType = make_shared<long>(boost::any_cast<long>(m["productType"]));
    }
  }


  virtual ~GetGwpInventorySummaryRequest() = default;
};
class GetGwpInventorySummaryResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> percent{};
  shared_ptr<double> quantity{};
  shared_ptr<string> unit{};

  GetGwpInventorySummaryResponseBodyDataItems() {}

  explicit GetGwpInventorySummaryResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (percent) {
      res["percent"] = boost::any(*percent);
    }
    if (quantity) {
      res["quantity"] = boost::any(*quantity);
    }
    if (unit) {
      res["unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("percent") != m.end() && !m["percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["percent"]));
    }
    if (m.find("quantity") != m.end() && !m["quantity"].empty()) {
      quantity = make_shared<double>(boost::any_cast<double>(m["quantity"]));
    }
    if (m.find("unit") != m.end() && !m["unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["unit"]));
    }
  }


  virtual ~GetGwpInventorySummaryResponseBodyDataItems() = default;
};
class GetGwpInventorySummaryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetGwpInventorySummaryResponseBodyDataItems>> items{};
  shared_ptr<double> quantity{};
  shared_ptr<long> resultGenerateTime{};
  shared_ptr<string> unit{};

  GetGwpInventorySummaryResponseBodyData() {}

  explicit GetGwpInventorySummaryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (quantity) {
      res["quantity"] = boost::any(*quantity);
    }
    if (resultGenerateTime) {
      res["resultGenerateTime"] = boost::any(*resultGenerateTime);
    }
    if (unit) {
      res["unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<GetGwpInventorySummaryResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGwpInventorySummaryResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<GetGwpInventorySummaryResponseBodyDataItems>>(expect1);
      }
    }
    if (m.find("quantity") != m.end() && !m["quantity"].empty()) {
      quantity = make_shared<double>(boost::any_cast<double>(m["quantity"]));
    }
    if (m.find("resultGenerateTime") != m.end() && !m["resultGenerateTime"].empty()) {
      resultGenerateTime = make_shared<long>(boost::any_cast<long>(m["resultGenerateTime"]));
    }
    if (m.find("unit") != m.end() && !m["unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["unit"]));
    }
  }


  virtual ~GetGwpInventorySummaryResponseBodyData() = default;
};
class GetGwpInventorySummaryResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetGwpInventorySummaryResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetGwpInventorySummaryResponseBody() {}

  explicit GetGwpInventorySummaryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetGwpInventorySummaryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetGwpInventorySummaryResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetGwpInventorySummaryResponseBody() = default;
};
class GetGwpInventorySummaryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetGwpInventorySummaryResponseBody> body{};

  GetGwpInventorySummaryResponse() {}

  explicit GetGwpInventorySummaryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGwpInventorySummaryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGwpInventorySummaryResponseBody>(model1);
      }
    }
  }


  virtual ~GetGwpInventorySummaryResponse() = default;
};
class GetInventoryListRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> emissionType{};
  shared_ptr<string> group{};
  shared_ptr<string> methodType{};
  shared_ptr<long> productId{};
  shared_ptr<long> productType{};

  GetInventoryListRequest() {}

  explicit GetInventoryListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (emissionType) {
      res["emissionType"] = boost::any(*emissionType);
    }
    if (group) {
      res["group"] = boost::any(*group);
    }
    if (methodType) {
      res["methodType"] = boost::any(*methodType);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (productType) {
      res["productType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("emissionType") != m.end() && !m["emissionType"].empty()) {
      emissionType = make_shared<string>(boost::any_cast<string>(m["emissionType"]));
    }
    if (m.find("group") != m.end() && !m["group"].empty()) {
      group = make_shared<string>(boost::any_cast<string>(m["group"]));
    }
    if (m.find("methodType") != m.end() && !m["methodType"].empty()) {
      methodType = make_shared<string>(boost::any_cast<string>(m["methodType"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["productId"]));
    }
    if (m.find("productType") != m.end() && !m["productType"].empty()) {
      productType = make_shared<long>(boost::any_cast<long>(m["productType"]));
    }
  }


  virtual ~GetInventoryListRequest() = default;
};
class GetInventoryListResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<double> carbonEmission{};
  shared_ptr<string> name{};
  shared_ptr<string> percent{};
  shared_ptr<string> processName{};

  GetInventoryListResponseBodyDataItems() {}

  explicit GetInventoryListResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (carbonEmission) {
      res["carbonEmission"] = boost::any(*carbonEmission);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (percent) {
      res["percent"] = boost::any(*percent);
    }
    if (processName) {
      res["processName"] = boost::any(*processName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("carbonEmission") != m.end() && !m["carbonEmission"].empty()) {
      carbonEmission = make_shared<double>(boost::any_cast<double>(m["carbonEmission"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("percent") != m.end() && !m["percent"].empty()) {
      percent = make_shared<string>(boost::any_cast<string>(m["percent"]));
    }
    if (m.find("processName") != m.end() && !m["processName"].empty()) {
      processName = make_shared<string>(boost::any_cast<string>(m["processName"]));
    }
  }


  virtual ~GetInventoryListResponseBodyDataItems() = default;
};
class GetInventoryListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetInventoryListResponseBodyDataItems>> items{};
  shared_ptr<string> productUnit{};
  shared_ptr<string> unit{};

  GetInventoryListResponseBodyData() {}

  explicit GetInventoryListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (items) {
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["items"] = boost::any(temp1);
    }
    if (productUnit) {
      res["productUnit"] = boost::any(*productUnit);
    }
    if (unit) {
      res["unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(vector<boost::any>) == m["items"].type()) {
        vector<GetInventoryListResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetInventoryListResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<GetInventoryListResponseBodyDataItems>>(expect1);
      }
    }
    if (m.find("productUnit") != m.end() && !m["productUnit"].empty()) {
      productUnit = make_shared<string>(boost::any_cast<string>(m["productUnit"]));
    }
    if (m.find("unit") != m.end() && !m["unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["unit"]));
    }
  }


  virtual ~GetInventoryListResponseBodyData() = default;
};
class GetInventoryListResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetInventoryListResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetInventoryListResponseBody() {}

  explicit GetInventoryListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetInventoryListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetInventoryListResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetInventoryListResponseBody() = default;
};
class GetInventoryListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInventoryListResponseBody> body{};

  GetInventoryListResponse() {}

  explicit GetInventoryListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInventoryListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInventoryListResponseBody>(model1);
      }
    }
  }


  virtual ~GetInventoryListResponse() = default;
};
class GetOrgAndFactoryResponseBodyDataFactoryList : public Darabonba::Model {
public:
  shared_ptr<string> factoryId{};
  shared_ptr<string> factoryName{};

  GetOrgAndFactoryResponseBodyDataFactoryList() {}

  explicit GetOrgAndFactoryResponseBodyDataFactoryList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (factoryId) {
      res["factoryId"] = boost::any(*factoryId);
    }
    if (factoryName) {
      res["factoryName"] = boost::any(*factoryName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("factoryId") != m.end() && !m["factoryId"].empty()) {
      factoryId = make_shared<string>(boost::any_cast<string>(m["factoryId"]));
    }
    if (m.find("factoryName") != m.end() && !m["factoryName"].empty()) {
      factoryName = make_shared<string>(boost::any_cast<string>(m["factoryName"]));
    }
  }


  virtual ~GetOrgAndFactoryResponseBodyDataFactoryList() = default;
};
class GetOrgAndFactoryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> aliyunPk{};
  shared_ptr<vector<GetOrgAndFactoryResponseBodyDataFactoryList>> factoryList{};
  shared_ptr<string> organizationId{};
  shared_ptr<string> organizationName{};

  GetOrgAndFactoryResponseBodyData() {}

  explicit GetOrgAndFactoryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunPk) {
      res["aliyunPk"] = boost::any(*aliyunPk);
    }
    if (factoryList) {
      vector<boost::any> temp1;
      for(auto item1:*factoryList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["factoryList"] = boost::any(temp1);
    }
    if (organizationId) {
      res["organizationId"] = boost::any(*organizationId);
    }
    if (organizationName) {
      res["organizationName"] = boost::any(*organizationName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("aliyunPk") != m.end() && !m["aliyunPk"].empty()) {
      aliyunPk = make_shared<string>(boost::any_cast<string>(m["aliyunPk"]));
    }
    if (m.find("factoryList") != m.end() && !m["factoryList"].empty()) {
      if (typeid(vector<boost::any>) == m["factoryList"].type()) {
        vector<GetOrgAndFactoryResponseBodyDataFactoryList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["factoryList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOrgAndFactoryResponseBodyDataFactoryList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        factoryList = make_shared<vector<GetOrgAndFactoryResponseBodyDataFactoryList>>(expect1);
      }
    }
    if (m.find("organizationId") != m.end() && !m["organizationId"].empty()) {
      organizationId = make_shared<string>(boost::any_cast<string>(m["organizationId"]));
    }
    if (m.find("organizationName") != m.end() && !m["organizationName"].empty()) {
      organizationName = make_shared<string>(boost::any_cast<string>(m["organizationName"]));
    }
  }


  virtual ~GetOrgAndFactoryResponseBodyData() = default;
};
class GetOrgAndFactoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetOrgAndFactoryResponseBodyData>> data{};
  shared_ptr<long> httpCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetOrgAndFactoryResponseBody() {}

  explicit GetOrgAndFactoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (httpCode) {
      res["httpCode"] = boost::any(*httpCode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetOrgAndFactoryResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOrgAndFactoryResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetOrgAndFactoryResponseBodyData>>(expect1);
      }
    }
    if (m.find("httpCode") != m.end() && !m["httpCode"].empty()) {
      httpCode = make_shared<long>(boost::any_cast<long>(m["httpCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetOrgAndFactoryResponseBody() = default;
};
class GetOrgAndFactoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOrgAndFactoryResponseBody> body{};

  GetOrgAndFactoryResponse() {}

  explicit GetOrgAndFactoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOrgAndFactoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOrgAndFactoryResponseBody>(model1);
      }
    }
  }


  virtual ~GetOrgAndFactoryResponse() = default;
};
class GetOrgConstituteRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> moduleCode{};
  shared_ptr<long> moduleType{};
  shared_ptr<long> year{};

  GetOrgConstituteRequest() {}

  explicit GetOrgConstituteRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (moduleCode) {
      res["moduleCode"] = boost::any(*moduleCode);
    }
    if (moduleType) {
      res["moduleType"] = boost::any(*moduleType);
    }
    if (year) {
      res["year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("moduleCode") != m.end() && !m["moduleCode"].empty()) {
      moduleCode = make_shared<string>(boost::any_cast<string>(m["moduleCode"]));
    }
    if (m.find("moduleType") != m.end() && !m["moduleType"].empty()) {
      moduleType = make_shared<long>(boost::any_cast<long>(m["moduleType"]));
    }
    if (m.find("year") != m.end() && !m["year"].empty()) {
      year = make_shared<long>(boost::any_cast<long>(m["year"]));
    }
  }


  virtual ~GetOrgConstituteRequest() = default;
};
class GetOrgConstituteResponseBody : public Darabonba::Model {
public:
  shared_ptr<OrgEmission> data{};
  shared_ptr<string> requestId{};

  GetOrgConstituteResponseBody() {}

  explicit GetOrgConstituteResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        OrgEmission model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<OrgEmission>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetOrgConstituteResponseBody() = default;
};
class GetOrgConstituteResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOrgConstituteResponseBody> body{};

  GetOrgConstituteResponse() {}

  explicit GetOrgConstituteResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOrgConstituteResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOrgConstituteResponseBody>(model1);
      }
    }
  }


  virtual ~GetOrgConstituteResponse() = default;
};
class GetPcrInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> productId{};
  shared_ptr<long> productType{};

  GetPcrInfoRequest() {}

  explicit GetPcrInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (productType) {
      res["productType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<string>(boost::any_cast<string>(m["productId"]));
    }
    if (m.find("productType") != m.end() && !m["productType"].empty()) {
      productType = make_shared<long>(boost::any_cast<long>(m["productType"]));
    }
  }


  virtual ~GetPcrInfoRequest() = default;
};
class GetPcrInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> name{};
  shared_ptr<string> url{};

  GetPcrInfoResponseBodyData() {}

  explicit GetPcrInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetPcrInfoResponseBodyData() = default;
};
class GetPcrInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPcrInfoResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetPcrInfoResponseBody() {}

  explicit GetPcrInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetPcrInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetPcrInfoResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetPcrInfoResponseBody() = default;
};
class GetPcrInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPcrInfoResponseBody> body{};

  GetPcrInfoResponse() {}

  explicit GetPcrInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPcrInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPcrInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetPcrInfoResponse() = default;
};
class GetReductionProposalRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> dataQualityEvaluationType{};
  shared_ptr<long> productId{};
  shared_ptr<long> productType{};

  GetReductionProposalRequest() {}

  explicit GetReductionProposalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (dataQualityEvaluationType) {
      res["dataQualityEvaluationType"] = boost::any(*dataQualityEvaluationType);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (productType) {
      res["productType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("dataQualityEvaluationType") != m.end() && !m["dataQualityEvaluationType"].empty()) {
      dataQualityEvaluationType = make_shared<long>(boost::any_cast<long>(m["dataQualityEvaluationType"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["productId"]));
    }
    if (m.find("productType") != m.end() && !m["productType"].empty()) {
      productType = make_shared<long>(boost::any_cast<long>(m["productType"]));
    }
  }


  virtual ~GetReductionProposalRequest() = default;
};
class GetReductionProposalResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> reduction{};
  shared_ptr<string> reductionEvaluation{};

  GetReductionProposalResponseBodyData() {}

  explicit GetReductionProposalResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (reduction) {
      res["reduction"] = boost::any(*reduction);
    }
    if (reductionEvaluation) {
      res["reductionEvaluation"] = boost::any(*reductionEvaluation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("reduction") != m.end() && !m["reduction"].empty()) {
      reduction = make_shared<string>(boost::any_cast<string>(m["reduction"]));
    }
    if (m.find("reductionEvaluation") != m.end() && !m["reductionEvaluation"].empty()) {
      reductionEvaluation = make_shared<string>(boost::any_cast<string>(m["reductionEvaluation"]));
    }
  }


  virtual ~GetReductionProposalResponseBodyData() = default;
};
class GetReductionProposalResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetReductionProposalResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetReductionProposalResponseBody() {}

  explicit GetReductionProposalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetReductionProposalResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetReductionProposalResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetReductionProposalResponseBody() = default;
};
class GetReductionProposalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetReductionProposalResponseBody> body{};

  GetReductionProposalResponse() {}

  explicit GetReductionProposalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetReductionProposalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetReductionProposalResponseBody>(model1);
      }
    }
  }


  virtual ~GetReductionProposalResponse() = default;
};
class GetVLExtractionResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetVLExtractionResultRequest() {}

  explicit GetVLExtractionResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~GetVLExtractionResultRequest() = default;
};
class GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence : public Darabonba::Model {
public:
  shared_ptr<double> keyConfidence{};
  shared_ptr<double> valueConfidence{};

  GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence() {}

  explicit GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyConfidence) {
      res["keyConfidence"] = boost::any(*keyConfidence);
    }
    if (valueConfidence) {
      res["valueConfidence"] = boost::any(*valueConfidence);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keyConfidence") != m.end() && !m["keyConfidence"].empty()) {
      keyConfidence = make_shared<double>(boost::any_cast<double>(m["keyConfidence"]));
    }
    if (m.find("valueConfidence") != m.end() && !m["valueConfidence"].empty()) {
      valueConfidence = make_shared<double>(boost::any_cast<double>(m["valueConfidence"]));
    }
  }


  virtual ~GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence() = default;
};
class GetVLExtractionResultResponseBodyDataKvListInfoContext : public Darabonba::Model {
public:
  shared_ptr<GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence> confidence{};
  shared_ptr<vector<ContentItem>> key{};
  shared_ptr<vector<ContentItem>> value{};

  GetVLExtractionResultResponseBodyDataKvListInfoContext() {}

  explicit GetVLExtractionResultResponseBodyDataKvListInfoContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidence) {
      res["confidence"] = confidence ? boost::any(confidence->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (key) {
      vector<boost::any> temp1;
      for(auto item1:*key){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["key"] = boost::any(temp1);
    }
    if (value) {
      vector<boost::any> temp1;
      for(auto item1:*value){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["value"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("confidence") != m.end() && !m["confidence"].empty()) {
      if (typeid(map<string, boost::any>) == m["confidence"].type()) {
        GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["confidence"]));
        confidence = make_shared<GetVLExtractionResultResponseBodyDataKvListInfoContextConfidence>(model1);
      }
    }
    if (m.find("key") != m.end() && !m["key"].empty()) {
      if (typeid(vector<boost::any>) == m["key"].type()) {
        vector<ContentItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["key"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ContentItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        key = make_shared<vector<ContentItem>>(expect1);
      }
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      if (typeid(vector<boost::any>) == m["value"].type()) {
        vector<ContentItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["value"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ContentItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        value = make_shared<vector<ContentItem>>(expect1);
      }
    }
  }


  virtual ~GetVLExtractionResultResponseBodyDataKvListInfoContext() = default;
};
class GetVLExtractionResultResponseBodyDataKvListInfo : public Darabonba::Model {
public:
  shared_ptr<GetVLExtractionResultResponseBodyDataKvListInfoContext> context{};
  shared_ptr<string> keyName{};
  shared_ptr<string> keyValue{};

  GetVLExtractionResultResponseBodyDataKvListInfo() {}

  explicit GetVLExtractionResultResponseBodyDataKvListInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (context) {
      res["context"] = context ? boost::any(context->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (keyName) {
      res["keyName"] = boost::any(*keyName);
    }
    if (keyValue) {
      res["keyValue"] = boost::any(*keyValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("context") != m.end() && !m["context"].empty()) {
      if (typeid(map<string, boost::any>) == m["context"].type()) {
        GetVLExtractionResultResponseBodyDataKvListInfoContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["context"]));
        context = make_shared<GetVLExtractionResultResponseBodyDataKvListInfoContext>(model1);
      }
    }
    if (m.find("keyName") != m.end() && !m["keyName"].empty()) {
      keyName = make_shared<string>(boost::any_cast<string>(m["keyName"]));
    }
    if (m.find("keyValue") != m.end() && !m["keyValue"].empty()) {
      keyValue = make_shared<string>(boost::any_cast<string>(m["keyValue"]));
    }
  }


  virtual ~GetVLExtractionResultResponseBodyDataKvListInfo() = default;
};
class GetVLExtractionResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetVLExtractionResultResponseBodyDataKvListInfo>> kvListInfo{};

  GetVLExtractionResultResponseBodyData() {}

  explicit GetVLExtractionResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (kvListInfo) {
      vector<boost::any> temp1;
      for(auto item1:*kvListInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["kvListInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("kvListInfo") != m.end() && !m["kvListInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["kvListInfo"].type()) {
        vector<GetVLExtractionResultResponseBodyDataKvListInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["kvListInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVLExtractionResultResponseBodyDataKvListInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        kvListInfo = make_shared<vector<GetVLExtractionResultResponseBodyDataKvListInfo>>(expect1);
      }
    }
  }


  virtual ~GetVLExtractionResultResponseBodyData() = default;
};
class GetVLExtractionResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetVLExtractionResultResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetVLExtractionResultResponseBody() {}

  explicit GetVLExtractionResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetVLExtractionResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetVLExtractionResultResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetVLExtractionResultResponseBody() = default;
};
class GetVLExtractionResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVLExtractionResultResponseBody> body{};

  GetVLExtractionResultResponse() {}

  explicit GetVLExtractionResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVLExtractionResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVLExtractionResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetVLExtractionResultResponse() = default;
};
class IsCompletedRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> productId{};
  shared_ptr<long> productType{};

  IsCompletedRequest() {}

  explicit IsCompletedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (productId) {
      res["productId"] = boost::any(*productId);
    }
    if (productType) {
      res["productType"] = boost::any(*productType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("productId") != m.end() && !m["productId"].empty()) {
      productId = make_shared<long>(boost::any_cast<long>(m["productId"]));
    }
    if (m.find("productType") != m.end() && !m["productType"].empty()) {
      productType = make_shared<long>(boost::any_cast<long>(m["productType"]));
    }
  }


  virtual ~IsCompletedRequest() = default;
};
class IsCompletedResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> modifiedTime{};
  shared_ptr<string> taskKey{};
  shared_ptr<string> taskShortResult{};
  shared_ptr<string> taskStatus{};

  IsCompletedResponseBodyData() {}

  explicit IsCompletedResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modifiedTime) {
      res["modifiedTime"] = boost::any(*modifiedTime);
    }
    if (taskKey) {
      res["taskKey"] = boost::any(*taskKey);
    }
    if (taskShortResult) {
      res["taskShortResult"] = boost::any(*taskShortResult);
    }
    if (taskStatus) {
      res["taskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("modifiedTime") != m.end() && !m["modifiedTime"].empty()) {
      modifiedTime = make_shared<long>(boost::any_cast<long>(m["modifiedTime"]));
    }
    if (m.find("taskKey") != m.end() && !m["taskKey"].empty()) {
      taskKey = make_shared<string>(boost::any_cast<string>(m["taskKey"]));
    }
    if (m.find("taskShortResult") != m.end() && !m["taskShortResult"].empty()) {
      taskShortResult = make_shared<string>(boost::any_cast<string>(m["taskShortResult"]));
    }
    if (m.find("taskStatus") != m.end() && !m["taskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["taskStatus"]));
    }
  }


  virtual ~IsCompletedResponseBodyData() = default;
};
class IsCompletedResponseBody : public Darabonba::Model {
public:
  shared_ptr<IsCompletedResponseBodyData> data{};
  shared_ptr<string> requestId{};

  IsCompletedResponseBody() {}

  explicit IsCompletedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        IsCompletedResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<IsCompletedResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~IsCompletedResponseBody() = default;
};
class IsCompletedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<IsCompletedResponseBody> body{};

  IsCompletedResponse() {}

  explicit IsCompletedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IsCompletedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IsCompletedResponseBody>(model1);
      }
    }
  }


  virtual ~IsCompletedResponse() = default;
};
class PushDeviceDataRequestDevices : public Darabonba::Model {
public:
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> recordTime{};

  PushDeviceDataRequestDevices() {}

  explicit PushDeviceDataRequestDevices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (deviceId) {
      res["deviceId"] = boost::any(*deviceId);
    }
    if (recordTime) {
      res["recordTime"] = boost::any(*recordTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("deviceId") != m.end() && !m["deviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["deviceId"]));
    }
    if (m.find("recordTime") != m.end() && !m["recordTime"].empty()) {
      recordTime = make_shared<string>(boost::any_cast<string>(m["recordTime"]));
    }
  }


  virtual ~PushDeviceDataRequestDevices() = default;
};
class PushDeviceDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceType{};
  shared_ptr<vector<PushDeviceDataRequestDevices>> devices{};

  PushDeviceDataRequest() {}

  explicit PushDeviceDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceType) {
      res["deviceType"] = boost::any(*deviceType);
    }
    if (devices) {
      vector<boost::any> temp1;
      for(auto item1:*devices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["devices"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deviceType") != m.end() && !m["deviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["deviceType"]));
    }
    if (m.find("devices") != m.end() && !m["devices"].empty()) {
      if (typeid(vector<boost::any>) == m["devices"].type()) {
        vector<PushDeviceDataRequestDevices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["devices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PushDeviceDataRequestDevices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        devices = make_shared<vector<PushDeviceDataRequestDevices>>(expect1);
      }
    }
  }


  virtual ~PushDeviceDataRequest() = default;
};
class PushDeviceDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};

  PushDeviceDataResponseBody() {}

  explicit PushDeviceDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~PushDeviceDataResponseBody() = default;
};
class PushDeviceDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PushDeviceDataResponseBody> body{};

  PushDeviceDataResponse() {}

  explicit PushDeviceDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PushDeviceDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushDeviceDataResponseBody>(model1);
      }
    }
  }


  virtual ~PushDeviceDataResponse() = default;
};
class PushItemDataRequestItems : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> month{};
  shared_ptr<double> value{};

  PushItemDataRequestItems() {}

  explicit PushItemDataRequestItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (month) {
      res["month"] = boost::any(*month);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("month") != m.end() && !m["month"].empty()) {
      month = make_shared<string>(boost::any_cast<string>(m["month"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["value"]));
    }
  }


  virtual ~PushItemDataRequestItems() = default;
};
class PushItemDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PushItemDataRequestItems> items{};
  shared_ptr<string> year{};

  PushItemDataRequest() {}

  explicit PushItemDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (items) {
      res["items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (year) {
      res["year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("items") != m.end() && !m["items"].empty()) {
      if (typeid(map<string, boost::any>) == m["items"].type()) {
        PushItemDataRequestItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["items"]));
        items = make_shared<PushItemDataRequestItems>(model1);
      }
    }
    if (m.find("year") != m.end() && !m["year"].empty()) {
      year = make_shared<string>(boost::any_cast<string>(m["year"]));
    }
  }


  virtual ~PushItemDataRequest() = default;
};
class PushItemDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  PushItemDataResponseBody() {}

  explicit PushItemDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~PushItemDataResponseBody() = default;
};
class PushItemDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PushItemDataResponseBody> body{};

  PushItemDataResponse() {}

  explicit PushItemDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PushItemDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PushItemDataResponseBody>(model1);
      }
    }
  }


  virtual ~PushItemDataResponse() = default;
};
class RecalculateCarbonEmissionRequest : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> year{};

  RecalculateCarbonEmissionRequest() {}

  explicit RecalculateCarbonEmissionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (year) {
      res["year"] = boost::any(*year);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("year") != m.end() && !m["year"].empty()) {
      year = make_shared<string>(boost::any_cast<string>(m["year"]));
    }
  }


  virtual ~RecalculateCarbonEmissionRequest() = default;
};
class RecalculateCarbonEmissionResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  RecalculateCarbonEmissionResponseBody() {}

  explicit RecalculateCarbonEmissionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~RecalculateCarbonEmissionResponseBody() = default;
};
class RecalculateCarbonEmissionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecalculateCarbonEmissionResponseBody> body{};

  RecalculateCarbonEmissionResponse() {}

  explicit RecalculateCarbonEmissionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecalculateCarbonEmissionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecalculateCarbonEmissionResponseBody>(model1);
      }
    }
  }


  virtual ~RecalculateCarbonEmissionResponse() = default;
};
class SendDocumentAskQuestionRequest : public Darabonba::Model {
public:
  shared_ptr<string> folderId{};
  shared_ptr<string> prompt{};
  shared_ptr<string> sessionId{};

  SendDocumentAskQuestionRequest() {}

  explicit SendDocumentAskQuestionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (folderId) {
      res["folderId"] = boost::any(*folderId);
    }
    if (prompt) {
      res["prompt"] = boost::any(*prompt);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("folderId") != m.end() && !m["folderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["folderId"]));
    }
    if (m.find("prompt") != m.end() && !m["prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["prompt"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
  }


  virtual ~SendDocumentAskQuestionRequest() = default;
};
class SendDocumentAskQuestionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> answer{};
  shared_ptr<vector<string>> document{};

  SendDocumentAskQuestionResponseBodyData() {}

  explicit SendDocumentAskQuestionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answer) {
      res["answer"] = boost::any(*answer);
    }
    if (document) {
      res["document"] = boost::any(*document);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("answer") != m.end() && !m["answer"].empty()) {
      answer = make_shared<string>(boost::any_cast<string>(m["answer"]));
    }
    if (m.find("document") != m.end() && !m["document"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["document"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["document"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      document = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SendDocumentAskQuestionResponseBodyData() = default;
};
class SendDocumentAskQuestionResponseBody : public Darabonba::Model {
public:
  shared_ptr<SendDocumentAskQuestionResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SendDocumentAskQuestionResponseBody() {}

  explicit SendDocumentAskQuestionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        SendDocumentAskQuestionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<SendDocumentAskQuestionResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~SendDocumentAskQuestionResponseBody() = default;
};
class SendDocumentAskQuestionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendDocumentAskQuestionResponseBody> body{};

  SendDocumentAskQuestionResponse() {}

  explicit SendDocumentAskQuestionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendDocumentAskQuestionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendDocumentAskQuestionResponseBody>(model1);
      }
    }
  }


  virtual ~SendDocumentAskQuestionResponse() = default;
};
class SetRunningPlanRequest : public Darabonba::Model {
public:
  shared_ptr<long> controlType{};
  shared_ptr<long> dateType{};
  shared_ptr<string> earliestStartupTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> factoryId{};
  shared_ptr<string> latestShutdownTime{};
  shared_ptr<double> maxCarbonDioxide{};
  shared_ptr<double> maxTem{};
  shared_ptr<double> minTem{};
  shared_ptr<string> pKey{};
  shared_ptr<long> seasonMode{};
  shared_ptr<string> startTime{};
  shared_ptr<string> statisticsTime{};
  shared_ptr<string> systemId{};
  shared_ptr<string> workingEndTime{};
  shared_ptr<string> workingStartTime{};

  SetRunningPlanRequest() {}

  explicit SetRunningPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlType) {
      res["controlType"] = boost::any(*controlType);
    }
    if (dateType) {
      res["dateType"] = boost::any(*dateType);
    }
    if (earliestStartupTime) {
      res["earliestStartupTime"] = boost::any(*earliestStartupTime);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (factoryId) {
      res["factoryId"] = boost::any(*factoryId);
    }
    if (latestShutdownTime) {
      res["latestShutdownTime"] = boost::any(*latestShutdownTime);
    }
    if (maxCarbonDioxide) {
      res["maxCarbonDioxide"] = boost::any(*maxCarbonDioxide);
    }
    if (maxTem) {
      res["maxTem"] = boost::any(*maxTem);
    }
    if (minTem) {
      res["minTem"] = boost::any(*minTem);
    }
    if (pKey) {
      res["pKey"] = boost::any(*pKey);
    }
    if (seasonMode) {
      res["seasonMode"] = boost::any(*seasonMode);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    if (statisticsTime) {
      res["statisticsTime"] = boost::any(*statisticsTime);
    }
    if (systemId) {
      res["systemId"] = boost::any(*systemId);
    }
    if (workingEndTime) {
      res["workingEndTime"] = boost::any(*workingEndTime);
    }
    if (workingStartTime) {
      res["workingStartTime"] = boost::any(*workingStartTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("controlType") != m.end() && !m["controlType"].empty()) {
      controlType = make_shared<long>(boost::any_cast<long>(m["controlType"]));
    }
    if (m.find("dateType") != m.end() && !m["dateType"].empty()) {
      dateType = make_shared<long>(boost::any_cast<long>(m["dateType"]));
    }
    if (m.find("earliestStartupTime") != m.end() && !m["earliestStartupTime"].empty()) {
      earliestStartupTime = make_shared<string>(boost::any_cast<string>(m["earliestStartupTime"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("factoryId") != m.end() && !m["factoryId"].empty()) {
      factoryId = make_shared<string>(boost::any_cast<string>(m["factoryId"]));
    }
    if (m.find("latestShutdownTime") != m.end() && !m["latestShutdownTime"].empty()) {
      latestShutdownTime = make_shared<string>(boost::any_cast<string>(m["latestShutdownTime"]));
    }
    if (m.find("maxCarbonDioxide") != m.end() && !m["maxCarbonDioxide"].empty()) {
      maxCarbonDioxide = make_shared<double>(boost::any_cast<double>(m["maxCarbonDioxide"]));
    }
    if (m.find("maxTem") != m.end() && !m["maxTem"].empty()) {
      maxTem = make_shared<double>(boost::any_cast<double>(m["maxTem"]));
    }
    if (m.find("minTem") != m.end() && !m["minTem"].empty()) {
      minTem = make_shared<double>(boost::any_cast<double>(m["minTem"]));
    }
    if (m.find("pKey") != m.end() && !m["pKey"].empty()) {
      pKey = make_shared<string>(boost::any_cast<string>(m["pKey"]));
    }
    if (m.find("seasonMode") != m.end() && !m["seasonMode"].empty()) {
      seasonMode = make_shared<long>(boost::any_cast<long>(m["seasonMode"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
    if (m.find("statisticsTime") != m.end() && !m["statisticsTime"].empty()) {
      statisticsTime = make_shared<string>(boost::any_cast<string>(m["statisticsTime"]));
    }
    if (m.find("systemId") != m.end() && !m["systemId"].empty()) {
      systemId = make_shared<string>(boost::any_cast<string>(m["systemId"]));
    }
    if (m.find("workingEndTime") != m.end() && !m["workingEndTime"].empty()) {
      workingEndTime = make_shared<string>(boost::any_cast<string>(m["workingEndTime"]));
    }
    if (m.find("workingStartTime") != m.end() && !m["workingStartTime"].empty()) {
      workingStartTime = make_shared<string>(boost::any_cast<string>(m["workingStartTime"]));
    }
  }


  virtual ~SetRunningPlanRequest() = default;
};
class SetRunningPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  SetRunningPlanResponseBody() {}

  explicit SetRunningPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<bool>(boost::any_cast<bool>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~SetRunningPlanResponseBody() = default;
};
class SetRunningPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetRunningPlanResponseBody> body{};

  SetRunningPlanResponse() {}

  explicit SetRunningPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetRunningPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetRunningPlanResponseBody>(model1);
      }
    }
  }


  virtual ~SetRunningPlanResponse() = default;
};
class SubmitDocExtractionTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> extractType{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> folderId{};
  shared_ptr<string> templateId{};

  SubmitDocExtractionTaskRequest() {}

  explicit SubmitDocExtractionTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extractType) {
      res["extractType"] = boost::any(*extractType);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileUrl) {
      res["fileUrl"] = boost::any(*fileUrl);
    }
    if (folderId) {
      res["folderId"] = boost::any(*folderId);
    }
    if (templateId) {
      res["templateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("extractType") != m.end() && !m["extractType"].empty()) {
      extractType = make_shared<string>(boost::any_cast<string>(m["extractType"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileUrl") != m.end() && !m["fileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["fileUrl"]));
    }
    if (m.find("folderId") != m.end() && !m["folderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["folderId"]));
    }
    if (m.find("templateId") != m.end() && !m["templateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["templateId"]));
    }
  }


  virtual ~SubmitDocExtractionTaskRequest() = default;
};
class SubmitDocExtractionTaskAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> extractType{};
  shared_ptr<string> fileName{};
  shared_ptr<Darabonba::Stream> fileUrlObject{};
  shared_ptr<string> folderId{};
  shared_ptr<string> templateId{};

  SubmitDocExtractionTaskAdvanceRequest() {}

  explicit SubmitDocExtractionTaskAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extractType) {
      res["extractType"] = boost::any(*extractType);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileUrlObject) {
      res["fileUrl"] = boost::any(*fileUrlObject);
    }
    if (folderId) {
      res["folderId"] = boost::any(*folderId);
    }
    if (templateId) {
      res["templateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("extractType") != m.end() && !m["extractType"].empty()) {
      extractType = make_shared<string>(boost::any_cast<string>(m["extractType"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileUrl") != m.end() && !m["fileUrl"].empty()) {
      fileUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["fileUrl"]));
    }
    if (m.find("folderId") != m.end() && !m["folderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["folderId"]));
    }
    if (m.find("templateId") != m.end() && !m["templateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["templateId"]));
    }
  }


  virtual ~SubmitDocExtractionTaskAdvanceRequest() = default;
};
class SubmitDocExtractionTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  SubmitDocExtractionTaskResponseBodyData() {}

  explicit SubmitDocExtractionTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~SubmitDocExtractionTaskResponseBodyData() = default;
};
class SubmitDocExtractionTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<SubmitDocExtractionTaskResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SubmitDocExtractionTaskResponseBody() {}

  explicit SubmitDocExtractionTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        SubmitDocExtractionTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<SubmitDocExtractionTaskResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~SubmitDocExtractionTaskResponseBody() = default;
};
class SubmitDocExtractionTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitDocExtractionTaskResponseBody> body{};

  SubmitDocExtractionTaskResponse() {}

  explicit SubmitDocExtractionTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitDocExtractionTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitDocExtractionTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitDocExtractionTaskResponse() = default;
};
class SubmitDocParsingTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> folderId{};
  shared_ptr<bool> needAnalyzeImg{};

  SubmitDocParsingTaskRequest() {}

  explicit SubmitDocParsingTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileUrl) {
      res["fileUrl"] = boost::any(*fileUrl);
    }
    if (folderId) {
      res["folderId"] = boost::any(*folderId);
    }
    if (needAnalyzeImg) {
      res["needAnalyzeImg"] = boost::any(*needAnalyzeImg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileUrl") != m.end() && !m["fileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["fileUrl"]));
    }
    if (m.find("folderId") != m.end() && !m["folderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["folderId"]));
    }
    if (m.find("needAnalyzeImg") != m.end() && !m["needAnalyzeImg"].empty()) {
      needAnalyzeImg = make_shared<bool>(boost::any_cast<bool>(m["needAnalyzeImg"]));
    }
  }


  virtual ~SubmitDocParsingTaskRequest() = default;
};
class SubmitDocParsingTaskAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<Darabonba::Stream> fileUrlObject{};
  shared_ptr<string> folderId{};
  shared_ptr<bool> needAnalyzeImg{};

  SubmitDocParsingTaskAdvanceRequest() {}

  explicit SubmitDocParsingTaskAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileUrlObject) {
      res["fileUrl"] = boost::any(*fileUrlObject);
    }
    if (folderId) {
      res["folderId"] = boost::any(*folderId);
    }
    if (needAnalyzeImg) {
      res["needAnalyzeImg"] = boost::any(*needAnalyzeImg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileUrl") != m.end() && !m["fileUrl"].empty()) {
      fileUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["fileUrl"]));
    }
    if (m.find("folderId") != m.end() && !m["folderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["folderId"]));
    }
    if (m.find("needAnalyzeImg") != m.end() && !m["needAnalyzeImg"].empty()) {
      needAnalyzeImg = make_shared<bool>(boost::any_cast<bool>(m["needAnalyzeImg"]));
    }
  }


  virtual ~SubmitDocParsingTaskAdvanceRequest() = default;
};
class SubmitDocParsingTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  SubmitDocParsingTaskResponseBodyData() {}

  explicit SubmitDocParsingTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~SubmitDocParsingTaskResponseBodyData() = default;
};
class SubmitDocParsingTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<SubmitDocParsingTaskResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SubmitDocParsingTaskResponseBody() {}

  explicit SubmitDocParsingTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        SubmitDocParsingTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<SubmitDocParsingTaskResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~SubmitDocParsingTaskResponseBody() = default;
};
class SubmitDocParsingTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitDocParsingTaskResponseBody> body{};

  SubmitDocParsingTaskResponse() {}

  explicit SubmitDocParsingTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitDocParsingTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitDocParsingTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitDocParsingTaskResponse() = default;
};
class SubmitDocumentAnalyzeJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> analysisType{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> folderId{};
  shared_ptr<string> templateId{};

  SubmitDocumentAnalyzeJobRequest() {}

  explicit SubmitDocumentAnalyzeJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analysisType) {
      res["analysisType"] = boost::any(*analysisType);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileUrl) {
      res["fileUrl"] = boost::any(*fileUrl);
    }
    if (folderId) {
      res["folderId"] = boost::any(*folderId);
    }
    if (templateId) {
      res["templateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analysisType") != m.end() && !m["analysisType"].empty()) {
      analysisType = make_shared<string>(boost::any_cast<string>(m["analysisType"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileUrl") != m.end() && !m["fileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["fileUrl"]));
    }
    if (m.find("folderId") != m.end() && !m["folderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["folderId"]));
    }
    if (m.find("templateId") != m.end() && !m["templateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["templateId"]));
    }
  }


  virtual ~SubmitDocumentAnalyzeJobRequest() = default;
};
class SubmitDocumentAnalyzeJobAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> analysisType{};
  shared_ptr<string> fileName{};
  shared_ptr<Darabonba::Stream> fileUrlObject{};
  shared_ptr<string> folderId{};
  shared_ptr<string> templateId{};

  SubmitDocumentAnalyzeJobAdvanceRequest() {}

  explicit SubmitDocumentAnalyzeJobAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analysisType) {
      res["analysisType"] = boost::any(*analysisType);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileUrlObject) {
      res["fileUrl"] = boost::any(*fileUrlObject);
    }
    if (folderId) {
      res["folderId"] = boost::any(*folderId);
    }
    if (templateId) {
      res["templateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analysisType") != m.end() && !m["analysisType"].empty()) {
      analysisType = make_shared<string>(boost::any_cast<string>(m["analysisType"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileUrl") != m.end() && !m["fileUrl"].empty()) {
      fileUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["fileUrl"]));
    }
    if (m.find("folderId") != m.end() && !m["folderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["folderId"]));
    }
    if (m.find("templateId") != m.end() && !m["templateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["templateId"]));
    }
  }


  virtual ~SubmitDocumentAnalyzeJobAdvanceRequest() = default;
};
class SubmitDocumentAnalyzeJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  SubmitDocumentAnalyzeJobResponseBodyData() {}

  explicit SubmitDocumentAnalyzeJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["jobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("jobId") != m.end() && !m["jobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["jobId"]));
    }
  }


  virtual ~SubmitDocumentAnalyzeJobResponseBodyData() = default;
};
class SubmitDocumentAnalyzeJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<SubmitDocumentAnalyzeJobResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SubmitDocumentAnalyzeJobResponseBody() {}

  explicit SubmitDocumentAnalyzeJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        SubmitDocumentAnalyzeJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<SubmitDocumentAnalyzeJobResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~SubmitDocumentAnalyzeJobResponseBody() = default;
};
class SubmitDocumentAnalyzeJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitDocumentAnalyzeJobResponseBody> body{};

  SubmitDocumentAnalyzeJobResponse() {}

  explicit SubmitDocumentAnalyzeJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitDocumentAnalyzeJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitDocumentAnalyzeJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitDocumentAnalyzeJobResponse() = default;
};
class SubmitVLExtractionTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> folderId{};
  shared_ptr<string> templateId{};

  SubmitVLExtractionTaskRequest() {}

  explicit SubmitVLExtractionTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileUrl) {
      res["fileUrl"] = boost::any(*fileUrl);
    }
    if (folderId) {
      res["folderId"] = boost::any(*folderId);
    }
    if (templateId) {
      res["templateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileUrl") != m.end() && !m["fileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["fileUrl"]));
    }
    if (m.find("folderId") != m.end() && !m["folderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["folderId"]));
    }
    if (m.find("templateId") != m.end() && !m["templateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["templateId"]));
    }
  }


  virtual ~SubmitVLExtractionTaskRequest() = default;
};
class SubmitVLExtractionTaskAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<Darabonba::Stream> fileUrlObject{};
  shared_ptr<string> folderId{};
  shared_ptr<string> templateId{};

  SubmitVLExtractionTaskAdvanceRequest() {}

  explicit SubmitVLExtractionTaskAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (fileUrlObject) {
      res["fileUrl"] = boost::any(*fileUrlObject);
    }
    if (folderId) {
      res["folderId"] = boost::any(*folderId);
    }
    if (templateId) {
      res["templateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("fileUrl") != m.end() && !m["fileUrl"].empty()) {
      fileUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["fileUrl"]));
    }
    if (m.find("folderId") != m.end() && !m["folderId"].empty()) {
      folderId = make_shared<string>(boost::any_cast<string>(m["folderId"]));
    }
    if (m.find("templateId") != m.end() && !m["templateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["templateId"]));
    }
  }


  virtual ~SubmitVLExtractionTaskAdvanceRequest() = default;
};
class SubmitVLExtractionTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  SubmitVLExtractionTaskResponseBodyData() {}

  explicit SubmitVLExtractionTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~SubmitVLExtractionTaskResponseBodyData() = default;
};
class SubmitVLExtractionTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<SubmitVLExtractionTaskResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SubmitVLExtractionTaskResponseBody() {}

  explicit SubmitVLExtractionTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        SubmitVLExtractionTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<SubmitVLExtractionTaskResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~SubmitVLExtractionTaskResponseBody() = default;
};
class SubmitVLExtractionTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitVLExtractionTaskResponseBody> body{};

  SubmitVLExtractionTaskResponse() {}

  explicit SubmitVLExtractionTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitVLExtractionTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitVLExtractionTaskResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitVLExtractionTaskResponse() = default;
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
  AnalyzeVlRealtimeResponse analyzeVlRealtimeWithOptions(shared_ptr<AnalyzeVlRealtimeRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AnalyzeVlRealtimeResponse analyzeVlRealtime(shared_ptr<AnalyzeVlRealtimeRequest> request);
  AnalyzeVlRealtimeResponse analyzeVlRealtimeAdvance(shared_ptr<AnalyzeVlRealtimeAdvanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchSaveInstructionStatusResponse batchSaveInstructionStatusWithOptions(shared_ptr<BatchSaveInstructionStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchSaveInstructionStatusResponse batchSaveInstructionStatus(shared_ptr<BatchSaveInstructionStatusRequest> request);
  BatchUpdateSystemRunningPlanResponse batchUpdateSystemRunningPlanWithOptions(shared_ptr<BatchUpdateSystemRunningPlanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchUpdateSystemRunningPlanResponse batchUpdateSystemRunningPlan(shared_ptr<BatchUpdateSystemRunningPlanRequest> request);
  ChatResponse chatWithOptions(shared_ptr<ChatRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChatResponse chat(shared_ptr<ChatRequest> request);
  CreateChatSessionResponse createChatSessionWithOptions(shared_ptr<CreateChatSessionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateChatSessionResponse createChatSession(shared_ptr<CreateChatSessionRequest> request);
  EditProhibitedDevicesResponse editProhibitedDevicesWithOptions(shared_ptr<EditProhibitedDevicesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EditProhibitedDevicesResponse editProhibitedDevices(shared_ptr<EditProhibitedDevicesRequest> request);
  EditUnfavorableAreaDevicesResponse editUnfavorableAreaDevicesWithOptions(shared_ptr<EditUnfavorableAreaDevicesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EditUnfavorableAreaDevicesResponse editUnfavorableAreaDevices(shared_ptr<EditUnfavorableAreaDevicesRequest> request);
  GenerateResultResponse generateResultWithOptions(shared_ptr<GenerateResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateResultResponse generateResult(shared_ptr<GenerateResultRequest> request);
  GetAreaElecConstituteResponse getAreaElecConstituteWithOptions(shared_ptr<GetAreaElecConstituteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAreaElecConstituteResponse getAreaElecConstitute(shared_ptr<GetAreaElecConstituteRequest> request);
  GetCarbonEmissionTrendResponse getCarbonEmissionTrendWithOptions(shared_ptr<GetCarbonEmissionTrendRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCarbonEmissionTrendResponse getCarbonEmissionTrend(shared_ptr<GetCarbonEmissionTrendRequest> request);
  GetChatFolderListResponse getChatFolderListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChatFolderListResponse getChatFolderList();
  GetChatListResponse getChatListWithOptions(shared_ptr<GetChatListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChatListResponse getChatList(shared_ptr<GetChatListRequest> request);
  GetChatSessionListResponse getChatSessionListWithOptions(shared_ptr<GetChatSessionListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChatSessionListResponse getChatSessionList(shared_ptr<GetChatSessionListRequest> request);
  GetDataItemListResponse getDataItemListWithOptions(shared_ptr<GetDataItemListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataItemListResponse getDataItemList(shared_ptr<GetDataItemListRequest> request);
  GetDataQualityAnalysisResponse getDataQualityAnalysisWithOptions(shared_ptr<GetDataQualityAnalysisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDataQualityAnalysisResponse getDataQualityAnalysis(shared_ptr<GetDataQualityAnalysisRequest> request);
  GetDeviceInfoResponse getDeviceInfoWithOptions(shared_ptr<GetDeviceInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeviceInfoResponse getDeviceInfo(shared_ptr<GetDeviceInfoRequest> request);
  GetDeviceListResponse getDeviceListWithOptions(shared_ptr<GetDeviceListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeviceListResponse getDeviceList(shared_ptr<GetDeviceListRequest> request);
  GetDocExtractionResultResponse getDocExtractionResultWithOptions(shared_ptr<GetDocExtractionResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDocExtractionResultResponse getDocExtractionResult(shared_ptr<GetDocExtractionResultRequest> request);
  GetDocParsingResultResponse getDocParsingResultWithOptions(shared_ptr<GetDocParsingResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDocParsingResultResponse getDocParsingResult(shared_ptr<GetDocParsingResultRequest> request);
  GetDocumentAnalyzeResultResponse getDocumentAnalyzeResultWithOptions(shared_ptr<GetDocumentAnalyzeResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDocumentAnalyzeResultResponse getDocumentAnalyzeResult(shared_ptr<GetDocumentAnalyzeResultRequest> request);
  GetElecConstituteResponse getElecConstituteWithOptions(shared_ptr<GetElecConstituteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetElecConstituteResponse getElecConstitute(shared_ptr<GetElecConstituteRequest> request);
  GetElecTrendResponse getElecTrendWithOptions(shared_ptr<GetElecTrendRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetElecTrendResponse getElecTrend(shared_ptr<GetElecTrendRequest> request);
  GetEmissionSourceConstituteResponse getEmissionSourceConstituteWithOptions(shared_ptr<GetEmissionSourceConstituteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEmissionSourceConstituteResponse getEmissionSourceConstitute(shared_ptr<GetEmissionSourceConstituteRequest> request);
  GetEmissionSummaryResponse getEmissionSummaryWithOptions(shared_ptr<GetEmissionSummaryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEmissionSummaryResponse getEmissionSummary(shared_ptr<GetEmissionSummaryRequest> request);
  GetEpdInventoryConstituteResponse getEpdInventoryConstituteWithOptions(shared_ptr<GetEpdInventoryConstituteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEpdInventoryConstituteResponse getEpdInventoryConstitute(shared_ptr<GetEpdInventoryConstituteRequest> request);
  GetEpdSummaryResponse getEpdSummaryWithOptions(shared_ptr<GetEpdSummaryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEpdSummaryResponse getEpdSummary(shared_ptr<GetEpdSummaryRequest> request);
  GetFootprintListResponse getFootprintListWithOptions(shared_ptr<GetFootprintListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFootprintListResponse getFootprintList(shared_ptr<GetFootprintListRequest> request);
  GetGasConstituteResponse getGasConstituteWithOptions(shared_ptr<GetGasConstituteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGasConstituteResponse getGasConstitute(shared_ptr<GetGasConstituteRequest> request);
  GetGwpBenchmarkListResponse getGwpBenchmarkListWithOptions(shared_ptr<GetGwpBenchmarkListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGwpBenchmarkListResponse getGwpBenchmarkList(shared_ptr<GetGwpBenchmarkListRequest> request);
  GetGwpBenchmarkSummaryResponse getGwpBenchmarkSummaryWithOptions(shared_ptr<GetGwpBenchmarkSummaryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGwpBenchmarkSummaryResponse getGwpBenchmarkSummary(shared_ptr<GetGwpBenchmarkSummaryRequest> request);
  GetGwpInventoryConstituteResponse getGwpInventoryConstituteWithOptions(shared_ptr<GetGwpInventoryConstituteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGwpInventoryConstituteResponse getGwpInventoryConstitute(shared_ptr<GetGwpInventoryConstituteRequest> request);
  GetGwpInventorySummaryResponse getGwpInventorySummaryWithOptions(shared_ptr<GetGwpInventorySummaryRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGwpInventorySummaryResponse getGwpInventorySummary(shared_ptr<GetGwpInventorySummaryRequest> request);
  GetInventoryListResponse getInventoryListWithOptions(shared_ptr<GetInventoryListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInventoryListResponse getInventoryList(shared_ptr<GetInventoryListRequest> request);
  GetOrgAndFactoryResponse getOrgAndFactoryWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOrgAndFactoryResponse getOrgAndFactory();
  GetOrgConstituteResponse getOrgConstituteWithOptions(shared_ptr<GetOrgConstituteRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOrgConstituteResponse getOrgConstitute(shared_ptr<GetOrgConstituteRequest> request);
  GetPcrInfoResponse getPcrInfoWithOptions(shared_ptr<GetPcrInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPcrInfoResponse getPcrInfo(shared_ptr<GetPcrInfoRequest> request);
  GetReductionProposalResponse getReductionProposalWithOptions(shared_ptr<GetReductionProposalRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetReductionProposalResponse getReductionProposal(shared_ptr<GetReductionProposalRequest> request);
  GetVLExtractionResultResponse getVLExtractionResultWithOptions(shared_ptr<GetVLExtractionResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVLExtractionResultResponse getVLExtractionResult(shared_ptr<GetVLExtractionResultRequest> request);
  IsCompletedResponse isCompletedWithOptions(shared_ptr<IsCompletedRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IsCompletedResponse isCompleted(shared_ptr<IsCompletedRequest> request);
  PushDeviceDataResponse pushDeviceDataWithOptions(shared_ptr<PushDeviceDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushDeviceDataResponse pushDeviceData(shared_ptr<PushDeviceDataRequest> request);
  PushItemDataResponse pushItemDataWithOptions(shared_ptr<PushItemDataRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PushItemDataResponse pushItemData(shared_ptr<PushItemDataRequest> request);
  RecalculateCarbonEmissionResponse recalculateCarbonEmissionWithOptions(shared_ptr<RecalculateCarbonEmissionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecalculateCarbonEmissionResponse recalculateCarbonEmission(shared_ptr<RecalculateCarbonEmissionRequest> request);
  SendDocumentAskQuestionResponse sendDocumentAskQuestionWithOptions(shared_ptr<SendDocumentAskQuestionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendDocumentAskQuestionResponse sendDocumentAskQuestion(shared_ptr<SendDocumentAskQuestionRequest> request);
  SetRunningPlanResponse setRunningPlanWithOptions(shared_ptr<SetRunningPlanRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetRunningPlanResponse setRunningPlan(shared_ptr<SetRunningPlanRequest> request);
  SubmitDocExtractionTaskResponse submitDocExtractionTaskWithOptions(shared_ptr<SubmitDocExtractionTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitDocExtractionTaskResponse submitDocExtractionTask(shared_ptr<SubmitDocExtractionTaskRequest> request);
  SubmitDocExtractionTaskResponse submitDocExtractionTaskAdvance(shared_ptr<SubmitDocExtractionTaskAdvanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitDocParsingTaskResponse submitDocParsingTaskWithOptions(shared_ptr<SubmitDocParsingTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitDocParsingTaskResponse submitDocParsingTask(shared_ptr<SubmitDocParsingTaskRequest> request);
  SubmitDocParsingTaskResponse submitDocParsingTaskAdvance(shared_ptr<SubmitDocParsingTaskAdvanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitDocumentAnalyzeJobResponse submitDocumentAnalyzeJobWithOptions(shared_ptr<SubmitDocumentAnalyzeJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitDocumentAnalyzeJobResponse submitDocumentAnalyzeJob(shared_ptr<SubmitDocumentAnalyzeJobRequest> request);
  SubmitDocumentAnalyzeJobResponse submitDocumentAnalyzeJobAdvance(shared_ptr<SubmitDocumentAnalyzeJobAdvanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitVLExtractionTaskResponse submitVLExtractionTaskWithOptions(shared_ptr<SubmitVLExtractionTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitVLExtractionTaskResponse submitVLExtractionTask(shared_ptr<SubmitVLExtractionTaskRequest> request);
  SubmitVLExtractionTaskResponse submitVLExtractionTaskAdvance(shared_ptr<SubmitVLExtractionTaskAdvanceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_EnergyExpertExternal20220923

#endif
