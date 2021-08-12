// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SNAPSHOT20210315_H_
#define ALIBABACLOUD_SNAPSHOT20210315_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Snapshot20210315 {
class GetSnapshotInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> snapshotId{};
  shared_ptr<bool> showDetail{};

  GetSnapshotInfoRequest() {}

  explicit GetSnapshotInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (showDetail) {
      res["ShowDetail"] = boost::any(*showDetail);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("ShowDetail") != m.end() && !m["ShowDetail"].empty()) {
      showDetail = make_shared<bool>(boost::any_cast<bool>(m["ShowDetail"]));
    }
  }


  virtual ~GetSnapshotInfoRequest() = default;
};
class GetSnapshotInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> volumeSize{};
  shared_ptr<long> blockSize{};
  shared_ptr<long> blockCount{};
  shared_ptr<long> validBlockCount{};
  shared_ptr<string> status{};
  shared_ptr<long> createTime{};
  shared_ptr<bool> encrypted{};
  shared_ptr<string> format{};

  GetSnapshotInfoResponseBody() {}

  explicit GetSnapshotInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (volumeSize) {
      res["VolumeSize"] = boost::any(*volumeSize);
    }
    if (blockSize) {
      res["BlockSize"] = boost::any(*blockSize);
    }
    if (blockCount) {
      res["BlockCount"] = boost::any(*blockCount);
    }
    if (validBlockCount) {
      res["ValidBlockCount"] = boost::any(*validBlockCount);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (encrypted) {
      res["Encrypted"] = boost::any(*encrypted);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VolumeSize") != m.end() && !m["VolumeSize"].empty()) {
      volumeSize = make_shared<long>(boost::any_cast<long>(m["VolumeSize"]));
    }
    if (m.find("BlockSize") != m.end() && !m["BlockSize"].empty()) {
      blockSize = make_shared<long>(boost::any_cast<long>(m["BlockSize"]));
    }
    if (m.find("BlockCount") != m.end() && !m["BlockCount"].empty()) {
      blockCount = make_shared<long>(boost::any_cast<long>(m["BlockCount"]));
    }
    if (m.find("ValidBlockCount") != m.end() && !m["ValidBlockCount"].empty()) {
      validBlockCount = make_shared<long>(boost::any_cast<long>(m["ValidBlockCount"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Encrypted") != m.end() && !m["Encrypted"].empty()) {
      encrypted = make_shared<bool>(boost::any_cast<bool>(m["Encrypted"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
  }


  virtual ~GetSnapshotInfoResponseBody() = default;
};
class GetSnapshotInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSnapshotInfoResponseBody> body{};

  GetSnapshotInfoResponse() {}

  explicit GetSnapshotInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSnapshotInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSnapshotInfoResponseBody>(model1);
      }
    }
  }


  virtual ~GetSnapshotInfoResponse() = default;
};
class GetSnapshotBlockRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<long> blockIndex{};
  shared_ptr<string> blockToken{};
  shared_ptr<string> snapshotId{};

  GetSnapshotBlockRequest() {}

  explicit GetSnapshotBlockRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (blockIndex) {
      res["BlockIndex"] = boost::any(*blockIndex);
    }
    if (blockToken) {
      res["BlockToken"] = boost::any(*blockToken);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("BlockIndex") != m.end() && !m["BlockIndex"].empty()) {
      blockIndex = make_shared<long>(boost::any_cast<long>(m["BlockIndex"]));
    }
    if (m.find("BlockToken") != m.end() && !m["BlockToken"].empty()) {
      blockToken = make_shared<string>(boost::any_cast<string>(m["BlockToken"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
  }


  virtual ~GetSnapshotBlockRequest() = default;
};
class GetSnapshotBlockResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<Darabonba::Stream> body{};

  GetSnapshotBlockResponse() {}

  explicit GetSnapshotBlockResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      body = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["body"]));
    }
  }


  virtual ~GetSnapshotBlockResponse() = default;
};
class ListSnapshotBlocksRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> snapshotId{};
  shared_ptr<long> startingBlockIndex{};

  ListSnapshotBlocksRequest() {}

  explicit ListSnapshotBlocksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (snapshotId) {
      res["SnapshotId"] = boost::any(*snapshotId);
    }
    if (startingBlockIndex) {
      res["StartingBlockIndex"] = boost::any(*startingBlockIndex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("SnapshotId") != m.end() && !m["SnapshotId"].empty()) {
      snapshotId = make_shared<string>(boost::any_cast<string>(m["SnapshotId"]));
    }
    if (m.find("StartingBlockIndex") != m.end() && !m["StartingBlockIndex"].empty()) {
      startingBlockIndex = make_shared<long>(boost::any_cast<long>(m["StartingBlockIndex"]));
    }
  }


  virtual ~ListSnapshotBlocksRequest() = default;
};
class ListSnapshotBlocksResponseBodyBlocks : public Darabonba::Model {
public:
  shared_ptr<long> blockIndex{};
  shared_ptr<string> blockToken{};

  ListSnapshotBlocksResponseBodyBlocks() {}

  explicit ListSnapshotBlocksResponseBodyBlocks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockIndex) {
      res["BlockIndex"] = boost::any(*blockIndex);
    }
    if (blockToken) {
      res["BlockToken"] = boost::any(*blockToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockIndex") != m.end() && !m["BlockIndex"].empty()) {
      blockIndex = make_shared<long>(boost::any_cast<long>(m["BlockIndex"]));
    }
    if (m.find("BlockToken") != m.end() && !m["BlockToken"].empty()) {
      blockToken = make_shared<string>(boost::any_cast<string>(m["BlockToken"]));
    }
  }


  virtual ~ListSnapshotBlocksResponseBodyBlocks() = default;
};
class ListSnapshotBlocksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListSnapshotBlocksResponseBodyBlocks>> blocks{};
  shared_ptr<long> expiryTime{};
  shared_ptr<long> volumeSize{};
  shared_ptr<long> blockSize{};
  shared_ptr<long> blockCount{};
  shared_ptr<long> totalBlockCount{};

  ListSnapshotBlocksResponseBody() {}

  explicit ListSnapshotBlocksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (blocks) {
      vector<boost::any> temp1;
      for(auto item1:*blocks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Blocks"] = boost::any(temp1);
    }
    if (expiryTime) {
      res["ExpiryTime"] = boost::any(*expiryTime);
    }
    if (volumeSize) {
      res["VolumeSize"] = boost::any(*volumeSize);
    }
    if (blockSize) {
      res["BlockSize"] = boost::any(*blockSize);
    }
    if (blockCount) {
      res["BlockCount"] = boost::any(*blockCount);
    }
    if (totalBlockCount) {
      res["TotalBlockCount"] = boost::any(*totalBlockCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Blocks") != m.end() && !m["Blocks"].empty()) {
      if (typeid(vector<boost::any>) == m["Blocks"].type()) {
        vector<ListSnapshotBlocksResponseBodyBlocks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Blocks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSnapshotBlocksResponseBodyBlocks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        blocks = make_shared<vector<ListSnapshotBlocksResponseBodyBlocks>>(expect1);
      }
    }
    if (m.find("ExpiryTime") != m.end() && !m["ExpiryTime"].empty()) {
      expiryTime = make_shared<long>(boost::any_cast<long>(m["ExpiryTime"]));
    }
    if (m.find("VolumeSize") != m.end() && !m["VolumeSize"].empty()) {
      volumeSize = make_shared<long>(boost::any_cast<long>(m["VolumeSize"]));
    }
    if (m.find("BlockSize") != m.end() && !m["BlockSize"].empty()) {
      blockSize = make_shared<long>(boost::any_cast<long>(m["BlockSize"]));
    }
    if (m.find("BlockCount") != m.end() && !m["BlockCount"].empty()) {
      blockCount = make_shared<long>(boost::any_cast<long>(m["BlockCount"]));
    }
    if (m.find("TotalBlockCount") != m.end() && !m["TotalBlockCount"].empty()) {
      totalBlockCount = make_shared<long>(boost::any_cast<long>(m["TotalBlockCount"]));
    }
  }


  virtual ~ListSnapshotBlocksResponseBody() = default;
};
class ListSnapshotBlocksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSnapshotBlocksResponseBody> body{};

  ListSnapshotBlocksResponse() {}

  explicit ListSnapshotBlocksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSnapshotBlocksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSnapshotBlocksResponseBody>(model1);
      }
    }
  }


  virtual ~ListSnapshotBlocksResponse() = default;
};
class ListChangedBlocksRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> firstSnapshotId{};
  shared_ptr<string> secondSnapshotId{};
  shared_ptr<long> startingBlockIndex{};

  ListChangedBlocksRequest() {}

  explicit ListChangedBlocksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (firstSnapshotId) {
      res["FirstSnapshotId"] = boost::any(*firstSnapshotId);
    }
    if (secondSnapshotId) {
      res["SecondSnapshotId"] = boost::any(*secondSnapshotId);
    }
    if (startingBlockIndex) {
      res["StartingBlockIndex"] = boost::any(*startingBlockIndex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("FirstSnapshotId") != m.end() && !m["FirstSnapshotId"].empty()) {
      firstSnapshotId = make_shared<string>(boost::any_cast<string>(m["FirstSnapshotId"]));
    }
    if (m.find("SecondSnapshotId") != m.end() && !m["SecondSnapshotId"].empty()) {
      secondSnapshotId = make_shared<string>(boost::any_cast<string>(m["SecondSnapshotId"]));
    }
    if (m.find("StartingBlockIndex") != m.end() && !m["StartingBlockIndex"].empty()) {
      startingBlockIndex = make_shared<long>(boost::any_cast<long>(m["StartingBlockIndex"]));
    }
  }


  virtual ~ListChangedBlocksRequest() = default;
};
class ListChangedBlocksResponseBodyChangedBlocks : public Darabonba::Model {
public:
  shared_ptr<long> blockIndex{};
  shared_ptr<string> firstBlockToken{};
  shared_ptr<string> secondBlockToken{};

  ListChangedBlocksResponseBodyChangedBlocks() {}

  explicit ListChangedBlocksResponseBodyChangedBlocks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockIndex) {
      res["BlockIndex"] = boost::any(*blockIndex);
    }
    if (firstBlockToken) {
      res["FirstBlockToken"] = boost::any(*firstBlockToken);
    }
    if (secondBlockToken) {
      res["SecondBlockToken"] = boost::any(*secondBlockToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockIndex") != m.end() && !m["BlockIndex"].empty()) {
      blockIndex = make_shared<long>(boost::any_cast<long>(m["BlockIndex"]));
    }
    if (m.find("FirstBlockToken") != m.end() && !m["FirstBlockToken"].empty()) {
      firstBlockToken = make_shared<string>(boost::any_cast<string>(m["FirstBlockToken"]));
    }
    if (m.find("SecondBlockToken") != m.end() && !m["SecondBlockToken"].empty()) {
      secondBlockToken = make_shared<string>(boost::any_cast<string>(m["SecondBlockToken"]));
    }
  }


  virtual ~ListChangedBlocksResponseBodyChangedBlocks() = default;
};
class ListChangedBlocksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListChangedBlocksResponseBodyChangedBlocks>> changedBlocks{};
  shared_ptr<long> expiryTime{};
  shared_ptr<long> volumeSize{};
  shared_ptr<long> blockSize{};
  shared_ptr<long> blockCount{};
  shared_ptr<long> totalBlockCount{};

  ListChangedBlocksResponseBody() {}

  explicit ListChangedBlocksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (changedBlocks) {
      vector<boost::any> temp1;
      for(auto item1:*changedBlocks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ChangedBlocks"] = boost::any(temp1);
    }
    if (expiryTime) {
      res["ExpiryTime"] = boost::any(*expiryTime);
    }
    if (volumeSize) {
      res["VolumeSize"] = boost::any(*volumeSize);
    }
    if (blockSize) {
      res["BlockSize"] = boost::any(*blockSize);
    }
    if (blockCount) {
      res["BlockCount"] = boost::any(*blockCount);
    }
    if (totalBlockCount) {
      res["TotalBlockCount"] = boost::any(*totalBlockCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ChangedBlocks") != m.end() && !m["ChangedBlocks"].empty()) {
      if (typeid(vector<boost::any>) == m["ChangedBlocks"].type()) {
        vector<ListChangedBlocksResponseBodyChangedBlocks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ChangedBlocks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListChangedBlocksResponseBodyChangedBlocks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        changedBlocks = make_shared<vector<ListChangedBlocksResponseBodyChangedBlocks>>(expect1);
      }
    }
    if (m.find("ExpiryTime") != m.end() && !m["ExpiryTime"].empty()) {
      expiryTime = make_shared<long>(boost::any_cast<long>(m["ExpiryTime"]));
    }
    if (m.find("VolumeSize") != m.end() && !m["VolumeSize"].empty()) {
      volumeSize = make_shared<long>(boost::any_cast<long>(m["VolumeSize"]));
    }
    if (m.find("BlockSize") != m.end() && !m["BlockSize"].empty()) {
      blockSize = make_shared<long>(boost::any_cast<long>(m["BlockSize"]));
    }
    if (m.find("BlockCount") != m.end() && !m["BlockCount"].empty()) {
      blockCount = make_shared<long>(boost::any_cast<long>(m["BlockCount"]));
    }
    if (m.find("TotalBlockCount") != m.end() && !m["TotalBlockCount"].empty()) {
      totalBlockCount = make_shared<long>(boost::any_cast<long>(m["TotalBlockCount"]));
    }
  }


  virtual ~ListChangedBlocksResponseBody() = default;
};
class ListChangedBlocksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListChangedBlocksResponseBody> body{};

  ListChangedBlocksResponse() {}

  explicit ListChangedBlocksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListChangedBlocksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListChangedBlocksResponseBody>(model1);
      }
    }
  }


  virtual ~ListChangedBlocksResponse() = default;
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
  GetSnapshotInfoResponse getSnapshotInfo(shared_ptr<GetSnapshotInfoRequest> request);
  GetSnapshotInfoResponse getSnapshotInfoWithOptions(shared_ptr<GetSnapshotInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSnapshotBlockResponse getSnapshotBlock(shared_ptr<GetSnapshotBlockRequest> request);
  GetSnapshotBlockResponse getSnapshotBlockWithOptions(shared_ptr<GetSnapshotBlockRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSnapshotBlocksResponse listSnapshotBlocks(shared_ptr<ListSnapshotBlocksRequest> request);
  ListSnapshotBlocksResponse listSnapshotBlocksWithOptions(shared_ptr<ListSnapshotBlocksRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListChangedBlocksResponse listChangedBlocks(shared_ptr<ListChangedBlocksRequest> request);
  ListChangedBlocksResponse listChangedBlocksWithOptions(shared_ptr<ListChangedBlocksRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Snapshot20210315

#endif
