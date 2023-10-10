// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_GRACE20220606_H_
#define ALIBABACLOUD_GRACE20220606_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Grace20220606 {
class AnalysisConfigTimeRange : public Darabonba::Model {
public:
  shared_ptr<double> end{};
  shared_ptr<double> start{};

  AnalysisConfigTimeRange() {}

  explicit AnalysisConfigTimeRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (start) {
      res["start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<double>(boost::any_cast<double>(m["end"]));
    }
    if (m.find("start") != m.end() && !m["start"].empty()) {
      start = make_shared<double>(boost::any_cast<double>(m["start"]));
    }
  }


  virtual ~AnalysisConfigTimeRange() = default;
};
class AnalysisConfig : public Darabonba::Model {
public:
  shared_ptr<double> badThroughputThreshold{};
  shared_ptr<double> fullGCFrequentIntervalThreshold{};
  shared_ptr<double> highHeapUsageThreshold{};
  shared_ptr<double> highHumongousUsageThreshold{};
  shared_ptr<double> highMetaspaceUsageThreshold{};
  shared_ptr<double> highOldUsageThreshold{};
  shared_ptr<double> highPromotionThreshold{};
  shared_ptr<double> highSysThreshold{};
  shared_ptr<double> longConcurrentThreshold{};
  shared_ptr<double> longPauseThreshold{};
  shared_ptr<double> lowUsrThreshold{};
  shared_ptr<double> oldGCFrequentIntervalThreshold{};
  shared_ptr<double> smallGenerationThreshold{};
  shared_ptr<AnalysisConfigTimeRange> timeRange{};
  shared_ptr<double> tooManyOldGCThreshold{};
  shared_ptr<double> youngGCFrequentIntervalThreshold{};

  AnalysisConfig() {}

  explicit AnalysisConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (badThroughputThreshold) {
      res["badThroughputThreshold"] = boost::any(*badThroughputThreshold);
    }
    if (fullGCFrequentIntervalThreshold) {
      res["fullGCFrequentIntervalThreshold"] = boost::any(*fullGCFrequentIntervalThreshold);
    }
    if (highHeapUsageThreshold) {
      res["highHeapUsageThreshold"] = boost::any(*highHeapUsageThreshold);
    }
    if (highHumongousUsageThreshold) {
      res["highHumongousUsageThreshold"] = boost::any(*highHumongousUsageThreshold);
    }
    if (highMetaspaceUsageThreshold) {
      res["highMetaspaceUsageThreshold"] = boost::any(*highMetaspaceUsageThreshold);
    }
    if (highOldUsageThreshold) {
      res["highOldUsageThreshold"] = boost::any(*highOldUsageThreshold);
    }
    if (highPromotionThreshold) {
      res["highPromotionThreshold"] = boost::any(*highPromotionThreshold);
    }
    if (highSysThreshold) {
      res["highSysThreshold"] = boost::any(*highSysThreshold);
    }
    if (longConcurrentThreshold) {
      res["longConcurrentThreshold"] = boost::any(*longConcurrentThreshold);
    }
    if (longPauseThreshold) {
      res["longPauseThreshold"] = boost::any(*longPauseThreshold);
    }
    if (lowUsrThreshold) {
      res["lowUsrThreshold"] = boost::any(*lowUsrThreshold);
    }
    if (oldGCFrequentIntervalThreshold) {
      res["oldGCFrequentIntervalThreshold"] = boost::any(*oldGCFrequentIntervalThreshold);
    }
    if (smallGenerationThreshold) {
      res["smallGenerationThreshold"] = boost::any(*smallGenerationThreshold);
    }
    if (timeRange) {
      res["timeRange"] = timeRange ? boost::any(timeRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tooManyOldGCThreshold) {
      res["tooManyOldGCThreshold"] = boost::any(*tooManyOldGCThreshold);
    }
    if (youngGCFrequentIntervalThreshold) {
      res["youngGCFrequentIntervalThreshold"] = boost::any(*youngGCFrequentIntervalThreshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("badThroughputThreshold") != m.end() && !m["badThroughputThreshold"].empty()) {
      badThroughputThreshold = make_shared<double>(boost::any_cast<double>(m["badThroughputThreshold"]));
    }
    if (m.find("fullGCFrequentIntervalThreshold") != m.end() && !m["fullGCFrequentIntervalThreshold"].empty()) {
      fullGCFrequentIntervalThreshold = make_shared<double>(boost::any_cast<double>(m["fullGCFrequentIntervalThreshold"]));
    }
    if (m.find("highHeapUsageThreshold") != m.end() && !m["highHeapUsageThreshold"].empty()) {
      highHeapUsageThreshold = make_shared<double>(boost::any_cast<double>(m["highHeapUsageThreshold"]));
    }
    if (m.find("highHumongousUsageThreshold") != m.end() && !m["highHumongousUsageThreshold"].empty()) {
      highHumongousUsageThreshold = make_shared<double>(boost::any_cast<double>(m["highHumongousUsageThreshold"]));
    }
    if (m.find("highMetaspaceUsageThreshold") != m.end() && !m["highMetaspaceUsageThreshold"].empty()) {
      highMetaspaceUsageThreshold = make_shared<double>(boost::any_cast<double>(m["highMetaspaceUsageThreshold"]));
    }
    if (m.find("highOldUsageThreshold") != m.end() && !m["highOldUsageThreshold"].empty()) {
      highOldUsageThreshold = make_shared<double>(boost::any_cast<double>(m["highOldUsageThreshold"]));
    }
    if (m.find("highPromotionThreshold") != m.end() && !m["highPromotionThreshold"].empty()) {
      highPromotionThreshold = make_shared<double>(boost::any_cast<double>(m["highPromotionThreshold"]));
    }
    if (m.find("highSysThreshold") != m.end() && !m["highSysThreshold"].empty()) {
      highSysThreshold = make_shared<double>(boost::any_cast<double>(m["highSysThreshold"]));
    }
    if (m.find("longConcurrentThreshold") != m.end() && !m["longConcurrentThreshold"].empty()) {
      longConcurrentThreshold = make_shared<double>(boost::any_cast<double>(m["longConcurrentThreshold"]));
    }
    if (m.find("longPauseThreshold") != m.end() && !m["longPauseThreshold"].empty()) {
      longPauseThreshold = make_shared<double>(boost::any_cast<double>(m["longPauseThreshold"]));
    }
    if (m.find("lowUsrThreshold") != m.end() && !m["lowUsrThreshold"].empty()) {
      lowUsrThreshold = make_shared<double>(boost::any_cast<double>(m["lowUsrThreshold"]));
    }
    if (m.find("oldGCFrequentIntervalThreshold") != m.end() && !m["oldGCFrequentIntervalThreshold"].empty()) {
      oldGCFrequentIntervalThreshold = make_shared<double>(boost::any_cast<double>(m["oldGCFrequentIntervalThreshold"]));
    }
    if (m.find("smallGenerationThreshold") != m.end() && !m["smallGenerationThreshold"].empty()) {
      smallGenerationThreshold = make_shared<double>(boost::any_cast<double>(m["smallGenerationThreshold"]));
    }
    if (m.find("timeRange") != m.end() && !m["timeRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["timeRange"].type()) {
        AnalysisConfigTimeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["timeRange"]));
        timeRange = make_shared<AnalysisConfigTimeRange>(model1);
      }
    }
    if (m.find("tooManyOldGCThreshold") != m.end() && !m["tooManyOldGCThreshold"].empty()) {
      tooManyOldGCThreshold = make_shared<double>(boost::any_cast<double>(m["tooManyOldGCThreshold"]));
    }
    if (m.find("youngGCFrequentIntervalThreshold") != m.end() && !m["youngGCFrequentIntervalThreshold"].empty()) {
      youngGCFrequentIntervalThreshold = make_shared<double>(boost::any_cast<double>(m["youngGCFrequentIntervalThreshold"]));
    }
  }


  virtual ~AnalysisConfig() = default;
};
class FileInfoAnalyzeProgress : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<double> percent{};
  shared_ptr<string> state{};

  FileInfoAnalyzeProgress() {}

  explicit FileInfoAnalyzeProgress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (percent) {
      res["percent"] = boost::any(*percent);
    }
    if (state) {
      res["state"] = boost::any(*state);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("percent") != m.end() && !m["percent"].empty()) {
      percent = make_shared<double>(boost::any_cast<double>(m["percent"]));
    }
    if (m.find("state") != m.end() && !m["state"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["state"]));
    }
  }


  virtual ~FileInfoAnalyzeProgress() = default;
};
class FileInfoTransferProgress : public Darabonba::Model {
public:
  shared_ptr<long> totalSize{};
  shared_ptr<long> transferredSize{};

  FileInfoTransferProgress() {}

  explicit FileInfoTransferProgress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalSize) {
      res["totalSize"] = boost::any(*totalSize);
    }
    if (transferredSize) {
      res["transferredSize"] = boost::any(*transferredSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("totalSize") != m.end() && !m["totalSize"].empty()) {
      totalSize = make_shared<long>(boost::any_cast<long>(m["totalSize"]));
    }
    if (m.find("transferredSize") != m.end() && !m["transferredSize"].empty()) {
      transferredSize = make_shared<long>(boost::any_cast<long>(m["transferredSize"]));
    }
  }


  virtual ~FileInfoTransferProgress() = default;
};
class FileInfo : public Darabonba::Model {
public:
  shared_ptr<FileInfoAnalyzeProgress> analyzeProgress{};
  shared_ptr<long> creationTime{};
  shared_ptr<string> displayName{};
  shared_ptr<string> labels{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> shared{};
  shared_ptr<long> size{};
  shared_ptr<FileInfoTransferProgress> transferProgress{};
  shared_ptr<string> transferState{};
  shared_ptr<string> type{};

  FileInfo() {}

  explicit FileInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analyzeProgress) {
      res["analyzeProgress"] = analyzeProgress ? boost::any(analyzeProgress->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (creationTime) {
      res["creationTime"] = boost::any(*creationTime);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (labels) {
      res["labels"] = boost::any(*labels);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (shared) {
      res["shared"] = boost::any(*shared);
    }
    if (size) {
      res["size"] = boost::any(*size);
    }
    if (transferProgress) {
      res["transferProgress"] = transferProgress ? boost::any(transferProgress->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (transferState) {
      res["transferState"] = boost::any(*transferState);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analyzeProgress") != m.end() && !m["analyzeProgress"].empty()) {
      if (typeid(map<string, boost::any>) == m["analyzeProgress"].type()) {
        FileInfoAnalyzeProgress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["analyzeProgress"]));
        analyzeProgress = make_shared<FileInfoAnalyzeProgress>(model1);
      }
    }
    if (m.find("creationTime") != m.end() && !m["creationTime"].empty()) {
      creationTime = make_shared<long>(boost::any_cast<long>(m["creationTime"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("labels") != m.end() && !m["labels"].empty()) {
      labels = make_shared<string>(boost::any_cast<string>(m["labels"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("shared") != m.end() && !m["shared"].empty()) {
      shared = make_shared<bool>(boost::any_cast<bool>(m["shared"]));
    }
    if (m.find("size") != m.end() && !m["size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["size"]));
    }
    if (m.find("transferProgress") != m.end() && !m["transferProgress"].empty()) {
      if (typeid(map<string, boost::any>) == m["transferProgress"].type()) {
        FileInfoTransferProgress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["transferProgress"]));
        transferProgress = make_shared<FileInfoTransferProgress>(model1);
      }
    }
    if (m.find("transferState") != m.end() && !m["transferState"].empty()) {
      transferState = make_shared<string>(boost::any_cast<string>(m["transferState"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~FileInfo() = default;
};
class PhaseStatisticItem : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<double> durationAvg{};
  shared_ptr<double> durationMax{};
  shared_ptr<double> durationTotal{};
  shared_ptr<double> intervalAvg{};
  shared_ptr<double> intervalMin{};
  shared_ptr<string> name{};

  PhaseStatisticItem() {}

  explicit PhaseStatisticItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (durationAvg) {
      res["durationAvg"] = boost::any(*durationAvg);
    }
    if (durationMax) {
      res["durationMax"] = boost::any(*durationMax);
    }
    if (durationTotal) {
      res["durationTotal"] = boost::any(*durationTotal);
    }
    if (intervalAvg) {
      res["intervalAvg"] = boost::any(*intervalAvg);
    }
    if (intervalMin) {
      res["intervalMin"] = boost::any(*intervalMin);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("durationAvg") != m.end() && !m["durationAvg"].empty()) {
      durationAvg = make_shared<double>(boost::any_cast<double>(m["durationAvg"]));
    }
    if (m.find("durationMax") != m.end() && !m["durationMax"].empty()) {
      durationMax = make_shared<double>(boost::any_cast<double>(m["durationMax"]));
    }
    if (m.find("durationTotal") != m.end() && !m["durationTotal"].empty()) {
      durationTotal = make_shared<double>(boost::any_cast<double>(m["durationTotal"]));
    }
    if (m.find("intervalAvg") != m.end() && !m["intervalAvg"].empty()) {
      intervalAvg = make_shared<double>(boost::any_cast<double>(m["intervalAvg"]));
    }
    if (m.find("intervalMin") != m.end() && !m["intervalMin"].empty()) {
      intervalMin = make_shared<double>(boost::any_cast<double>(m["intervalMin"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~PhaseStatisticItem() = default;
};
class AnalyzeFileRequest : public Darabonba::Model {
public:
  shared_ptr<bool> keepUnreachableObjects{};
  shared_ptr<string> name{};
  shared_ptr<string> token{};

  AnalyzeFileRequest() {}

  explicit AnalyzeFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keepUnreachableObjects) {
      res["keepUnreachableObjects"] = boost::any(*keepUnreachableObjects);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("keepUnreachableObjects") != m.end() && !m["keepUnreachableObjects"].empty()) {
      keepUnreachableObjects = make_shared<bool>(boost::any_cast<bool>(m["keepUnreachableObjects"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
  }


  virtual ~AnalyzeFileRequest() = default;
};
class AnalyzeFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> requestId{};

  AnalyzeFileResponseBody() {}

  explicit AnalyzeFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~AnalyzeFileResponseBody() = default;
};
class AnalyzeFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AnalyzeFileResponseBody> body{};

  AnalyzeFileResponse() {}

  explicit AnalyzeFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AnalyzeFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AnalyzeFileResponseBody>(model1);
      }
    }
  }


  virtual ~AnalyzeFileResponse() = default;
};
class GetFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> token{};

  GetFileRequest() {}

  explicit GetFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
  }


  virtual ~GetFileRequest() = default;
};
class GetFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FileInfo> body{};

  GetFileResponse() {}

  explicit GetFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FileInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FileInfo>(model1);
      }
    }
  }


  virtual ~GetFileResponse() = default;
};
class UploadFileByOSSRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> displayName{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> objectName{};
  shared_ptr<string> type{};

  UploadFileByOSSRequest() {}

  explicit UploadFileByOSSRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["bucketName"] = boost::any(*bucketName);
    }
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (endpoint) {
      res["endpoint"] = boost::any(*endpoint);
    }
    if (objectName) {
      res["objectName"] = boost::any(*objectName);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bucketName") != m.end() && !m["bucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["bucketName"]));
    }
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("endpoint") != m.end() && !m["endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["endpoint"]));
    }
    if (m.find("objectName") != m.end() && !m["objectName"].empty()) {
      objectName = make_shared<string>(boost::any_cast<string>(m["objectName"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~UploadFileByOSSRequest() = default;
};
class UploadFileByOSSResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};

  UploadFileByOSSResponseBody() {}

  explicit UploadFileByOSSResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UploadFileByOSSResponseBody() = default;
};
class UploadFileByOSSResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UploadFileByOSSResponseBody> body{};

  UploadFileByOSSResponse() {}

  explicit UploadFileByOSSResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadFileByOSSResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadFileByOSSResponseBody>(model1);
      }
    }
  }


  virtual ~UploadFileByOSSResponse() = default;
};
class UploadFileByURLRequest : public Darabonba::Model {
public:
  shared_ptr<string> displayName{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  UploadFileByURLRequest() {}

  explicit UploadFileByURLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayName) {
      res["displayName"] = boost::any(*displayName);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("displayName") != m.end() && !m["displayName"].empty()) {
      displayName = make_shared<string>(boost::any_cast<string>(m["displayName"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~UploadFileByURLRequest() = default;
};
class UploadFileByURLResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};

  UploadFileByURLResponseBody() {}

  explicit UploadFileByURLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~UploadFileByURLResponseBody() = default;
};
class UploadFileByURLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UploadFileByURLResponseBody> body{};

  UploadFileByURLResponse() {}

  explicit UploadFileByURLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadFileByURLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadFileByURLResponseBody>(model1);
      }
    }
  }


  virtual ~UploadFileByURLResponse() = default;
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
  AnalyzeFileResponse analyzeFileWithOptions(shared_ptr<AnalyzeFileRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AnalyzeFileResponse analyzeFile(shared_ptr<AnalyzeFileRequest> request);
  GetFileResponse getFileWithOptions(shared_ptr<GetFileRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFileResponse getFile(shared_ptr<GetFileRequest> request);
  UploadFileByOSSResponse uploadFileByOSSWithOptions(shared_ptr<UploadFileByOSSRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadFileByOSSResponse uploadFileByOSS(shared_ptr<UploadFileByOSSRequest> request);
  UploadFileByURLResponse uploadFileByURLWithOptions(shared_ptr<UploadFileByURLRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadFileByURLResponse uploadFileByURL(shared_ptr<UploadFileByURLRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Grace20220606

#endif
