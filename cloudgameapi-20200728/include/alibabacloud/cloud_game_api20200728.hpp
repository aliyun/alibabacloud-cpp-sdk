// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLOUDGAMEAPI20200728_H_
#define ALIBABACLOUD_CLOUDGAMEAPI20200728_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_CloudGameAPI20200728 {
class AdaptGameVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> frameRate{};
  shared_ptr<string> resolution{};
  shared_ptr<string> versionId{};

  AdaptGameVersionRequest() {}

  explicit AdaptGameVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (frameRate) {
      res["FrameRate"] = boost::any(*frameRate);
    }
    if (resolution) {
      res["Resolution"] = boost::any(*resolution);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FrameRate") != m.end() && !m["FrameRate"].empty()) {
      frameRate = make_shared<string>(boost::any_cast<string>(m["FrameRate"]));
    }
    if (m.find("Resolution") != m.end() && !m["Resolution"].empty()) {
      resolution = make_shared<string>(boost::any_cast<string>(m["Resolution"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~AdaptGameVersionRequest() = default;
};
class AdaptGameVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  AdaptGameVersionResponseBody() {}

  explicit AdaptGameVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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


  virtual ~AdaptGameVersionResponseBody() = default;
};
class AdaptGameVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AdaptGameVersionResponseBody> body{};

  AdaptGameVersionResponse() {}

  explicit AdaptGameVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AdaptGameVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AdaptGameVersionResponseBody>(model1);
      }
    }
  }


  virtual ~AdaptGameVersionResponse() = default;
};
class AddGameToProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> gameId{};
  shared_ptr<string> projectId{};

  AddGameToProjectRequest() {}

  explicit AddGameToProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~AddGameToProjectRequest() = default;
};
class AddGameToProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddGameToProjectResponseBody() {}

  explicit AddGameToProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddGameToProjectResponseBody() = default;
};
class AddGameToProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddGameToProjectResponseBody> body{};

  AddGameToProjectResponse() {}

  explicit AddGameToProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddGameToProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddGameToProjectResponseBody>(model1);
      }
    }
  }


  virtual ~AddGameToProjectResponse() = default;
};
class BatchDispatchGameSlotRequest : public Darabonba::Model {
public:
  shared_ptr<string> queueUserList{};

  BatchDispatchGameSlotRequest() {}

  explicit BatchDispatchGameSlotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queueUserList) {
      res["QueueUserList"] = boost::any(*queueUserList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QueueUserList") != m.end() && !m["QueueUserList"].empty()) {
      queueUserList = make_shared<string>(boost::any_cast<string>(m["QueueUserList"]));
    }
  }


  virtual ~BatchDispatchGameSlotRequest() = default;
};
class BatchDispatchGameSlotResponseBodyQueueResultList : public Darabonba::Model {
public:
  shared_ptr<string> gameId{};
  shared_ptr<string> gameSession{};
  shared_ptr<string> message{};
  shared_ptr<long> queueCode{};
  shared_ptr<long> queueState{};
  shared_ptr<string> regionName{};
  shared_ptr<string> userId{};

  BatchDispatchGameSlotResponseBodyQueueResultList() {}

  explicit BatchDispatchGameSlotResponseBodyQueueResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (gameSession) {
      res["GameSession"] = boost::any(*gameSession);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (queueCode) {
      res["QueueCode"] = boost::any(*queueCode);
    }
    if (queueState) {
      res["QueueState"] = boost::any(*queueState);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("GameSession") != m.end() && !m["GameSession"].empty()) {
      gameSession = make_shared<string>(boost::any_cast<string>(m["GameSession"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("QueueCode") != m.end() && !m["QueueCode"].empty()) {
      queueCode = make_shared<long>(boost::any_cast<long>(m["QueueCode"]));
    }
    if (m.find("QueueState") != m.end() && !m["QueueState"].empty()) {
      queueState = make_shared<long>(boost::any_cast<long>(m["QueueState"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~BatchDispatchGameSlotResponseBodyQueueResultList() = default;
};
class BatchDispatchGameSlotResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<BatchDispatchGameSlotResponseBodyQueueResultList>> queueResultList{};
  shared_ptr<string> requestId{};

  BatchDispatchGameSlotResponseBody() {}

  explicit BatchDispatchGameSlotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (queueResultList) {
      vector<boost::any> temp1;
      for(auto item1:*queueResultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QueueResultList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QueueResultList") != m.end() && !m["QueueResultList"].empty()) {
      if (typeid(vector<boost::any>) == m["QueueResultList"].type()) {
        vector<BatchDispatchGameSlotResponseBodyQueueResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QueueResultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchDispatchGameSlotResponseBodyQueueResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        queueResultList = make_shared<vector<BatchDispatchGameSlotResponseBodyQueueResultList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BatchDispatchGameSlotResponseBody() = default;
};
class BatchDispatchGameSlotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchDispatchGameSlotResponseBody> body{};

  BatchDispatchGameSlotResponse() {}

  explicit BatchDispatchGameSlotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchDispatchGameSlotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchDispatchGameSlotResponseBody>(model1);
      }
    }
  }


  virtual ~BatchDispatchGameSlotResponse() = default;
};
class BatchStopGameSessionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> gameId{};
  shared_ptr<string> projectId{};
  shared_ptr<string> reason{};
  shared_ptr<string> tags{};
  shared_ptr<string> token{};
  shared_ptr<string> trackInfo{};

  BatchStopGameSessionsRequest() {}

  explicit BatchStopGameSessionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (trackInfo) {
      res["TrackInfo"] = boost::any(*trackInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("TrackInfo") != m.end() && !m["TrackInfo"].empty()) {
      trackInfo = make_shared<string>(boost::any_cast<string>(m["TrackInfo"]));
    }
  }


  virtual ~BatchStopGameSessionsRequest() = default;
};
class BatchStopGameSessionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gameId{};
  shared_ptr<string> message{};
  shared_ptr<string> projectId{};
  shared_ptr<long> queueState{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> trackInfo{};

  BatchStopGameSessionsResponseBody() {}

  explicit BatchStopGameSessionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (queueState) {
      res["QueueState"] = boost::any(*queueState);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (trackInfo) {
      res["TrackInfo"] = boost::any(*trackInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("QueueState") != m.end() && !m["QueueState"].empty()) {
      queueState = make_shared<long>(boost::any_cast<long>(m["QueueState"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TrackInfo") != m.end() && !m["TrackInfo"].empty()) {
      trackInfo = make_shared<string>(boost::any_cast<string>(m["TrackInfo"]));
    }
  }


  virtual ~BatchStopGameSessionsResponseBody() = default;
};
class BatchStopGameSessionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchStopGameSessionsResponseBody> body{};

  BatchStopGameSessionsResponse() {}

  explicit BatchStopGameSessionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchStopGameSessionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchStopGameSessionsResponseBody>(model1);
      }
    }
  }


  virtual ~BatchStopGameSessionsResponse() = default;
};
class CloseOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDomain{};
  shared_ptr<string> buyerAccountId{};
  shared_ptr<string> orderId{};

  CloseOrderRequest() {}

  explicit CloseOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDomain) {
      res["AccountDomain"] = boost::any(*accountDomain);
    }
    if (buyerAccountId) {
      res["BuyerAccountId"] = boost::any(*buyerAccountId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDomain") != m.end() && !m["AccountDomain"].empty()) {
      accountDomain = make_shared<string>(boost::any_cast<string>(m["AccountDomain"]));
    }
    if (m.find("BuyerAccountId") != m.end() && !m["BuyerAccountId"].empty()) {
      buyerAccountId = make_shared<string>(boost::any_cast<string>(m["BuyerAccountId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~CloseOrderRequest() = default;
};
class CloseOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  CloseOrderResponseBody() {}

  explicit CloseOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CloseOrderResponseBody() = default;
};
class CloseOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CloseOrderResponseBody> body{};

  CloseOrderResponse() {}

  explicit CloseOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CloseOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CloseOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CloseOrderResponse() = default;
};
class CreateGameRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> gameName{};
  shared_ptr<long> platformType{};

  CreateGameRequest() {}

  explicit CreateGameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (gameName) {
      res["GameName"] = boost::any(*gameName);
    }
    if (platformType) {
      res["PlatformType"] = boost::any(*platformType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("GameName") != m.end() && !m["GameName"].empty()) {
      gameName = make_shared<string>(boost::any_cast<string>(m["GameName"]));
    }
    if (m.find("PlatformType") != m.end() && !m["PlatformType"].empty()) {
      platformType = make_shared<long>(boost::any_cast<long>(m["PlatformType"]));
    }
  }


  virtual ~CreateGameRequest() = default;
};
class CreateGameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gameId{};
  shared_ptr<string> requestId{};

  CreateGameResponseBody() {}

  explicit CreateGameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateGameResponseBody() = default;
};
class CreateGameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateGameResponseBody> body{};

  CreateGameResponse() {}

  explicit CreateGameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGameResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGameResponse() = default;
};
class CreateGameDeployWorkflowRequest : public Darabonba::Model {
public:
  shared_ptr<string> downloadType{};
  shared_ptr<string> fileType{};
  shared_ptr<string> frameRate{};
  shared_ptr<string> gameId{};
  shared_ptr<string> gameVersion{};
  shared_ptr<string> hash{};
  shared_ptr<string> instance{};
  shared_ptr<string> projectId{};
  shared_ptr<string> resolution{};
  shared_ptr<string> versionName{};

  CreateGameDeployWorkflowRequest() {}

  explicit CreateGameDeployWorkflowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downloadType) {
      res["DownloadType"] = boost::any(*downloadType);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (frameRate) {
      res["FrameRate"] = boost::any(*frameRate);
    }
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (gameVersion) {
      res["GameVersion"] = boost::any(*gameVersion);
    }
    if (hash) {
      res["Hash"] = boost::any(*hash);
    }
    if (instance) {
      res["Instance"] = boost::any(*instance);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (resolution) {
      res["Resolution"] = boost::any(*resolution);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownloadType") != m.end() && !m["DownloadType"].empty()) {
      downloadType = make_shared<string>(boost::any_cast<string>(m["DownloadType"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FrameRate") != m.end() && !m["FrameRate"].empty()) {
      frameRate = make_shared<string>(boost::any_cast<string>(m["FrameRate"]));
    }
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("GameVersion") != m.end() && !m["GameVersion"].empty()) {
      gameVersion = make_shared<string>(boost::any_cast<string>(m["GameVersion"]));
    }
    if (m.find("Hash") != m.end() && !m["Hash"].empty()) {
      hash = make_shared<string>(boost::any_cast<string>(m["Hash"]));
    }
    if (m.find("Instance") != m.end() && !m["Instance"].empty()) {
      instance = make_shared<string>(boost::any_cast<string>(m["Instance"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Resolution") != m.end() && !m["Resolution"].empty()) {
      resolution = make_shared<string>(boost::any_cast<string>(m["Resolution"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~CreateGameDeployWorkflowRequest() = default;
};
class CreateGameDeployWorkflowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateGameDeployWorkflowResponseBody() {}

  explicit CreateGameDeployWorkflowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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


  virtual ~CreateGameDeployWorkflowResponseBody() = default;
};
class CreateGameDeployWorkflowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateGameDeployWorkflowResponseBody> body{};

  CreateGameDeployWorkflowResponse() {}

  explicit CreateGameDeployWorkflowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGameDeployWorkflowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGameDeployWorkflowResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGameDeployWorkflowResponse() = default;
};
class CreateOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDomain{};
  shared_ptr<long> amount{};
  shared_ptr<string> buyerAccountId{};
  shared_ptr<string> idempotentCode{};
  shared_ptr<string> itemId{};
  shared_ptr<long> originPrice{};
  shared_ptr<long> settlementPrice{};
  shared_ptr<string> skuId{};

  CreateOrderRequest() {}

  explicit CreateOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDomain) {
      res["AccountDomain"] = boost::any(*accountDomain);
    }
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (buyerAccountId) {
      res["BuyerAccountId"] = boost::any(*buyerAccountId);
    }
    if (idempotentCode) {
      res["IdempotentCode"] = boost::any(*idempotentCode);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (originPrice) {
      res["OriginPrice"] = boost::any(*originPrice);
    }
    if (settlementPrice) {
      res["SettlementPrice"] = boost::any(*settlementPrice);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDomain") != m.end() && !m["AccountDomain"].empty()) {
      accountDomain = make_shared<string>(boost::any_cast<string>(m["AccountDomain"]));
    }
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("BuyerAccountId") != m.end() && !m["BuyerAccountId"].empty()) {
      buyerAccountId = make_shared<string>(boost::any_cast<string>(m["BuyerAccountId"]));
    }
    if (m.find("IdempotentCode") != m.end() && !m["IdempotentCode"].empty()) {
      idempotentCode = make_shared<string>(boost::any_cast<string>(m["IdempotentCode"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["ItemId"]));
    }
    if (m.find("OriginPrice") != m.end() && !m["OriginPrice"].empty()) {
      originPrice = make_shared<long>(boost::any_cast<long>(m["OriginPrice"]));
    }
    if (m.find("SettlementPrice") != m.end() && !m["SettlementPrice"].empty()) {
      settlementPrice = make_shared<long>(boost::any_cast<long>(m["SettlementPrice"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["SkuId"]));
    }
  }


  virtual ~CreateOrderRequest() = default;
};
class CreateOrderResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountDomain{};
  shared_ptr<long> amount{};
  shared_ptr<long> applyDeliveryTime{};
  shared_ptr<long> autoUnlockTime{};
  shared_ptr<string> buyerAccountId{};
  shared_ptr<long> createTime{};
  shared_ptr<long> finishTime{};
  shared_ptr<string> itemId{};
  shared_ptr<string> orderId{};
  shared_ptr<long> originPrice{};
  shared_ptr<long> settlementPrice{};
  shared_ptr<string> skuId{};
  shared_ptr<string> status{};

  CreateOrderResponseBodyData() {}

  explicit CreateOrderResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDomain) {
      res["AccountDomain"] = boost::any(*accountDomain);
    }
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (applyDeliveryTime) {
      res["ApplyDeliveryTime"] = boost::any(*applyDeliveryTime);
    }
    if (autoUnlockTime) {
      res["AutoUnlockTime"] = boost::any(*autoUnlockTime);
    }
    if (buyerAccountId) {
      res["BuyerAccountId"] = boost::any(*buyerAccountId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (originPrice) {
      res["OriginPrice"] = boost::any(*originPrice);
    }
    if (settlementPrice) {
      res["SettlementPrice"] = boost::any(*settlementPrice);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDomain") != m.end() && !m["AccountDomain"].empty()) {
      accountDomain = make_shared<string>(boost::any_cast<string>(m["AccountDomain"]));
    }
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("ApplyDeliveryTime") != m.end() && !m["ApplyDeliveryTime"].empty()) {
      applyDeliveryTime = make_shared<long>(boost::any_cast<long>(m["ApplyDeliveryTime"]));
    }
    if (m.find("AutoUnlockTime") != m.end() && !m["AutoUnlockTime"].empty()) {
      autoUnlockTime = make_shared<long>(boost::any_cast<long>(m["AutoUnlockTime"]));
    }
    if (m.find("BuyerAccountId") != m.end() && !m["BuyerAccountId"].empty()) {
      buyerAccountId = make_shared<string>(boost::any_cast<string>(m["BuyerAccountId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<long>(boost::any_cast<long>(m["FinishTime"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["ItemId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("OriginPrice") != m.end() && !m["OriginPrice"].empty()) {
      originPrice = make_shared<long>(boost::any_cast<long>(m["OriginPrice"]));
    }
    if (m.find("SettlementPrice") != m.end() && !m["SettlementPrice"].empty()) {
      settlementPrice = make_shared<long>(boost::any_cast<long>(m["SettlementPrice"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["SkuId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateOrderResponseBodyData() = default;
};
class CreateOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateOrderResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateOrderResponseBody() {}

  explicit CreateOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateOrderResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateOrderResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateOrderResponseBody() = default;
};
class CreateOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateOrderResponseBody> body{};

  CreateOrderResponse() {}

  explicit CreateOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateOrderResponseBody>(model1);
      }
    }
  }


  virtual ~CreateOrderResponse() = default;
};
class CreateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> projectName{};

  CreateProjectRequest() {}

  explicit CreateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~CreateProjectRequest() = default;
};
class CreateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};
  shared_ptr<string> requestId{};

  CreateProjectResponseBody() {}

  explicit CreateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateProjectResponseBody() = default;
};
class CreateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateProjectResponseBody> body{};

  CreateProjectResponse() {}

  explicit CreateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProjectResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProjectResponse() = default;
};
class CreateTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> currentToken{};
  shared_ptr<string> session{};

  CreateTokenRequest() {}

  explicit CreateTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (currentToken) {
      res["CurrentToken"] = boost::any(*currentToken);
    }
    if (session) {
      res["Session"] = boost::any(*session);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CurrentToken") != m.end() && !m["CurrentToken"].empty()) {
      currentToken = make_shared<string>(boost::any_cast<string>(m["CurrentToken"]));
    }
    if (m.find("Session") != m.end() && !m["Session"].empty()) {
      session = make_shared<string>(boost::any_cast<string>(m["Session"]));
    }
  }


  virtual ~CreateTokenRequest() = default;
};
class CreateTokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> token{};

  CreateTokenResponseBodyData() {}

  explicit CreateTokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~CreateTokenResponseBodyData() = default;
};
class CreateTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateTokenResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateTokenResponseBody() {}

  explicit CreateTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateTokenResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateTokenResponseBody() = default;
};
class CreateTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateTokenResponseBody> body{};

  CreateTokenResponse() {}

  explicit CreateTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTokenResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTokenResponse() = default;
};
class DeleteGameRequest : public Darabonba::Model {
public:
  shared_ptr<string> gameId{};

  DeleteGameRequest() {}

  explicit DeleteGameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
  }


  virtual ~DeleteGameRequest() = default;
};
class DeleteGameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteGameResponseBody() {}

  explicit DeleteGameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteGameResponseBody() = default;
};
class DeleteGameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteGameResponseBody> body{};

  DeleteGameResponse() {}

  explicit DeleteGameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteGameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGameResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGameResponse() = default;
};
class DeleteGameVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> versionId{};

  DeleteGameVersionRequest() {}

  explicit DeleteGameVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~DeleteGameVersionRequest() = default;
};
class DeleteGameVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteGameVersionResponseBody() {}

  explicit DeleteGameVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteGameVersionResponseBody() = default;
};
class DeleteGameVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteGameVersionResponseBody> body{};

  DeleteGameVersionResponse() {}

  explicit DeleteGameVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteGameVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGameVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGameVersionResponse() = default;
};
class DeleteProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};

  DeleteProjectRequest() {}

  explicit DeleteProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~DeleteProjectRequest() = default;
};
class DeleteProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteProjectResponseBody() {}

  explicit DeleteProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteProjectResponseBody() = default;
};
class DeleteProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteProjectResponseBody> body{};

  DeleteProjectResponse() {}

  explicit DeleteProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteProjectResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteProjectResponse() = default;
};
class DeliveryOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDomain{};
  shared_ptr<string> buyerAccountId{};
  shared_ptr<string> orderId{};

  DeliveryOrderRequest() {}

  explicit DeliveryOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDomain) {
      res["AccountDomain"] = boost::any(*accountDomain);
    }
    if (buyerAccountId) {
      res["BuyerAccountId"] = boost::any(*buyerAccountId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDomain") != m.end() && !m["AccountDomain"].empty()) {
      accountDomain = make_shared<string>(boost::any_cast<string>(m["AccountDomain"]));
    }
    if (m.find("BuyerAccountId") != m.end() && !m["BuyerAccountId"].empty()) {
      buyerAccountId = make_shared<string>(boost::any_cast<string>(m["BuyerAccountId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~DeliveryOrderRequest() = default;
};
class DeliveryOrderResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deliveryStatus{};

  DeliveryOrderResponseBodyData() {}

  explicit DeliveryOrderResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveryStatus) {
      res["DeliveryStatus"] = boost::any(*deliveryStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveryStatus") != m.end() && !m["DeliveryStatus"].empty()) {
      deliveryStatus = make_shared<string>(boost::any_cast<string>(m["DeliveryStatus"]));
    }
  }


  virtual ~DeliveryOrderResponseBodyData() = default;
};
class DeliveryOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<DeliveryOrderResponseBodyData> data{};
  shared_ptr<string> requestId{};

  DeliveryOrderResponseBody() {}

  explicit DeliveryOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeliveryOrderResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeliveryOrderResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeliveryOrderResponseBody() = default;
};
class DeliveryOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeliveryOrderResponseBody> body{};

  DeliveryOrderResponse() {}

  explicit DeliveryOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeliveryOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeliveryOrderResponseBody>(model1);
      }
    }
  }


  virtual ~DeliveryOrderResponse() = default;
};
class DispatchGameSlotRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};
  shared_ptr<string> bizParam{};
  shared_ptr<bool> cancel{};
  shared_ptr<string> clientIp{};
  shared_ptr<string> gameCommand{};
  shared_ptr<string> gameId{};
  shared_ptr<string> gameSession{};
  shared_ptr<string> gameStartParam{};
  shared_ptr<bool> reconnect{};
  shared_ptr<string> regionName{};
  shared_ptr<string> systemInfo{};
  shared_ptr<string> tags{};
  shared_ptr<string> userId{};
  shared_ptr<long> userLevel{};

  DispatchGameSlotRequest() {}

  explicit DispatchGameSlotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["AccessKey"] = boost::any(*accessKey);
    }
    if (bizParam) {
      res["BizParam"] = boost::any(*bizParam);
    }
    if (cancel) {
      res["Cancel"] = boost::any(*cancel);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (gameCommand) {
      res["GameCommand"] = boost::any(*gameCommand);
    }
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (gameSession) {
      res["GameSession"] = boost::any(*gameSession);
    }
    if (gameStartParam) {
      res["GameStartParam"] = boost::any(*gameStartParam);
    }
    if (reconnect) {
      res["Reconnect"] = boost::any(*reconnect);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    if (systemInfo) {
      res["SystemInfo"] = boost::any(*systemInfo);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userLevel) {
      res["UserLevel"] = boost::any(*userLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["AccessKey"]));
    }
    if (m.find("BizParam") != m.end() && !m["BizParam"].empty()) {
      bizParam = make_shared<string>(boost::any_cast<string>(m["BizParam"]));
    }
    if (m.find("Cancel") != m.end() && !m["Cancel"].empty()) {
      cancel = make_shared<bool>(boost::any_cast<bool>(m["Cancel"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("GameCommand") != m.end() && !m["GameCommand"].empty()) {
      gameCommand = make_shared<string>(boost::any_cast<string>(m["GameCommand"]));
    }
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("GameSession") != m.end() && !m["GameSession"].empty()) {
      gameSession = make_shared<string>(boost::any_cast<string>(m["GameSession"]));
    }
    if (m.find("GameStartParam") != m.end() && !m["GameStartParam"].empty()) {
      gameStartParam = make_shared<string>(boost::any_cast<string>(m["GameStartParam"]));
    }
    if (m.find("Reconnect") != m.end() && !m["Reconnect"].empty()) {
      reconnect = make_shared<bool>(boost::any_cast<bool>(m["Reconnect"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
    if (m.find("SystemInfo") != m.end() && !m["SystemInfo"].empty()) {
      systemInfo = make_shared<string>(boost::any_cast<string>(m["SystemInfo"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserLevel") != m.end() && !m["UserLevel"].empty()) {
      userLevel = make_shared<long>(boost::any_cast<long>(m["UserLevel"]));
    }
  }


  virtual ~DispatchGameSlotRequest() = default;
};
class DispatchGameSlotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gameId{};
  shared_ptr<string> gameSession{};
  shared_ptr<string> message{};
  shared_ptr<long> queueCode{};
  shared_ptr<long> queueState{};
  shared_ptr<string> regionName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> userId{};

  DispatchGameSlotResponseBody() {}

  explicit DispatchGameSlotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (gameSession) {
      res["GameSession"] = boost::any(*gameSession);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (queueCode) {
      res["QueueCode"] = boost::any(*queueCode);
    }
    if (queueState) {
      res["QueueState"] = boost::any(*queueState);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("GameSession") != m.end() && !m["GameSession"].empty()) {
      gameSession = make_shared<string>(boost::any_cast<string>(m["GameSession"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("QueueCode") != m.end() && !m["QueueCode"].empty()) {
      queueCode = make_shared<long>(boost::any_cast<long>(m["QueueCode"]));
    }
    if (m.find("QueueState") != m.end() && !m["QueueState"].empty()) {
      queueState = make_shared<long>(boost::any_cast<long>(m["QueueState"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DispatchGameSlotResponseBody() = default;
};
class DispatchGameSlotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DispatchGameSlotResponseBody> body{};

  DispatchGameSlotResponse() {}

  explicit DispatchGameSlotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DispatchGameSlotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DispatchGameSlotResponseBody>(model1);
      }
    }
  }


  virtual ~DispatchGameSlotResponse() = default;
};
class GetGameCcuRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};
  shared_ptr<string> gameId{};
  shared_ptr<string> regionName{};

  GetGameCcuRequest() {}

  explicit GetGameCcuRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["AccessKey"] = boost::any(*accessKey);
    }
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (regionName) {
      res["RegionName"] = boost::any(*regionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["AccessKey"]));
    }
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("RegionName") != m.end() && !m["RegionName"].empty()) {
      regionName = make_shared<string>(boost::any_cast<string>(m["RegionName"]));
    }
  }


  virtual ~GetGameCcuRequest() = default;
};
class GetGameCcuResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<long> ccu{};
  shared_ptr<string> gameId{};
  shared_ptr<string> regionId{};

  GetGameCcuResponseBodyDataList() {}

  explicit GetGameCcuResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ccu) {
      res["Ccu"] = boost::any(*ccu);
    }
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ccu") != m.end() && !m["Ccu"].empty()) {
      ccu = make_shared<long>(boost::any_cast<long>(m["Ccu"]));
    }
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetGameCcuResponseBodyDataList() = default;
};
class GetGameCcuResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetGameCcuResponseBodyDataList>> dataList{};
  shared_ptr<string> requestId{};

  GetGameCcuResponseBody() {}

  explicit GetGameCcuResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<GetGameCcuResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGameCcuResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<GetGameCcuResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetGameCcuResponseBody() = default;
};
class GetGameCcuResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetGameCcuResponseBody> body{};

  GetGameCcuResponse() {}

  explicit GetGameCcuResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGameCcuResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGameCcuResponseBody>(model1);
      }
    }
  }


  virtual ~GetGameCcuResponse() = default;
};
class GetGameStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> gameSession{};

  GetGameStatusRequest() {}

  explicit GetGameStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gameSession) {
      res["GameSession"] = boost::any(*gameSession);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GameSession") != m.end() && !m["GameSession"].empty()) {
      gameSession = make_shared<string>(boost::any_cast<string>(m["GameSession"]));
    }
  }


  virtual ~GetGameStatusRequest() = default;
};
class GetGameStatusResponseBodyDataPlayingUsers : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<long> startPlayTime{};

  GetGameStatusResponseBodyDataPlayingUsers() {}

  explicit GetGameStatusResponseBodyDataPlayingUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (startPlayTime) {
      res["StartPlayTime"] = boost::any(*startPlayTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("StartPlayTime") != m.end() && !m["StartPlayTime"].empty()) {
      startPlayTime = make_shared<long>(boost::any_cast<long>(m["StartPlayTime"]));
    }
  }


  virtual ~GetGameStatusResponseBodyDataPlayingUsers() = default;
};
class GetGameStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> gameId{};
  shared_ptr<string> gameSession{};
  shared_ptr<long> gameStartAt{};
  shared_ptr<long> playingCount{};
  shared_ptr<vector<GetGameStatusResponseBodyDataPlayingUsers>> playingUsers{};

  GetGameStatusResponseBodyData() {}

  explicit GetGameStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (gameSession) {
      res["GameSession"] = boost::any(*gameSession);
    }
    if (gameStartAt) {
      res["GameStartAt"] = boost::any(*gameStartAt);
    }
    if (playingCount) {
      res["PlayingCount"] = boost::any(*playingCount);
    }
    if (playingUsers) {
      vector<boost::any> temp1;
      for(auto item1:*playingUsers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PlayingUsers"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("GameSession") != m.end() && !m["GameSession"].empty()) {
      gameSession = make_shared<string>(boost::any_cast<string>(m["GameSession"]));
    }
    if (m.find("GameStartAt") != m.end() && !m["GameStartAt"].empty()) {
      gameStartAt = make_shared<long>(boost::any_cast<long>(m["GameStartAt"]));
    }
    if (m.find("PlayingCount") != m.end() && !m["PlayingCount"].empty()) {
      playingCount = make_shared<long>(boost::any_cast<long>(m["PlayingCount"]));
    }
    if (m.find("PlayingUsers") != m.end() && !m["PlayingUsers"].empty()) {
      if (typeid(vector<boost::any>) == m["PlayingUsers"].type()) {
        vector<GetGameStatusResponseBodyDataPlayingUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PlayingUsers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGameStatusResponseBodyDataPlayingUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        playingUsers = make_shared<vector<GetGameStatusResponseBodyDataPlayingUsers>>(expect1);
      }
    }
  }


  virtual ~GetGameStatusResponseBodyData() = default;
};
class GetGameStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetGameStatusResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetGameStatusResponseBody() {}

  explicit GetGameStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGameStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetGameStatusResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetGameStatusResponseBody() = default;
};
class GetGameStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetGameStatusResponseBody> body{};

  GetGameStatusResponse() {}

  explicit GetGameStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGameStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGameStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetGameStatusResponse() = default;
};
class GetGameStockRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};
  shared_ptr<string> gameId{};
  shared_ptr<long> userLevel{};

  GetGameStockRequest() {}

  explicit GetGameStockRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["AccessKey"] = boost::any(*accessKey);
    }
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (userLevel) {
      res["UserLevel"] = boost::any(*userLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["AccessKey"]));
    }
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("UserLevel") != m.end() && !m["UserLevel"].empty()) {
      userLevel = make_shared<long>(boost::any_cast<long>(m["UserLevel"]));
    }
  }


  virtual ~GetGameStockRequest() = default;
};
class GetGameStockResponseBodyInstanceStockList : public Darabonba::Model {
public:
  shared_ptr<long> availableSlots{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> instanceSpec{};
  shared_ptr<string> reginName{};
  shared_ptr<long> userLevel{};

  GetGameStockResponseBodyInstanceStockList() {}

  explicit GetGameStockResponseBodyInstanceStockList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableSlots) {
      res["AvailableSlots"] = boost::any(*availableSlots);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceSpec) {
      res["InstanceSpec"] = boost::any(*instanceSpec);
    }
    if (reginName) {
      res["ReginName"] = boost::any(*reginName);
    }
    if (userLevel) {
      res["UserLevel"] = boost::any(*userLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableSlots") != m.end() && !m["AvailableSlots"].empty()) {
      availableSlots = make_shared<long>(boost::any_cast<long>(m["AvailableSlots"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceSpec") != m.end() && !m["InstanceSpec"].empty()) {
      instanceSpec = make_shared<string>(boost::any_cast<string>(m["InstanceSpec"]));
    }
    if (m.find("ReginName") != m.end() && !m["ReginName"].empty()) {
      reginName = make_shared<string>(boost::any_cast<string>(m["ReginName"]));
    }
    if (m.find("UserLevel") != m.end() && !m["UserLevel"].empty()) {
      userLevel = make_shared<long>(boost::any_cast<long>(m["UserLevel"]));
    }
  }


  virtual ~GetGameStockResponseBodyInstanceStockList() = default;
};
class GetGameStockResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gameId{};
  shared_ptr<vector<GetGameStockResponseBodyInstanceStockList>> instanceStockList{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetGameStockResponseBody() {}

  explicit GetGameStockResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (instanceStockList) {
      vector<boost::any> temp1;
      for(auto item1:*instanceStockList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstanceStockList"] = boost::any(temp1);
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
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("InstanceStockList") != m.end() && !m["InstanceStockList"].empty()) {
      if (typeid(vector<boost::any>) == m["InstanceStockList"].type()) {
        vector<GetGameStockResponseBodyInstanceStockList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstanceStockList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetGameStockResponseBodyInstanceStockList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instanceStockList = make_shared<vector<GetGameStockResponseBodyInstanceStockList>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetGameStockResponseBody() = default;
};
class GetGameStockResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetGameStockResponseBody> body{};

  GetGameStockResponse() {}

  explicit GetGameStockResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGameStockResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGameStockResponseBody>(model1);
      }
    }
  }


  virtual ~GetGameStockResponse() = default;
};
class GetGameTrialSurplusDurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> gameId{};
  shared_ptr<string> projectId{};

  GetGameTrialSurplusDurationRequest() {}

  explicit GetGameTrialSurplusDurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~GetGameTrialSurplusDurationRequest() = default;
};
class GetGameTrialSurplusDurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<double> status{};
  shared_ptr<double> surplusDuration{};

  GetGameTrialSurplusDurationResponseBody() {}

  explicit GetGameTrialSurplusDurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (surplusDuration) {
      res["SurplusDuration"] = boost::any(*surplusDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<double>(boost::any_cast<double>(m["Status"]));
    }
    if (m.find("SurplusDuration") != m.end() && !m["SurplusDuration"].empty()) {
      surplusDuration = make_shared<double>(boost::any_cast<double>(m["SurplusDuration"]));
    }
  }


  virtual ~GetGameTrialSurplusDurationResponseBody() = default;
};
class GetGameTrialSurplusDurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetGameTrialSurplusDurationResponseBody> body{};

  GetGameTrialSurplusDurationResponse() {}

  explicit GetGameTrialSurplusDurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGameTrialSurplusDurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGameTrialSurplusDurationResponseBody>(model1);
      }
    }
  }


  virtual ~GetGameTrialSurplusDurationResponse() = default;
};
class GetGameVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> versionId{};

  GetGameVersionRequest() {}

  explicit GetGameVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~GetGameVersionRequest() = default;
};
class GetGameVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> versionId{};
  shared_ptr<string> versionName{};
  shared_ptr<string> versionNumber{};

  GetGameVersionResponseBody() {}

  explicit GetGameVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    if (versionNumber) {
      res["VersionNumber"] = boost::any(*versionNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
    if (m.find("VersionNumber") != m.end() && !m["VersionNumber"].empty()) {
      versionNumber = make_shared<string>(boost::any_cast<string>(m["VersionNumber"]));
    }
  }


  virtual ~GetGameVersionResponseBody() = default;
};
class GetGameVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetGameVersionResponseBody> body{};

  GetGameVersionResponse() {}

  explicit GetGameVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGameVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGameVersionResponseBody>(model1);
      }
    }
  }


  virtual ~GetGameVersionResponse() = default;
};
class GetGameVersionProgressRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetGameVersionProgressRequest() {}

  explicit GetGameVersionProgressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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


  virtual ~GetGameVersionProgressRequest() = default;
};
class GetGameVersionProgressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> event{};
  shared_ptr<map<string, boost::any>> extra{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  GetGameVersionProgressResponseBody() {}

  explicit GetGameVersionProgressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (event) {
      res["Event"] = boost::any(*event);
    }
    if (extra) {
      res["Extra"] = boost::any(*extra);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Event") != m.end() && !m["Event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["Event"]));
    }
    if (m.find("Extra") != m.end() && !m["Extra"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Extra"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      extra = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetGameVersionProgressResponseBody() = default;
};
class GetGameVersionProgressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetGameVersionProgressResponseBody> body{};

  GetGameVersionProgressResponse() {}

  explicit GetGameVersionProgressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetGameVersionProgressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetGameVersionProgressResponseBody>(model1);
      }
    }
  }


  virtual ~GetGameVersionProgressResponse() = default;
};
class GetItemRequest : public Darabonba::Model {
public:
  shared_ptr<string> itemId{};

  GetItemRequest() {}

  explicit GetItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["ItemId"]));
    }
  }


  virtual ~GetItemRequest() = default;
};
class GetItemResponseBodyDataGames : public Darabonba::Model {
public:
  shared_ptr<string> gameId{};
  shared_ptr<string> name{};

  GetItemResponseBodyDataGames() {}

  explicit GetItemResponseBodyDataGames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~GetItemResponseBodyDataGames() = default;
};
class GetItemResponseBodyDataSkusSaleProps : public Darabonba::Model {
public:
  shared_ptr<long> propertyId{};
  shared_ptr<string> propertyName{};
  shared_ptr<string> value{};
  shared_ptr<long> valueId{};

  GetItemResponseBodyDataSkusSaleProps() {}

  explicit GetItemResponseBodyDataSkusSaleProps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyId) {
      res["PropertyId"] = boost::any(*propertyId);
    }
    if (propertyName) {
      res["PropertyName"] = boost::any(*propertyName);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (valueId) {
      res["ValueId"] = boost::any(*valueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyId") != m.end() && !m["PropertyId"].empty()) {
      propertyId = make_shared<long>(boost::any_cast<long>(m["PropertyId"]));
    }
    if (m.find("PropertyName") != m.end() && !m["PropertyName"].empty()) {
      propertyName = make_shared<string>(boost::any_cast<string>(m["PropertyName"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("ValueId") != m.end() && !m["ValueId"].empty()) {
      valueId = make_shared<long>(boost::any_cast<long>(m["ValueId"]));
    }
  }


  virtual ~GetItemResponseBodyDataSkusSaleProps() = default;
};
class GetItemResponseBodyDataSkus : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> itemId{};
  shared_ptr<long> modifyTime{};
  shared_ptr<long> originPrice{};
  shared_ptr<long> salePrice{};
  shared_ptr<vector<GetItemResponseBodyDataSkusSaleProps>> saleProps{};
  shared_ptr<string> skuId{};
  shared_ptr<long> status{};

  GetItemResponseBodyDataSkus() {}

  explicit GetItemResponseBodyDataSkus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (originPrice) {
      res["OriginPrice"] = boost::any(*originPrice);
    }
    if (salePrice) {
      res["SalePrice"] = boost::any(*salePrice);
    }
    if (saleProps) {
      vector<boost::any> temp1;
      for(auto item1:*saleProps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SaleProps"] = boost::any(temp1);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["ItemId"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("OriginPrice") != m.end() && !m["OriginPrice"].empty()) {
      originPrice = make_shared<long>(boost::any_cast<long>(m["OriginPrice"]));
    }
    if (m.find("SalePrice") != m.end() && !m["SalePrice"].empty()) {
      salePrice = make_shared<long>(boost::any_cast<long>(m["SalePrice"]));
    }
    if (m.find("SaleProps") != m.end() && !m["SaleProps"].empty()) {
      if (typeid(vector<boost::any>) == m["SaleProps"].type()) {
        vector<GetItemResponseBodyDataSkusSaleProps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SaleProps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetItemResponseBodyDataSkusSaleProps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        saleProps = make_shared<vector<GetItemResponseBodyDataSkusSaleProps>>(expect1);
      }
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["SkuId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~GetItemResponseBodyDataSkus() = default;
};
class GetItemResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<vector<GetItemResponseBodyDataGames>> games{};
  shared_ptr<string> itemId{};
  shared_ptr<long> modifyTime{};
  shared_ptr<long> originPrice{};
  shared_ptr<long> salePrice{};
  shared_ptr<string> sellerId{};
  shared_ptr<vector<GetItemResponseBodyDataSkus>> skus{};
  shared_ptr<long> status{};
  shared_ptr<string> supplier{};
  shared_ptr<string> title{};

  GetItemResponseBodyData() {}

  explicit GetItemResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (games) {
      vector<boost::any> temp1;
      for(auto item1:*games){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Games"] = boost::any(temp1);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (originPrice) {
      res["OriginPrice"] = boost::any(*originPrice);
    }
    if (salePrice) {
      res["SalePrice"] = boost::any(*salePrice);
    }
    if (sellerId) {
      res["SellerId"] = boost::any(*sellerId);
    }
    if (skus) {
      vector<boost::any> temp1;
      for(auto item1:*skus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Skus"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supplier) {
      res["Supplier"] = boost::any(*supplier);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Games") != m.end() && !m["Games"].empty()) {
      if (typeid(vector<boost::any>) == m["Games"].type()) {
        vector<GetItemResponseBodyDataGames> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Games"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetItemResponseBodyDataGames model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        games = make_shared<vector<GetItemResponseBodyDataGames>>(expect1);
      }
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["ItemId"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("OriginPrice") != m.end() && !m["OriginPrice"].empty()) {
      originPrice = make_shared<long>(boost::any_cast<long>(m["OriginPrice"]));
    }
    if (m.find("SalePrice") != m.end() && !m["SalePrice"].empty()) {
      salePrice = make_shared<long>(boost::any_cast<long>(m["SalePrice"]));
    }
    if (m.find("SellerId") != m.end() && !m["SellerId"].empty()) {
      sellerId = make_shared<string>(boost::any_cast<string>(m["SellerId"]));
    }
    if (m.find("Skus") != m.end() && !m["Skus"].empty()) {
      if (typeid(vector<boost::any>) == m["Skus"].type()) {
        vector<GetItemResponseBodyDataSkus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Skus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetItemResponseBodyDataSkus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skus = make_shared<vector<GetItemResponseBodyDataSkus>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Supplier") != m.end() && !m["Supplier"].empty()) {
      supplier = make_shared<string>(boost::any_cast<string>(m["Supplier"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetItemResponseBodyData() = default;
};
class GetItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetItemResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetItemResponseBody() {}

  explicit GetItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetItemResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetItemResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetItemResponseBody() = default;
};
class GetItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetItemResponseBody> body{};

  GetItemResponse() {}

  explicit GetItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetItemResponseBody>(model1);
      }
    }
  }


  virtual ~GetItemResponse() = default;
};
class GetOutAccountBindDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDomain{};
  shared_ptr<string> accountId{};
  shared_ptr<string> outAccountType{};

  GetOutAccountBindDetailRequest() {}

  explicit GetOutAccountBindDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDomain) {
      res["AccountDomain"] = boost::any(*accountDomain);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (outAccountType) {
      res["OutAccountType"] = boost::any(*outAccountType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDomain") != m.end() && !m["AccountDomain"].empty()) {
      accountDomain = make_shared<string>(boost::any_cast<string>(m["AccountDomain"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("OutAccountType") != m.end() && !m["OutAccountType"].empty()) {
      outAccountType = make_shared<string>(boost::any_cast<string>(m["OutAccountType"]));
    }
  }


  virtual ~GetOutAccountBindDetailRequest() = default;
};
class GetOutAccountBindDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> bindStatus{};
  shared_ptr<string> outAccountId{};
  shared_ptr<string> outAccountType{};
  shared_ptr<string> token{};
  shared_ptr<long> tokenExpireTime{};

  GetOutAccountBindDetailResponseBodyData() {}

  explicit GetOutAccountBindDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindStatus) {
      res["BindStatus"] = boost::any(*bindStatus);
    }
    if (outAccountId) {
      res["OutAccountId"] = boost::any(*outAccountId);
    }
    if (outAccountType) {
      res["OutAccountType"] = boost::any(*outAccountType);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (tokenExpireTime) {
      res["TokenExpireTime"] = boost::any(*tokenExpireTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindStatus") != m.end() && !m["BindStatus"].empty()) {
      bindStatus = make_shared<long>(boost::any_cast<long>(m["BindStatus"]));
    }
    if (m.find("OutAccountId") != m.end() && !m["OutAccountId"].empty()) {
      outAccountId = make_shared<string>(boost::any_cast<string>(m["OutAccountId"]));
    }
    if (m.find("OutAccountType") != m.end() && !m["OutAccountType"].empty()) {
      outAccountType = make_shared<string>(boost::any_cast<string>(m["OutAccountType"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("TokenExpireTime") != m.end() && !m["TokenExpireTime"].empty()) {
      tokenExpireTime = make_shared<long>(boost::any_cast<long>(m["TokenExpireTime"]));
    }
  }


  virtual ~GetOutAccountBindDetailResponseBodyData() = default;
};
class GetOutAccountBindDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetOutAccountBindDetailResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetOutAccountBindDetailResponseBody() {}

  explicit GetOutAccountBindDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOutAccountBindDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetOutAccountBindDetailResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetOutAccountBindDetailResponseBody() = default;
};
class GetOutAccountBindDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetOutAccountBindDetailResponseBody> body{};

  GetOutAccountBindDetailResponse() {}

  explicit GetOutAccountBindDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOutAccountBindDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOutAccountBindDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetOutAccountBindDetailResponse() = default;
};
class GetSessionRequest : public Darabonba::Model {
public:
  shared_ptr<string> token{};

  GetSessionRequest() {}

  explicit GetSessionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~GetSessionRequest() = default;
};
class GetSessionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> session{};

  GetSessionResponseBodyData() {}

  explicit GetSessionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (session) {
      res["Session"] = boost::any(*session);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Session") != m.end() && !m["Session"].empty()) {
      session = make_shared<string>(boost::any_cast<string>(m["Session"]));
    }
  }


  virtual ~GetSessionResponseBodyData() = default;
};
class GetSessionResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetSessionResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetSessionResponseBody() {}

  explicit GetSessionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSessionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetSessionResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetSessionResponseBody() = default;
};
class GetSessionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSessionResponseBody> body{};

  GetSessionResponse() {}

  explicit GetSessionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSessionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSessionResponseBody>(model1);
      }
    }
  }


  virtual ~GetSessionResponse() = default;
};
class GetStopGameTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};
  shared_ptr<string> gameId{};

  GetStopGameTokenRequest() {}

  explicit GetStopGameTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["AccessKey"] = boost::any(*accessKey);
    }
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["AccessKey"]));
    }
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
  }


  virtual ~GetStopGameTokenRequest() = default;
};
class GetStopGameTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> expireTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> token{};

  GetStopGameTokenResponseBody() {}

  explicit GetStopGameTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~GetStopGameTokenResponseBody() = default;
};
class GetStopGameTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetStopGameTokenResponseBody> body{};

  GetStopGameTokenResponse() {}

  explicit GetStopGameTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStopGameTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStopGameTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetStopGameTokenResponse() = default;
};
class KickPlayerRequest : public Darabonba::Model {
public:
  shared_ptr<string> gameSession{};
  shared_ptr<string> kickedAccountId{};

  KickPlayerRequest() {}

  explicit KickPlayerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gameSession) {
      res["GameSession"] = boost::any(*gameSession);
    }
    if (kickedAccountId) {
      res["KickedAccountId"] = boost::any(*kickedAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GameSession") != m.end() && !m["GameSession"].empty()) {
      gameSession = make_shared<string>(boost::any_cast<string>(m["GameSession"]));
    }
    if (m.find("KickedAccountId") != m.end() && !m["KickedAccountId"].empty()) {
      kickedAccountId = make_shared<string>(boost::any_cast<string>(m["KickedAccountId"]));
    }
  }


  virtual ~KickPlayerRequest() = default;
};
class KickPlayerResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> requestId{};

  KickPlayerResponseBody() {}

  explicit KickPlayerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~KickPlayerResponseBody() = default;
};
class KickPlayerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<KickPlayerResponseBody> body{};

  KickPlayerResponse() {}

  explicit KickPlayerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        KickPlayerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<KickPlayerResponseBody>(model1);
      }
    }
  }


  virtual ~KickPlayerResponse() = default;
};
class ListBoughtGamesRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDomain{};
  shared_ptr<string> accountId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListBoughtGamesRequest() {}

  explicit ListBoughtGamesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDomain) {
      res["AccountDomain"] = boost::any(*accountDomain);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDomain") != m.end() && !m["AccountDomain"].empty()) {
      accountDomain = make_shared<string>(boost::any_cast<string>(m["AccountDomain"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListBoughtGamesRequest() = default;
};
class ListBoughtGamesResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> gameId{};
  shared_ptr<string> gameName{};
  shared_ptr<long> startTime{};

  ListBoughtGamesResponseBodyItems() {}

  explicit ListBoughtGamesResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (gameName) {
      res["GameName"] = boost::any(*gameName);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("GameName") != m.end() && !m["GameName"].empty()) {
      gameName = make_shared<string>(boost::any_cast<string>(m["GameName"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ListBoughtGamesResponseBodyItems() = default;
};
class ListBoughtGamesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListBoughtGamesResponseBodyItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListBoughtGamesResponseBody() {}

  explicit ListBoughtGamesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<ListBoughtGamesResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListBoughtGamesResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<ListBoughtGamesResponseBodyItems>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListBoughtGamesResponseBody() = default;
};
class ListBoughtGamesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListBoughtGamesResponseBody> body{};

  ListBoughtGamesResponse() {}

  explicit ListBoughtGamesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBoughtGamesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBoughtGamesResponseBody>(model1);
      }
    }
  }


  virtual ~ListBoughtGamesResponse() = default;
};
class ListContainerStatusRequestGameSessionIdList : public Darabonba::Model {
public:
  shared_ptr<string> gameSessionId{};

  ListContainerStatusRequestGameSessionIdList() {}

  explicit ListContainerStatusRequestGameSessionIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gameSessionId) {
      res["GameSessionId"] = boost::any(*gameSessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GameSessionId") != m.end() && !m["GameSessionId"].empty()) {
      gameSessionId = make_shared<string>(boost::any_cast<string>(m["GameSessionId"]));
    }
  }


  virtual ~ListContainerStatusRequestGameSessionIdList() = default;
};
class ListContainerStatusRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ListContainerStatusRequestGameSessionIdList>> gameSessionIdList{};

  ListContainerStatusRequest() {}

  explicit ListContainerStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gameSessionIdList) {
      vector<boost::any> temp1;
      for(auto item1:*gameSessionIdList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GameSessionIdList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GameSessionIdList") != m.end() && !m["GameSessionIdList"].empty()) {
      if (typeid(vector<boost::any>) == m["GameSessionIdList"].type()) {
        vector<ListContainerStatusRequestGameSessionIdList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GameSessionIdList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListContainerStatusRequestGameSessionIdList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        gameSessionIdList = make_shared<vector<ListContainerStatusRequestGameSessionIdList>>(expect1);
      }
    }
  }


  virtual ~ListContainerStatusRequest() = default;
};
class ListContainerStatusResponseBodyDataListPlayerDetailList : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<bool> isInitiator{};
  shared_ptr<long> startTime{};

  ListContainerStatusResponseBodyDataListPlayerDetailList() {}

  explicit ListContainerStatusResponseBodyDataListPlayerDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (isInitiator) {
      res["IsInitiator"] = boost::any(*isInitiator);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("IsInitiator") != m.end() && !m["IsInitiator"].empty()) {
      isInitiator = make_shared<bool>(boost::any_cast<bool>(m["IsInitiator"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ListContainerStatusResponseBodyDataListPlayerDetailList() = default;
};
class ListContainerStatusResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<long> containerQuitTime{};
  shared_ptr<long> containerStartTime{};
  shared_ptr<string> containerState{};
  shared_ptr<string> gameId{};
  shared_ptr<string> gameSessionId{};
  shared_ptr<vector<ListContainerStatusResponseBodyDataListPlayerDetailList>> playerDetailList{};
  shared_ptr<string> projectId{};
  shared_ptr<string> tags{};
  shared_ptr<long> timestamp{};

  ListContainerStatusResponseBodyDataList() {}

  explicit ListContainerStatusResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (containerQuitTime) {
      res["ContainerQuitTime"] = boost::any(*containerQuitTime);
    }
    if (containerStartTime) {
      res["ContainerStartTime"] = boost::any(*containerStartTime);
    }
    if (containerState) {
      res["ContainerState"] = boost::any(*containerState);
    }
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (gameSessionId) {
      res["GameSessionId"] = boost::any(*gameSessionId);
    }
    if (playerDetailList) {
      vector<boost::any> temp1;
      for(auto item1:*playerDetailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PlayerDetailList"] = boost::any(temp1);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("ContainerQuitTime") != m.end() && !m["ContainerQuitTime"].empty()) {
      containerQuitTime = make_shared<long>(boost::any_cast<long>(m["ContainerQuitTime"]));
    }
    if (m.find("ContainerStartTime") != m.end() && !m["ContainerStartTime"].empty()) {
      containerStartTime = make_shared<long>(boost::any_cast<long>(m["ContainerStartTime"]));
    }
    if (m.find("ContainerState") != m.end() && !m["ContainerState"].empty()) {
      containerState = make_shared<string>(boost::any_cast<string>(m["ContainerState"]));
    }
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("GameSessionId") != m.end() && !m["GameSessionId"].empty()) {
      gameSessionId = make_shared<string>(boost::any_cast<string>(m["GameSessionId"]));
    }
    if (m.find("PlayerDetailList") != m.end() && !m["PlayerDetailList"].empty()) {
      if (typeid(vector<boost::any>) == m["PlayerDetailList"].type()) {
        vector<ListContainerStatusResponseBodyDataListPlayerDetailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PlayerDetailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListContainerStatusResponseBodyDataListPlayerDetailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        playerDetailList = make_shared<vector<ListContainerStatusResponseBodyDataListPlayerDetailList>>(expect1);
      }
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~ListContainerStatusResponseBodyDataList() = default;
};
class ListContainerStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListContainerStatusResponseBodyDataList>> dataList{};
  shared_ptr<string> requestId{};

  ListContainerStatusResponseBody() {}

  explicit ListContainerStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<ListContainerStatusResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListContainerStatusResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<ListContainerStatusResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListContainerStatusResponseBody() = default;
};
class ListContainerStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListContainerStatusResponseBody> body{};

  ListContainerStatusResponse() {}

  explicit ListContainerStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListContainerStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListContainerStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ListContainerStatusResponse() = default;
};
class ListDeployableInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<string> versionId{};

  ListDeployableInstancesRequest() {}

  explicit ListDeployableInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~ListDeployableInstancesRequest() = default;
};
class ListDeployableInstancesResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> cloudGameInstanceId{};
  shared_ptr<string> cloudGameInstanceName{};

  ListDeployableInstancesResponseBodyDataList() {}

  explicit ListDeployableInstancesResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudGameInstanceId) {
      res["CloudGameInstanceId"] = boost::any(*cloudGameInstanceId);
    }
    if (cloudGameInstanceName) {
      res["CloudGameInstanceName"] = boost::any(*cloudGameInstanceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CloudGameInstanceId") != m.end() && !m["CloudGameInstanceId"].empty()) {
      cloudGameInstanceId = make_shared<string>(boost::any_cast<string>(m["CloudGameInstanceId"]));
    }
    if (m.find("CloudGameInstanceName") != m.end() && !m["CloudGameInstanceName"].empty()) {
      cloudGameInstanceName = make_shared<string>(boost::any_cast<string>(m["CloudGameInstanceName"]));
    }
  }


  virtual ~ListDeployableInstancesResponseBodyDataList() = default;
};
class ListDeployableInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDeployableInstancesResponseBodyDataList>> dataList{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListDeployableInstancesResponseBody() {}

  explicit ListDeployableInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<ListDeployableInstancesResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeployableInstancesResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<ListDeployableInstancesResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDeployableInstancesResponseBody() = default;
};
class ListDeployableInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDeployableInstancesResponseBody> body{};

  ListDeployableInstancesResponse() {}

  explicit ListDeployableInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeployableInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeployableInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeployableInstancesResponse() = default;
};
class ListGameVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> gameId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListGameVersionsRequest() {}

  explicit ListGameVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListGameVersionsRequest() = default;
};
class ListGameVersionsResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> versionId{};
  shared_ptr<string> versionName{};
  shared_ptr<string> versionNumber{};

  ListGameVersionsResponseBodyDataList() {}

  explicit ListGameVersionsResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    if (versionNumber) {
      res["VersionNumber"] = boost::any(*versionNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
    if (m.find("VersionNumber") != m.end() && !m["VersionNumber"].empty()) {
      versionNumber = make_shared<string>(boost::any_cast<string>(m["VersionNumber"]));
    }
  }


  virtual ~ListGameVersionsResponseBodyDataList() = default;
};
class ListGameVersionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<ListGameVersionsResponseBodyDataList>> dataList{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListGameVersionsResponseBody() {}

  explicit ListGameVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<ListGameVersionsResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGameVersionsResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<ListGameVersionsResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListGameVersionsResponseBody() = default;
};
class ListGameVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListGameVersionsResponseBody> body{};

  ListGameVersionsResponse() {}

  explicit ListGameVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGameVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGameVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListGameVersionsResponse() = default;
};
class ListGamesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListGamesRequest() {}

  explicit ListGamesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListGamesRequest() = default;
};
class ListGamesResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> gameId{};
  shared_ptr<string> gameName{};
  shared_ptr<long> platformType{};

  ListGamesResponseBodyDataList() {}

  explicit ListGamesResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (gameName) {
      res["GameName"] = boost::any(*gameName);
    }
    if (platformType) {
      res["PlatformType"] = boost::any(*platformType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("GameName") != m.end() && !m["GameName"].empty()) {
      gameName = make_shared<string>(boost::any_cast<string>(m["GameName"]));
    }
    if (m.find("PlatformType") != m.end() && !m["PlatformType"].empty()) {
      platformType = make_shared<long>(boost::any_cast<long>(m["PlatformType"]));
    }
  }


  virtual ~ListGamesResponseBodyDataList() = default;
};
class ListGamesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<ListGamesResponseBodyDataList>> dataList{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListGamesResponseBody() {}

  explicit ListGamesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<ListGamesResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGamesResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<ListGamesResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListGamesResponseBody() = default;
};
class ListGamesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListGamesResponseBody> body{};

  ListGamesResponse() {}

  explicit ListGamesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGamesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGamesResponseBody>(model1);
      }
    }
  }


  virtual ~ListGamesResponse() = default;
};
class ListHistoryContainerStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTime{};
  shared_ptr<string> lastGameSessionId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> projectId{};
  shared_ptr<long> startTime{};

  ListHistoryContainerStatusRequest() {}

  explicit ListHistoryContainerStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (lastGameSessionId) {
      res["LastGameSessionId"] = boost::any(*lastGameSessionId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("LastGameSessionId") != m.end() && !m["LastGameSessionId"].empty()) {
      lastGameSessionId = make_shared<string>(boost::any_cast<string>(m["LastGameSessionId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ListHistoryContainerStatusRequest() = default;
};
class ListHistoryContainerStatusResponseBodyDataListPlayerDetailList : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<bool> isInitiator{};
  shared_ptr<long> startTime{};

  ListHistoryContainerStatusResponseBodyDataListPlayerDetailList() {}

  explicit ListHistoryContainerStatusResponseBodyDataListPlayerDetailList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (isInitiator) {
      res["IsInitiator"] = boost::any(*isInitiator);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("IsInitiator") != m.end() && !m["IsInitiator"].empty()) {
      isInitiator = make_shared<bool>(boost::any_cast<bool>(m["IsInitiator"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ListHistoryContainerStatusResponseBodyDataListPlayerDetailList() = default;
};
class ListHistoryContainerStatusResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<long> containerQuitTime{};
  shared_ptr<long> containerStartTime{};
  shared_ptr<string> containerState{};
  shared_ptr<string> gameId{};
  shared_ptr<string> gameSessionId{};
  shared_ptr<vector<ListHistoryContainerStatusResponseBodyDataListPlayerDetailList>> playerDetailList{};
  shared_ptr<string> projectId{};
  shared_ptr<string> tags{};
  shared_ptr<long> timestamp{};

  ListHistoryContainerStatusResponseBodyDataList() {}

  explicit ListHistoryContainerStatusResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (containerQuitTime) {
      res["ContainerQuitTime"] = boost::any(*containerQuitTime);
    }
    if (containerStartTime) {
      res["ContainerStartTime"] = boost::any(*containerStartTime);
    }
    if (containerState) {
      res["ContainerState"] = boost::any(*containerState);
    }
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (gameSessionId) {
      res["GameSessionId"] = boost::any(*gameSessionId);
    }
    if (playerDetailList) {
      vector<boost::any> temp1;
      for(auto item1:*playerDetailList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PlayerDetailList"] = boost::any(temp1);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("ContainerQuitTime") != m.end() && !m["ContainerQuitTime"].empty()) {
      containerQuitTime = make_shared<long>(boost::any_cast<long>(m["ContainerQuitTime"]));
    }
    if (m.find("ContainerStartTime") != m.end() && !m["ContainerStartTime"].empty()) {
      containerStartTime = make_shared<long>(boost::any_cast<long>(m["ContainerStartTime"]));
    }
    if (m.find("ContainerState") != m.end() && !m["ContainerState"].empty()) {
      containerState = make_shared<string>(boost::any_cast<string>(m["ContainerState"]));
    }
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("GameSessionId") != m.end() && !m["GameSessionId"].empty()) {
      gameSessionId = make_shared<string>(boost::any_cast<string>(m["GameSessionId"]));
    }
    if (m.find("PlayerDetailList") != m.end() && !m["PlayerDetailList"].empty()) {
      if (typeid(vector<boost::any>) == m["PlayerDetailList"].type()) {
        vector<ListHistoryContainerStatusResponseBodyDataListPlayerDetailList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PlayerDetailList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHistoryContainerStatusResponseBodyDataListPlayerDetailList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        playerDetailList = make_shared<vector<ListHistoryContainerStatusResponseBodyDataListPlayerDetailList>>(expect1);
      }
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~ListHistoryContainerStatusResponseBodyDataList() = default;
};
class ListHistoryContainerStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListHistoryContainerStatusResponseBodyDataList>> dataList{};
  shared_ptr<string> requestId{};

  ListHistoryContainerStatusResponseBody() {}

  explicit ListHistoryContainerStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<ListHistoryContainerStatusResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListHistoryContainerStatusResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<ListHistoryContainerStatusResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListHistoryContainerStatusResponseBody() = default;
};
class ListHistoryContainerStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListHistoryContainerStatusResponseBody> body{};

  ListHistoryContainerStatusResponse() {}

  explicit ListHistoryContainerStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListHistoryContainerStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListHistoryContainerStatusResponseBody>(model1);
      }
    }
  }


  virtual ~ListHistoryContainerStatusResponse() = default;
};
class ListProjectsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListProjectsRequest() {}

  explicit ListProjectsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListProjectsRequest() = default;
};
class ListProjectsResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};

  ListProjectsResponseBodyDataList() {}

  explicit ListProjectsResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~ListProjectsResponseBodyDataList() = default;
};
class ListProjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<vector<ListProjectsResponseBodyDataList>> dataList{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListProjectsResponseBody() {}

  explicit ListProjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (dataList) {
      vector<boost::any> temp1;
      for(auto item1:*dataList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DataList"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("DataList") != m.end() && !m["DataList"].empty()) {
      if (typeid(vector<boost::any>) == m["DataList"].type()) {
        vector<ListProjectsResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DataList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectsResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dataList = make_shared<vector<ListProjectsResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListProjectsResponseBody() = default;
};
class ListProjectsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListProjectsResponseBody> body{};

  ListProjectsResponse() {}

  explicit ListProjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProjectsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProjectsResponse() = default;
};
class QueryGameRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> projectId{};
  shared_ptr<long> tenantId{};

  QueryGameRequest() {}

  explicit QueryGameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~QueryGameRequest() = default;
};
class QueryGameResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> gameId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> name{};
  shared_ptr<long> projectId{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> version{};

  QueryGameResponseBodyData() {}

  explicit QueryGameResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<long>(boost::any_cast<long>(m["GameId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~QueryGameResponseBodyData() = default;
};
class QueryGameResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryGameResponseBodyData>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  QueryGameResponseBody() {}

  explicit QueryGameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryGameResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryGameResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryGameResponseBodyData>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryGameResponseBody() = default;
};
class QueryGameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryGameResponseBody> body{};

  QueryGameResponse() {}

  explicit QueryGameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryGameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryGameResponseBody>(model1);
      }
    }
  }


  virtual ~QueryGameResponse() = default;
};
class QueryItemsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  QueryItemsRequest() {}

  explicit QueryItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryItemsRequest() = default;
};
class QueryItemsResponseBodyDataItemsGames : public Darabonba::Model {
public:
  shared_ptr<string> gameId{};
  shared_ptr<string> name{};

  QueryItemsResponseBodyDataItemsGames() {}

  explicit QueryItemsResponseBodyDataItemsGames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~QueryItemsResponseBodyDataItemsGames() = default;
};
class QueryItemsResponseBodyDataItemsSkusSaleProps : public Darabonba::Model {
public:
  shared_ptr<long> propertyId{};
  shared_ptr<string> propertyName{};
  shared_ptr<string> value{};
  shared_ptr<long> valueId{};

  QueryItemsResponseBodyDataItemsSkusSaleProps() {}

  explicit QueryItemsResponseBodyDataItemsSkusSaleProps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (propertyId) {
      res["PropertyId"] = boost::any(*propertyId);
    }
    if (propertyName) {
      res["PropertyName"] = boost::any(*propertyName);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (valueId) {
      res["ValueId"] = boost::any(*valueId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PropertyId") != m.end() && !m["PropertyId"].empty()) {
      propertyId = make_shared<long>(boost::any_cast<long>(m["PropertyId"]));
    }
    if (m.find("PropertyName") != m.end() && !m["PropertyName"].empty()) {
      propertyName = make_shared<string>(boost::any_cast<string>(m["PropertyName"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("ValueId") != m.end() && !m["ValueId"].empty()) {
      valueId = make_shared<long>(boost::any_cast<long>(m["ValueId"]));
    }
  }


  virtual ~QueryItemsResponseBodyDataItemsSkusSaleProps() = default;
};
class QueryItemsResponseBodyDataItemsSkus : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> itemId{};
  shared_ptr<long> modifyTime{};
  shared_ptr<long> originPrice{};
  shared_ptr<long> salePrice{};
  shared_ptr<vector<QueryItemsResponseBodyDataItemsSkusSaleProps>> saleProps{};
  shared_ptr<string> skuId{};
  shared_ptr<long> status{};

  QueryItemsResponseBodyDataItemsSkus() {}

  explicit QueryItemsResponseBodyDataItemsSkus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (originPrice) {
      res["OriginPrice"] = boost::any(*originPrice);
    }
    if (salePrice) {
      res["SalePrice"] = boost::any(*salePrice);
    }
    if (saleProps) {
      vector<boost::any> temp1;
      for(auto item1:*saleProps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SaleProps"] = boost::any(temp1);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["ItemId"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("OriginPrice") != m.end() && !m["OriginPrice"].empty()) {
      originPrice = make_shared<long>(boost::any_cast<long>(m["OriginPrice"]));
    }
    if (m.find("SalePrice") != m.end() && !m["SalePrice"].empty()) {
      salePrice = make_shared<long>(boost::any_cast<long>(m["SalePrice"]));
    }
    if (m.find("SaleProps") != m.end() && !m["SaleProps"].empty()) {
      if (typeid(vector<boost::any>) == m["SaleProps"].type()) {
        vector<QueryItemsResponseBodyDataItemsSkusSaleProps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SaleProps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryItemsResponseBodyDataItemsSkusSaleProps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        saleProps = make_shared<vector<QueryItemsResponseBodyDataItemsSkusSaleProps>>(expect1);
      }
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["SkuId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~QueryItemsResponseBodyDataItemsSkus() = default;
};
class QueryItemsResponseBodyDataItems : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<vector<QueryItemsResponseBodyDataItemsGames>> games{};
  shared_ptr<string> itemId{};
  shared_ptr<long> modifyTime{};
  shared_ptr<long> originPrice{};
  shared_ptr<long> salePrice{};
  shared_ptr<string> sellerId{};
  shared_ptr<vector<QueryItemsResponseBodyDataItemsSkus>> skus{};
  shared_ptr<long> status{};
  shared_ptr<string> supplier{};
  shared_ptr<string> title{};

  QueryItemsResponseBodyDataItems() {}

  explicit QueryItemsResponseBodyDataItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (games) {
      vector<boost::any> temp1;
      for(auto item1:*games){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Games"] = boost::any(temp1);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (originPrice) {
      res["OriginPrice"] = boost::any(*originPrice);
    }
    if (salePrice) {
      res["SalePrice"] = boost::any(*salePrice);
    }
    if (sellerId) {
      res["SellerId"] = boost::any(*sellerId);
    }
    if (skus) {
      vector<boost::any> temp1;
      for(auto item1:*skus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Skus"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supplier) {
      res["Supplier"] = boost::any(*supplier);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Games") != m.end() && !m["Games"].empty()) {
      if (typeid(vector<boost::any>) == m["Games"].type()) {
        vector<QueryItemsResponseBodyDataItemsGames> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Games"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryItemsResponseBodyDataItemsGames model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        games = make_shared<vector<QueryItemsResponseBodyDataItemsGames>>(expect1);
      }
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["ItemId"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("OriginPrice") != m.end() && !m["OriginPrice"].empty()) {
      originPrice = make_shared<long>(boost::any_cast<long>(m["OriginPrice"]));
    }
    if (m.find("SalePrice") != m.end() && !m["SalePrice"].empty()) {
      salePrice = make_shared<long>(boost::any_cast<long>(m["SalePrice"]));
    }
    if (m.find("SellerId") != m.end() && !m["SellerId"].empty()) {
      sellerId = make_shared<string>(boost::any_cast<string>(m["SellerId"]));
    }
    if (m.find("Skus") != m.end() && !m["Skus"].empty()) {
      if (typeid(vector<boost::any>) == m["Skus"].type()) {
        vector<QueryItemsResponseBodyDataItemsSkus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Skus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryItemsResponseBodyDataItemsSkus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        skus = make_shared<vector<QueryItemsResponseBodyDataItemsSkus>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Supplier") != m.end() && !m["Supplier"].empty()) {
      supplier = make_shared<string>(boost::any_cast<string>(m["Supplier"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~QueryItemsResponseBodyDataItems() = default;
};
class QueryItemsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryItemsResponseBodyDataItems>> items{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  QueryItemsResponseBodyData() {}

  explicit QueryItemsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Items"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<QueryItemsResponseBodyDataItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryItemsResponseBodyDataItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<QueryItemsResponseBodyDataItems>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryItemsResponseBodyData() = default;
};
class QueryItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryItemsResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryItemsResponseBody() {}

  explicit QueryItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryItemsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryItemsResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryItemsResponseBody() = default;
};
class QueryItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryItemsResponseBody> body{};

  QueryItemsResponse() {}

  explicit QueryItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryItemsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryItemsResponse() = default;
};
class QueryOrderRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDomain{};
  shared_ptr<string> buyerAccountId{};
  shared_ptr<string> orderId{};

  QueryOrderRequest() {}

  explicit QueryOrderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDomain) {
      res["AccountDomain"] = boost::any(*accountDomain);
    }
    if (buyerAccountId) {
      res["BuyerAccountId"] = boost::any(*buyerAccountId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDomain") != m.end() && !m["AccountDomain"].empty()) {
      accountDomain = make_shared<string>(boost::any_cast<string>(m["AccountDomain"]));
    }
    if (m.find("BuyerAccountId") != m.end() && !m["BuyerAccountId"].empty()) {
      buyerAccountId = make_shared<string>(boost::any_cast<string>(m["BuyerAccountId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~QueryOrderRequest() = default;
};
class QueryOrderResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountDomain{};
  shared_ptr<long> amount{};
  shared_ptr<long> applyDeliveryTime{};
  shared_ptr<long> autoUnlockTime{};
  shared_ptr<string> buyerAccountId{};
  shared_ptr<long> createTime{};
  shared_ptr<long> finishTime{};
  shared_ptr<string> itemId{};
  shared_ptr<string> orderId{};
  shared_ptr<long> originPrice{};
  shared_ptr<long> settlementPrice{};
  shared_ptr<string> skuId{};
  shared_ptr<string> status{};

  QueryOrderResponseBodyData() {}

  explicit QueryOrderResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDomain) {
      res["AccountDomain"] = boost::any(*accountDomain);
    }
    if (amount) {
      res["Amount"] = boost::any(*amount);
    }
    if (applyDeliveryTime) {
      res["ApplyDeliveryTime"] = boost::any(*applyDeliveryTime);
    }
    if (autoUnlockTime) {
      res["AutoUnlockTime"] = boost::any(*autoUnlockTime);
    }
    if (buyerAccountId) {
      res["BuyerAccountId"] = boost::any(*buyerAccountId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (originPrice) {
      res["OriginPrice"] = boost::any(*originPrice);
    }
    if (settlementPrice) {
      res["SettlementPrice"] = boost::any(*settlementPrice);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDomain") != m.end() && !m["AccountDomain"].empty()) {
      accountDomain = make_shared<string>(boost::any_cast<string>(m["AccountDomain"]));
    }
    if (m.find("Amount") != m.end() && !m["Amount"].empty()) {
      amount = make_shared<long>(boost::any_cast<long>(m["Amount"]));
    }
    if (m.find("ApplyDeliveryTime") != m.end() && !m["ApplyDeliveryTime"].empty()) {
      applyDeliveryTime = make_shared<long>(boost::any_cast<long>(m["ApplyDeliveryTime"]));
    }
    if (m.find("AutoUnlockTime") != m.end() && !m["AutoUnlockTime"].empty()) {
      autoUnlockTime = make_shared<long>(boost::any_cast<long>(m["AutoUnlockTime"]));
    }
    if (m.find("BuyerAccountId") != m.end() && !m["BuyerAccountId"].empty()) {
      buyerAccountId = make_shared<string>(boost::any_cast<string>(m["BuyerAccountId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<long>(boost::any_cast<long>(m["FinishTime"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["ItemId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("OriginPrice") != m.end() && !m["OriginPrice"].empty()) {
      originPrice = make_shared<long>(boost::any_cast<long>(m["OriginPrice"]));
    }
    if (m.find("SettlementPrice") != m.end() && !m["SettlementPrice"].empty()) {
      settlementPrice = make_shared<long>(boost::any_cast<long>(m["SettlementPrice"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["SkuId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~QueryOrderResponseBodyData() = default;
};
class QueryOrderResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryOrderResponseBodyData> data{};
  shared_ptr<string> deliveryStatus{};
  shared_ptr<string> refundStatus{};
  shared_ptr<string> requestId{};

  QueryOrderResponseBody() {}

  explicit QueryOrderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deliveryStatus) {
      res["DeliveryStatus"] = boost::any(*deliveryStatus);
    }
    if (refundStatus) {
      res["RefundStatus"] = boost::any(*refundStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryOrderResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryOrderResponseBodyData>(model1);
      }
    }
    if (m.find("DeliveryStatus") != m.end() && !m["DeliveryStatus"].empty()) {
      deliveryStatus = make_shared<string>(boost::any_cast<string>(m["DeliveryStatus"]));
    }
    if (m.find("RefundStatus") != m.end() && !m["RefundStatus"].empty()) {
      refundStatus = make_shared<string>(boost::any_cast<string>(m["RefundStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryOrderResponseBody() = default;
};
class QueryOrderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryOrderResponseBody> body{};

  QueryOrderResponse() {}

  explicit QueryOrderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryOrderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryOrderResponseBody>(model1);
      }
    }
  }


  virtual ~QueryOrderResponse() = default;
};
class QueryOutAccountBindStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountDomain{};
  shared_ptr<string> accountId{};
  shared_ptr<string> gameId{};

  QueryOutAccountBindStatusRequest() {}

  explicit QueryOutAccountBindStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountDomain) {
      res["AccountDomain"] = boost::any(*accountDomain);
    }
    if (accountId) {
      res["AccountId"] = boost::any(*accountId);
    }
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountDomain") != m.end() && !m["AccountDomain"].empty()) {
      accountDomain = make_shared<string>(boost::any_cast<string>(m["AccountDomain"]));
    }
    if (m.find("AccountId") != m.end() && !m["AccountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["AccountId"]));
    }
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
  }


  virtual ~QueryOutAccountBindStatusRequest() = default;
};
class QueryOutAccountBindStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> bindStatus{};

  QueryOutAccountBindStatusResponseBodyData() {}

  explicit QueryOutAccountBindStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindStatus) {
      res["BindStatus"] = boost::any(*bindStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindStatus") != m.end() && !m["BindStatus"].empty()) {
      bindStatus = make_shared<long>(boost::any_cast<long>(m["BindStatus"]));
    }
  }


  virtual ~QueryOutAccountBindStatusResponseBodyData() = default;
};
class QueryOutAccountBindStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryOutAccountBindStatusResponseBodyData> data{};
  shared_ptr<string> requestId{};

  QueryOutAccountBindStatusResponseBody() {}

  explicit QueryOutAccountBindStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryOutAccountBindStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryOutAccountBindStatusResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryOutAccountBindStatusResponseBody() = default;
};
class QueryOutAccountBindStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryOutAccountBindStatusResponseBody> body{};

  QueryOutAccountBindStatusResponse() {}

  explicit QueryOutAccountBindStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryOutAccountBindStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryOutAccountBindStatusResponseBody>(model1);
      }
    }
  }


  virtual ~QueryOutAccountBindStatusResponse() = default;
};
class QueryProjectRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> projectId{};
  shared_ptr<long> tenantId{};

  QueryProjectRequest() {}

  explicit QueryProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<long>(boost::any_cast<long>(m["ProjectId"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~QueryProjectRequest() = default;
};
class QueryProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> name{};
  shared_ptr<long> tenantId{};

  QueryProjectResponseBodyData() {}

  explicit QueryProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
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
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~QueryProjectResponseBodyData() = default;
};
class QueryProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryProjectResponseBodyData>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  QueryProjectResponseBody() {}

  explicit QueryProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryProjectResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryProjectResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryProjectResponseBodyData>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryProjectResponseBody() = default;
};
class QueryProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryProjectResponseBody> body{};

  QueryProjectResponse() {}

  explicit QueryProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryProjectResponseBody>(model1);
      }
    }
  }


  virtual ~QueryProjectResponse() = default;
};
class QueryTenantRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> param{};

  QueryTenantRequest() {}

  explicit QueryTenantRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (param) {
      res["Param"] = boost::any(*param);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Param") != m.end() && !m["Param"].empty()) {
      param = make_shared<string>(boost::any_cast<string>(m["Param"]));
    }
  }


  virtual ~QueryTenantRequest() = default;
};
class QueryTenantResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> name{};
  shared_ptr<long> tenantId{};

  QueryTenantResponseBodyData() {}

  explicit QueryTenantResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
  }


  virtual ~QueryTenantResponseBodyData() = default;
};
class QueryTenantResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryTenantResponseBodyData>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  QueryTenantResponseBody() {}

  explicit QueryTenantResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryTenantResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTenantResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryTenantResponseBodyData>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryTenantResponseBody() = default;
};
class QueryTenantResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryTenantResponseBody> body{};

  QueryTenantResponse() {}

  explicit QueryTenantResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryTenantResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTenantResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTenantResponse() = default;
};
class RemoveGameFromProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> gameId{};
  shared_ptr<string> projectId{};

  RemoveGameFromProjectRequest() {}

  explicit RemoveGameFromProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~RemoveGameFromProjectRequest() = default;
};
class RemoveGameFromProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveGameFromProjectResponseBody() {}

  explicit RemoveGameFromProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveGameFromProjectResponseBody() = default;
};
class RemoveGameFromProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveGameFromProjectResponseBody> body{};

  RemoveGameFromProjectResponse() {}

  explicit RemoveGameFromProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveGameFromProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveGameFromProjectResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveGameFromProjectResponse() = default;
};
class SkipTrialPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> gameSessionId{};

  SkipTrialPolicyRequest() {}

  explicit SkipTrialPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gameSessionId) {
      res["GameSessionId"] = boost::any(*gameSessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GameSessionId") != m.end() && !m["GameSessionId"].empty()) {
      gameSessionId = make_shared<string>(boost::any_cast<string>(m["GameSessionId"]));
    }
  }


  virtual ~SkipTrialPolicyRequest() = default;
};
class SkipTrialPolicyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> skipResult{};

  SkipTrialPolicyResponseBodyData() {}

  explicit SkipTrialPolicyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (skipResult) {
      res["SkipResult"] = boost::any(*skipResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SkipResult") != m.end() && !m["SkipResult"].empty()) {
      skipResult = make_shared<long>(boost::any_cast<long>(m["SkipResult"]));
    }
  }


  virtual ~SkipTrialPolicyResponseBodyData() = default;
};
class SkipTrialPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<SkipTrialPolicyResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SkipTrialPolicyResponseBody() {}

  explicit SkipTrialPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SkipTrialPolicyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SkipTrialPolicyResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SkipTrialPolicyResponseBody() = default;
};
class SkipTrialPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SkipTrialPolicyResponseBody> body{};

  SkipTrialPolicyResponse() {}

  explicit SkipTrialPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SkipTrialPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SkipTrialPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~SkipTrialPolicyResponse() = default;
};
class StopGameSessionRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};
  shared_ptr<string> bizParam{};
  shared_ptr<string> gameId{};
  shared_ptr<string> gameSession{};
  shared_ptr<string> reason{};
  shared_ptr<string> userId{};

  StopGameSessionRequest() {}

  explicit StopGameSessionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["AccessKey"] = boost::any(*accessKey);
    }
    if (bizParam) {
      res["BizParam"] = boost::any(*bizParam);
    }
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (gameSession) {
      res["GameSession"] = boost::any(*gameSession);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["AccessKey"]));
    }
    if (m.find("BizParam") != m.end() && !m["BizParam"].empty()) {
      bizParam = make_shared<string>(boost::any_cast<string>(m["BizParam"]));
    }
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("GameSession") != m.end() && !m["GameSession"].empty()) {
      gameSession = make_shared<string>(boost::any_cast<string>(m["GameSession"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~StopGameSessionRequest() = default;
};
class StopGameSessionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> gameId{};
  shared_ptr<string> gameSession{};
  shared_ptr<string> message{};
  shared_ptr<long> queueCode{};
  shared_ptr<long> queueState{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopGameSessionResponseBody() {}

  explicit StopGameSessionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (gameSession) {
      res["GameSession"] = boost::any(*gameSession);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (queueCode) {
      res["QueueCode"] = boost::any(*queueCode);
    }
    if (queueState) {
      res["QueueState"] = boost::any(*queueState);
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
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("GameSession") != m.end() && !m["GameSession"].empty()) {
      gameSession = make_shared<string>(boost::any_cast<string>(m["GameSession"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("QueueCode") != m.end() && !m["QueueCode"].empty()) {
      queueCode = make_shared<long>(boost::any_cast<long>(m["QueueCode"]));
    }
    if (m.find("QueueState") != m.end() && !m["QueueState"].empty()) {
      queueState = make_shared<long>(boost::any_cast<long>(m["QueueState"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StopGameSessionResponseBody() = default;
};
class StopGameSessionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopGameSessionResponseBody> body{};

  StopGameSessionResponse() {}

  explicit StopGameSessionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopGameSessionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopGameSessionResponseBody>(model1);
      }
    }
  }


  virtual ~StopGameSessionResponse() = default;
};
class SubmitDeploymentRequest : public Darabonba::Model {
public:
  shared_ptr<string> cloudGameInstanceIds{};
  shared_ptr<string> gameId{};
  shared_ptr<string> operationType{};
  shared_ptr<string> projectId{};
  shared_ptr<string> versionId{};

  SubmitDeploymentRequest() {}

  explicit SubmitDeploymentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cloudGameInstanceIds) {
      res["CloudGameInstanceIds"] = boost::any(*cloudGameInstanceIds);
    }
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CloudGameInstanceIds") != m.end() && !m["CloudGameInstanceIds"].empty()) {
      cloudGameInstanceIds = make_shared<string>(boost::any_cast<string>(m["CloudGameInstanceIds"]));
    }
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~SubmitDeploymentRequest() = default;
};
class SubmitDeploymentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  SubmitDeploymentResponseBody() {}

  explicit SubmitDeploymentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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


  virtual ~SubmitDeploymentResponseBody() = default;
};
class SubmitDeploymentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitDeploymentResponseBody> body{};

  SubmitDeploymentResponse() {}

  explicit SubmitDeploymentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitDeploymentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitDeploymentResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitDeploymentResponse() = default;
};
class SubmitInternalPurchaseChargeDataRequest : public Darabonba::Model {
public:
  shared_ptr<double> activeUserRetentionRateOneDay{};
  shared_ptr<double> activeUserRetentionRateSevenDay{};
  shared_ptr<double> activeUserRetentionRateThirtyDay{};
  shared_ptr<double> arpu{};
  shared_ptr<string> chargeDate{};
  shared_ptr<long> dau{};
  shared_ptr<string> gameId{};
  shared_ptr<long> mau{};
  shared_ptr<double> newUserRetentionRateOneDay{};
  shared_ptr<double> newUserRetentionRateSevenDay{};
  shared_ptr<double> newUserRetentionRateThirtyDay{};
  shared_ptr<double> paymentConversionRate{};
  shared_ptr<double> playTimeAverageOneDay{};
  shared_ptr<double> playTimeAverageThirtyDay{};
  shared_ptr<double> playTimeNinetyPointsOneDay{};
  shared_ptr<double> playTimeNinetyPointsThirtyDay{};
  shared_ptr<string> playTimeRangeOneDay{};
  shared_ptr<string> playTimeRangeThirtyDay{};
  shared_ptr<double> userActivationRate{};

  SubmitInternalPurchaseChargeDataRequest() {}

  explicit SubmitInternalPurchaseChargeDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeUserRetentionRateOneDay) {
      res["ActiveUserRetentionRateOneDay"] = boost::any(*activeUserRetentionRateOneDay);
    }
    if (activeUserRetentionRateSevenDay) {
      res["ActiveUserRetentionRateSevenDay"] = boost::any(*activeUserRetentionRateSevenDay);
    }
    if (activeUserRetentionRateThirtyDay) {
      res["ActiveUserRetentionRateThirtyDay"] = boost::any(*activeUserRetentionRateThirtyDay);
    }
    if (arpu) {
      res["Arpu"] = boost::any(*arpu);
    }
    if (chargeDate) {
      res["ChargeDate"] = boost::any(*chargeDate);
    }
    if (dau) {
      res["Dau"] = boost::any(*dau);
    }
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (mau) {
      res["Mau"] = boost::any(*mau);
    }
    if (newUserRetentionRateOneDay) {
      res["NewUserRetentionRateOneDay"] = boost::any(*newUserRetentionRateOneDay);
    }
    if (newUserRetentionRateSevenDay) {
      res["NewUserRetentionRateSevenDay"] = boost::any(*newUserRetentionRateSevenDay);
    }
    if (newUserRetentionRateThirtyDay) {
      res["NewUserRetentionRateThirtyDay"] = boost::any(*newUserRetentionRateThirtyDay);
    }
    if (paymentConversionRate) {
      res["PaymentConversionRate"] = boost::any(*paymentConversionRate);
    }
    if (playTimeAverageOneDay) {
      res["PlayTimeAverageOneDay"] = boost::any(*playTimeAverageOneDay);
    }
    if (playTimeAverageThirtyDay) {
      res["PlayTimeAverageThirtyDay"] = boost::any(*playTimeAverageThirtyDay);
    }
    if (playTimeNinetyPointsOneDay) {
      res["PlayTimeNinetyPointsOneDay"] = boost::any(*playTimeNinetyPointsOneDay);
    }
    if (playTimeNinetyPointsThirtyDay) {
      res["PlayTimeNinetyPointsThirtyDay"] = boost::any(*playTimeNinetyPointsThirtyDay);
    }
    if (playTimeRangeOneDay) {
      res["PlayTimeRangeOneDay"] = boost::any(*playTimeRangeOneDay);
    }
    if (playTimeRangeThirtyDay) {
      res["PlayTimeRangeThirtyDay"] = boost::any(*playTimeRangeThirtyDay);
    }
    if (userActivationRate) {
      res["UserActivationRate"] = boost::any(*userActivationRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActiveUserRetentionRateOneDay") != m.end() && !m["ActiveUserRetentionRateOneDay"].empty()) {
      activeUserRetentionRateOneDay = make_shared<double>(boost::any_cast<double>(m["ActiveUserRetentionRateOneDay"]));
    }
    if (m.find("ActiveUserRetentionRateSevenDay") != m.end() && !m["ActiveUserRetentionRateSevenDay"].empty()) {
      activeUserRetentionRateSevenDay = make_shared<double>(boost::any_cast<double>(m["ActiveUserRetentionRateSevenDay"]));
    }
    if (m.find("ActiveUserRetentionRateThirtyDay") != m.end() && !m["ActiveUserRetentionRateThirtyDay"].empty()) {
      activeUserRetentionRateThirtyDay = make_shared<double>(boost::any_cast<double>(m["ActiveUserRetentionRateThirtyDay"]));
    }
    if (m.find("Arpu") != m.end() && !m["Arpu"].empty()) {
      arpu = make_shared<double>(boost::any_cast<double>(m["Arpu"]));
    }
    if (m.find("ChargeDate") != m.end() && !m["ChargeDate"].empty()) {
      chargeDate = make_shared<string>(boost::any_cast<string>(m["ChargeDate"]));
    }
    if (m.find("Dau") != m.end() && !m["Dau"].empty()) {
      dau = make_shared<long>(boost::any_cast<long>(m["Dau"]));
    }
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("Mau") != m.end() && !m["Mau"].empty()) {
      mau = make_shared<long>(boost::any_cast<long>(m["Mau"]));
    }
    if (m.find("NewUserRetentionRateOneDay") != m.end() && !m["NewUserRetentionRateOneDay"].empty()) {
      newUserRetentionRateOneDay = make_shared<double>(boost::any_cast<double>(m["NewUserRetentionRateOneDay"]));
    }
    if (m.find("NewUserRetentionRateSevenDay") != m.end() && !m["NewUserRetentionRateSevenDay"].empty()) {
      newUserRetentionRateSevenDay = make_shared<double>(boost::any_cast<double>(m["NewUserRetentionRateSevenDay"]));
    }
    if (m.find("NewUserRetentionRateThirtyDay") != m.end() && !m["NewUserRetentionRateThirtyDay"].empty()) {
      newUserRetentionRateThirtyDay = make_shared<double>(boost::any_cast<double>(m["NewUserRetentionRateThirtyDay"]));
    }
    if (m.find("PaymentConversionRate") != m.end() && !m["PaymentConversionRate"].empty()) {
      paymentConversionRate = make_shared<double>(boost::any_cast<double>(m["PaymentConversionRate"]));
    }
    if (m.find("PlayTimeAverageOneDay") != m.end() && !m["PlayTimeAverageOneDay"].empty()) {
      playTimeAverageOneDay = make_shared<double>(boost::any_cast<double>(m["PlayTimeAverageOneDay"]));
    }
    if (m.find("PlayTimeAverageThirtyDay") != m.end() && !m["PlayTimeAverageThirtyDay"].empty()) {
      playTimeAverageThirtyDay = make_shared<double>(boost::any_cast<double>(m["PlayTimeAverageThirtyDay"]));
    }
    if (m.find("PlayTimeNinetyPointsOneDay") != m.end() && !m["PlayTimeNinetyPointsOneDay"].empty()) {
      playTimeNinetyPointsOneDay = make_shared<double>(boost::any_cast<double>(m["PlayTimeNinetyPointsOneDay"]));
    }
    if (m.find("PlayTimeNinetyPointsThirtyDay") != m.end() && !m["PlayTimeNinetyPointsThirtyDay"].empty()) {
      playTimeNinetyPointsThirtyDay = make_shared<double>(boost::any_cast<double>(m["PlayTimeNinetyPointsThirtyDay"]));
    }
    if (m.find("PlayTimeRangeOneDay") != m.end() && !m["PlayTimeRangeOneDay"].empty()) {
      playTimeRangeOneDay = make_shared<string>(boost::any_cast<string>(m["PlayTimeRangeOneDay"]));
    }
    if (m.find("PlayTimeRangeThirtyDay") != m.end() && !m["PlayTimeRangeThirtyDay"].empty()) {
      playTimeRangeThirtyDay = make_shared<string>(boost::any_cast<string>(m["PlayTimeRangeThirtyDay"]));
    }
    if (m.find("UserActivationRate") != m.end() && !m["UserActivationRate"].empty()) {
      userActivationRate = make_shared<double>(boost::any_cast<double>(m["UserActivationRate"]));
    }
  }


  virtual ~SubmitInternalPurchaseChargeDataRequest() = default;
};
class SubmitInternalPurchaseChargeDataResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<long> status{};

  SubmitInternalPurchaseChargeDataResponseBodyData() {}

  explicit SubmitInternalPurchaseChargeDataResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~SubmitInternalPurchaseChargeDataResponseBodyData() = default;
};
class SubmitInternalPurchaseChargeDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<SubmitInternalPurchaseChargeDataResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SubmitInternalPurchaseChargeDataResponseBody() {}

  explicit SubmitInternalPurchaseChargeDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitInternalPurchaseChargeDataResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitInternalPurchaseChargeDataResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitInternalPurchaseChargeDataResponseBody() = default;
};
class SubmitInternalPurchaseChargeDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitInternalPurchaseChargeDataResponseBody> body{};

  SubmitInternalPurchaseChargeDataResponse() {}

  explicit SubmitInternalPurchaseChargeDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitInternalPurchaseChargeDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitInternalPurchaseChargeDataResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitInternalPurchaseChargeDataResponse() = default;
};
class SubmitInternalPurchaseOrdersRequestOrderList : public Darabonba::Model {
public:
  shared_ptr<string> batchNumber{};
  shared_ptr<long> finalPrice{};
  shared_ptr<long> finishTime{};
  shared_ptr<string> gameId{};
  shared_ptr<string> orderId{};
  shared_ptr<string> roleId{};
  shared_ptr<string> userId{};

  SubmitInternalPurchaseOrdersRequestOrderList() {}

  explicit SubmitInternalPurchaseOrdersRequestOrderList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchNumber) {
      res["BatchNumber"] = boost::any(*batchNumber);
    }
    if (finalPrice) {
      res["FinalPrice"] = boost::any(*finalPrice);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (roleId) {
      res["RoleId"] = boost::any(*roleId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchNumber") != m.end() && !m["BatchNumber"].empty()) {
      batchNumber = make_shared<string>(boost::any_cast<string>(m["BatchNumber"]));
    }
    if (m.find("FinalPrice") != m.end() && !m["FinalPrice"].empty()) {
      finalPrice = make_shared<long>(boost::any_cast<long>(m["FinalPrice"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<long>(boost::any_cast<long>(m["FinishTime"]));
    }
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RoleId") != m.end() && !m["RoleId"].empty()) {
      roleId = make_shared<string>(boost::any_cast<string>(m["RoleId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~SubmitInternalPurchaseOrdersRequestOrderList() = default;
};
class SubmitInternalPurchaseOrdersRequest : public Darabonba::Model {
public:
  shared_ptr<vector<SubmitInternalPurchaseOrdersRequestOrderList>> orderList{};

  SubmitInternalPurchaseOrdersRequest() {}

  explicit SubmitInternalPurchaseOrdersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderList) {
      vector<boost::any> temp1;
      for(auto item1:*orderList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OrderList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderList") != m.end() && !m["OrderList"].empty()) {
      if (typeid(vector<boost::any>) == m["OrderList"].type()) {
        vector<SubmitInternalPurchaseOrdersRequestOrderList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OrderList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitInternalPurchaseOrdersRequestOrderList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        orderList = make_shared<vector<SubmitInternalPurchaseOrdersRequestOrderList>>(expect1);
      }
    }
  }


  virtual ~SubmitInternalPurchaseOrdersRequest() = default;
};
class SubmitInternalPurchaseOrdersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<long> status{};

  SubmitInternalPurchaseOrdersResponseBodyData() {}

  explicit SubmitInternalPurchaseOrdersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~SubmitInternalPurchaseOrdersResponseBodyData() = default;
};
class SubmitInternalPurchaseOrdersResponseBody : public Darabonba::Model {
public:
  shared_ptr<SubmitInternalPurchaseOrdersResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SubmitInternalPurchaseOrdersResponseBody() {}

  explicit SubmitInternalPurchaseOrdersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitInternalPurchaseOrdersResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitInternalPurchaseOrdersResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitInternalPurchaseOrdersResponseBody() = default;
};
class SubmitInternalPurchaseOrdersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitInternalPurchaseOrdersResponseBody> body{};

  SubmitInternalPurchaseOrdersResponse() {}

  explicit SubmitInternalPurchaseOrdersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitInternalPurchaseOrdersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitInternalPurchaseOrdersResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitInternalPurchaseOrdersResponse() = default;
};
class SubmitInternalPurchaseReadyFlagRequestBatchInfoList : public Darabonba::Model {
public:
  shared_ptr<string> batchNumbers{};
  shared_ptr<long> batchSize{};

  SubmitInternalPurchaseReadyFlagRequestBatchInfoList() {}

  explicit SubmitInternalPurchaseReadyFlagRequestBatchInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchNumbers) {
      res["BatchNumbers"] = boost::any(*batchNumbers);
    }
    if (batchSize) {
      res["BatchSize"] = boost::any(*batchSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchNumbers") != m.end() && !m["BatchNumbers"].empty()) {
      batchNumbers = make_shared<string>(boost::any_cast<string>(m["BatchNumbers"]));
    }
    if (m.find("BatchSize") != m.end() && !m["BatchSize"].empty()) {
      batchSize = make_shared<long>(boost::any_cast<long>(m["BatchSize"]));
    }
  }


  virtual ~SubmitInternalPurchaseReadyFlagRequestBatchInfoList() = default;
};
class SubmitInternalPurchaseReadyFlagRequest : public Darabonba::Model {
public:
  shared_ptr<vector<SubmitInternalPurchaseReadyFlagRequestBatchInfoList>> batchInfoList{};
  shared_ptr<string> chargeDate{};
  shared_ptr<string> gameId{};
  shared_ptr<long> orderTotalCount{};
  shared_ptr<long> status{};

  SubmitInternalPurchaseReadyFlagRequest() {}

  explicit SubmitInternalPurchaseReadyFlagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*batchInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BatchInfoList"] = boost::any(temp1);
    }
    if (chargeDate) {
      res["ChargeDate"] = boost::any(*chargeDate);
    }
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (orderTotalCount) {
      res["OrderTotalCount"] = boost::any(*orderTotalCount);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchInfoList") != m.end() && !m["BatchInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["BatchInfoList"].type()) {
        vector<SubmitInternalPurchaseReadyFlagRequestBatchInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BatchInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitInternalPurchaseReadyFlagRequestBatchInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        batchInfoList = make_shared<vector<SubmitInternalPurchaseReadyFlagRequestBatchInfoList>>(expect1);
      }
    }
    if (m.find("ChargeDate") != m.end() && !m["ChargeDate"].empty()) {
      chargeDate = make_shared<string>(boost::any_cast<string>(m["ChargeDate"]));
    }
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("OrderTotalCount") != m.end() && !m["OrderTotalCount"].empty()) {
      orderTotalCount = make_shared<long>(boost::any_cast<long>(m["OrderTotalCount"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~SubmitInternalPurchaseReadyFlagRequest() = default;
};
class SubmitInternalPurchaseReadyFlagResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<string> missingBatchNumbers{};
  shared_ptr<long> status{};

  SubmitInternalPurchaseReadyFlagResponseBodyData() {}

  explicit SubmitInternalPurchaseReadyFlagResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (missingBatchNumbers) {
      res["MissingBatchNumbers"] = boost::any(*missingBatchNumbers);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("MissingBatchNumbers") != m.end() && !m["MissingBatchNumbers"].empty()) {
      missingBatchNumbers = make_shared<string>(boost::any_cast<string>(m["MissingBatchNumbers"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~SubmitInternalPurchaseReadyFlagResponseBodyData() = default;
};
class SubmitInternalPurchaseReadyFlagResponseBody : public Darabonba::Model {
public:
  shared_ptr<SubmitInternalPurchaseReadyFlagResponseBodyData> data{};
  shared_ptr<string> requestId{};

  SubmitInternalPurchaseReadyFlagResponseBody() {}

  explicit SubmitInternalPurchaseReadyFlagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitInternalPurchaseReadyFlagResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SubmitInternalPurchaseReadyFlagResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitInternalPurchaseReadyFlagResponseBody() = default;
};
class SubmitInternalPurchaseReadyFlagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SubmitInternalPurchaseReadyFlagResponseBody> body{};

  SubmitInternalPurchaseReadyFlagResponse() {}

  explicit SubmitInternalPurchaseReadyFlagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitInternalPurchaseReadyFlagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitInternalPurchaseReadyFlagResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitInternalPurchaseReadyFlagResponse() = default;
};
class UploadGameVersionByDownloadRequest : public Darabonba::Model {
public:
  shared_ptr<string> downloadType{};
  shared_ptr<string> fileType{};
  shared_ptr<string> gameId{};
  shared_ptr<string> gameVersion{};
  shared_ptr<string> hash{};
  shared_ptr<string> versionName{};

  UploadGameVersionByDownloadRequest() {}

  explicit UploadGameVersionByDownloadRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downloadType) {
      res["DownloadType"] = boost::any(*downloadType);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (gameId) {
      res["GameId"] = boost::any(*gameId);
    }
    if (gameVersion) {
      res["GameVersion"] = boost::any(*gameVersion);
    }
    if (hash) {
      res["Hash"] = boost::any(*hash);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownloadType") != m.end() && !m["DownloadType"].empty()) {
      downloadType = make_shared<string>(boost::any_cast<string>(m["DownloadType"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("GameId") != m.end() && !m["GameId"].empty()) {
      gameId = make_shared<string>(boost::any_cast<string>(m["GameId"]));
    }
    if (m.find("GameVersion") != m.end() && !m["GameVersion"].empty()) {
      gameVersion = make_shared<string>(boost::any_cast<string>(m["GameVersion"]));
    }
    if (m.find("Hash") != m.end() && !m["Hash"].empty()) {
      hash = make_shared<string>(boost::any_cast<string>(m["Hash"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~UploadGameVersionByDownloadRequest() = default;
};
class UploadGameVersionByDownloadResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  UploadGameVersionByDownloadResponseBody() {}

  explicit UploadGameVersionByDownloadResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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


  virtual ~UploadGameVersionByDownloadResponseBody() = default;
};
class UploadGameVersionByDownloadResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UploadGameVersionByDownloadResponseBody> body{};

  UploadGameVersionByDownloadResponse() {}

  explicit UploadGameVersionByDownloadResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadGameVersionByDownloadResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadGameVersionByDownloadResponseBody>(model1);
      }
    }
  }


  virtual ~UploadGameVersionByDownloadResponse() = default;
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
  AdaptGameVersionResponse adaptGameVersionWithOptions(shared_ptr<AdaptGameVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AdaptGameVersionResponse adaptGameVersion(shared_ptr<AdaptGameVersionRequest> request);
  AddGameToProjectResponse addGameToProjectWithOptions(shared_ptr<AddGameToProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddGameToProjectResponse addGameToProject(shared_ptr<AddGameToProjectRequest> request);
  BatchDispatchGameSlotResponse batchDispatchGameSlotWithOptions(shared_ptr<BatchDispatchGameSlotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchDispatchGameSlotResponse batchDispatchGameSlot(shared_ptr<BatchDispatchGameSlotRequest> request);
  BatchStopGameSessionsResponse batchStopGameSessionsWithOptions(shared_ptr<BatchStopGameSessionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchStopGameSessionsResponse batchStopGameSessions(shared_ptr<BatchStopGameSessionsRequest> request);
  CloseOrderResponse closeOrderWithOptions(shared_ptr<CloseOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CloseOrderResponse closeOrder(shared_ptr<CloseOrderRequest> request);
  CreateGameResponse createGameWithOptions(shared_ptr<CreateGameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGameResponse createGame(shared_ptr<CreateGameRequest> request);
  CreateGameDeployWorkflowResponse createGameDeployWorkflowWithOptions(shared_ptr<CreateGameDeployWorkflowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGameDeployWorkflowResponse createGameDeployWorkflow(shared_ptr<CreateGameDeployWorkflowRequest> request);
  CreateOrderResponse createOrderWithOptions(shared_ptr<CreateOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOrderResponse createOrder(shared_ptr<CreateOrderRequest> request);
  CreateProjectResponse createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProjectResponse createProject(shared_ptr<CreateProjectRequest> request);
  CreateTokenResponse createTokenWithOptions(shared_ptr<CreateTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTokenResponse createToken(shared_ptr<CreateTokenRequest> request);
  DeleteGameResponse deleteGameWithOptions(shared_ptr<DeleteGameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGameResponse deleteGame(shared_ptr<DeleteGameRequest> request);
  DeleteGameVersionResponse deleteGameVersionWithOptions(shared_ptr<DeleteGameVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGameVersionResponse deleteGameVersion(shared_ptr<DeleteGameVersionRequest> request);
  DeleteProjectResponse deleteProjectWithOptions(shared_ptr<DeleteProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProjectResponse deleteProject(shared_ptr<DeleteProjectRequest> request);
  DeliveryOrderResponse deliveryOrderWithOptions(shared_ptr<DeliveryOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeliveryOrderResponse deliveryOrder(shared_ptr<DeliveryOrderRequest> request);
  DispatchGameSlotResponse dispatchGameSlotWithOptions(shared_ptr<DispatchGameSlotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DispatchGameSlotResponse dispatchGameSlot(shared_ptr<DispatchGameSlotRequest> request);
  GetGameCcuResponse getGameCcuWithOptions(shared_ptr<GetGameCcuRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGameCcuResponse getGameCcu(shared_ptr<GetGameCcuRequest> request);
  GetGameStatusResponse getGameStatusWithOptions(shared_ptr<GetGameStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGameStatusResponse getGameStatus(shared_ptr<GetGameStatusRequest> request);
  GetGameStockResponse getGameStockWithOptions(shared_ptr<GetGameStockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGameStockResponse getGameStock(shared_ptr<GetGameStockRequest> request);
  GetGameTrialSurplusDurationResponse getGameTrialSurplusDurationWithOptions(shared_ptr<GetGameTrialSurplusDurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGameTrialSurplusDurationResponse getGameTrialSurplusDuration(shared_ptr<GetGameTrialSurplusDurationRequest> request);
  GetGameVersionResponse getGameVersionWithOptions(shared_ptr<GetGameVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGameVersionResponse getGameVersion(shared_ptr<GetGameVersionRequest> request);
  GetGameVersionProgressResponse getGameVersionProgressWithOptions(shared_ptr<GetGameVersionProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetGameVersionProgressResponse getGameVersionProgress(shared_ptr<GetGameVersionProgressRequest> request);
  GetItemResponse getItemWithOptions(shared_ptr<GetItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetItemResponse getItem(shared_ptr<GetItemRequest> request);
  GetOutAccountBindDetailResponse getOutAccountBindDetailWithOptions(shared_ptr<GetOutAccountBindDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOutAccountBindDetailResponse getOutAccountBindDetail(shared_ptr<GetOutAccountBindDetailRequest> request);
  GetSessionResponse getSessionWithOptions(shared_ptr<GetSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSessionResponse getSession(shared_ptr<GetSessionRequest> request);
  GetStopGameTokenResponse getStopGameTokenWithOptions(shared_ptr<GetStopGameTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStopGameTokenResponse getStopGameToken(shared_ptr<GetStopGameTokenRequest> request);
  KickPlayerResponse kickPlayerWithOptions(shared_ptr<KickPlayerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  KickPlayerResponse kickPlayer(shared_ptr<KickPlayerRequest> request);
  ListBoughtGamesResponse listBoughtGamesWithOptions(shared_ptr<ListBoughtGamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBoughtGamesResponse listBoughtGames(shared_ptr<ListBoughtGamesRequest> request);
  ListContainerStatusResponse listContainerStatusWithOptions(shared_ptr<ListContainerStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListContainerStatusResponse listContainerStatus(shared_ptr<ListContainerStatusRequest> request);
  ListDeployableInstancesResponse listDeployableInstancesWithOptions(shared_ptr<ListDeployableInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeployableInstancesResponse listDeployableInstances(shared_ptr<ListDeployableInstancesRequest> request);
  ListGameVersionsResponse listGameVersionsWithOptions(shared_ptr<ListGameVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGameVersionsResponse listGameVersions(shared_ptr<ListGameVersionsRequest> request);
  ListGamesResponse listGamesWithOptions(shared_ptr<ListGamesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGamesResponse listGames(shared_ptr<ListGamesRequest> request);
  ListHistoryContainerStatusResponse listHistoryContainerStatusWithOptions(shared_ptr<ListHistoryContainerStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListHistoryContainerStatusResponse listHistoryContainerStatus(shared_ptr<ListHistoryContainerStatusRequest> request);
  ListProjectsResponse listProjectsWithOptions(shared_ptr<ListProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectsResponse listProjects(shared_ptr<ListProjectsRequest> request);
  QueryGameResponse queryGameWithOptions(shared_ptr<QueryGameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryGameResponse queryGame(shared_ptr<QueryGameRequest> request);
  QueryItemsResponse queryItemsWithOptions(shared_ptr<QueryItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryItemsResponse queryItems(shared_ptr<QueryItemsRequest> request);
  QueryOrderResponse queryOrderWithOptions(shared_ptr<QueryOrderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryOrderResponse queryOrder(shared_ptr<QueryOrderRequest> request);
  QueryOutAccountBindStatusResponse queryOutAccountBindStatusWithOptions(shared_ptr<QueryOutAccountBindStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryOutAccountBindStatusResponse queryOutAccountBindStatus(shared_ptr<QueryOutAccountBindStatusRequest> request);
  QueryProjectResponse queryProjectWithOptions(shared_ptr<QueryProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryProjectResponse queryProject(shared_ptr<QueryProjectRequest> request);
  QueryTenantResponse queryTenantWithOptions(shared_ptr<QueryTenantRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTenantResponse queryTenant(shared_ptr<QueryTenantRequest> request);
  RemoveGameFromProjectResponse removeGameFromProjectWithOptions(shared_ptr<RemoveGameFromProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveGameFromProjectResponse removeGameFromProject(shared_ptr<RemoveGameFromProjectRequest> request);
  SkipTrialPolicyResponse skipTrialPolicyWithOptions(shared_ptr<SkipTrialPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SkipTrialPolicyResponse skipTrialPolicy(shared_ptr<SkipTrialPolicyRequest> request);
  StopGameSessionResponse stopGameSessionWithOptions(shared_ptr<StopGameSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopGameSessionResponse stopGameSession(shared_ptr<StopGameSessionRequest> request);
  SubmitDeploymentResponse submitDeploymentWithOptions(shared_ptr<SubmitDeploymentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitDeploymentResponse submitDeployment(shared_ptr<SubmitDeploymentRequest> request);
  SubmitInternalPurchaseChargeDataResponse submitInternalPurchaseChargeDataWithOptions(shared_ptr<SubmitInternalPurchaseChargeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitInternalPurchaseChargeDataResponse submitInternalPurchaseChargeData(shared_ptr<SubmitInternalPurchaseChargeDataRequest> request);
  SubmitInternalPurchaseOrdersResponse submitInternalPurchaseOrdersWithOptions(shared_ptr<SubmitInternalPurchaseOrdersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitInternalPurchaseOrdersResponse submitInternalPurchaseOrders(shared_ptr<SubmitInternalPurchaseOrdersRequest> request);
  SubmitInternalPurchaseReadyFlagResponse submitInternalPurchaseReadyFlagWithOptions(shared_ptr<SubmitInternalPurchaseReadyFlagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitInternalPurchaseReadyFlagResponse submitInternalPurchaseReadyFlag(shared_ptr<SubmitInternalPurchaseReadyFlagRequest> request);
  UploadGameVersionByDownloadResponse uploadGameVersionByDownloadWithOptions(shared_ptr<UploadGameVersionByDownloadRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadGameVersionByDownloadResponse uploadGameVersionByDownload(shared_ptr<UploadGameVersionByDownloadRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_CloudGameAPI20200728

#endif
