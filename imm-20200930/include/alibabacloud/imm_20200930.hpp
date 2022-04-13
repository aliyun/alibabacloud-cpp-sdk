// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IMM20200930_H_
#define ALIBABACLOUD_IMM20200930_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Imm20200930 {
class Address : public Darabonba::Model {
public:
  shared_ptr<string> addressLine{};
  shared_ptr<string> city{};
  shared_ptr<string> country{};
  shared_ptr<string> district{};
  shared_ptr<string> language{};
  shared_ptr<string> province{};
  shared_ptr<string> township{};

  Address() {}

  explicit Address(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressLine) {
      res["AddressLine"] = boost::any(*addressLine);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (district) {
      res["District"] = boost::any(*district);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (township) {
      res["Township"] = boost::any(*township);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressLine") != m.end() && !m["AddressLine"].empty()) {
      addressLine = make_shared<string>(boost::any_cast<string>(m["AddressLine"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("District") != m.end() && !m["District"].empty()) {
      district = make_shared<string>(boost::any_cast<string>(m["District"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("Township") != m.end() && !m["Township"].empty()) {
      township = make_shared<string>(boost::any_cast<string>(m["Township"]));
    }
  }


  virtual ~Address() = default;
};
class AssumeRoleChainNode : public Darabonba::Model {
public:
  shared_ptr<string> ownerId{};
  shared_ptr<string> role{};
  shared_ptr<string> type{};

  AssumeRoleChainNode() {}

  explicit AssumeRoleChainNode(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~AssumeRoleChainNode() = default;
};
class AssumeRoleChain : public Darabonba::Model {
public:
  shared_ptr<vector<AssumeRoleChainNode>> chain{};
  shared_ptr<string> policy{};

  AssumeRoleChain() {}

  explicit AssumeRoleChain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chain) {
      vector<boost::any> temp1;
      for(auto item1:*chain){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Chain"] = boost::any(temp1);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Chain") != m.end() && !m["Chain"].empty()) {
      if (typeid(vector<boost::any>) == m["Chain"].type()) {
        vector<AssumeRoleChainNode> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Chain"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AssumeRoleChainNode model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        chain = make_shared<vector<AssumeRoleChainNode>>(expect1);
      }
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
  }


  virtual ~AssumeRoleChain() = default;
};
class AudioStream : public Darabonba::Model {
public:
  shared_ptr<long> bitrate{};
  shared_ptr<string> channelLayout{};
  shared_ptr<long> channels{};
  shared_ptr<string> codecLongName{};
  shared_ptr<string> codecName{};
  shared_ptr<string> codecTag{};
  shared_ptr<string> codecTagString{};
  shared_ptr<string> codecTimeBase{};
  shared_ptr<double> duration{};
  shared_ptr<long> index{};
  shared_ptr<string> language{};
  shared_ptr<string> lyric{};
  shared_ptr<string> sampleFormat{};
  shared_ptr<long> sampleRate{};
  shared_ptr<double> startTime{};
  shared_ptr<string> timeBase{};

  AudioStream() {}

  explicit AudioStream(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (channelLayout) {
      res["ChannelLayout"] = boost::any(*channelLayout);
    }
    if (channels) {
      res["Channels"] = boost::any(*channels);
    }
    if (codecLongName) {
      res["CodecLongName"] = boost::any(*codecLongName);
    }
    if (codecName) {
      res["CodecName"] = boost::any(*codecName);
    }
    if (codecTag) {
      res["CodecTag"] = boost::any(*codecTag);
    }
    if (codecTagString) {
      res["CodecTagString"] = boost::any(*codecTagString);
    }
    if (codecTimeBase) {
      res["CodecTimeBase"] = boost::any(*codecTimeBase);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (lyric) {
      res["Lyric"] = boost::any(*lyric);
    }
    if (sampleFormat) {
      res["SampleFormat"] = boost::any(*sampleFormat);
    }
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timeBase) {
      res["TimeBase"] = boost::any(*timeBase);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
    if (m.find("ChannelLayout") != m.end() && !m["ChannelLayout"].empty()) {
      channelLayout = make_shared<string>(boost::any_cast<string>(m["ChannelLayout"]));
    }
    if (m.find("Channels") != m.end() && !m["Channels"].empty()) {
      channels = make_shared<long>(boost::any_cast<long>(m["Channels"]));
    }
    if (m.find("CodecLongName") != m.end() && !m["CodecLongName"].empty()) {
      codecLongName = make_shared<string>(boost::any_cast<string>(m["CodecLongName"]));
    }
    if (m.find("CodecName") != m.end() && !m["CodecName"].empty()) {
      codecName = make_shared<string>(boost::any_cast<string>(m["CodecName"]));
    }
    if (m.find("CodecTag") != m.end() && !m["CodecTag"].empty()) {
      codecTag = make_shared<string>(boost::any_cast<string>(m["CodecTag"]));
    }
    if (m.find("CodecTagString") != m.end() && !m["CodecTagString"].empty()) {
      codecTagString = make_shared<string>(boost::any_cast<string>(m["CodecTagString"]));
    }
    if (m.find("CodecTimeBase") != m.end() && !m["CodecTimeBase"].empty()) {
      codecTimeBase = make_shared<string>(boost::any_cast<string>(m["CodecTimeBase"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Lyric") != m.end() && !m["Lyric"].empty()) {
      lyric = make_shared<string>(boost::any_cast<string>(m["Lyric"]));
    }
    if (m.find("SampleFormat") != m.end() && !m["SampleFormat"].empty()) {
      sampleFormat = make_shared<string>(boost::any_cast<string>(m["SampleFormat"]));
    }
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<long>(boost::any_cast<long>(m["SampleRate"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<double>(boost::any_cast<double>(m["StartTime"]));
    }
    if (m.find("TimeBase") != m.end() && !m["TimeBase"].empty()) {
      timeBase = make_shared<string>(boost::any_cast<string>(m["TimeBase"]));
    }
  }


  virtual ~AudioStream() = default;
};
class Binding : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> detail{};
  shared_ptr<string> phase{};
  shared_ptr<string> projectName{};
  shared_ptr<string> state{};
  shared_ptr<string> URI{};
  shared_ptr<string> updateTime{};

  Binding() {}

  explicit Binding(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (phase) {
      res["Phase"] = boost::any(*phase);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("Phase") != m.end() && !m["Phase"].empty()) {
      phase = make_shared<string>(boost::any_cast<string>(m["Phase"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~Binding() = default;
};
class Boundary : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  Boundary() {}

  explicit Boundary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~Boundary() = default;
};
class ClusterForReqCoverFigures : public Darabonba::Model {
public:
  shared_ptr<string> figureId{};

  ClusterForReqCoverFigures() {}

  explicit ClusterForReqCoverFigures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (figureId) {
      res["FigureId"] = boost::any(*figureId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FigureId") != m.end() && !m["FigureId"].empty()) {
      figureId = make_shared<string>(boost::any_cast<string>(m["FigureId"]));
    }
  }


  virtual ~ClusterForReqCoverFigures() = default;
};
class ClusterForReqCover : public Darabonba::Model {
public:
  shared_ptr<vector<ClusterForReqCoverFigures>> figures{};

  ClusterForReqCover() {}

  explicit ClusterForReqCover(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (figures) {
      vector<boost::any> temp1;
      for(auto item1:*figures){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Figures"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Figures") != m.end() && !m["Figures"].empty()) {
      if (typeid(vector<boost::any>) == m["Figures"].type()) {
        vector<ClusterForReqCoverFigures> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Figures"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ClusterForReqCoverFigures model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        figures = make_shared<vector<ClusterForReqCoverFigures>>(expect1);
      }
    }
  }


  virtual ~ClusterForReqCover() = default;
};
class ClusterForReq : public Darabonba::Model {
public:
  shared_ptr<ClusterForReqCover> cover{};
  shared_ptr<string> customId{};
  shared_ptr<map<string, boost::any>> customLabels{};
  shared_ptr<string> name{};
  shared_ptr<string> objectId{};

  ClusterForReq() {}

  explicit ClusterForReq(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cover) {
      res["Cover"] = cover ? boost::any(cover->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (customId) {
      res["CustomId"] = boost::any(*customId);
    }
    if (customLabels) {
      res["CustomLabels"] = boost::any(*customLabels);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cover"].type()) {
        ClusterForReqCover model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cover"]));
        cover = make_shared<ClusterForReqCover>(model1);
      }
    }
    if (m.find("CustomId") != m.end() && !m["CustomId"].empty()) {
      customId = make_shared<string>(boost::any_cast<string>(m["CustomId"]));
    }
    if (m.find("CustomLabels") != m.end() && !m["CustomLabels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CustomLabels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customLabels = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
  }


  virtual ~ClusterForReq() = default;
};
class CroppingSuggestion : public Darabonba::Model {
public:
  shared_ptr<string> aspectRatio{};
  shared_ptr<Boundary> boundary{};
  shared_ptr<double> confidence{};

  CroppingSuggestion() {}

  explicit CroppingSuggestion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aspectRatio) {
      res["AspectRatio"] = boost::any(*aspectRatio);
    }
    if (boundary) {
      res["Boundary"] = boundary ? boost::any(boundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AspectRatio") != m.end() && !m["AspectRatio"].empty()) {
      aspectRatio = make_shared<string>(boost::any_cast<string>(m["AspectRatio"]));
    }
    if (m.find("Boundary") != m.end() && !m["Boundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["Boundary"].type()) {
        Boundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Boundary"]));
        boundary = make_shared<Boundary>(model1);
      }
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
  }


  virtual ~CroppingSuggestion() = default;
};
class Dataset : public Darabonba::Model {
public:
  shared_ptr<long> bindCount{};
  shared_ptr<string> createTime{};
  shared_ptr<long> datasetMaxBindCount{};
  shared_ptr<long> datasetMaxEntityCount{};
  shared_ptr<long> datasetMaxFileCount{};
  shared_ptr<long> datasetMaxRelationCount{};
  shared_ptr<long> datasetMaxTotalFileSize{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> description{};
  shared_ptr<long> fileCount{};
  shared_ptr<string> projectName{};
  shared_ptr<long> totalFileSize{};
  shared_ptr<string> updateTime{};

  Dataset() {}

  explicit Dataset(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindCount) {
      res["BindCount"] = boost::any(*bindCount);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (datasetMaxBindCount) {
      res["DatasetMaxBindCount"] = boost::any(*datasetMaxBindCount);
    }
    if (datasetMaxEntityCount) {
      res["DatasetMaxEntityCount"] = boost::any(*datasetMaxEntityCount);
    }
    if (datasetMaxFileCount) {
      res["DatasetMaxFileCount"] = boost::any(*datasetMaxFileCount);
    }
    if (datasetMaxRelationCount) {
      res["DatasetMaxRelationCount"] = boost::any(*datasetMaxRelationCount);
    }
    if (datasetMaxTotalFileSize) {
      res["DatasetMaxTotalFileSize"] = boost::any(*datasetMaxTotalFileSize);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (fileCount) {
      res["FileCount"] = boost::any(*fileCount);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (totalFileSize) {
      res["TotalFileSize"] = boost::any(*totalFileSize);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BindCount") != m.end() && !m["BindCount"].empty()) {
      bindCount = make_shared<long>(boost::any_cast<long>(m["BindCount"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DatasetMaxBindCount") != m.end() && !m["DatasetMaxBindCount"].empty()) {
      datasetMaxBindCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxBindCount"]));
    }
    if (m.find("DatasetMaxEntityCount") != m.end() && !m["DatasetMaxEntityCount"].empty()) {
      datasetMaxEntityCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxEntityCount"]));
    }
    if (m.find("DatasetMaxFileCount") != m.end() && !m["DatasetMaxFileCount"].empty()) {
      datasetMaxFileCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxFileCount"]));
    }
    if (m.find("DatasetMaxRelationCount") != m.end() && !m["DatasetMaxRelationCount"].empty()) {
      datasetMaxRelationCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxRelationCount"]));
    }
    if (m.find("DatasetMaxTotalFileSize") != m.end() && !m["DatasetMaxTotalFileSize"].empty()) {
      datasetMaxTotalFileSize = make_shared<long>(boost::any_cast<long>(m["DatasetMaxTotalFileSize"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("FileCount") != m.end() && !m["FileCount"].empty()) {
      fileCount = make_shared<long>(boost::any_cast<long>(m["FileCount"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("TotalFileSize") != m.end() && !m["TotalFileSize"].empty()) {
      totalFileSize = make_shared<long>(boost::any_cast<long>(m["TotalFileSize"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~Dataset() = default;
};
class HeadPose : public Darabonba::Model {
public:
  shared_ptr<double> pitch{};
  shared_ptr<double> roll{};
  shared_ptr<double> yaw{};

  HeadPose() {}

  explicit HeadPose(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pitch) {
      res["Pitch"] = boost::any(*pitch);
    }
    if (roll) {
      res["Roll"] = boost::any(*roll);
    }
    if (yaw) {
      res["Yaw"] = boost::any(*yaw);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Pitch") != m.end() && !m["Pitch"].empty()) {
      pitch = make_shared<double>(boost::any_cast<double>(m["Pitch"]));
    }
    if (m.find("Roll") != m.end() && !m["Roll"].empty()) {
      roll = make_shared<double>(boost::any_cast<double>(m["Roll"]));
    }
    if (m.find("Yaw") != m.end() && !m["Yaw"].empty()) {
      yaw = make_shared<double>(boost::any_cast<double>(m["Yaw"]));
    }
  }


  virtual ~HeadPose() = default;
};
class Figure : public Darabonba::Model {
public:
  shared_ptr<long> age{};
  shared_ptr<double> ageSD{};
  shared_ptr<double> attractive{};
  shared_ptr<string> beard{};
  shared_ptr<double> beardConfidence{};
  shared_ptr<Boundary> boundary{};
  shared_ptr<string> emotion{};
  shared_ptr<double> emotionConfidence{};
  shared_ptr<double> faceQuality{};
  shared_ptr<double> figureClusterConfidence{};
  shared_ptr<string> figureClusterId{};
  shared_ptr<double> figureConfidence{};
  shared_ptr<string> figureId{};
  shared_ptr<string> figureType{};
  shared_ptr<string> gender{};
  shared_ptr<double> genderConfidence{};
  shared_ptr<string> glasses{};
  shared_ptr<double> glassesConfidence{};
  shared_ptr<string> hat{};
  shared_ptr<double> hatConfidence{};
  shared_ptr<HeadPose> headPose{};
  shared_ptr<string> mask{};
  shared_ptr<double> maskConfidence{};
  shared_ptr<string> mouth{};
  shared_ptr<double> mouthConfidence{};
  shared_ptr<double> sharpness{};

  Figure() {}

  explicit Figure(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (age) {
      res["Age"] = boost::any(*age);
    }
    if (ageSD) {
      res["AgeSD"] = boost::any(*ageSD);
    }
    if (attractive) {
      res["Attractive"] = boost::any(*attractive);
    }
    if (beard) {
      res["Beard"] = boost::any(*beard);
    }
    if (beardConfidence) {
      res["BeardConfidence"] = boost::any(*beardConfidence);
    }
    if (boundary) {
      res["Boundary"] = boundary ? boost::any(boundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (emotion) {
      res["Emotion"] = boost::any(*emotion);
    }
    if (emotionConfidence) {
      res["EmotionConfidence"] = boost::any(*emotionConfidence);
    }
    if (faceQuality) {
      res["FaceQuality"] = boost::any(*faceQuality);
    }
    if (figureClusterConfidence) {
      res["FigureClusterConfidence"] = boost::any(*figureClusterConfidence);
    }
    if (figureClusterId) {
      res["FigureClusterId"] = boost::any(*figureClusterId);
    }
    if (figureConfidence) {
      res["FigureConfidence"] = boost::any(*figureConfidence);
    }
    if (figureId) {
      res["FigureId"] = boost::any(*figureId);
    }
    if (figureType) {
      res["FigureType"] = boost::any(*figureType);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (genderConfidence) {
      res["GenderConfidence"] = boost::any(*genderConfidence);
    }
    if (glasses) {
      res["Glasses"] = boost::any(*glasses);
    }
    if (glassesConfidence) {
      res["GlassesConfidence"] = boost::any(*glassesConfidence);
    }
    if (hat) {
      res["Hat"] = boost::any(*hat);
    }
    if (hatConfidence) {
      res["HatConfidence"] = boost::any(*hatConfidence);
    }
    if (headPose) {
      res["HeadPose"] = headPose ? boost::any(headPose->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (maskConfidence) {
      res["MaskConfidence"] = boost::any(*maskConfidence);
    }
    if (mouth) {
      res["Mouth"] = boost::any(*mouth);
    }
    if (mouthConfidence) {
      res["MouthConfidence"] = boost::any(*mouthConfidence);
    }
    if (sharpness) {
      res["Sharpness"] = boost::any(*sharpness);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Age") != m.end() && !m["Age"].empty()) {
      age = make_shared<long>(boost::any_cast<long>(m["Age"]));
    }
    if (m.find("AgeSD") != m.end() && !m["AgeSD"].empty()) {
      ageSD = make_shared<double>(boost::any_cast<double>(m["AgeSD"]));
    }
    if (m.find("Attractive") != m.end() && !m["Attractive"].empty()) {
      attractive = make_shared<double>(boost::any_cast<double>(m["Attractive"]));
    }
    if (m.find("Beard") != m.end() && !m["Beard"].empty()) {
      beard = make_shared<string>(boost::any_cast<string>(m["Beard"]));
    }
    if (m.find("BeardConfidence") != m.end() && !m["BeardConfidence"].empty()) {
      beardConfidence = make_shared<double>(boost::any_cast<double>(m["BeardConfidence"]));
    }
    if (m.find("Boundary") != m.end() && !m["Boundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["Boundary"].type()) {
        Boundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Boundary"]));
        boundary = make_shared<Boundary>(model1);
      }
    }
    if (m.find("Emotion") != m.end() && !m["Emotion"].empty()) {
      emotion = make_shared<string>(boost::any_cast<string>(m["Emotion"]));
    }
    if (m.find("EmotionConfidence") != m.end() && !m["EmotionConfidence"].empty()) {
      emotionConfidence = make_shared<double>(boost::any_cast<double>(m["EmotionConfidence"]));
    }
    if (m.find("FaceQuality") != m.end() && !m["FaceQuality"].empty()) {
      faceQuality = make_shared<double>(boost::any_cast<double>(m["FaceQuality"]));
    }
    if (m.find("FigureClusterConfidence") != m.end() && !m["FigureClusterConfidence"].empty()) {
      figureClusterConfidence = make_shared<double>(boost::any_cast<double>(m["FigureClusterConfidence"]));
    }
    if (m.find("FigureClusterId") != m.end() && !m["FigureClusterId"].empty()) {
      figureClusterId = make_shared<string>(boost::any_cast<string>(m["FigureClusterId"]));
    }
    if (m.find("FigureConfidence") != m.end() && !m["FigureConfidence"].empty()) {
      figureConfidence = make_shared<double>(boost::any_cast<double>(m["FigureConfidence"]));
    }
    if (m.find("FigureId") != m.end() && !m["FigureId"].empty()) {
      figureId = make_shared<string>(boost::any_cast<string>(m["FigureId"]));
    }
    if (m.find("FigureType") != m.end() && !m["FigureType"].empty()) {
      figureType = make_shared<string>(boost::any_cast<string>(m["FigureType"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("GenderConfidence") != m.end() && !m["GenderConfidence"].empty()) {
      genderConfidence = make_shared<double>(boost::any_cast<double>(m["GenderConfidence"]));
    }
    if (m.find("Glasses") != m.end() && !m["Glasses"].empty()) {
      glasses = make_shared<string>(boost::any_cast<string>(m["Glasses"]));
    }
    if (m.find("GlassesConfidence") != m.end() && !m["GlassesConfidence"].empty()) {
      glassesConfidence = make_shared<double>(boost::any_cast<double>(m["GlassesConfidence"]));
    }
    if (m.find("Hat") != m.end() && !m["Hat"].empty()) {
      hat = make_shared<string>(boost::any_cast<string>(m["Hat"]));
    }
    if (m.find("HatConfidence") != m.end() && !m["HatConfidence"].empty()) {
      hatConfidence = make_shared<double>(boost::any_cast<double>(m["HatConfidence"]));
    }
    if (m.find("HeadPose") != m.end() && !m["HeadPose"].empty()) {
      if (typeid(map<string, boost::any>) == m["HeadPose"].type()) {
        HeadPose model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HeadPose"]));
        headPose = make_shared<HeadPose>(model1);
      }
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("MaskConfidence") != m.end() && !m["MaskConfidence"].empty()) {
      maskConfidence = make_shared<double>(boost::any_cast<double>(m["MaskConfidence"]));
    }
    if (m.find("Mouth") != m.end() && !m["Mouth"].empty()) {
      mouth = make_shared<string>(boost::any_cast<string>(m["Mouth"]));
    }
    if (m.find("MouthConfidence") != m.end() && !m["MouthConfidence"].empty()) {
      mouthConfidence = make_shared<double>(boost::any_cast<double>(m["MouthConfidence"]));
    }
    if (m.find("Sharpness") != m.end() && !m["Sharpness"].empty()) {
      sharpness = make_shared<double>(boost::any_cast<double>(m["Sharpness"]));
    }
  }


  virtual ~Figure() = default;
};
class ImageScore : public Darabonba::Model {
public:
  shared_ptr<double> overallQualityScore{};

  ImageScore() {}

  explicit ImageScore(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (overallQualityScore) {
      res["OverallQualityScore"] = boost::any(*overallQualityScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OverallQualityScore") != m.end() && !m["OverallQualityScore"].empty()) {
      overallQualityScore = make_shared<double>(boost::any_cast<double>(m["OverallQualityScore"]));
    }
  }


  virtual ~ImageScore() = default;
};
class OCRContents : public Darabonba::Model {
public:
  shared_ptr<Boundary> boundary{};
  shared_ptr<double> confidence{};
  shared_ptr<string> contents{};
  shared_ptr<string> language{};

  OCRContents() {}

  explicit OCRContents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (boundary) {
      res["Boundary"] = boundary ? boost::any(boundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (contents) {
      res["Contents"] = boost::any(*contents);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Boundary") != m.end() && !m["Boundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["Boundary"].type()) {
        Boundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Boundary"]));
        boundary = make_shared<Boundary>(model1);
      }
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("Contents") != m.end() && !m["Contents"].empty()) {
      contents = make_shared<string>(boost::any_cast<string>(m["Contents"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
  }


  virtual ~OCRContents() = default;
};
class Image : public Darabonba::Model {
public:
  shared_ptr<vector<CroppingSuggestion>> croppingSuggestions{};
  shared_ptr<string> EXIF{};
  shared_ptr<long> imageHeight{};
  shared_ptr<ImageScore> imageScore{};
  shared_ptr<long> imageWidth{};
  shared_ptr<vector<OCRContents>> OCRContents{};

  Image() {}

  explicit Image(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (croppingSuggestions) {
      vector<boost::any> temp1;
      for(auto item1:*croppingSuggestions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CroppingSuggestions"] = boost::any(temp1);
    }
    if (EXIF) {
      res["EXIF"] = boost::any(*EXIF);
    }
    if (imageHeight) {
      res["ImageHeight"] = boost::any(*imageHeight);
    }
    if (imageScore) {
      res["ImageScore"] = imageScore ? boost::any(imageScore->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imageWidth) {
      res["ImageWidth"] = boost::any(*imageWidth);
    }
    if (OCRContents) {
      vector<boost::any> temp1;
      for(auto item1:*OCRContents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OCRContents"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CroppingSuggestions") != m.end() && !m["CroppingSuggestions"].empty()) {
      if (typeid(vector<boost::any>) == m["CroppingSuggestions"].type()) {
        vector<CroppingSuggestion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CroppingSuggestions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CroppingSuggestion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        croppingSuggestions = make_shared<vector<CroppingSuggestion>>(expect1);
      }
    }
    if (m.find("EXIF") != m.end() && !m["EXIF"].empty()) {
      EXIF = make_shared<string>(boost::any_cast<string>(m["EXIF"]));
    }
    if (m.find("ImageHeight") != m.end() && !m["ImageHeight"].empty()) {
      imageHeight = make_shared<long>(boost::any_cast<long>(m["ImageHeight"]));
    }
    if (m.find("ImageScore") != m.end() && !m["ImageScore"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImageScore"].type()) {
        ImageScore model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImageScore"]));
        imageScore = make_shared<ImageScore>(model1);
      }
    }
    if (m.find("ImageWidth") != m.end() && !m["ImageWidth"].empty()) {
      imageWidth = make_shared<long>(boost::any_cast<long>(m["ImageWidth"]));
    }
    if (m.find("OCRContents") != m.end() && !m["OCRContents"].empty()) {
      if (typeid(vector<boost::any>) == m["OCRContents"].type()) {
        vector<OCRContents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OCRContents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OCRContents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        OCRContents = make_shared<vector<OCRContents>>(expect1);
      }
    }
  }


  virtual ~Image() = default;
};
class Label : public Darabonba::Model {
public:
  shared_ptr<double> centricScore{};
  shared_ptr<double> labelConfidence{};
  shared_ptr<long> labelLevel{};
  shared_ptr<string> labelName{};
  shared_ptr<string> language{};
  shared_ptr<string> parentLabelName{};

  Label() {}

  explicit Label(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (centricScore) {
      res["CentricScore"] = boost::any(*centricScore);
    }
    if (labelConfidence) {
      res["LabelConfidence"] = boost::any(*labelConfidence);
    }
    if (labelLevel) {
      res["LabelLevel"] = boost::any(*labelLevel);
    }
    if (labelName) {
      res["LabelName"] = boost::any(*labelName);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (parentLabelName) {
      res["ParentLabelName"] = boost::any(*parentLabelName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CentricScore") != m.end() && !m["CentricScore"].empty()) {
      centricScore = make_shared<double>(boost::any_cast<double>(m["CentricScore"]));
    }
    if (m.find("LabelConfidence") != m.end() && !m["LabelConfidence"].empty()) {
      labelConfidence = make_shared<double>(boost::any_cast<double>(m["LabelConfidence"]));
    }
    if (m.find("LabelLevel") != m.end() && !m["LabelLevel"].empty()) {
      labelLevel = make_shared<long>(boost::any_cast<long>(m["LabelLevel"]));
    }
    if (m.find("LabelName") != m.end() && !m["LabelName"].empty()) {
      labelName = make_shared<string>(boost::any_cast<string>(m["LabelName"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("ParentLabelName") != m.end() && !m["ParentLabelName"].empty()) {
      parentLabelName = make_shared<string>(boost::any_cast<string>(m["ParentLabelName"]));
    }
  }


  virtual ~Label() = default;
};
class SubtitleStream : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<long> index{};
  shared_ptr<string> language{};

  SubtitleStream() {}

  explicit SubtitleStream(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
  }


  virtual ~SubtitleStream() = default;
};
class VideoStream : public Darabonba::Model {
public:
  shared_ptr<string> averageFrameRate{};
  shared_ptr<long> bitrate{};
  shared_ptr<string> codecLongName{};
  shared_ptr<string> codecName{};
  shared_ptr<string> codecTag{};
  shared_ptr<string> codecTagString{};
  shared_ptr<string> codecTimeBase{};
  shared_ptr<string> displayAspectRatio{};
  shared_ptr<double> duration{};
  shared_ptr<long> frameCount{};
  shared_ptr<string> frameRate{};
  shared_ptr<long> hasBFrames{};
  shared_ptr<long> height{};
  shared_ptr<long> index{};
  shared_ptr<string> language{};
  shared_ptr<long> level{};
  shared_ptr<string> pixelFormat{};
  shared_ptr<string> profile{};
  shared_ptr<string> rotate{};
  shared_ptr<string> sampleAspectRatio{};
  shared_ptr<double> startTime{};
  shared_ptr<string> timeBase{};
  shared_ptr<long> width{};

  VideoStream() {}

  explicit VideoStream(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (averageFrameRate) {
      res["AverageFrameRate"] = boost::any(*averageFrameRate);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (codecLongName) {
      res["CodecLongName"] = boost::any(*codecLongName);
    }
    if (codecName) {
      res["CodecName"] = boost::any(*codecName);
    }
    if (codecTag) {
      res["CodecTag"] = boost::any(*codecTag);
    }
    if (codecTagString) {
      res["CodecTagString"] = boost::any(*codecTagString);
    }
    if (codecTimeBase) {
      res["CodecTimeBase"] = boost::any(*codecTimeBase);
    }
    if (displayAspectRatio) {
      res["DisplayAspectRatio"] = boost::any(*displayAspectRatio);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (frameCount) {
      res["FrameCount"] = boost::any(*frameCount);
    }
    if (frameRate) {
      res["FrameRate"] = boost::any(*frameRate);
    }
    if (hasBFrames) {
      res["HasBFrames"] = boost::any(*hasBFrames);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (pixelFormat) {
      res["PixelFormat"] = boost::any(*pixelFormat);
    }
    if (profile) {
      res["Profile"] = boost::any(*profile);
    }
    if (rotate) {
      res["Rotate"] = boost::any(*rotate);
    }
    if (sampleAspectRatio) {
      res["SampleAspectRatio"] = boost::any(*sampleAspectRatio);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (timeBase) {
      res["TimeBase"] = boost::any(*timeBase);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AverageFrameRate") != m.end() && !m["AverageFrameRate"].empty()) {
      averageFrameRate = make_shared<string>(boost::any_cast<string>(m["AverageFrameRate"]));
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
    if (m.find("CodecLongName") != m.end() && !m["CodecLongName"].empty()) {
      codecLongName = make_shared<string>(boost::any_cast<string>(m["CodecLongName"]));
    }
    if (m.find("CodecName") != m.end() && !m["CodecName"].empty()) {
      codecName = make_shared<string>(boost::any_cast<string>(m["CodecName"]));
    }
    if (m.find("CodecTag") != m.end() && !m["CodecTag"].empty()) {
      codecTag = make_shared<string>(boost::any_cast<string>(m["CodecTag"]));
    }
    if (m.find("CodecTagString") != m.end() && !m["CodecTagString"].empty()) {
      codecTagString = make_shared<string>(boost::any_cast<string>(m["CodecTagString"]));
    }
    if (m.find("CodecTimeBase") != m.end() && !m["CodecTimeBase"].empty()) {
      codecTimeBase = make_shared<string>(boost::any_cast<string>(m["CodecTimeBase"]));
    }
    if (m.find("DisplayAspectRatio") != m.end() && !m["DisplayAspectRatio"].empty()) {
      displayAspectRatio = make_shared<string>(boost::any_cast<string>(m["DisplayAspectRatio"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("FrameCount") != m.end() && !m["FrameCount"].empty()) {
      frameCount = make_shared<long>(boost::any_cast<long>(m["FrameCount"]));
    }
    if (m.find("FrameRate") != m.end() && !m["FrameRate"].empty()) {
      frameRate = make_shared<string>(boost::any_cast<string>(m["FrameRate"]));
    }
    if (m.find("HasBFrames") != m.end() && !m["HasBFrames"].empty()) {
      hasBFrames = make_shared<long>(boost::any_cast<long>(m["HasBFrames"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["Level"]));
    }
    if (m.find("PixelFormat") != m.end() && !m["PixelFormat"].empty()) {
      pixelFormat = make_shared<string>(boost::any_cast<string>(m["PixelFormat"]));
    }
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["Profile"]));
    }
    if (m.find("Rotate") != m.end() && !m["Rotate"].empty()) {
      rotate = make_shared<string>(boost::any_cast<string>(m["Rotate"]));
    }
    if (m.find("SampleAspectRatio") != m.end() && !m["SampleAspectRatio"].empty()) {
      sampleAspectRatio = make_shared<string>(boost::any_cast<string>(m["SampleAspectRatio"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<double>(boost::any_cast<double>(m["StartTime"]));
    }
    if (m.find("TimeBase") != m.end() && !m["TimeBase"].empty()) {
      timeBase = make_shared<string>(boost::any_cast<string>(m["TimeBase"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~VideoStream() = default;
};
class File : public Darabonba::Model {
public:
  shared_ptr<string> accessControlAllowOrigin{};
  shared_ptr<string> accessControlRequestMethod{};
  shared_ptr<vector<Address>> addresses{};
  shared_ptr<string> album{};
  shared_ptr<string> albumArtist{};
  shared_ptr<string> artist{};
  shared_ptr<vector<Image>> audioCovers{};
  shared_ptr<vector<AudioStream>> audioStreams{};
  shared_ptr<string> cacheControl{};
  shared_ptr<string> composer{};
  shared_ptr<string> contentDisposition{};
  shared_ptr<string> contentEncoding{};
  shared_ptr<string> contentLanguage{};
  shared_ptr<string> contentMd5{};
  shared_ptr<string> contentType{};
  shared_ptr<string> createTime{};
  shared_ptr<vector<CroppingSuggestion>> croppingSuggestions{};
  shared_ptr<string> customId{};
  shared_ptr<map<string, boost::any>> customLabels{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> documentContent{};
  shared_ptr<string> documentLanguage{};
  shared_ptr<string> ETag{};
  shared_ptr<string> EXIF{};
  shared_ptr<long> figureCount{};
  shared_ptr<vector<Figure>> figures{};
  shared_ptr<string> fileAccessTime{};
  shared_ptr<string> fileCreateTime{};
  shared_ptr<string> fileHash{};
  shared_ptr<string> fileModifiedTime{};
  shared_ptr<string> filename{};
  shared_ptr<long> imageHeight{};
  shared_ptr<ImageScore> imageScore{};
  shared_ptr<long> imageWidth{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<string> language{};
  shared_ptr<string> latLong{};
  shared_ptr<string> mediaType{};
  shared_ptr<vector<OCRContents>> OCRContents{};
  shared_ptr<string> OSSCRC64{};
  shared_ptr<string> OSSDeleteMarker{};
  shared_ptr<string> OSSExpiration{};
  shared_ptr<string> OSSObjectType{};
  shared_ptr<string> OSSStorageClass{};
  shared_ptr<map<string, boost::any>> OSSTagging{};
  shared_ptr<long> OSSTaggingCount{};
  shared_ptr<string> OSSURI{};
  shared_ptr<map<string, boost::any>> OSSUserMeta{};
  shared_ptr<string> OSSVersionId{};
  shared_ptr<string> objectACL{};
  shared_ptr<string> objectId{};
  shared_ptr<string> objectType{};
  shared_ptr<long> orientation{};
  shared_ptr<string> ownerId{};
  shared_ptr<long> pageCount{};
  shared_ptr<string> performer{};
  shared_ptr<string> produceTime{};
  shared_ptr<string> projectName{};
  shared_ptr<string> serverSideDataEncryption{};
  shared_ptr<string> serverSideEncryption{};
  shared_ptr<string> serverSideEncryptionCustomerAlgorithm{};
  shared_ptr<string> serverSideEncryptionKeyId{};
  shared_ptr<long> size{};
  shared_ptr<vector<SubtitleStream>> subtitles{};
  shared_ptr<string> timezone{};
  shared_ptr<string> title{};
  shared_ptr<string> travelClusterId{};
  shared_ptr<string> URI{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> videoHeight{};
  shared_ptr<double> videoStartTime{};
  shared_ptr<vector<VideoStream>> videoStreams{};
  shared_ptr<long> videoWidth{};

  File() {}

  explicit File(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessControlAllowOrigin) {
      res["AccessControlAllowOrigin"] = boost::any(*accessControlAllowOrigin);
    }
    if (accessControlRequestMethod) {
      res["AccessControlRequestMethod"] = boost::any(*accessControlRequestMethod);
    }
    if (addresses) {
      vector<boost::any> temp1;
      for(auto item1:*addresses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Addresses"] = boost::any(temp1);
    }
    if (album) {
      res["Album"] = boost::any(*album);
    }
    if (albumArtist) {
      res["AlbumArtist"] = boost::any(*albumArtist);
    }
    if (artist) {
      res["Artist"] = boost::any(*artist);
    }
    if (audioCovers) {
      vector<boost::any> temp1;
      for(auto item1:*audioCovers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AudioCovers"] = boost::any(temp1);
    }
    if (audioStreams) {
      vector<boost::any> temp1;
      for(auto item1:*audioStreams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AudioStreams"] = boost::any(temp1);
    }
    if (cacheControl) {
      res["CacheControl"] = boost::any(*cacheControl);
    }
    if (composer) {
      res["Composer"] = boost::any(*composer);
    }
    if (contentDisposition) {
      res["ContentDisposition"] = boost::any(*contentDisposition);
    }
    if (contentEncoding) {
      res["ContentEncoding"] = boost::any(*contentEncoding);
    }
    if (contentLanguage) {
      res["ContentLanguage"] = boost::any(*contentLanguage);
    }
    if (contentMd5) {
      res["ContentMd5"] = boost::any(*contentMd5);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (croppingSuggestions) {
      vector<boost::any> temp1;
      for(auto item1:*croppingSuggestions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CroppingSuggestions"] = boost::any(temp1);
    }
    if (customId) {
      res["CustomId"] = boost::any(*customId);
    }
    if (customLabels) {
      res["CustomLabels"] = boost::any(*customLabels);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (documentContent) {
      res["DocumentContent"] = boost::any(*documentContent);
    }
    if (documentLanguage) {
      res["DocumentLanguage"] = boost::any(*documentLanguage);
    }
    if (ETag) {
      res["ETag"] = boost::any(*ETag);
    }
    if (EXIF) {
      res["EXIF"] = boost::any(*EXIF);
    }
    if (figureCount) {
      res["FigureCount"] = boost::any(*figureCount);
    }
    if (figures) {
      vector<boost::any> temp1;
      for(auto item1:*figures){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Figures"] = boost::any(temp1);
    }
    if (fileAccessTime) {
      res["FileAccessTime"] = boost::any(*fileAccessTime);
    }
    if (fileCreateTime) {
      res["FileCreateTime"] = boost::any(*fileCreateTime);
    }
    if (fileHash) {
      res["FileHash"] = boost::any(*fileHash);
    }
    if (fileModifiedTime) {
      res["FileModifiedTime"] = boost::any(*fileModifiedTime);
    }
    if (filename) {
      res["Filename"] = boost::any(*filename);
    }
    if (imageHeight) {
      res["ImageHeight"] = boost::any(*imageHeight);
    }
    if (imageScore) {
      res["ImageScore"] = imageScore ? boost::any(imageScore->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imageWidth) {
      res["ImageWidth"] = boost::any(*imageWidth);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (latLong) {
      res["LatLong"] = boost::any(*latLong);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (OCRContents) {
      vector<boost::any> temp1;
      for(auto item1:*OCRContents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OCRContents"] = boost::any(temp1);
    }
    if (OSSCRC64) {
      res["OSSCRC64"] = boost::any(*OSSCRC64);
    }
    if (OSSDeleteMarker) {
      res["OSSDeleteMarker"] = boost::any(*OSSDeleteMarker);
    }
    if (OSSExpiration) {
      res["OSSExpiration"] = boost::any(*OSSExpiration);
    }
    if (OSSObjectType) {
      res["OSSObjectType"] = boost::any(*OSSObjectType);
    }
    if (OSSStorageClass) {
      res["OSSStorageClass"] = boost::any(*OSSStorageClass);
    }
    if (OSSTagging) {
      res["OSSTagging"] = boost::any(*OSSTagging);
    }
    if (OSSTaggingCount) {
      res["OSSTaggingCount"] = boost::any(*OSSTaggingCount);
    }
    if (OSSURI) {
      res["OSSURI"] = boost::any(*OSSURI);
    }
    if (OSSUserMeta) {
      res["OSSUserMeta"] = boost::any(*OSSUserMeta);
    }
    if (OSSVersionId) {
      res["OSSVersionId"] = boost::any(*OSSVersionId);
    }
    if (objectACL) {
      res["ObjectACL"] = boost::any(*objectACL);
    }
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (orientation) {
      res["Orientation"] = boost::any(*orientation);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (performer) {
      res["Performer"] = boost::any(*performer);
    }
    if (produceTime) {
      res["ProduceTime"] = boost::any(*produceTime);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (serverSideDataEncryption) {
      res["ServerSideDataEncryption"] = boost::any(*serverSideDataEncryption);
    }
    if (serverSideEncryption) {
      res["ServerSideEncryption"] = boost::any(*serverSideEncryption);
    }
    if (serverSideEncryptionCustomerAlgorithm) {
      res["ServerSideEncryptionCustomerAlgorithm"] = boost::any(*serverSideEncryptionCustomerAlgorithm);
    }
    if (serverSideEncryptionKeyId) {
      res["ServerSideEncryptionKeyId"] = boost::any(*serverSideEncryptionKeyId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (subtitles) {
      vector<boost::any> temp1;
      for(auto item1:*subtitles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Subtitles"] = boost::any(temp1);
    }
    if (timezone) {
      res["Timezone"] = boost::any(*timezone);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (travelClusterId) {
      res["TravelClusterId"] = boost::any(*travelClusterId);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (videoHeight) {
      res["VideoHeight"] = boost::any(*videoHeight);
    }
    if (videoStartTime) {
      res["VideoStartTime"] = boost::any(*videoStartTime);
    }
    if (videoStreams) {
      vector<boost::any> temp1;
      for(auto item1:*videoStreams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VideoStreams"] = boost::any(temp1);
    }
    if (videoWidth) {
      res["VideoWidth"] = boost::any(*videoWidth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessControlAllowOrigin") != m.end() && !m["AccessControlAllowOrigin"].empty()) {
      accessControlAllowOrigin = make_shared<string>(boost::any_cast<string>(m["AccessControlAllowOrigin"]));
    }
    if (m.find("AccessControlRequestMethod") != m.end() && !m["AccessControlRequestMethod"].empty()) {
      accessControlRequestMethod = make_shared<string>(boost::any_cast<string>(m["AccessControlRequestMethod"]));
    }
    if (m.find("Addresses") != m.end() && !m["Addresses"].empty()) {
      if (typeid(vector<boost::any>) == m["Addresses"].type()) {
        vector<Address> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Addresses"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Address model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        addresses = make_shared<vector<Address>>(expect1);
      }
    }
    if (m.find("Album") != m.end() && !m["Album"].empty()) {
      album = make_shared<string>(boost::any_cast<string>(m["Album"]));
    }
    if (m.find("AlbumArtist") != m.end() && !m["AlbumArtist"].empty()) {
      albumArtist = make_shared<string>(boost::any_cast<string>(m["AlbumArtist"]));
    }
    if (m.find("Artist") != m.end() && !m["Artist"].empty()) {
      artist = make_shared<string>(boost::any_cast<string>(m["Artist"]));
    }
    if (m.find("AudioCovers") != m.end() && !m["AudioCovers"].empty()) {
      if (typeid(vector<boost::any>) == m["AudioCovers"].type()) {
        vector<Image> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AudioCovers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Image model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        audioCovers = make_shared<vector<Image>>(expect1);
      }
    }
    if (m.find("AudioStreams") != m.end() && !m["AudioStreams"].empty()) {
      if (typeid(vector<boost::any>) == m["AudioStreams"].type()) {
        vector<AudioStream> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AudioStreams"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AudioStream model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        audioStreams = make_shared<vector<AudioStream>>(expect1);
      }
    }
    if (m.find("CacheControl") != m.end() && !m["CacheControl"].empty()) {
      cacheControl = make_shared<string>(boost::any_cast<string>(m["CacheControl"]));
    }
    if (m.find("Composer") != m.end() && !m["Composer"].empty()) {
      composer = make_shared<string>(boost::any_cast<string>(m["Composer"]));
    }
    if (m.find("ContentDisposition") != m.end() && !m["ContentDisposition"].empty()) {
      contentDisposition = make_shared<string>(boost::any_cast<string>(m["ContentDisposition"]));
    }
    if (m.find("ContentEncoding") != m.end() && !m["ContentEncoding"].empty()) {
      contentEncoding = make_shared<string>(boost::any_cast<string>(m["ContentEncoding"]));
    }
    if (m.find("ContentLanguage") != m.end() && !m["ContentLanguage"].empty()) {
      contentLanguage = make_shared<string>(boost::any_cast<string>(m["ContentLanguage"]));
    }
    if (m.find("ContentMd5") != m.end() && !m["ContentMd5"].empty()) {
      contentMd5 = make_shared<string>(boost::any_cast<string>(m["ContentMd5"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CroppingSuggestions") != m.end() && !m["CroppingSuggestions"].empty()) {
      if (typeid(vector<boost::any>) == m["CroppingSuggestions"].type()) {
        vector<CroppingSuggestion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CroppingSuggestions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CroppingSuggestion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        croppingSuggestions = make_shared<vector<CroppingSuggestion>>(expect1);
      }
    }
    if (m.find("CustomId") != m.end() && !m["CustomId"].empty()) {
      customId = make_shared<string>(boost::any_cast<string>(m["CustomId"]));
    }
    if (m.find("CustomLabels") != m.end() && !m["CustomLabels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CustomLabels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customLabels = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("DocumentContent") != m.end() && !m["DocumentContent"].empty()) {
      documentContent = make_shared<string>(boost::any_cast<string>(m["DocumentContent"]));
    }
    if (m.find("DocumentLanguage") != m.end() && !m["DocumentLanguage"].empty()) {
      documentLanguage = make_shared<string>(boost::any_cast<string>(m["DocumentLanguage"]));
    }
    if (m.find("ETag") != m.end() && !m["ETag"].empty()) {
      ETag = make_shared<string>(boost::any_cast<string>(m["ETag"]));
    }
    if (m.find("EXIF") != m.end() && !m["EXIF"].empty()) {
      EXIF = make_shared<string>(boost::any_cast<string>(m["EXIF"]));
    }
    if (m.find("FigureCount") != m.end() && !m["FigureCount"].empty()) {
      figureCount = make_shared<long>(boost::any_cast<long>(m["FigureCount"]));
    }
    if (m.find("Figures") != m.end() && !m["Figures"].empty()) {
      if (typeid(vector<boost::any>) == m["Figures"].type()) {
        vector<Figure> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Figures"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Figure model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        figures = make_shared<vector<Figure>>(expect1);
      }
    }
    if (m.find("FileAccessTime") != m.end() && !m["FileAccessTime"].empty()) {
      fileAccessTime = make_shared<string>(boost::any_cast<string>(m["FileAccessTime"]));
    }
    if (m.find("FileCreateTime") != m.end() && !m["FileCreateTime"].empty()) {
      fileCreateTime = make_shared<string>(boost::any_cast<string>(m["FileCreateTime"]));
    }
    if (m.find("FileHash") != m.end() && !m["FileHash"].empty()) {
      fileHash = make_shared<string>(boost::any_cast<string>(m["FileHash"]));
    }
    if (m.find("FileModifiedTime") != m.end() && !m["FileModifiedTime"].empty()) {
      fileModifiedTime = make_shared<string>(boost::any_cast<string>(m["FileModifiedTime"]));
    }
    if (m.find("Filename") != m.end() && !m["Filename"].empty()) {
      filename = make_shared<string>(boost::any_cast<string>(m["Filename"]));
    }
    if (m.find("ImageHeight") != m.end() && !m["ImageHeight"].empty()) {
      imageHeight = make_shared<long>(boost::any_cast<long>(m["ImageHeight"]));
    }
    if (m.find("ImageScore") != m.end() && !m["ImageScore"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImageScore"].type()) {
        ImageScore model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImageScore"]));
        imageScore = make_shared<ImageScore>(model1);
      }
    }
    if (m.find("ImageWidth") != m.end() && !m["ImageWidth"].empty()) {
      imageWidth = make_shared<long>(boost::any_cast<long>(m["ImageWidth"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("LatLong") != m.end() && !m["LatLong"].empty()) {
      latLong = make_shared<string>(boost::any_cast<string>(m["LatLong"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["MediaType"]));
    }
    if (m.find("OCRContents") != m.end() && !m["OCRContents"].empty()) {
      if (typeid(vector<boost::any>) == m["OCRContents"].type()) {
        vector<OCRContents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OCRContents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OCRContents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        OCRContents = make_shared<vector<OCRContents>>(expect1);
      }
    }
    if (m.find("OSSCRC64") != m.end() && !m["OSSCRC64"].empty()) {
      OSSCRC64 = make_shared<string>(boost::any_cast<string>(m["OSSCRC64"]));
    }
    if (m.find("OSSDeleteMarker") != m.end() && !m["OSSDeleteMarker"].empty()) {
      OSSDeleteMarker = make_shared<string>(boost::any_cast<string>(m["OSSDeleteMarker"]));
    }
    if (m.find("OSSExpiration") != m.end() && !m["OSSExpiration"].empty()) {
      OSSExpiration = make_shared<string>(boost::any_cast<string>(m["OSSExpiration"]));
    }
    if (m.find("OSSObjectType") != m.end() && !m["OSSObjectType"].empty()) {
      OSSObjectType = make_shared<string>(boost::any_cast<string>(m["OSSObjectType"]));
    }
    if (m.find("OSSStorageClass") != m.end() && !m["OSSStorageClass"].empty()) {
      OSSStorageClass = make_shared<string>(boost::any_cast<string>(m["OSSStorageClass"]));
    }
    if (m.find("OSSTagging") != m.end() && !m["OSSTagging"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OSSTagging"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      OSSTagging = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("OSSTaggingCount") != m.end() && !m["OSSTaggingCount"].empty()) {
      OSSTaggingCount = make_shared<long>(boost::any_cast<long>(m["OSSTaggingCount"]));
    }
    if (m.find("OSSURI") != m.end() && !m["OSSURI"].empty()) {
      OSSURI = make_shared<string>(boost::any_cast<string>(m["OSSURI"]));
    }
    if (m.find("OSSUserMeta") != m.end() && !m["OSSUserMeta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OSSUserMeta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      OSSUserMeta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("OSSVersionId") != m.end() && !m["OSSVersionId"].empty()) {
      OSSVersionId = make_shared<string>(boost::any_cast<string>(m["OSSVersionId"]));
    }
    if (m.find("ObjectACL") != m.end() && !m["ObjectACL"].empty()) {
      objectACL = make_shared<string>(boost::any_cast<string>(m["ObjectACL"]));
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("Orientation") != m.end() && !m["Orientation"].empty()) {
      orientation = make_shared<long>(boost::any_cast<long>(m["Orientation"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("Performer") != m.end() && !m["Performer"].empty()) {
      performer = make_shared<string>(boost::any_cast<string>(m["Performer"]));
    }
    if (m.find("ProduceTime") != m.end() && !m["ProduceTime"].empty()) {
      produceTime = make_shared<string>(boost::any_cast<string>(m["ProduceTime"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("ServerSideDataEncryption") != m.end() && !m["ServerSideDataEncryption"].empty()) {
      serverSideDataEncryption = make_shared<string>(boost::any_cast<string>(m["ServerSideDataEncryption"]));
    }
    if (m.find("ServerSideEncryption") != m.end() && !m["ServerSideEncryption"].empty()) {
      serverSideEncryption = make_shared<string>(boost::any_cast<string>(m["ServerSideEncryption"]));
    }
    if (m.find("ServerSideEncryptionCustomerAlgorithm") != m.end() && !m["ServerSideEncryptionCustomerAlgorithm"].empty()) {
      serverSideEncryptionCustomerAlgorithm = make_shared<string>(boost::any_cast<string>(m["ServerSideEncryptionCustomerAlgorithm"]));
    }
    if (m.find("ServerSideEncryptionKeyId") != m.end() && !m["ServerSideEncryptionKeyId"].empty()) {
      serverSideEncryptionKeyId = make_shared<string>(boost::any_cast<string>(m["ServerSideEncryptionKeyId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Subtitles") != m.end() && !m["Subtitles"].empty()) {
      if (typeid(vector<boost::any>) == m["Subtitles"].type()) {
        vector<SubtitleStream> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Subtitles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubtitleStream model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subtitles = make_shared<vector<SubtitleStream>>(expect1);
      }
    }
    if (m.find("Timezone") != m.end() && !m["Timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["Timezone"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("TravelClusterId") != m.end() && !m["TravelClusterId"].empty()) {
      travelClusterId = make_shared<string>(boost::any_cast<string>(m["TravelClusterId"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("VideoHeight") != m.end() && !m["VideoHeight"].empty()) {
      videoHeight = make_shared<long>(boost::any_cast<long>(m["VideoHeight"]));
    }
    if (m.find("VideoStartTime") != m.end() && !m["VideoStartTime"].empty()) {
      videoStartTime = make_shared<double>(boost::any_cast<double>(m["VideoStartTime"]));
    }
    if (m.find("VideoStreams") != m.end() && !m["VideoStreams"].empty()) {
      if (typeid(vector<boost::any>) == m["VideoStreams"].type()) {
        vector<VideoStream> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VideoStreams"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            VideoStream model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoStreams = make_shared<vector<VideoStream>>(expect1);
      }
    }
    if (m.find("VideoWidth") != m.end() && !m["VideoWidth"].empty()) {
      videoWidth = make_shared<long>(boost::any_cast<long>(m["VideoWidth"]));
    }
  }


  virtual ~File() = default;
};
class FigureCluster : public Darabonba::Model {
public:
  shared_ptr<double> averageAge{};
  shared_ptr<File> cover{};
  shared_ptr<string> createTime{};
  shared_ptr<string> customId{};
  shared_ptr<map<string, boost::any>> customLabels{};
  shared_ptr<string> datasetName{};
  shared_ptr<long> faceCount{};
  shared_ptr<string> gender{};
  shared_ptr<long> imageCount{};
  shared_ptr<double> maxAge{};
  shared_ptr<double> minAge{};
  shared_ptr<string> name{};
  shared_ptr<string> objectId{};
  shared_ptr<string> objectType{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> videoCount{};

  FigureCluster() {}

  explicit FigureCluster(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (averageAge) {
      res["AverageAge"] = boost::any(*averageAge);
    }
    if (cover) {
      res["Cover"] = cover ? boost::any(cover->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (customId) {
      res["CustomId"] = boost::any(*customId);
    }
    if (customLabels) {
      res["CustomLabels"] = boost::any(*customLabels);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (faceCount) {
      res["FaceCount"] = boost::any(*faceCount);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (imageCount) {
      res["ImageCount"] = boost::any(*imageCount);
    }
    if (maxAge) {
      res["MaxAge"] = boost::any(*maxAge);
    }
    if (minAge) {
      res["MinAge"] = boost::any(*minAge);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (videoCount) {
      res["VideoCount"] = boost::any(*videoCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AverageAge") != m.end() && !m["AverageAge"].empty()) {
      averageAge = make_shared<double>(boost::any_cast<double>(m["AverageAge"]));
    }
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cover"].type()) {
        File model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cover"]));
        cover = make_shared<File>(model1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CustomId") != m.end() && !m["CustomId"].empty()) {
      customId = make_shared<string>(boost::any_cast<string>(m["CustomId"]));
    }
    if (m.find("CustomLabels") != m.end() && !m["CustomLabels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CustomLabels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customLabels = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("FaceCount") != m.end() && !m["FaceCount"].empty()) {
      faceCount = make_shared<long>(boost::any_cast<long>(m["FaceCount"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("ImageCount") != m.end() && !m["ImageCount"].empty()) {
      imageCount = make_shared<long>(boost::any_cast<long>(m["ImageCount"]));
    }
    if (m.find("MaxAge") != m.end() && !m["MaxAge"].empty()) {
      maxAge = make_shared<double>(boost::any_cast<double>(m["MaxAge"]));
    }
    if (m.find("MinAge") != m.end() && !m["MinAge"].empty()) {
      minAge = make_shared<double>(boost::any_cast<double>(m["MinAge"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("VideoCount") != m.end() && !m["VideoCount"].empty()) {
      videoCount = make_shared<long>(boost::any_cast<long>(m["VideoCount"]));
    }
  }


  virtual ~FigureCluster() = default;
};
class FigureClusterForReqCoverFigures : public Darabonba::Model {
public:
  shared_ptr<string> figureId{};

  FigureClusterForReqCoverFigures() {}

  explicit FigureClusterForReqCoverFigures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (figureId) {
      res["FigureId"] = boost::any(*figureId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FigureId") != m.end() && !m["FigureId"].empty()) {
      figureId = make_shared<string>(boost::any_cast<string>(m["FigureId"]));
    }
  }


  virtual ~FigureClusterForReqCoverFigures() = default;
};
class FigureClusterForReqCover : public Darabonba::Model {
public:
  shared_ptr<vector<FigureClusterForReqCoverFigures>> figures{};

  FigureClusterForReqCover() {}

  explicit FigureClusterForReqCover(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (figures) {
      vector<boost::any> temp1;
      for(auto item1:*figures){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Figures"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Figures") != m.end() && !m["Figures"].empty()) {
      if (typeid(vector<boost::any>) == m["Figures"].type()) {
        vector<FigureClusterForReqCoverFigures> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Figures"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FigureClusterForReqCoverFigures model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        figures = make_shared<vector<FigureClusterForReqCoverFigures>>(expect1);
      }
    }
  }


  virtual ~FigureClusterForReqCover() = default;
};
class FigureClusterForReq : public Darabonba::Model {
public:
  shared_ptr<FigureClusterForReqCover> cover{};
  shared_ptr<string> customId{};
  shared_ptr<map<string, boost::any>> customLabels{};
  shared_ptr<string> name{};
  shared_ptr<string> objectId{};

  FigureClusterForReq() {}

  explicit FigureClusterForReq(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cover) {
      res["Cover"] = cover ? boost::any(cover->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (customId) {
      res["CustomId"] = boost::any(*customId);
    }
    if (customLabels) {
      res["CustomLabels"] = boost::any(*customLabels);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cover"].type()) {
        FigureClusterForReqCover model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cover"]));
        cover = make_shared<FigureClusterForReqCover>(model1);
      }
    }
    if (m.find("CustomId") != m.end() && !m["CustomId"].empty()) {
      customId = make_shared<string>(boost::any_cast<string>(m["CustomId"]));
    }
    if (m.find("CustomLabels") != m.end() && !m["CustomLabels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CustomLabels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customLabels = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
  }


  virtual ~FigureClusterForReq() = default;
};
class FileForReqFigures : public Darabonba::Model {
public:
  shared_ptr<string> figureClusterId{};
  shared_ptr<string> figureId{};
  shared_ptr<string> figureType{};

  FileForReqFigures() {}

  explicit FileForReqFigures(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (figureClusterId) {
      res["FigureClusterId"] = boost::any(*figureClusterId);
    }
    if (figureId) {
      res["FigureId"] = boost::any(*figureId);
    }
    if (figureType) {
      res["FigureType"] = boost::any(*figureType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FigureClusterId") != m.end() && !m["FigureClusterId"].empty()) {
      figureClusterId = make_shared<string>(boost::any_cast<string>(m["FigureClusterId"]));
    }
    if (m.find("FigureId") != m.end() && !m["FigureId"].empty()) {
      figureId = make_shared<string>(boost::any_cast<string>(m["FigureId"]));
    }
    if (m.find("FigureType") != m.end() && !m["FigureType"].empty()) {
      figureType = make_shared<string>(boost::any_cast<string>(m["FigureType"]));
    }
  }


  virtual ~FileForReqFigures() = default;
};
class FileForReq : public Darabonba::Model {
public:
  shared_ptr<string> contentType{};
  shared_ptr<string> customId{};
  shared_ptr<map<string, boost::any>> customLabels{};
  shared_ptr<vector<FileForReqFigures>> figures{};
  shared_ptr<string> fileHash{};
  shared_ptr<string> mediaType{};
  shared_ptr<string> OSSURI{};
  shared_ptr<string> URI{};

  FileForReq() {}

  explicit FileForReq(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (customId) {
      res["CustomId"] = boost::any(*customId);
    }
    if (customLabels) {
      res["CustomLabels"] = boost::any(*customLabels);
    }
    if (figures) {
      vector<boost::any> temp1;
      for(auto item1:*figures){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Figures"] = boost::any(temp1);
    }
    if (fileHash) {
      res["FileHash"] = boost::any(*fileHash);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (OSSURI) {
      res["OSSURI"] = boost::any(*OSSURI);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("CustomId") != m.end() && !m["CustomId"].empty()) {
      customId = make_shared<string>(boost::any_cast<string>(m["CustomId"]));
    }
    if (m.find("CustomLabels") != m.end() && !m["CustomLabels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CustomLabels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customLabels = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Figures") != m.end() && !m["Figures"].empty()) {
      if (typeid(vector<boost::any>) == m["Figures"].type()) {
        vector<FileForReqFigures> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Figures"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FileForReqFigures model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        figures = make_shared<vector<FileForReqFigures>>(expect1);
      }
    }
    if (m.find("FileHash") != m.end() && !m["FileHash"].empty()) {
      fileHash = make_shared<string>(boost::any_cast<string>(m["FileHash"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["MediaType"]));
    }
    if (m.find("OSSURI") != m.end() && !m["OSSURI"].empty()) {
      OSSURI = make_shared<string>(boost::any_cast<string>(m["OSSURI"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~FileForReq() = default;
};
class KeyValuePair : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  KeyValuePair() {}

  explicit KeyValuePair(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~KeyValuePair() = default;
};
class Project : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> datasetCount{};
  shared_ptr<long> datasetMaxBindCount{};
  shared_ptr<long> datasetMaxEntityCount{};
  shared_ptr<long> datasetMaxFileCount{};
  shared_ptr<long> datasetMaxRelationCount{};
  shared_ptr<long> datasetMaxTotalFileSize{};
  shared_ptr<string> description{};
  shared_ptr<long> engineConcurrency{};
  shared_ptr<long> fileCount{};
  shared_ptr<long> projectMaxDatasetCount{};
  shared_ptr<string> projectName{};
  shared_ptr<long> projectQueriesPerSecond{};
  shared_ptr<string> serviceRole{};
  shared_ptr<long> totalFileSize{};
  shared_ptr<string> updateTime{};

  Project() {}

  explicit Project(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (datasetCount) {
      res["DatasetCount"] = boost::any(*datasetCount);
    }
    if (datasetMaxBindCount) {
      res["DatasetMaxBindCount"] = boost::any(*datasetMaxBindCount);
    }
    if (datasetMaxEntityCount) {
      res["DatasetMaxEntityCount"] = boost::any(*datasetMaxEntityCount);
    }
    if (datasetMaxFileCount) {
      res["DatasetMaxFileCount"] = boost::any(*datasetMaxFileCount);
    }
    if (datasetMaxRelationCount) {
      res["DatasetMaxRelationCount"] = boost::any(*datasetMaxRelationCount);
    }
    if (datasetMaxTotalFileSize) {
      res["DatasetMaxTotalFileSize"] = boost::any(*datasetMaxTotalFileSize);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (engineConcurrency) {
      res["EngineConcurrency"] = boost::any(*engineConcurrency);
    }
    if (fileCount) {
      res["FileCount"] = boost::any(*fileCount);
    }
    if (projectMaxDatasetCount) {
      res["ProjectMaxDatasetCount"] = boost::any(*projectMaxDatasetCount);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (projectQueriesPerSecond) {
      res["ProjectQueriesPerSecond"] = boost::any(*projectQueriesPerSecond);
    }
    if (serviceRole) {
      res["ServiceRole"] = boost::any(*serviceRole);
    }
    if (totalFileSize) {
      res["TotalFileSize"] = boost::any(*totalFileSize);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DatasetCount") != m.end() && !m["DatasetCount"].empty()) {
      datasetCount = make_shared<long>(boost::any_cast<long>(m["DatasetCount"]));
    }
    if (m.find("DatasetMaxBindCount") != m.end() && !m["DatasetMaxBindCount"].empty()) {
      datasetMaxBindCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxBindCount"]));
    }
    if (m.find("DatasetMaxEntityCount") != m.end() && !m["DatasetMaxEntityCount"].empty()) {
      datasetMaxEntityCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxEntityCount"]));
    }
    if (m.find("DatasetMaxFileCount") != m.end() && !m["DatasetMaxFileCount"].empty()) {
      datasetMaxFileCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxFileCount"]));
    }
    if (m.find("DatasetMaxRelationCount") != m.end() && !m["DatasetMaxRelationCount"].empty()) {
      datasetMaxRelationCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxRelationCount"]));
    }
    if (m.find("DatasetMaxTotalFileSize") != m.end() && !m["DatasetMaxTotalFileSize"].empty()) {
      datasetMaxTotalFileSize = make_shared<long>(boost::any_cast<long>(m["DatasetMaxTotalFileSize"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EngineConcurrency") != m.end() && !m["EngineConcurrency"].empty()) {
      engineConcurrency = make_shared<long>(boost::any_cast<long>(m["EngineConcurrency"]));
    }
    if (m.find("FileCount") != m.end() && !m["FileCount"].empty()) {
      fileCount = make_shared<long>(boost::any_cast<long>(m["FileCount"]));
    }
    if (m.find("ProjectMaxDatasetCount") != m.end() && !m["ProjectMaxDatasetCount"].empty()) {
      projectMaxDatasetCount = make_shared<long>(boost::any_cast<long>(m["ProjectMaxDatasetCount"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("ProjectQueriesPerSecond") != m.end() && !m["ProjectQueriesPerSecond"].empty()) {
      projectQueriesPerSecond = make_shared<long>(boost::any_cast<long>(m["ProjectQueriesPerSecond"]));
    }
    if (m.find("ServiceRole") != m.end() && !m["ServiceRole"].empty()) {
      serviceRole = make_shared<string>(boost::any_cast<string>(m["ServiceRole"]));
    }
    if (m.find("TotalFileSize") != m.end() && !m["TotalFileSize"].empty()) {
      totalFileSize = make_shared<long>(boost::any_cast<long>(m["TotalFileSize"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~Project() = default;
};
class Row : public Darabonba::Model {
public:
  shared_ptr<vector<KeyValuePair>> customLabels{};
  shared_ptr<string> URI{};

  Row() {}

  explicit Row(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customLabels) {
      vector<boost::any> temp1;
      for(auto item1:*customLabels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomLabels"] = boost::any(temp1);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomLabels") != m.end() && !m["CustomLabels"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomLabels"].type()) {
        vector<KeyValuePair> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomLabels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            KeyValuePair model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customLabels = make_shared<vector<KeyValuePair>>(expect1);
      }
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~Row() = default;
};
class SimpleQuery : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> operation{};
  shared_ptr<vector<SimpleQuery>> subQueries{};
  shared_ptr<string> value{};

  SimpleQuery() {}

  explicit SimpleQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (operation) {
      res["Operation"] = boost::any(*operation);
    }
    if (subQueries) {
      vector<boost::any> temp1;
      for(auto item1:*subQueries){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubQueries"] = boost::any(temp1);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["Operation"]));
    }
    if (m.find("SubQueries") != m.end() && !m["SubQueries"].empty()) {
      if (typeid(vector<boost::any>) == m["SubQueries"].type()) {
        vector<SimpleQuery> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubQueries"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SimpleQuery model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subQueries = make_shared<vector<SimpleQuery>>(expect1);
      }
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~SimpleQuery() = default;
};
class Story : public Darabonba::Model {
public:
  shared_ptr<File> cover{};
  shared_ptr<string> createTime{};
  shared_ptr<string> customId{};
  shared_ptr<map<string, boost::any>> customLabels{};
  shared_ptr<string> datasetName{};
  shared_ptr<vector<string>> figureClusterIds{};
  shared_ptr<vector<File>> files{};
  shared_ptr<string> objectId{};
  shared_ptr<string> objectType{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> storyEndTime{};
  shared_ptr<string> storyName{};
  shared_ptr<string> storyStartTime{};
  shared_ptr<string> storySubType{};
  shared_ptr<string> storyType{};
  shared_ptr<string> updateTime{};

  Story() {}

  explicit Story(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cover) {
      res["Cover"] = cover ? boost::any(cover->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (customId) {
      res["CustomId"] = boost::any(*customId);
    }
    if (customLabels) {
      res["CustomLabels"] = boost::any(*customLabels);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (figureClusterIds) {
      res["FigureClusterIds"] = boost::any(*figureClusterIds);
    }
    if (files) {
      vector<boost::any> temp1;
      for(auto item1:*files){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Files"] = boost::any(temp1);
    }
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (storyEndTime) {
      res["StoryEndTime"] = boost::any(*storyEndTime);
    }
    if (storyName) {
      res["StoryName"] = boost::any(*storyName);
    }
    if (storyStartTime) {
      res["StoryStartTime"] = boost::any(*storyStartTime);
    }
    if (storySubType) {
      res["StorySubType"] = boost::any(*storySubType);
    }
    if (storyType) {
      res["StoryType"] = boost::any(*storyType);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cover"].type()) {
        File model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cover"]));
        cover = make_shared<File>(model1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CustomId") != m.end() && !m["CustomId"].empty()) {
      customId = make_shared<string>(boost::any_cast<string>(m["CustomId"]));
    }
    if (m.find("CustomLabels") != m.end() && !m["CustomLabels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CustomLabels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customLabels = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("FigureClusterIds") != m.end() && !m["FigureClusterIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FigureClusterIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FigureClusterIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      figureClusterIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      if (typeid(vector<boost::any>) == m["Files"].type()) {
        vector<File> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Files"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            File model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        files = make_shared<vector<File>>(expect1);
      }
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("StoryEndTime") != m.end() && !m["StoryEndTime"].empty()) {
      storyEndTime = make_shared<string>(boost::any_cast<string>(m["StoryEndTime"]));
    }
    if (m.find("StoryName") != m.end() && !m["StoryName"].empty()) {
      storyName = make_shared<string>(boost::any_cast<string>(m["StoryName"]));
    }
    if (m.find("StoryStartTime") != m.end() && !m["StoryStartTime"].empty()) {
      storyStartTime = make_shared<string>(boost::any_cast<string>(m["StoryStartTime"]));
    }
    if (m.find("StorySubType") != m.end() && !m["StorySubType"].empty()) {
      storySubType = make_shared<string>(boost::any_cast<string>(m["StorySubType"]));
    }
    if (m.find("StoryType") != m.end() && !m["StoryType"].empty()) {
      storyType = make_shared<string>(boost::any_cast<string>(m["StoryType"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
  }


  virtual ~Story() = default;
};
class TaskInfo : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> endTime{};
  shared_ptr<string> message{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};
  shared_ptr<string> userData{};

  TaskInfo() {}

  explicit TaskInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~TaskInfo() = default;
};
class TimeRange : public Darabonba::Model {
public:
  shared_ptr<string> end{};
  shared_ptr<string> start{};

  TimeRange() {}

  explicit TimeRange(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<string>(boost::any_cast<string>(m["End"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<string>(boost::any_cast<string>(m["Start"]));
    }
  }


  virtual ~TimeRange() = default;
};
class WebofficePermission : public Darabonba::Model {
public:
  shared_ptr<bool> copy{};
  shared_ptr<bool> export_{};
  shared_ptr<bool> history{};
  shared_ptr<bool> print{};
  shared_ptr<bool> readonly{};
  shared_ptr<bool> rename{};

  WebofficePermission() {}

  explicit WebofficePermission(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (copy) {
      res["Copy"] = boost::any(*copy);
    }
    if (export_) {
      res["Export"] = boost::any(*export_);
    }
    if (history) {
      res["History"] = boost::any(*history);
    }
    if (print) {
      res["Print"] = boost::any(*print);
    }
    if (readonly) {
      res["Readonly"] = boost::any(*readonly);
    }
    if (rename) {
      res["Rename"] = boost::any(*rename);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Copy") != m.end() && !m["Copy"].empty()) {
      copy = make_shared<bool>(boost::any_cast<bool>(m["Copy"]));
    }
    if (m.find("Export") != m.end() && !m["Export"].empty()) {
      export_ = make_shared<bool>(boost::any_cast<bool>(m["Export"]));
    }
    if (m.find("History") != m.end() && !m["History"].empty()) {
      history = make_shared<bool>(boost::any_cast<bool>(m["History"]));
    }
    if (m.find("Print") != m.end() && !m["Print"].empty()) {
      print = make_shared<bool>(boost::any_cast<bool>(m["Print"]));
    }
    if (m.find("Readonly") != m.end() && !m["Readonly"].empty()) {
      readonly = make_shared<bool>(boost::any_cast<bool>(m["Readonly"]));
    }
    if (m.find("Rename") != m.end() && !m["Rename"].empty()) {
      rename = make_shared<bool>(boost::any_cast<bool>(m["Rename"]));
    }
  }


  virtual ~WebofficePermission() = default;
};
class WebofficeUser : public Darabonba::Model {
public:
  shared_ptr<string> avatar{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};

  WebofficeUser() {}

  explicit WebofficeUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avatar) {
      res["Avatar"] = boost::any(*avatar);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Avatar") != m.end() && !m["Avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["Avatar"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~WebofficeUser() = default;
};
class WebofficeWatermark : public Darabonba::Model {
public:
  shared_ptr<string> fillStyle{};
  shared_ptr<string> font{};
  shared_ptr<long> horizontal{};
  shared_ptr<double> rotate{};
  shared_ptr<long> type{};
  shared_ptr<string> value{};
  shared_ptr<long> vertical{};

  WebofficeWatermark() {}

  explicit WebofficeWatermark(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fillStyle) {
      res["FillStyle"] = boost::any(*fillStyle);
    }
    if (font) {
      res["Font"] = boost::any(*font);
    }
    if (horizontal) {
      res["Horizontal"] = boost::any(*horizontal);
    }
    if (rotate) {
      res["Rotate"] = boost::any(*rotate);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (vertical) {
      res["Vertical"] = boost::any(*vertical);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FillStyle") != m.end() && !m["FillStyle"].empty()) {
      fillStyle = make_shared<string>(boost::any_cast<string>(m["FillStyle"]));
    }
    if (m.find("Font") != m.end() && !m["Font"].empty()) {
      font = make_shared<string>(boost::any_cast<string>(m["Font"]));
    }
    if (m.find("Horizontal") != m.end() && !m["Horizontal"].empty()) {
      horizontal = make_shared<long>(boost::any_cast<long>(m["Horizontal"]));
    }
    if (m.find("Rotate") != m.end() && !m["Rotate"].empty()) {
      rotate = make_shared<double>(boost::any_cast<double>(m["Rotate"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Vertical") != m.end() && !m["Vertical"].empty()) {
      vertical = make_shared<long>(boost::any_cast<long>(m["Vertical"]));
    }
  }


  virtual ~WebofficeWatermark() = default;
};
class BatchDeleteFileMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> projectName{};
  shared_ptr<vector<string>> URIs{};

  BatchDeleteFileMetaRequest() {}

  explicit BatchDeleteFileMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (URIs) {
      res["URIs"] = boost::any(*URIs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("URIs") != m.end() && !m["URIs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["URIs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["URIs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      URIs = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~BatchDeleteFileMetaRequest() = default;
};
class BatchDeleteFileMetaShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> URIsShrink{};

  BatchDeleteFileMetaShrinkRequest() {}

  explicit BatchDeleteFileMetaShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (URIsShrink) {
      res["URIs"] = boost::any(*URIsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("URIs") != m.end() && !m["URIs"].empty()) {
      URIsShrink = make_shared<string>(boost::any_cast<string>(m["URIs"]));
    }
  }


  virtual ~BatchDeleteFileMetaShrinkRequest() = default;
};
class BatchDeleteFileMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BatchDeleteFileMetaResponseBody() {}

  explicit BatchDeleteFileMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BatchDeleteFileMetaResponseBody() = default;
};
class BatchDeleteFileMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchDeleteFileMetaResponseBody> body{};

  BatchDeleteFileMetaResponse() {}

  explicit BatchDeleteFileMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchDeleteFileMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchDeleteFileMetaResponseBody>(model1);
      }
    }
  }


  virtual ~BatchDeleteFileMetaResponse() = default;
};
class BatchGetFileMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> projectName{};
  shared_ptr<vector<string>> URIs{};

  BatchGetFileMetaRequest() {}

  explicit BatchGetFileMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (URIs) {
      res["URIs"] = boost::any(*URIs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("URIs") != m.end() && !m["URIs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["URIs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["URIs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      URIs = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~BatchGetFileMetaRequest() = default;
};
class BatchGetFileMetaShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> URIsShrink{};

  BatchGetFileMetaShrinkRequest() {}

  explicit BatchGetFileMetaShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (URIsShrink) {
      res["URIs"] = boost::any(*URIsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("URIs") != m.end() && !m["URIs"].empty()) {
      URIsShrink = make_shared<string>(boost::any_cast<string>(m["URIs"]));
    }
  }


  virtual ~BatchGetFileMetaShrinkRequest() = default;
};
class BatchGetFileMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<File>> files{};
  shared_ptr<string> requestId{};

  BatchGetFileMetaResponseBody() {}

  explicit BatchGetFileMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (files) {
      vector<boost::any> temp1;
      for(auto item1:*files){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Files"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      if (typeid(vector<boost::any>) == m["Files"].type()) {
        vector<File> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Files"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            File model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        files = make_shared<vector<File>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BatchGetFileMetaResponseBody() = default;
};
class BatchGetFileMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchGetFileMetaResponseBody> body{};

  BatchGetFileMetaResponse() {}

  explicit BatchGetFileMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchGetFileMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchGetFileMetaResponseBody>(model1);
      }
    }
  }


  virtual ~BatchGetFileMetaResponse() = default;
};
class BatchIndexFileMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<vector<FileForReq>> files{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> projectName{};

  BatchIndexFileMetaRequest() {}

  explicit BatchIndexFileMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (files) {
      vector<boost::any> temp1;
      for(auto item1:*files){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Files"] = boost::any(temp1);
    }
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      if (typeid(vector<boost::any>) == m["Files"].type()) {
        vector<FileForReq> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Files"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FileForReq model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        files = make_shared<vector<FileForReq>>(expect1);
      }
    }
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~BatchIndexFileMetaRequest() = default;
};
class BatchIndexFileMetaShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> filesShrink{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> projectName{};

  BatchIndexFileMetaShrinkRequest() {}

  explicit BatchIndexFileMetaShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (filesShrink) {
      res["Files"] = boost::any(*filesShrink);
    }
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      filesShrink = make_shared<string>(boost::any_cast<string>(m["Files"]));
    }
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~BatchIndexFileMetaShrinkRequest() = default;
};
class BatchIndexFileMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> eventId{};
  shared_ptr<string> requestId{};

  BatchIndexFileMetaResponseBody() {}

  explicit BatchIndexFileMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BatchIndexFileMetaResponseBody() = default;
};
class BatchIndexFileMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchIndexFileMetaResponseBody> body{};

  BatchIndexFileMetaResponse() {}

  explicit BatchIndexFileMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchIndexFileMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchIndexFileMetaResponseBody>(model1);
      }
    }
  }


  virtual ~BatchIndexFileMetaResponse() = default;
};
class BatchUpdateFileMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<vector<FileForReq>> files{};
  shared_ptr<string> projectName{};

  BatchUpdateFileMetaRequest() {}

  explicit BatchUpdateFileMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (files) {
      vector<boost::any> temp1;
      for(auto item1:*files){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Files"] = boost::any(temp1);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      if (typeid(vector<boost::any>) == m["Files"].type()) {
        vector<FileForReq> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Files"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FileForReq model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        files = make_shared<vector<FileForReq>>(expect1);
      }
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~BatchUpdateFileMetaRequest() = default;
};
class BatchUpdateFileMetaShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> filesShrink{};
  shared_ptr<string> projectName{};

  BatchUpdateFileMetaShrinkRequest() {}

  explicit BatchUpdateFileMetaShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (filesShrink) {
      res["Files"] = boost::any(*filesShrink);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      filesShrink = make_shared<string>(boost::any_cast<string>(m["Files"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~BatchUpdateFileMetaShrinkRequest() = default;
};
class BatchUpdateFileMetaResponseBodyFiles : public Darabonba::Model {
public:
  shared_ptr<string> message{};
  shared_ptr<bool> success{};
  shared_ptr<string> URI{};

  BatchUpdateFileMetaResponseBodyFiles() {}

  explicit BatchUpdateFileMetaResponseBodyFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~BatchUpdateFileMetaResponseBodyFiles() = default;
};
class BatchUpdateFileMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<BatchUpdateFileMetaResponseBodyFiles>> files{};
  shared_ptr<string> requestId{};

  BatchUpdateFileMetaResponseBody() {}

  explicit BatchUpdateFileMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (files) {
      vector<boost::any> temp1;
      for(auto item1:*files){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Files"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      if (typeid(vector<boost::any>) == m["Files"].type()) {
        vector<BatchUpdateFileMetaResponseBodyFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Files"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchUpdateFileMetaResponseBodyFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        files = make_shared<vector<BatchUpdateFileMetaResponseBodyFiles>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BatchUpdateFileMetaResponseBody() = default;
};
class BatchUpdateFileMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<BatchUpdateFileMetaResponseBody> body{};

  BatchUpdateFileMetaResponse() {}

  explicit BatchUpdateFileMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchUpdateFileMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchUpdateFileMetaResponseBody>(model1);
      }
    }
  }


  virtual ~BatchUpdateFileMetaResponse() = default;
};
class CreateBindingRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> URI{};

  CreateBindingRequest() {}

  explicit CreateBindingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~CreateBindingRequest() = default;
};
class CreateBindingResponseBody : public Darabonba::Model {
public:
  shared_ptr<Binding> binding{};
  shared_ptr<string> requestId{};

  CreateBindingResponseBody() {}

  explicit CreateBindingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (binding) {
      res["Binding"] = binding ? boost::any(binding->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Binding") != m.end() && !m["Binding"].empty()) {
      if (typeid(map<string, boost::any>) == m["Binding"].type()) {
        Binding model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Binding"]));
        binding = make_shared<Binding>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateBindingResponseBody() = default;
};
class CreateBindingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateBindingResponseBody> body{};

  CreateBindingResponse() {}

  explicit CreateBindingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateBindingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBindingResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBindingResponse() = default;
};
class CreateDatasetRequest : public Darabonba::Model {
public:
  shared_ptr<long> datasetMaxBindCount{};
  shared_ptr<long> datasetMaxEntityCount{};
  shared_ptr<long> datasetMaxFileCount{};
  shared_ptr<long> datasetMaxRelationCount{};
  shared_ptr<long> datasetMaxTotalFileSize{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> description{};
  shared_ptr<string> projectName{};
  shared_ptr<string> templateId{};

  CreateDatasetRequest() {}

  explicit CreateDatasetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetMaxBindCount) {
      res["DatasetMaxBindCount"] = boost::any(*datasetMaxBindCount);
    }
    if (datasetMaxEntityCount) {
      res["DatasetMaxEntityCount"] = boost::any(*datasetMaxEntityCount);
    }
    if (datasetMaxFileCount) {
      res["DatasetMaxFileCount"] = boost::any(*datasetMaxFileCount);
    }
    if (datasetMaxRelationCount) {
      res["DatasetMaxRelationCount"] = boost::any(*datasetMaxRelationCount);
    }
    if (datasetMaxTotalFileSize) {
      res["DatasetMaxTotalFileSize"] = boost::any(*datasetMaxTotalFileSize);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetMaxBindCount") != m.end() && !m["DatasetMaxBindCount"].empty()) {
      datasetMaxBindCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxBindCount"]));
    }
    if (m.find("DatasetMaxEntityCount") != m.end() && !m["DatasetMaxEntityCount"].empty()) {
      datasetMaxEntityCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxEntityCount"]));
    }
    if (m.find("DatasetMaxFileCount") != m.end() && !m["DatasetMaxFileCount"].empty()) {
      datasetMaxFileCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxFileCount"]));
    }
    if (m.find("DatasetMaxRelationCount") != m.end() && !m["DatasetMaxRelationCount"].empty()) {
      datasetMaxRelationCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxRelationCount"]));
    }
    if (m.find("DatasetMaxTotalFileSize") != m.end() && !m["DatasetMaxTotalFileSize"].empty()) {
      datasetMaxTotalFileSize = make_shared<long>(boost::any_cast<long>(m["DatasetMaxTotalFileSize"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~CreateDatasetRequest() = default;
};
class CreateDatasetResponseBody : public Darabonba::Model {
public:
  shared_ptr<Dataset> dataset{};
  shared_ptr<string> requestId{};

  CreateDatasetResponseBody() {}

  explicit CreateDatasetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataset) {
      res["Dataset"] = dataset ? boost::any(dataset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dataset") != m.end() && !m["Dataset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dataset"].type()) {
        Dataset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dataset"]));
        dataset = make_shared<Dataset>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDatasetResponseBody() = default;
};
class CreateDatasetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDatasetResponseBody> body{};

  CreateDatasetResponse() {}

  explicit CreateDatasetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDatasetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDatasetResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDatasetResponse() = default;
};
class CreateDetectVideoLabelsTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sourceURI{};
  shared_ptr<string> userData{};

  CreateDetectVideoLabelsTaskRequest() {}

  explicit CreateDetectVideoLabelsTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateDetectVideoLabelsTaskRequest() = default;
};
class CreateDetectVideoLabelsTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> eventId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateDetectVideoLabelsTaskResponseBody() {}

  explicit CreateDetectVideoLabelsTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateDetectVideoLabelsTaskResponseBody() = default;
};
class CreateDetectVideoLabelsTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDetectVideoLabelsTaskResponseBody> body{};

  CreateDetectVideoLabelsTaskResponse() {}

  explicit CreateDetectVideoLabelsTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDetectVideoLabelsTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDetectVideoLabelsTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDetectVideoLabelsTaskResponse() = default;
};
class CreateFigureClusteringTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> userData{};

  CreateFigureClusteringTaskRequest() {}

  explicit CreateFigureClusteringTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateFigureClusteringTaskRequest() = default;
};
class CreateFigureClusteringTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> eventId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateFigureClusteringTaskResponseBody() {}

  explicit CreateFigureClusteringTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateFigureClusteringTaskResponseBody() = default;
};
class CreateFigureClusteringTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateFigureClusteringTaskResponseBody> body{};

  CreateFigureClusteringTaskResponse() {}

  explicit CreateFigureClusteringTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFigureClusteringTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFigureClusteringTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFigureClusteringTaskResponse() = default;
};
class CreateFigureClustersMergingTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> from{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> to{};
  shared_ptr<string> userData{};

  CreateFigureClustersMergingTaskRequest() {}

  explicit CreateFigureClustersMergingTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<string>(boost::any_cast<string>(m["To"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateFigureClustersMergingTaskRequest() = default;
};
class CreateFigureClustersMergingTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> eventId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateFigureClustersMergingTaskResponseBody() {}

  explicit CreateFigureClustersMergingTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateFigureClustersMergingTaskResponseBody() = default;
};
class CreateFigureClustersMergingTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateFigureClustersMergingTaskResponseBody> body{};

  CreateFigureClustersMergingTaskResponse() {}

  explicit CreateFigureClustersMergingTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFigureClustersMergingTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFigureClustersMergingTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFigureClustersMergingTaskResponse() = default;
};
class CreateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<long> datasetMaxBindCount{};
  shared_ptr<long> datasetMaxEntityCount{};
  shared_ptr<long> datasetMaxFileCount{};
  shared_ptr<long> datasetMaxRelationCount{};
  shared_ptr<long> datasetMaxTotalFileSize{};
  shared_ptr<string> description{};
  shared_ptr<long> engineConcurrency{};
  shared_ptr<long> projectMaxDatasetCount{};
  shared_ptr<string> projectName{};
  shared_ptr<long> projectQueriesPerSecond{};
  shared_ptr<string> serviceRole{};
  shared_ptr<string> templateId{};

  CreateProjectRequest() {}

  explicit CreateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetMaxBindCount) {
      res["DatasetMaxBindCount"] = boost::any(*datasetMaxBindCount);
    }
    if (datasetMaxEntityCount) {
      res["DatasetMaxEntityCount"] = boost::any(*datasetMaxEntityCount);
    }
    if (datasetMaxFileCount) {
      res["DatasetMaxFileCount"] = boost::any(*datasetMaxFileCount);
    }
    if (datasetMaxRelationCount) {
      res["DatasetMaxRelationCount"] = boost::any(*datasetMaxRelationCount);
    }
    if (datasetMaxTotalFileSize) {
      res["DatasetMaxTotalFileSize"] = boost::any(*datasetMaxTotalFileSize);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (engineConcurrency) {
      res["EngineConcurrency"] = boost::any(*engineConcurrency);
    }
    if (projectMaxDatasetCount) {
      res["ProjectMaxDatasetCount"] = boost::any(*projectMaxDatasetCount);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (projectQueriesPerSecond) {
      res["ProjectQueriesPerSecond"] = boost::any(*projectQueriesPerSecond);
    }
    if (serviceRole) {
      res["ServiceRole"] = boost::any(*serviceRole);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetMaxBindCount") != m.end() && !m["DatasetMaxBindCount"].empty()) {
      datasetMaxBindCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxBindCount"]));
    }
    if (m.find("DatasetMaxEntityCount") != m.end() && !m["DatasetMaxEntityCount"].empty()) {
      datasetMaxEntityCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxEntityCount"]));
    }
    if (m.find("DatasetMaxFileCount") != m.end() && !m["DatasetMaxFileCount"].empty()) {
      datasetMaxFileCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxFileCount"]));
    }
    if (m.find("DatasetMaxRelationCount") != m.end() && !m["DatasetMaxRelationCount"].empty()) {
      datasetMaxRelationCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxRelationCount"]));
    }
    if (m.find("DatasetMaxTotalFileSize") != m.end() && !m["DatasetMaxTotalFileSize"].empty()) {
      datasetMaxTotalFileSize = make_shared<long>(boost::any_cast<long>(m["DatasetMaxTotalFileSize"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EngineConcurrency") != m.end() && !m["EngineConcurrency"].empty()) {
      engineConcurrency = make_shared<long>(boost::any_cast<long>(m["EngineConcurrency"]));
    }
    if (m.find("ProjectMaxDatasetCount") != m.end() && !m["ProjectMaxDatasetCount"].empty()) {
      projectMaxDatasetCount = make_shared<long>(boost::any_cast<long>(m["ProjectMaxDatasetCount"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("ProjectQueriesPerSecond") != m.end() && !m["ProjectQueriesPerSecond"].empty()) {
      projectQueriesPerSecond = make_shared<long>(boost::any_cast<long>(m["ProjectQueriesPerSecond"]));
    }
    if (m.find("ServiceRole") != m.end() && !m["ServiceRole"].empty()) {
      serviceRole = make_shared<string>(boost::any_cast<string>(m["ServiceRole"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~CreateProjectRequest() = default;
};
class CreateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<Project> project{};
  shared_ptr<string> requestId{};

  CreateProjectResponseBody() {}

  explicit CreateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = project ? boost::any(project->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      if (typeid(map<string, boost::any>) == m["Project"].type()) {
        Project model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Project"]));
        project = make_shared<Project>(model1);
      }
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
class CreateStoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> customId{};
  shared_ptr<map<string, boost::any>> customLabels{};
  shared_ptr<string> datasetName{};
  shared_ptr<long> maxFileCount{};
  shared_ptr<long> minFileCount{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> objectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> storyEndTime{};
  shared_ptr<string> storyName{};
  shared_ptr<string> storyStartTime{};
  shared_ptr<string> storySubType{};
  shared_ptr<string> storyType{};

  CreateStoryRequest() {}

  explicit CreateStoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customId) {
      res["CustomId"] = boost::any(*customId);
    }
    if (customLabels) {
      res["CustomLabels"] = boost::any(*customLabels);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (maxFileCount) {
      res["MaxFileCount"] = boost::any(*maxFileCount);
    }
    if (minFileCount) {
      res["MinFileCount"] = boost::any(*minFileCount);
    }
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (storyEndTime) {
      res["StoryEndTime"] = boost::any(*storyEndTime);
    }
    if (storyName) {
      res["StoryName"] = boost::any(*storyName);
    }
    if (storyStartTime) {
      res["StoryStartTime"] = boost::any(*storyStartTime);
    }
    if (storySubType) {
      res["StorySubType"] = boost::any(*storySubType);
    }
    if (storyType) {
      res["StoryType"] = boost::any(*storyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomId") != m.end() && !m["CustomId"].empty()) {
      customId = make_shared<string>(boost::any_cast<string>(m["CustomId"]));
    }
    if (m.find("CustomLabels") != m.end() && !m["CustomLabels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CustomLabels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customLabels = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("MaxFileCount") != m.end() && !m["MaxFileCount"].empty()) {
      maxFileCount = make_shared<long>(boost::any_cast<long>(m["MaxFileCount"]));
    }
    if (m.find("MinFileCount") != m.end() && !m["MinFileCount"].empty()) {
      minFileCount = make_shared<long>(boost::any_cast<long>(m["MinFileCount"]));
    }
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("StoryEndTime") != m.end() && !m["StoryEndTime"].empty()) {
      storyEndTime = make_shared<string>(boost::any_cast<string>(m["StoryEndTime"]));
    }
    if (m.find("StoryName") != m.end() && !m["StoryName"].empty()) {
      storyName = make_shared<string>(boost::any_cast<string>(m["StoryName"]));
    }
    if (m.find("StoryStartTime") != m.end() && !m["StoryStartTime"].empty()) {
      storyStartTime = make_shared<string>(boost::any_cast<string>(m["StoryStartTime"]));
    }
    if (m.find("StorySubType") != m.end() && !m["StorySubType"].empty()) {
      storySubType = make_shared<string>(boost::any_cast<string>(m["StorySubType"]));
    }
    if (m.find("StoryType") != m.end() && !m["StoryType"].empty()) {
      storyType = make_shared<string>(boost::any_cast<string>(m["StoryType"]));
    }
  }


  virtual ~CreateStoryRequest() = default;
};
class CreateStoryShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> customId{};
  shared_ptr<string> customLabelsShrink{};
  shared_ptr<string> datasetName{};
  shared_ptr<long> maxFileCount{};
  shared_ptr<long> minFileCount{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> objectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> storyEndTime{};
  shared_ptr<string> storyName{};
  shared_ptr<string> storyStartTime{};
  shared_ptr<string> storySubType{};
  shared_ptr<string> storyType{};

  CreateStoryShrinkRequest() {}

  explicit CreateStoryShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customId) {
      res["CustomId"] = boost::any(*customId);
    }
    if (customLabelsShrink) {
      res["CustomLabels"] = boost::any(*customLabelsShrink);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (maxFileCount) {
      res["MaxFileCount"] = boost::any(*maxFileCount);
    }
    if (minFileCount) {
      res["MinFileCount"] = boost::any(*minFileCount);
    }
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (storyEndTime) {
      res["StoryEndTime"] = boost::any(*storyEndTime);
    }
    if (storyName) {
      res["StoryName"] = boost::any(*storyName);
    }
    if (storyStartTime) {
      res["StoryStartTime"] = boost::any(*storyStartTime);
    }
    if (storySubType) {
      res["StorySubType"] = boost::any(*storySubType);
    }
    if (storyType) {
      res["StoryType"] = boost::any(*storyType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomId") != m.end() && !m["CustomId"].empty()) {
      customId = make_shared<string>(boost::any_cast<string>(m["CustomId"]));
    }
    if (m.find("CustomLabels") != m.end() && !m["CustomLabels"].empty()) {
      customLabelsShrink = make_shared<string>(boost::any_cast<string>(m["CustomLabels"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("MaxFileCount") != m.end() && !m["MaxFileCount"].empty()) {
      maxFileCount = make_shared<long>(boost::any_cast<long>(m["MaxFileCount"]));
    }
    if (m.find("MinFileCount") != m.end() && !m["MinFileCount"].empty()) {
      minFileCount = make_shared<long>(boost::any_cast<long>(m["MinFileCount"]));
    }
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("StoryEndTime") != m.end() && !m["StoryEndTime"].empty()) {
      storyEndTime = make_shared<string>(boost::any_cast<string>(m["StoryEndTime"]));
    }
    if (m.find("StoryName") != m.end() && !m["StoryName"].empty()) {
      storyName = make_shared<string>(boost::any_cast<string>(m["StoryName"]));
    }
    if (m.find("StoryStartTime") != m.end() && !m["StoryStartTime"].empty()) {
      storyStartTime = make_shared<string>(boost::any_cast<string>(m["StoryStartTime"]));
    }
    if (m.find("StorySubType") != m.end() && !m["StorySubType"].empty()) {
      storySubType = make_shared<string>(boost::any_cast<string>(m["StorySubType"]));
    }
    if (m.find("StoryType") != m.end() && !m["StoryType"].empty()) {
      storyType = make_shared<string>(boost::any_cast<string>(m["StoryType"]));
    }
  }


  virtual ~CreateStoryShrinkRequest() = default;
};
class CreateStoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> eventId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateStoryResponseBody() {}

  explicit CreateStoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateStoryResponseBody() = default;
};
class CreateStoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateStoryResponseBody> body{};

  CreateStoryResponse() {}

  explicit CreateStoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateStoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateStoryResponseBody>(model1);
      }
    }
  }


  virtual ~CreateStoryResponse() = default;
};
class DeleteBindingRequest : public Darabonba::Model {
public:
  shared_ptr<bool> cleanup{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> URI{};

  DeleteBindingRequest() {}

  explicit DeleteBindingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cleanup) {
      res["Cleanup"] = boost::any(*cleanup);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cleanup") != m.end() && !m["Cleanup"].empty()) {
      cleanup = make_shared<bool>(boost::any_cast<bool>(m["Cleanup"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~DeleteBindingRequest() = default;
};
class DeleteBindingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteBindingResponseBody() {}

  explicit DeleteBindingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteBindingResponseBody() = default;
};
class DeleteBindingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteBindingResponseBody> body{};

  DeleteBindingResponse() {}

  explicit DeleteBindingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteBindingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteBindingResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteBindingResponse() = default;
};
class DeleteDatasetRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> projectName{};

  DeleteDatasetRequest() {}

  explicit DeleteDatasetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~DeleteDatasetRequest() = default;
};
class DeleteDatasetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDatasetResponseBody() {}

  explicit DeleteDatasetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDatasetResponseBody() = default;
};
class DeleteDatasetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDatasetResponseBody> body{};

  DeleteDatasetResponse() {}

  explicit DeleteDatasetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDatasetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDatasetResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDatasetResponse() = default;
};
class DeleteFileMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> URI{};

  DeleteFileMetaRequest() {}

  explicit DeleteFileMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~DeleteFileMetaRequest() = default;
};
class DeleteFileMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteFileMetaResponseBody() {}

  explicit DeleteFileMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteFileMetaResponseBody() = default;
};
class DeleteFileMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteFileMetaResponseBody> body{};

  DeleteFileMetaResponse() {}

  explicit DeleteFileMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFileMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFileMetaResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFileMetaResponse() = default;
};
class DeleteProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};

  DeleteProjectRequest() {}

  explicit DeleteProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
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
class DeleteStoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> objectId{};
  shared_ptr<string> projectName{};

  DeleteStoryRequest() {}

  explicit DeleteStoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~DeleteStoryRequest() = default;
};
class DeleteStoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteStoryResponseBody() {}

  explicit DeleteStoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteStoryResponseBody() = default;
};
class DeleteStoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteStoryResponseBody> body{};

  DeleteStoryResponse() {}

  explicit DeleteStoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteStoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteStoryResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteStoryResponse() = default;
};
class DetectImageFacesRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> sourceURI{};

  DetectImageFacesRequest() {}

  explicit DetectImageFacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
  }


  virtual ~DetectImageFacesRequest() = default;
};
class DetectImageFacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Figure>> faces{};
  shared_ptr<string> requestId{};

  DetectImageFacesResponseBody() {}

  explicit DetectImageFacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faces) {
      vector<boost::any> temp1;
      for(auto item1:*faces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Faces"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Faces") != m.end() && !m["Faces"].empty()) {
      if (typeid(vector<boost::any>) == m["Faces"].type()) {
        vector<Figure> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Faces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Figure model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faces = make_shared<vector<Figure>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetectImageFacesResponseBody() = default;
};
class DetectImageFacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectImageFacesResponseBody> body{};

  DetectImageFacesResponse() {}

  explicit DetectImageFacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectImageFacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectImageFacesResponseBody>(model1);
      }
    }
  }


  virtual ~DetectImageFacesResponse() = default;
};
class DetectImageLabelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> sourceURI{};
  shared_ptr<double> threshold{};

  DetectImageLabelsRequest() {}

  explicit DetectImageLabelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
  }


  virtual ~DetectImageLabelsRequest() = default;
};
class DetectImageLabelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Label>> labels{};
  shared_ptr<string> requestId{};

  DetectImageLabelsResponseBody() {}

  explicit DetectImageLabelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetectImageLabelsResponseBody() = default;
};
class DetectImageLabelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectImageLabelsResponseBody> body{};

  DetectImageLabelsResponse() {}

  explicit DetectImageLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectImageLabelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectImageLabelsResponseBody>(model1);
      }
    }
  }


  virtual ~DetectImageLabelsResponse() = default;
};
class DetectImageScoreRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> sourceURI{};

  DetectImageScoreRequest() {}

  explicit DetectImageScoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
  }


  virtual ~DetectImageScoreRequest() = default;
};
class DetectImageScoreResponseBodyImageScore : public Darabonba::Model {
public:
  shared_ptr<double> overallQualityScore{};

  DetectImageScoreResponseBodyImageScore() {}

  explicit DetectImageScoreResponseBodyImageScore(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (overallQualityScore) {
      res["OverallQualityScore"] = boost::any(*overallQualityScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OverallQualityScore") != m.end() && !m["OverallQualityScore"].empty()) {
      overallQualityScore = make_shared<double>(boost::any_cast<double>(m["OverallQualityScore"]));
    }
  }


  virtual ~DetectImageScoreResponseBodyImageScore() = default;
};
class DetectImageScoreResponseBody : public Darabonba::Model {
public:
  shared_ptr<DetectImageScoreResponseBodyImageScore> imageScore{};
  shared_ptr<string> requestId{};

  DetectImageScoreResponseBody() {}

  explicit DetectImageScoreResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageScore) {
      res["ImageScore"] = imageScore ? boost::any(imageScore->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageScore") != m.end() && !m["ImageScore"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImageScore"].type()) {
        DetectImageScoreResponseBodyImageScore model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImageScore"]));
        imageScore = make_shared<DetectImageScoreResponseBodyImageScore>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetectImageScoreResponseBody() = default;
};
class DetectImageScoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectImageScoreResponseBody> body{};

  DetectImageScoreResponse() {}

  explicit DetectImageScoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectImageScoreResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectImageScoreResponseBody>(model1);
      }
    }
  }


  virtual ~DetectImageScoreResponse() = default;
};
class FuzzyQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> projectName{};
  shared_ptr<string> query{};

  FuzzyQueryRequest() {}

  explicit FuzzyQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
  }


  virtual ~FuzzyQueryRequest() = default;
};
class FuzzyQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<File>> files{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  FuzzyQueryResponseBody() {}

  explicit FuzzyQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (files) {
      vector<boost::any> temp1;
      for(auto item1:*files){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Files"] = boost::any(temp1);
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
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      if (typeid(vector<boost::any>) == m["Files"].type()) {
        vector<File> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Files"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            File model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        files = make_shared<vector<File>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~FuzzyQueryResponseBody() = default;
};
class FuzzyQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FuzzyQueryResponseBody> body{};

  FuzzyQueryResponse() {}

  explicit FuzzyQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FuzzyQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FuzzyQueryResponseBody>(model1);
      }
    }
  }


  virtual ~FuzzyQueryResponse() = default;
};
class GetBindingRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> URI{};

  GetBindingRequest() {}

  explicit GetBindingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~GetBindingRequest() = default;
};
class GetBindingResponseBody : public Darabonba::Model {
public:
  shared_ptr<Binding> binding{};
  shared_ptr<string> requestId{};

  GetBindingResponseBody() {}

  explicit GetBindingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (binding) {
      res["Binding"] = binding ? boost::any(binding->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Binding") != m.end() && !m["Binding"].empty()) {
      if (typeid(map<string, boost::any>) == m["Binding"].type()) {
        Binding model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Binding"]));
        binding = make_shared<Binding>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetBindingResponseBody() = default;
};
class GetBindingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetBindingResponseBody> body{};

  GetBindingResponse() {}

  explicit GetBindingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBindingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBindingResponseBody>(model1);
      }
    }
  }


  virtual ~GetBindingResponse() = default;
};
class GetDatasetRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> projectName{};
  shared_ptr<bool> withStatistics{};

  GetDatasetRequest() {}

  explicit GetDatasetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (withStatistics) {
      res["WithStatistics"] = boost::any(*withStatistics);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("WithStatistics") != m.end() && !m["WithStatistics"].empty()) {
      withStatistics = make_shared<bool>(boost::any_cast<bool>(m["WithStatistics"]));
    }
  }


  virtual ~GetDatasetRequest() = default;
};
class GetDatasetResponseBody : public Darabonba::Model {
public:
  shared_ptr<Dataset> dataset{};
  shared_ptr<string> requestId{};

  GetDatasetResponseBody() {}

  explicit GetDatasetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataset) {
      res["Dataset"] = dataset ? boost::any(dataset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dataset") != m.end() && !m["Dataset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dataset"].type()) {
        Dataset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dataset"]));
        dataset = make_shared<Dataset>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDatasetResponseBody() = default;
};
class GetDatasetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDatasetResponseBody> body{};

  GetDatasetResponse() {}

  explicit GetDatasetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDatasetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDatasetResponseBody>(model1);
      }
    }
  }


  virtual ~GetDatasetResponse() = default;
};
class GetDetectVideoLabelsResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};

  GetDetectVideoLabelsResultRequest() {}

  explicit GetDetectVideoLabelsResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~GetDetectVideoLabelsResultRequest() = default;
};
class GetDetectVideoLabelsResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> endTime{};
  shared_ptr<string> eventId{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<string> message{};
  shared_ptr<string> projectName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};
  shared_ptr<string> userData{};

  GetDetectVideoLabelsResultResponseBody() {}

  explicit GetDetectVideoLabelsResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("Labels") != m.end() && !m["Labels"].empty()) {
      if (typeid(vector<boost::any>) == m["Labels"].type()) {
        vector<Label> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Labels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Label model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        labels = make_shared<vector<Label>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~GetDetectVideoLabelsResultResponseBody() = default;
};
class GetDetectVideoLabelsResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDetectVideoLabelsResultResponseBody> body{};

  GetDetectVideoLabelsResultResponse() {}

  explicit GetDetectVideoLabelsResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDetectVideoLabelsResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDetectVideoLabelsResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetDetectVideoLabelsResultResponse() = default;
};
class GetFigureClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> objectId{};
  shared_ptr<string> projectName{};

  GetFigureClusterRequest() {}

  explicit GetFigureClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~GetFigureClusterRequest() = default;
};
class GetFigureClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<FigureCluster> figureCluster{};
  shared_ptr<string> requestId{};

  GetFigureClusterResponseBody() {}

  explicit GetFigureClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (figureCluster) {
      res["FigureCluster"] = figureCluster ? boost::any(figureCluster->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FigureCluster") != m.end() && !m["FigureCluster"].empty()) {
      if (typeid(map<string, boost::any>) == m["FigureCluster"].type()) {
        FigureCluster model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FigureCluster"]));
        figureCluster = make_shared<FigureCluster>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetFigureClusterResponseBody() = default;
};
class GetFigureClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetFigureClusterResponseBody> body{};

  GetFigureClusterResponse() {}

  explicit GetFigureClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFigureClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFigureClusterResponseBody>(model1);
      }
    }
  }


  virtual ~GetFigureClusterResponse() = default;
};
class GetFileMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> URI{};

  GetFileMetaRequest() {}

  explicit GetFileMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~GetFileMetaRequest() = default;
};
class GetFileMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<File>> files{};
  shared_ptr<string> requestId{};

  GetFileMetaResponseBody() {}

  explicit GetFileMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (files) {
      vector<boost::any> temp1;
      for(auto item1:*files){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Files"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      if (typeid(vector<boost::any>) == m["Files"].type()) {
        vector<File> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Files"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            File model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        files = make_shared<vector<File>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetFileMetaResponseBody() = default;
};
class GetFileMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetFileMetaResponseBody> body{};

  GetFileMetaResponse() {}

  explicit GetFileMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFileMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFileMetaResponseBody>(model1);
      }
    }
  }


  virtual ~GetFileMetaResponse() = default;
};
class GetProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<bool> withStatistics{};

  GetProjectRequest() {}

  explicit GetProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (withStatistics) {
      res["WithStatistics"] = boost::any(*withStatistics);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("WithStatistics") != m.end() && !m["WithStatistics"].empty()) {
      withStatistics = make_shared<bool>(boost::any_cast<bool>(m["WithStatistics"]));
    }
  }


  virtual ~GetProjectRequest() = default;
};
class GetProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<Project> project{};
  shared_ptr<string> requestId{};

  GetProjectResponseBody() {}

  explicit GetProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = project ? boost::any(project->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      if (typeid(map<string, boost::any>) == m["Project"].type()) {
        Project model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Project"]));
        project = make_shared<Project>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetProjectResponseBody() = default;
};
class GetProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetProjectResponseBody> body{};

  GetProjectResponse() {}

  explicit GetProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProjectResponseBody>(model1);
      }
    }
  }


  virtual ~GetProjectResponse() = default;
};
class GetStoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> objectId{};
  shared_ptr<string> projectName{};

  GetStoryRequest() {}

  explicit GetStoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~GetStoryRequest() = default;
};
class GetStoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<Story> story{};

  GetStoryResponseBody() {}

  explicit GetStoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (story) {
      res["Story"] = story ? boost::any(story->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Story") != m.end() && !m["Story"].empty()) {
      if (typeid(map<string, boost::any>) == m["Story"].type()) {
        Story model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Story"]));
        story = make_shared<Story>(model1);
      }
    }
  }


  virtual ~GetStoryResponseBody() = default;
};
class GetStoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetStoryResponseBody> body{};

  GetStoryResponse() {}

  explicit GetStoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetStoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetStoryResponseBody>(model1);
      }
    }
  }


  virtual ~GetStoryResponse() = default;
};
class GetTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};

  GetTaskRequest() {}

  explicit GetTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~GetTaskRequest() = default;
};
class GetTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> endTime{};
  shared_ptr<string> eventId{};
  shared_ptr<string> message{};
  shared_ptr<string> projectName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};
  shared_ptr<string> userData{};

  GetTaskResponseBody() {}

  explicit GetTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~GetTaskResponseBody() = default;
};
class GetTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetTaskResponseBody> body{};

  GetTaskResponse() {}

  explicit GetTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskResponse() = default;
};
class GetWebofficeURLRequest : public Darabonba::Model {
public:
  shared_ptr<AssumeRoleChain> assumeRoleChain{};
  shared_ptr<bool> externalUploaded{};
  shared_ptr<string> filename{};
  shared_ptr<bool> hidecmb{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> password{};
  shared_ptr<WebofficePermission> permission{};
  shared_ptr<long> previewPages{};
  shared_ptr<string> projectName{};
  shared_ptr<string> referer{};
  shared_ptr<string> sourceURI{};
  shared_ptr<WebofficeUser> user{};
  shared_ptr<string> userData{};
  shared_ptr<WebofficeWatermark> watermark{};

  GetWebofficeURLRequest() {}

  explicit GetWebofficeURLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeRoleChain) {
      res["AssumeRoleChain"] = assumeRoleChain ? boost::any(assumeRoleChain->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (externalUploaded) {
      res["ExternalUploaded"] = boost::any(*externalUploaded);
    }
    if (filename) {
      res["Filename"] = boost::any(*filename);
    }
    if (hidecmb) {
      res["Hidecmb"] = boost::any(*hidecmb);
    }
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (permission) {
      res["Permission"] = permission ? boost::any(permission->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (previewPages) {
      res["PreviewPages"] = boost::any(*previewPages);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (referer) {
      res["Referer"] = boost::any(*referer);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    if (user) {
      res["User"] = user ? boost::any(user->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (watermark) {
      res["Watermark"] = watermark ? boost::any(watermark->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeRoleChain") != m.end() && !m["AssumeRoleChain"].empty()) {
      if (typeid(map<string, boost::any>) == m["AssumeRoleChain"].type()) {
        AssumeRoleChain model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AssumeRoleChain"]));
        assumeRoleChain = make_shared<AssumeRoleChain>(model1);
      }
    }
    if (m.find("ExternalUploaded") != m.end() && !m["ExternalUploaded"].empty()) {
      externalUploaded = make_shared<bool>(boost::any_cast<bool>(m["ExternalUploaded"]));
    }
    if (m.find("Filename") != m.end() && !m["Filename"].empty()) {
      filename = make_shared<string>(boost::any_cast<string>(m["Filename"]));
    }
    if (m.find("Hidecmb") != m.end() && !m["Hidecmb"].empty()) {
      hidecmb = make_shared<bool>(boost::any_cast<bool>(m["Hidecmb"]));
    }
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Permission") != m.end() && !m["Permission"].empty()) {
      if (typeid(map<string, boost::any>) == m["Permission"].type()) {
        WebofficePermission model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Permission"]));
        permission = make_shared<WebofficePermission>(model1);
      }
    }
    if (m.find("PreviewPages") != m.end() && !m["PreviewPages"].empty()) {
      previewPages = make_shared<long>(boost::any_cast<long>(m["PreviewPages"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Referer") != m.end() && !m["Referer"].empty()) {
      referer = make_shared<string>(boost::any_cast<string>(m["Referer"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(map<string, boost::any>) == m["User"].type()) {
        WebofficeUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["User"]));
        user = make_shared<WebofficeUser>(model1);
      }
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("Watermark") != m.end() && !m["Watermark"].empty()) {
      if (typeid(map<string, boost::any>) == m["Watermark"].type()) {
        WebofficeWatermark model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Watermark"]));
        watermark = make_shared<WebofficeWatermark>(model1);
      }
    }
  }


  virtual ~GetWebofficeURLRequest() = default;
};
class GetWebofficeURLShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> assumeRoleChainShrink{};
  shared_ptr<bool> externalUploaded{};
  shared_ptr<string> filename{};
  shared_ptr<bool> hidecmb{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> password{};
  shared_ptr<string> permissionShrink{};
  shared_ptr<long> previewPages{};
  shared_ptr<string> projectName{};
  shared_ptr<string> referer{};
  shared_ptr<string> sourceURI{};
  shared_ptr<string> userShrink{};
  shared_ptr<string> userData{};
  shared_ptr<string> watermarkShrink{};

  GetWebofficeURLShrinkRequest() {}

  explicit GetWebofficeURLShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeRoleChainShrink) {
      res["AssumeRoleChain"] = boost::any(*assumeRoleChainShrink);
    }
    if (externalUploaded) {
      res["ExternalUploaded"] = boost::any(*externalUploaded);
    }
    if (filename) {
      res["Filename"] = boost::any(*filename);
    }
    if (hidecmb) {
      res["Hidecmb"] = boost::any(*hidecmb);
    }
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (permissionShrink) {
      res["Permission"] = boost::any(*permissionShrink);
    }
    if (previewPages) {
      res["PreviewPages"] = boost::any(*previewPages);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (referer) {
      res["Referer"] = boost::any(*referer);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    if (userShrink) {
      res["User"] = boost::any(*userShrink);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    if (watermarkShrink) {
      res["Watermark"] = boost::any(*watermarkShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeRoleChain") != m.end() && !m["AssumeRoleChain"].empty()) {
      assumeRoleChainShrink = make_shared<string>(boost::any_cast<string>(m["AssumeRoleChain"]));
    }
    if (m.find("ExternalUploaded") != m.end() && !m["ExternalUploaded"].empty()) {
      externalUploaded = make_shared<bool>(boost::any_cast<bool>(m["ExternalUploaded"]));
    }
    if (m.find("Filename") != m.end() && !m["Filename"].empty()) {
      filename = make_shared<string>(boost::any_cast<string>(m["Filename"]));
    }
    if (m.find("Hidecmb") != m.end() && !m["Hidecmb"].empty()) {
      hidecmb = make_shared<bool>(boost::any_cast<bool>(m["Hidecmb"]));
    }
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("Permission") != m.end() && !m["Permission"].empty()) {
      permissionShrink = make_shared<string>(boost::any_cast<string>(m["Permission"]));
    }
    if (m.find("PreviewPages") != m.end() && !m["PreviewPages"].empty()) {
      previewPages = make_shared<long>(boost::any_cast<long>(m["PreviewPages"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Referer") != m.end() && !m["Referer"].empty()) {
      referer = make_shared<string>(boost::any_cast<string>(m["Referer"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      userShrink = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
    if (m.find("Watermark") != m.end() && !m["Watermark"].empty()) {
      watermarkShrink = make_shared<string>(boost::any_cast<string>(m["Watermark"]));
    }
  }


  virtual ~GetWebofficeURLShrinkRequest() = default;
};
class GetWebofficeURLResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> accessTokenExpiredTime{};
  shared_ptr<string> refreshToken{};
  shared_ptr<string> refreshTokenExpiredTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> webofficeURL{};

  GetWebofficeURLResponseBody() {}

  explicit GetWebofficeURLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (accessTokenExpiredTime) {
      res["AccessTokenExpiredTime"] = boost::any(*accessTokenExpiredTime);
    }
    if (refreshToken) {
      res["RefreshToken"] = boost::any(*refreshToken);
    }
    if (refreshTokenExpiredTime) {
      res["RefreshTokenExpiredTime"] = boost::any(*refreshTokenExpiredTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (webofficeURL) {
      res["WebofficeURL"] = boost::any(*webofficeURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("AccessTokenExpiredTime") != m.end() && !m["AccessTokenExpiredTime"].empty()) {
      accessTokenExpiredTime = make_shared<string>(boost::any_cast<string>(m["AccessTokenExpiredTime"]));
    }
    if (m.find("RefreshToken") != m.end() && !m["RefreshToken"].empty()) {
      refreshToken = make_shared<string>(boost::any_cast<string>(m["RefreshToken"]));
    }
    if (m.find("RefreshTokenExpiredTime") != m.end() && !m["RefreshTokenExpiredTime"].empty()) {
      refreshTokenExpiredTime = make_shared<string>(boost::any_cast<string>(m["RefreshTokenExpiredTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("WebofficeURL") != m.end() && !m["WebofficeURL"].empty()) {
      webofficeURL = make_shared<string>(boost::any_cast<string>(m["WebofficeURL"]));
    }
  }


  virtual ~GetWebofficeURLResponseBody() = default;
};
class GetWebofficeURLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetWebofficeURLResponseBody> body{};

  GetWebofficeURLResponse() {}

  explicit GetWebofficeURLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWebofficeURLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWebofficeURLResponseBody>(model1);
      }
    }
  }


  virtual ~GetWebofficeURLResponse() = default;
};
class IndexFileMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<FileForReq> file{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> projectName{};

  IndexFileMetaRequest() {}

  explicit IndexFileMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (file) {
      res["File"] = file ? boost::any(file->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("File") != m.end() && !m["File"].empty()) {
      if (typeid(map<string, boost::any>) == m["File"].type()) {
        FileForReq model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["File"]));
        file = make_shared<FileForReq>(model1);
      }
    }
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~IndexFileMetaRequest() = default;
};
class IndexFileMetaShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> fileShrink{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> projectName{};

  IndexFileMetaShrinkRequest() {}

  explicit IndexFileMetaShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (fileShrink) {
      res["File"] = boost::any(*fileShrink);
    }
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("File") != m.end() && !m["File"].empty()) {
      fileShrink = make_shared<string>(boost::any_cast<string>(m["File"]));
    }
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~IndexFileMetaShrinkRequest() = default;
};
class IndexFileMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> eventId{};
  shared_ptr<string> requestId{};

  IndexFileMetaResponseBody() {}

  explicit IndexFileMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~IndexFileMetaResponseBody() = default;
};
class IndexFileMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<IndexFileMetaResponseBody> body{};

  IndexFileMetaResponse() {}

  explicit IndexFileMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IndexFileMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IndexFileMetaResponseBody>(model1);
      }
    }
  }


  virtual ~IndexFileMetaResponse() = default;
};
class ListBindingsRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> projectName{};

  ListBindingsRequest() {}

  explicit ListBindingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~ListBindingsRequest() = default;
};
class ListBindingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Binding>> bindings{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListBindingsResponseBody() {}

  explicit ListBindingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bindings) {
      vector<boost::any> temp1;
      for(auto item1:*bindings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bindings"] = boost::any(temp1);
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
    if (m.find("Bindings") != m.end() && !m["Bindings"].empty()) {
      if (typeid(vector<boost::any>) == m["Bindings"].type()) {
        vector<Binding> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bindings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Binding model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bindings = make_shared<vector<Binding>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListBindingsResponseBody() = default;
};
class ListBindingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListBindingsResponseBody> body{};

  ListBindingsResponse() {}

  explicit ListBindingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBindingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBindingsResponseBody>(model1);
      }
    }
  }


  virtual ~ListBindingsResponse() = default;
};
class ListDatasetsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> prefix{};
  shared_ptr<string> projectName{};

  ListDatasetsRequest() {}

  explicit ListDatasetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (prefix) {
      res["Prefix"] = boost::any(*prefix);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
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
    if (m.find("Prefix") != m.end() && !m["Prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["Prefix"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~ListDatasetsRequest() = default;
};
class ListDatasetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Dataset>> datasets{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListDatasetsResponseBody() {}

  explicit ListDatasetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasets) {
      vector<boost::any> temp1;
      for(auto item1:*datasets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Datasets"] = boost::any(temp1);
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
    if (m.find("Datasets") != m.end() && !m["Datasets"].empty()) {
      if (typeid(vector<boost::any>) == m["Datasets"].type()) {
        vector<Dataset> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Datasets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Dataset model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasets = make_shared<vector<Dataset>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDatasetsResponseBody() = default;
};
class ListDatasetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListDatasetsResponseBody> body{};

  ListDatasetsResponse() {}

  explicit ListDatasetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDatasetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDatasetsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDatasetsResponse() = default;
};
class ListProjectsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> prefix{};

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
    if (prefix) {
      res["Prefix"] = boost::any(*prefix);
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
    if (m.find("Prefix") != m.end() && !m["Prefix"].empty()) {
      prefix = make_shared<string>(boost::any_cast<string>(m["Prefix"]));
    }
  }


  virtual ~ListProjectsRequest() = default;
};
class ListProjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<Project>> projects{};
  shared_ptr<string> requestId{};

  ListProjectsResponseBody() {}

  explicit ListProjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (projects) {
      vector<boost::any> temp1;
      for(auto item1:*projects){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Projects"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Projects") != m.end() && !m["Projects"].empty()) {
      if (typeid(vector<boost::any>) == m["Projects"].type()) {
        vector<Project> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Projects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Project model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projects = make_shared<vector<Project>>(expect1);
      }
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
class ListTasksRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> projectName{};
  shared_ptr<string> taskType{};

  ListTasksRequest() {}

  explicit ListTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
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
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~ListTasksRequest() = default;
};
class ListTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> projectName{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<TaskInfo>> tasks{};

  ListTasksResponseBody() {}

  explicit ListTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
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
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<TaskInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TaskInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<TaskInfo>>(expect1);
      }
    }
  }


  virtual ~ListTasksResponseBody() = default;
};
class ListTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListTasksResponseBody> body{};

  ListTasksResponse() {}

  explicit ListTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListTasksResponse() = default;
};
class MergeFigureClustersRequest : public Darabonba::Model {
public:
  shared_ptr<string> clusterIdFrom{};
  shared_ptr<string> clusterIdTo{};
  shared_ptr<string> customMessage{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> figureType{};
  shared_ptr<string> notifyTopicEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> projectName{};

  MergeFigureClustersRequest() {}

  explicit MergeFigureClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clusterIdFrom) {
      res["ClusterIdFrom"] = boost::any(*clusterIdFrom);
    }
    if (clusterIdTo) {
      res["ClusterIdTo"] = boost::any(*clusterIdTo);
    }
    if (customMessage) {
      res["CustomMessage"] = boost::any(*customMessage);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (figureType) {
      res["FigureType"] = boost::any(*figureType);
    }
    if (notifyTopicEndpoint) {
      res["NotifyTopicEndpoint"] = boost::any(*notifyTopicEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClusterIdFrom") != m.end() && !m["ClusterIdFrom"].empty()) {
      clusterIdFrom = make_shared<string>(boost::any_cast<string>(m["ClusterIdFrom"]));
    }
    if (m.find("ClusterIdTo") != m.end() && !m["ClusterIdTo"].empty()) {
      clusterIdTo = make_shared<string>(boost::any_cast<string>(m["ClusterIdTo"]));
    }
    if (m.find("CustomMessage") != m.end() && !m["CustomMessage"].empty()) {
      customMessage = make_shared<string>(boost::any_cast<string>(m["CustomMessage"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("FigureType") != m.end() && !m["FigureType"].empty()) {
      figureType = make_shared<string>(boost::any_cast<string>(m["FigureType"]));
    }
    if (m.find("NotifyTopicEndpoint") != m.end() && !m["NotifyTopicEndpoint"].empty()) {
      notifyTopicEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyTopicEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~MergeFigureClustersRequest() = default;
};
class MergeFigureClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  MergeFigureClustersResponseBody() {}

  explicit MergeFigureClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MergeFigureClustersResponseBody() = default;
};
class MergeFigureClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<MergeFigureClustersResponseBody> body{};

  MergeFigureClustersResponse() {}

  explicit MergeFigureClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MergeFigureClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MergeFigureClustersResponseBody>(model1);
      }
    }
  }


  virtual ~MergeFigureClustersResponse() = default;
};
class QueryFigureClustersRequest : public Darabonba::Model {
public:
  shared_ptr<string> customLabels{};
  shared_ptr<string> datasetName{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> order{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sort{};

  QueryFigureClustersRequest() {}

  explicit QueryFigureClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customLabels) {
      res["CustomLabels"] = boost::any(*customLabels);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomLabels") != m.end() && !m["CustomLabels"].empty()) {
      customLabels = make_shared<string>(boost::any_cast<string>(m["CustomLabels"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
  }


  virtual ~QueryFigureClustersRequest() = default;
};
class QueryFigureClustersResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<FigureCluster>> figureClusters{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  QueryFigureClustersResponseBody() {}

  explicit QueryFigureClustersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (figureClusters) {
      vector<boost::any> temp1;
      for(auto item1:*figureClusters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FigureClusters"] = boost::any(temp1);
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
    if (m.find("FigureClusters") != m.end() && !m["FigureClusters"].empty()) {
      if (typeid(vector<boost::any>) == m["FigureClusters"].type()) {
        vector<FigureCluster> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FigureClusters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FigureCluster model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        figureClusters = make_shared<vector<FigureCluster>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryFigureClustersResponseBody() = default;
};
class QueryFigureClustersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryFigureClustersResponseBody> body{};

  QueryFigureClustersResponse() {}

  explicit QueryFigureClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryFigureClustersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryFigureClustersResponseBody>(model1);
      }
    }
  }


  virtual ~QueryFigureClustersResponse() = default;
};
class QueryStoriesRequest : public Darabonba::Model {
public:
  shared_ptr<TimeRange> createTimeRange{};
  shared_ptr<string> customLabels{};
  shared_ptr<string> datasetName{};
  shared_ptr<vector<string>> figureClusterIds{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> objectId{};
  shared_ptr<string> projectName{};
  shared_ptr<TimeRange> storyEndTimeRange{};
  shared_ptr<string> storyName{};
  shared_ptr<TimeRange> storyStartTimeRange{};
  shared_ptr<string> storySubType{};
  shared_ptr<string> storyType{};
  shared_ptr<bool> withEmptyStories{};

  QueryStoriesRequest() {}

  explicit QueryStoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTimeRange) {
      res["CreateTimeRange"] = createTimeRange ? boost::any(createTimeRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (customLabels) {
      res["CustomLabels"] = boost::any(*customLabels);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (figureClusterIds) {
      res["FigureClusterIds"] = boost::any(*figureClusterIds);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (storyEndTimeRange) {
      res["StoryEndTimeRange"] = storyEndTimeRange ? boost::any(storyEndTimeRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storyName) {
      res["StoryName"] = boost::any(*storyName);
    }
    if (storyStartTimeRange) {
      res["StoryStartTimeRange"] = storyStartTimeRange ? boost::any(storyStartTimeRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (storySubType) {
      res["StorySubType"] = boost::any(*storySubType);
    }
    if (storyType) {
      res["StoryType"] = boost::any(*storyType);
    }
    if (withEmptyStories) {
      res["WithEmptyStories"] = boost::any(*withEmptyStories);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTimeRange") != m.end() && !m["CreateTimeRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["CreateTimeRange"].type()) {
        TimeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CreateTimeRange"]));
        createTimeRange = make_shared<TimeRange>(model1);
      }
    }
    if (m.find("CustomLabels") != m.end() && !m["CustomLabels"].empty()) {
      customLabels = make_shared<string>(boost::any_cast<string>(m["CustomLabels"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("FigureClusterIds") != m.end() && !m["FigureClusterIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FigureClusterIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FigureClusterIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      figureClusterIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("StoryEndTimeRange") != m.end() && !m["StoryEndTimeRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["StoryEndTimeRange"].type()) {
        TimeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StoryEndTimeRange"]));
        storyEndTimeRange = make_shared<TimeRange>(model1);
      }
    }
    if (m.find("StoryName") != m.end() && !m["StoryName"].empty()) {
      storyName = make_shared<string>(boost::any_cast<string>(m["StoryName"]));
    }
    if (m.find("StoryStartTimeRange") != m.end() && !m["StoryStartTimeRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["StoryStartTimeRange"].type()) {
        TimeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StoryStartTimeRange"]));
        storyStartTimeRange = make_shared<TimeRange>(model1);
      }
    }
    if (m.find("StorySubType") != m.end() && !m["StorySubType"].empty()) {
      storySubType = make_shared<string>(boost::any_cast<string>(m["StorySubType"]));
    }
    if (m.find("StoryType") != m.end() && !m["StoryType"].empty()) {
      storyType = make_shared<string>(boost::any_cast<string>(m["StoryType"]));
    }
    if (m.find("WithEmptyStories") != m.end() && !m["WithEmptyStories"].empty()) {
      withEmptyStories = make_shared<bool>(boost::any_cast<bool>(m["WithEmptyStories"]));
    }
  }


  virtual ~QueryStoriesRequest() = default;
};
class QueryStoriesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> createTimeRangeShrink{};
  shared_ptr<string> customLabels{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> figureClusterIdsShrink{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> objectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> storyEndTimeRangeShrink{};
  shared_ptr<string> storyName{};
  shared_ptr<string> storyStartTimeRangeShrink{};
  shared_ptr<string> storySubType{};
  shared_ptr<string> storyType{};
  shared_ptr<bool> withEmptyStories{};

  QueryStoriesShrinkRequest() {}

  explicit QueryStoriesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTimeRangeShrink) {
      res["CreateTimeRange"] = boost::any(*createTimeRangeShrink);
    }
    if (customLabels) {
      res["CustomLabels"] = boost::any(*customLabels);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (figureClusterIdsShrink) {
      res["FigureClusterIds"] = boost::any(*figureClusterIdsShrink);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (storyEndTimeRangeShrink) {
      res["StoryEndTimeRange"] = boost::any(*storyEndTimeRangeShrink);
    }
    if (storyName) {
      res["StoryName"] = boost::any(*storyName);
    }
    if (storyStartTimeRangeShrink) {
      res["StoryStartTimeRange"] = boost::any(*storyStartTimeRangeShrink);
    }
    if (storySubType) {
      res["StorySubType"] = boost::any(*storySubType);
    }
    if (storyType) {
      res["StoryType"] = boost::any(*storyType);
    }
    if (withEmptyStories) {
      res["WithEmptyStories"] = boost::any(*withEmptyStories);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTimeRange") != m.end() && !m["CreateTimeRange"].empty()) {
      createTimeRangeShrink = make_shared<string>(boost::any_cast<string>(m["CreateTimeRange"]));
    }
    if (m.find("CustomLabels") != m.end() && !m["CustomLabels"].empty()) {
      customLabels = make_shared<string>(boost::any_cast<string>(m["CustomLabels"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("FigureClusterIds") != m.end() && !m["FigureClusterIds"].empty()) {
      figureClusterIdsShrink = make_shared<string>(boost::any_cast<string>(m["FigureClusterIds"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("StoryEndTimeRange") != m.end() && !m["StoryEndTimeRange"].empty()) {
      storyEndTimeRangeShrink = make_shared<string>(boost::any_cast<string>(m["StoryEndTimeRange"]));
    }
    if (m.find("StoryName") != m.end() && !m["StoryName"].empty()) {
      storyName = make_shared<string>(boost::any_cast<string>(m["StoryName"]));
    }
    if (m.find("StoryStartTimeRange") != m.end() && !m["StoryStartTimeRange"].empty()) {
      storyStartTimeRangeShrink = make_shared<string>(boost::any_cast<string>(m["StoryStartTimeRange"]));
    }
    if (m.find("StorySubType") != m.end() && !m["StorySubType"].empty()) {
      storySubType = make_shared<string>(boost::any_cast<string>(m["StorySubType"]));
    }
    if (m.find("StoryType") != m.end() && !m["StoryType"].empty()) {
      storyType = make_shared<string>(boost::any_cast<string>(m["StoryType"]));
    }
    if (m.find("WithEmptyStories") != m.end() && !m["WithEmptyStories"].empty()) {
      withEmptyStories = make_shared<bool>(boost::any_cast<bool>(m["WithEmptyStories"]));
    }
  }


  virtual ~QueryStoriesShrinkRequest() = default;
};
class QueryStoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<Story>> stories{};

  QueryStoriesResponseBody() {}

  explicit QueryStoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stories) {
      vector<boost::any> temp1;
      for(auto item1:*stories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Stories"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Stories") != m.end() && !m["Stories"].empty()) {
      if (typeid(vector<boost::any>) == m["Stories"].type()) {
        vector<Story> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Stories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Story model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stories = make_shared<vector<Story>>(expect1);
      }
    }
  }


  virtual ~QueryStoriesResponseBody() = default;
};
class QueryStoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryStoriesResponseBody> body{};

  QueryStoriesResponse() {}

  explicit QueryStoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryStoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryStoriesResponseBody>(model1);
      }
    }
  }


  virtual ~QueryStoriesResponse() = default;
};
class RefreshWebofficeTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<AssumeRoleChain> assumeRoleChain{};
  shared_ptr<string> projectName{};
  shared_ptr<string> refreshToken{};

  RefreshWebofficeTokenRequest() {}

  explicit RefreshWebofficeTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (assumeRoleChain) {
      res["AssumeRoleChain"] = assumeRoleChain ? boost::any(assumeRoleChain->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (refreshToken) {
      res["RefreshToken"] = boost::any(*refreshToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("AssumeRoleChain") != m.end() && !m["AssumeRoleChain"].empty()) {
      if (typeid(map<string, boost::any>) == m["AssumeRoleChain"].type()) {
        AssumeRoleChain model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AssumeRoleChain"]));
        assumeRoleChain = make_shared<AssumeRoleChain>(model1);
      }
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("RefreshToken") != m.end() && !m["RefreshToken"].empty()) {
      refreshToken = make_shared<string>(boost::any_cast<string>(m["RefreshToken"]));
    }
  }


  virtual ~RefreshWebofficeTokenRequest() = default;
};
class RefreshWebofficeTokenShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> assumeRoleChainShrink{};
  shared_ptr<string> projectName{};
  shared_ptr<string> refreshToken{};

  RefreshWebofficeTokenShrinkRequest() {}

  explicit RefreshWebofficeTokenShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (assumeRoleChainShrink) {
      res["AssumeRoleChain"] = boost::any(*assumeRoleChainShrink);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (refreshToken) {
      res["RefreshToken"] = boost::any(*refreshToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("AssumeRoleChain") != m.end() && !m["AssumeRoleChain"].empty()) {
      assumeRoleChainShrink = make_shared<string>(boost::any_cast<string>(m["AssumeRoleChain"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("RefreshToken") != m.end() && !m["RefreshToken"].empty()) {
      refreshToken = make_shared<string>(boost::any_cast<string>(m["RefreshToken"]));
    }
  }


  virtual ~RefreshWebofficeTokenShrinkRequest() = default;
};
class RefreshWebofficeTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> accessTokenExpiredTime{};
  shared_ptr<string> refreshToken{};
  shared_ptr<string> refreshTokenExpiredTime{};
  shared_ptr<string> requestId{};

  RefreshWebofficeTokenResponseBody() {}

  explicit RefreshWebofficeTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (accessTokenExpiredTime) {
      res["AccessTokenExpiredTime"] = boost::any(*accessTokenExpiredTime);
    }
    if (refreshToken) {
      res["RefreshToken"] = boost::any(*refreshToken);
    }
    if (refreshTokenExpiredTime) {
      res["RefreshTokenExpiredTime"] = boost::any(*refreshTokenExpiredTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("AccessTokenExpiredTime") != m.end() && !m["AccessTokenExpiredTime"].empty()) {
      accessTokenExpiredTime = make_shared<string>(boost::any_cast<string>(m["AccessTokenExpiredTime"]));
    }
    if (m.find("RefreshToken") != m.end() && !m["RefreshToken"].empty()) {
      refreshToken = make_shared<string>(boost::any_cast<string>(m["RefreshToken"]));
    }
    if (m.find("RefreshTokenExpiredTime") != m.end() && !m["RefreshTokenExpiredTime"].empty()) {
      refreshTokenExpiredTime = make_shared<string>(boost::any_cast<string>(m["RefreshTokenExpiredTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RefreshWebofficeTokenResponseBody() = default;
};
class RefreshWebofficeTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RefreshWebofficeTokenResponseBody> body{};

  RefreshWebofficeTokenResponse() {}

  explicit RefreshWebofficeTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefreshWebofficeTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefreshWebofficeTokenResponseBody>(model1);
      }
    }
  }


  virtual ~RefreshWebofficeTokenResponse() = default;
};
class ResumeBindingRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> URI{};

  ResumeBindingRequest() {}

  explicit ResumeBindingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~ResumeBindingRequest() = default;
};
class ResumeBindingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResumeBindingResponseBody() {}

  explicit ResumeBindingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ResumeBindingResponseBody() = default;
};
class ResumeBindingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ResumeBindingResponseBody> body{};

  ResumeBindingResponse() {}

  explicit ResumeBindingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResumeBindingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResumeBindingResponseBody>(model1);
      }
    }
  }


  virtual ~ResumeBindingResponse() = default;
};
class SemanticQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> projectName{};
  shared_ptr<string> query{};

  SemanticQueryRequest() {}

  explicit SemanticQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
  }


  virtual ~SemanticQueryRequest() = default;
};
class SemanticQueryResponseBodyAggregationsGroups : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> value{};

  SemanticQueryResponseBodyAggregationsGroups() {}

  explicit SemanticQueryResponseBodyAggregationsGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~SemanticQueryResponseBodyAggregationsGroups() = default;
};
class SemanticQueryResponseBodyAggregations : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<vector<SemanticQueryResponseBodyAggregationsGroups>> groups{};
  shared_ptr<string> operation{};
  shared_ptr<double> value{};

  SemanticQueryResponseBodyAggregations() {}

  explicit SemanticQueryResponseBodyAggregations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (groups) {
      vector<boost::any> temp1;
      for(auto item1:*groups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Groups"] = boost::any(temp1);
    }
    if (operation) {
      res["Operation"] = boost::any(*operation);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(vector<boost::any>) == m["Groups"].type()) {
        vector<SemanticQueryResponseBodyAggregationsGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Groups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SemanticQueryResponseBodyAggregationsGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groups = make_shared<vector<SemanticQueryResponseBodyAggregationsGroups>>(expect1);
      }
    }
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["Operation"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~SemanticQueryResponseBodyAggregations() = default;
};
class SemanticQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<SemanticQueryResponseBodyAggregations>> aggregations{};
  shared_ptr<vector<File>> files{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  SemanticQueryResponseBody() {}

  explicit SemanticQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregations) {
      vector<boost::any> temp1;
      for(auto item1:*aggregations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Aggregations"] = boost::any(temp1);
    }
    if (files) {
      vector<boost::any> temp1;
      for(auto item1:*files){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Files"] = boost::any(temp1);
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
    if (m.find("Aggregations") != m.end() && !m["Aggregations"].empty()) {
      if (typeid(vector<boost::any>) == m["Aggregations"].type()) {
        vector<SemanticQueryResponseBodyAggregations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Aggregations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SemanticQueryResponseBodyAggregations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aggregations = make_shared<vector<SemanticQueryResponseBodyAggregations>>(expect1);
      }
    }
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      if (typeid(vector<boost::any>) == m["Files"].type()) {
        vector<File> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Files"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            File model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        files = make_shared<vector<File>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SemanticQueryResponseBody() = default;
};
class SemanticQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SemanticQueryResponseBody> body{};

  SemanticQueryResponse() {}

  explicit SemanticQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SemanticQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SemanticQueryResponseBody>(model1);
      }
    }
  }


  virtual ~SemanticQueryResponse() = default;
};
class SimpleQueryRequestAggregations : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> operation{};

  SimpleQueryRequestAggregations() {}

  explicit SimpleQueryRequestAggregations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (operation) {
      res["Operation"] = boost::any(*operation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["Operation"]));
    }
  }


  virtual ~SimpleQueryRequestAggregations() = default;
};
class SimpleQueryRequest : public Darabonba::Model {
public:
  shared_ptr<vector<SimpleQueryRequestAggregations>> aggregations{};
  shared_ptr<string> datasetName{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> order{};
  shared_ptr<string> projectName{};
  shared_ptr<SimpleQuery> query{};
  shared_ptr<string> sort{};
  shared_ptr<vector<string>> withFields{};

  SimpleQueryRequest() {}

  explicit SimpleQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregations) {
      vector<boost::any> temp1;
      for(auto item1:*aggregations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Aggregations"] = boost::any(temp1);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (query) {
      res["Query"] = query ? boost::any(query->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (withFields) {
      res["WithFields"] = boost::any(*withFields);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Aggregations") != m.end() && !m["Aggregations"].empty()) {
      if (typeid(vector<boost::any>) == m["Aggregations"].type()) {
        vector<SimpleQueryRequestAggregations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Aggregations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SimpleQueryRequestAggregations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aggregations = make_shared<vector<SimpleQueryRequestAggregations>>(expect1);
      }
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      if (typeid(map<string, boost::any>) == m["Query"].type()) {
        SimpleQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Query"]));
        query = make_shared<SimpleQuery>(model1);
      }
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("WithFields") != m.end() && !m["WithFields"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["WithFields"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["WithFields"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      withFields = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~SimpleQueryRequest() = default;
};
class SimpleQueryShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> aggregationsShrink{};
  shared_ptr<string> datasetName{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> order{};
  shared_ptr<string> projectName{};
  shared_ptr<string> queryShrink{};
  shared_ptr<string> sort{};
  shared_ptr<string> withFieldsShrink{};

  SimpleQueryShrinkRequest() {}

  explicit SimpleQueryShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregationsShrink) {
      res["Aggregations"] = boost::any(*aggregationsShrink);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (queryShrink) {
      res["Query"] = boost::any(*queryShrink);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (withFieldsShrink) {
      res["WithFields"] = boost::any(*withFieldsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Aggregations") != m.end() && !m["Aggregations"].empty()) {
      aggregationsShrink = make_shared<string>(boost::any_cast<string>(m["Aggregations"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      queryShrink = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("WithFields") != m.end() && !m["WithFields"].empty()) {
      withFieldsShrink = make_shared<string>(boost::any_cast<string>(m["WithFields"]));
    }
  }


  virtual ~SimpleQueryShrinkRequest() = default;
};
class SimpleQueryResponseBodyAggregationsGroups : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> value{};

  SimpleQueryResponseBodyAggregationsGroups() {}

  explicit SimpleQueryResponseBodyAggregationsGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~SimpleQueryResponseBodyAggregationsGroups() = default;
};
class SimpleQueryResponseBodyAggregations : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<vector<SimpleQueryResponseBodyAggregationsGroups>> groups{};
  shared_ptr<string> operation{};
  shared_ptr<double> value{};

  SimpleQueryResponseBodyAggregations() {}

  explicit SimpleQueryResponseBodyAggregations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (field) {
      res["Field"] = boost::any(*field);
    }
    if (groups) {
      vector<boost::any> temp1;
      for(auto item1:*groups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Groups"] = boost::any(temp1);
    }
    if (operation) {
      res["Operation"] = boost::any(*operation);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      if (typeid(vector<boost::any>) == m["Groups"].type()) {
        vector<SimpleQueryResponseBodyAggregationsGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Groups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SimpleQueryResponseBodyAggregationsGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        groups = make_shared<vector<SimpleQueryResponseBodyAggregationsGroups>>(expect1);
      }
    }
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["Operation"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
    }
  }


  virtual ~SimpleQueryResponseBodyAggregations() = default;
};
class SimpleQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<SimpleQueryResponseBodyAggregations>> aggregations{};
  shared_ptr<vector<File>> files{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  SimpleQueryResponseBody() {}

  explicit SimpleQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aggregations) {
      vector<boost::any> temp1;
      for(auto item1:*aggregations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Aggregations"] = boost::any(temp1);
    }
    if (files) {
      vector<boost::any> temp1;
      for(auto item1:*files){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Files"] = boost::any(temp1);
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
    if (m.find("Aggregations") != m.end() && !m["Aggregations"].empty()) {
      if (typeid(vector<boost::any>) == m["Aggregations"].type()) {
        vector<SimpleQueryResponseBodyAggregations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Aggregations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SimpleQueryResponseBodyAggregations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        aggregations = make_shared<vector<SimpleQueryResponseBodyAggregations>>(expect1);
      }
    }
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      if (typeid(vector<boost::any>) == m["Files"].type()) {
        vector<File> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Files"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            File model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        files = make_shared<vector<File>>(expect1);
      }
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SimpleQueryResponseBody() = default;
};
class SimpleQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SimpleQueryResponseBody> body{};

  SimpleQueryResponse() {}

  explicit SimpleQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SimpleQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SimpleQueryResponseBody>(model1);
      }
    }
  }


  virtual ~SimpleQueryResponse() = default;
};
class StopBindingRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> reason{};
  shared_ptr<string> URI{};

  StopBindingRequest() {}

  explicit StopBindingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~StopBindingRequest() = default;
};
class StopBindingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  StopBindingResponseBody() {}

  explicit StopBindingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopBindingResponseBody() = default;
};
class StopBindingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<StopBindingResponseBody> body{};

  StopBindingResponse() {}

  explicit StopBindingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopBindingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopBindingResponseBody>(model1);
      }
    }
  }


  virtual ~StopBindingResponse() = default;
};
class UpdateDatasetRequest : public Darabonba::Model {
public:
  shared_ptr<long> datasetMaxBindCount{};
  shared_ptr<long> datasetMaxEntityCount{};
  shared_ptr<long> datasetMaxFileCount{};
  shared_ptr<long> datasetMaxRelationCount{};
  shared_ptr<long> datasetMaxTotalFileSize{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> description{};
  shared_ptr<string> projectName{};
  shared_ptr<string> templateId{};

  UpdateDatasetRequest() {}

  explicit UpdateDatasetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetMaxBindCount) {
      res["DatasetMaxBindCount"] = boost::any(*datasetMaxBindCount);
    }
    if (datasetMaxEntityCount) {
      res["DatasetMaxEntityCount"] = boost::any(*datasetMaxEntityCount);
    }
    if (datasetMaxFileCount) {
      res["DatasetMaxFileCount"] = boost::any(*datasetMaxFileCount);
    }
    if (datasetMaxRelationCount) {
      res["DatasetMaxRelationCount"] = boost::any(*datasetMaxRelationCount);
    }
    if (datasetMaxTotalFileSize) {
      res["DatasetMaxTotalFileSize"] = boost::any(*datasetMaxTotalFileSize);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetMaxBindCount") != m.end() && !m["DatasetMaxBindCount"].empty()) {
      datasetMaxBindCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxBindCount"]));
    }
    if (m.find("DatasetMaxEntityCount") != m.end() && !m["DatasetMaxEntityCount"].empty()) {
      datasetMaxEntityCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxEntityCount"]));
    }
    if (m.find("DatasetMaxFileCount") != m.end() && !m["DatasetMaxFileCount"].empty()) {
      datasetMaxFileCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxFileCount"]));
    }
    if (m.find("DatasetMaxRelationCount") != m.end() && !m["DatasetMaxRelationCount"].empty()) {
      datasetMaxRelationCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxRelationCount"]));
    }
    if (m.find("DatasetMaxTotalFileSize") != m.end() && !m["DatasetMaxTotalFileSize"].empty()) {
      datasetMaxTotalFileSize = make_shared<long>(boost::any_cast<long>(m["DatasetMaxTotalFileSize"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~UpdateDatasetRequest() = default;
};
class UpdateDatasetResponseBody : public Darabonba::Model {
public:
  shared_ptr<Dataset> dataset{};
  shared_ptr<string> requestId{};

  UpdateDatasetResponseBody() {}

  explicit UpdateDatasetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataset) {
      res["Dataset"] = dataset ? boost::any(dataset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dataset") != m.end() && !m["Dataset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dataset"].type()) {
        Dataset model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dataset"]));
        dataset = make_shared<Dataset>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateDatasetResponseBody() = default;
};
class UpdateDatasetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateDatasetResponseBody> body{};

  UpdateDatasetResponse() {}

  explicit UpdateDatasetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDatasetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDatasetResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDatasetResponse() = default;
};
class UpdateFigureClusterRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<FigureClusterForReq> figureCluster{};
  shared_ptr<string> projectName{};

  UpdateFigureClusterRequest() {}

  explicit UpdateFigureClusterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (figureCluster) {
      res["FigureCluster"] = figureCluster ? boost::any(figureCluster->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("FigureCluster") != m.end() && !m["FigureCluster"].empty()) {
      if (typeid(map<string, boost::any>) == m["FigureCluster"].type()) {
        FigureClusterForReq model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FigureCluster"]));
        figureCluster = make_shared<FigureClusterForReq>(model1);
      }
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~UpdateFigureClusterRequest() = default;
};
class UpdateFigureClusterShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> figureClusterShrink{};
  shared_ptr<string> projectName{};

  UpdateFigureClusterShrinkRequest() {}

  explicit UpdateFigureClusterShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (figureClusterShrink) {
      res["FigureCluster"] = boost::any(*figureClusterShrink);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("FigureCluster") != m.end() && !m["FigureCluster"].empty()) {
      figureClusterShrink = make_shared<string>(boost::any_cast<string>(m["FigureCluster"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~UpdateFigureClusterShrinkRequest() = default;
};
class UpdateFigureClusterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateFigureClusterResponseBody() {}

  explicit UpdateFigureClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateFigureClusterResponseBody() = default;
};
class UpdateFigureClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateFigureClusterResponseBody> body{};

  UpdateFigureClusterResponse() {}

  explicit UpdateFigureClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFigureClusterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFigureClusterResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFigureClusterResponse() = default;
};
class UpdateFileMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<FileForReq> file{};
  shared_ptr<string> projectName{};

  UpdateFileMetaRequest() {}

  explicit UpdateFileMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (file) {
      res["File"] = file ? boost::any(file->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("File") != m.end() && !m["File"].empty()) {
      if (typeid(map<string, boost::any>) == m["File"].type()) {
        FileForReq model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["File"]));
        file = make_shared<FileForReq>(model1);
      }
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~UpdateFileMetaRequest() = default;
};
class UpdateFileMetaShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> fileShrink{};
  shared_ptr<string> projectName{};

  UpdateFileMetaShrinkRequest() {}

  explicit UpdateFileMetaShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (fileShrink) {
      res["File"] = boost::any(*fileShrink);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("File") != m.end() && !m["File"].empty()) {
      fileShrink = make_shared<string>(boost::any_cast<string>(m["File"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~UpdateFileMetaShrinkRequest() = default;
};
class UpdateFileMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateFileMetaResponseBody() {}

  explicit UpdateFileMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateFileMetaResponseBody() = default;
};
class UpdateFileMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateFileMetaResponseBody> body{};

  UpdateFileMetaResponse() {}

  explicit UpdateFileMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFileMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFileMetaResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFileMetaResponse() = default;
};
class UpdateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<long> datasetMaxBindCount{};
  shared_ptr<long> datasetMaxEntityCount{};
  shared_ptr<long> datasetMaxFileCount{};
  shared_ptr<long> datasetMaxRelationCount{};
  shared_ptr<long> datasetMaxTotalFileSize{};
  shared_ptr<string> description{};
  shared_ptr<long> engineConcurrency{};
  shared_ptr<long> projectMaxDatasetCount{};
  shared_ptr<string> projectName{};
  shared_ptr<long> projectQueriesPerSecond{};
  shared_ptr<string> serviceRole{};
  shared_ptr<string> templateId{};

  UpdateProjectRequest() {}

  explicit UpdateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetMaxBindCount) {
      res["DatasetMaxBindCount"] = boost::any(*datasetMaxBindCount);
    }
    if (datasetMaxEntityCount) {
      res["DatasetMaxEntityCount"] = boost::any(*datasetMaxEntityCount);
    }
    if (datasetMaxFileCount) {
      res["DatasetMaxFileCount"] = boost::any(*datasetMaxFileCount);
    }
    if (datasetMaxRelationCount) {
      res["DatasetMaxRelationCount"] = boost::any(*datasetMaxRelationCount);
    }
    if (datasetMaxTotalFileSize) {
      res["DatasetMaxTotalFileSize"] = boost::any(*datasetMaxTotalFileSize);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (engineConcurrency) {
      res["EngineConcurrency"] = boost::any(*engineConcurrency);
    }
    if (projectMaxDatasetCount) {
      res["ProjectMaxDatasetCount"] = boost::any(*projectMaxDatasetCount);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (projectQueriesPerSecond) {
      res["ProjectQueriesPerSecond"] = boost::any(*projectQueriesPerSecond);
    }
    if (serviceRole) {
      res["ServiceRole"] = boost::any(*serviceRole);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DatasetMaxBindCount") != m.end() && !m["DatasetMaxBindCount"].empty()) {
      datasetMaxBindCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxBindCount"]));
    }
    if (m.find("DatasetMaxEntityCount") != m.end() && !m["DatasetMaxEntityCount"].empty()) {
      datasetMaxEntityCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxEntityCount"]));
    }
    if (m.find("DatasetMaxFileCount") != m.end() && !m["DatasetMaxFileCount"].empty()) {
      datasetMaxFileCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxFileCount"]));
    }
    if (m.find("DatasetMaxRelationCount") != m.end() && !m["DatasetMaxRelationCount"].empty()) {
      datasetMaxRelationCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxRelationCount"]));
    }
    if (m.find("DatasetMaxTotalFileSize") != m.end() && !m["DatasetMaxTotalFileSize"].empty()) {
      datasetMaxTotalFileSize = make_shared<long>(boost::any_cast<long>(m["DatasetMaxTotalFileSize"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EngineConcurrency") != m.end() && !m["EngineConcurrency"].empty()) {
      engineConcurrency = make_shared<long>(boost::any_cast<long>(m["EngineConcurrency"]));
    }
    if (m.find("ProjectMaxDatasetCount") != m.end() && !m["ProjectMaxDatasetCount"].empty()) {
      projectMaxDatasetCount = make_shared<long>(boost::any_cast<long>(m["ProjectMaxDatasetCount"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("ProjectQueriesPerSecond") != m.end() && !m["ProjectQueriesPerSecond"].empty()) {
      projectQueriesPerSecond = make_shared<long>(boost::any_cast<long>(m["ProjectQueriesPerSecond"]));
    }
    if (m.find("ServiceRole") != m.end() && !m["ServiceRole"].empty()) {
      serviceRole = make_shared<string>(boost::any_cast<string>(m["ServiceRole"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~UpdateProjectRequest() = default;
};
class UpdateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<Project> project{};
  shared_ptr<string> requestId{};

  UpdateProjectResponseBody() {}

  explicit UpdateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = project ? boost::any(project->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      if (typeid(map<string, boost::any>) == m["Project"].type()) {
        Project model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Project"]));
        project = make_shared<Project>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateProjectResponseBody() = default;
};
class UpdateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateProjectResponseBody> body{};

  UpdateProjectResponse() {}

  explicit UpdateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProjectResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProjectResponse() = default;
};
class UpdateStoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> customId{};
  shared_ptr<map<string, boost::any>> customLabels{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> objectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> storyName{};

  UpdateStoryRequest() {}

  explicit UpdateStoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customId) {
      res["CustomId"] = boost::any(*customId);
    }
    if (customLabels) {
      res["CustomLabels"] = boost::any(*customLabels);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (storyName) {
      res["StoryName"] = boost::any(*storyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomId") != m.end() && !m["CustomId"].empty()) {
      customId = make_shared<string>(boost::any_cast<string>(m["CustomId"]));
    }
    if (m.find("CustomLabels") != m.end() && !m["CustomLabels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CustomLabels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customLabels = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("StoryName") != m.end() && !m["StoryName"].empty()) {
      storyName = make_shared<string>(boost::any_cast<string>(m["StoryName"]));
    }
  }


  virtual ~UpdateStoryRequest() = default;
};
class UpdateStoryShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> customId{};
  shared_ptr<string> customLabelsShrink{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> objectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> storyName{};

  UpdateStoryShrinkRequest() {}

  explicit UpdateStoryShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customId) {
      res["CustomId"] = boost::any(*customId);
    }
    if (customLabelsShrink) {
      res["CustomLabels"] = boost::any(*customLabelsShrink);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (storyName) {
      res["StoryName"] = boost::any(*storyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomId") != m.end() && !m["CustomId"].empty()) {
      customId = make_shared<string>(boost::any_cast<string>(m["CustomId"]));
    }
    if (m.find("CustomLabels") != m.end() && !m["CustomLabels"].empty()) {
      customLabelsShrink = make_shared<string>(boost::any_cast<string>(m["CustomLabels"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("StoryName") != m.end() && !m["StoryName"].empty()) {
      storyName = make_shared<string>(boost::any_cast<string>(m["StoryName"]));
    }
  }


  virtual ~UpdateStoryShrinkRequest() = default;
};
class UpdateStoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateStoryResponseBody() {}

  explicit UpdateStoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateStoryResponseBody() = default;
};
class UpdateStoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateStoryResponseBody> body{};

  UpdateStoryResponse() {}

  explicit UpdateStoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateStoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateStoryResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateStoryResponse() = default;
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
  BatchDeleteFileMetaResponse batchDeleteFileMetaWithOptions(shared_ptr<BatchDeleteFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchDeleteFileMetaResponse batchDeleteFileMeta(shared_ptr<BatchDeleteFileMetaRequest> request);
  BatchGetFileMetaResponse batchGetFileMetaWithOptions(shared_ptr<BatchGetFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchGetFileMetaResponse batchGetFileMeta(shared_ptr<BatchGetFileMetaRequest> request);
  BatchIndexFileMetaResponse batchIndexFileMetaWithOptions(shared_ptr<BatchIndexFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchIndexFileMetaResponse batchIndexFileMeta(shared_ptr<BatchIndexFileMetaRequest> request);
  BatchUpdateFileMetaResponse batchUpdateFileMetaWithOptions(shared_ptr<BatchUpdateFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchUpdateFileMetaResponse batchUpdateFileMeta(shared_ptr<BatchUpdateFileMetaRequest> request);
  CreateBindingResponse createBindingWithOptions(shared_ptr<CreateBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBindingResponse createBinding(shared_ptr<CreateBindingRequest> request);
  CreateDatasetResponse createDatasetWithOptions(shared_ptr<CreateDatasetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDatasetResponse createDataset(shared_ptr<CreateDatasetRequest> request);
  CreateDetectVideoLabelsTaskResponse createDetectVideoLabelsTaskWithOptions(shared_ptr<CreateDetectVideoLabelsTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDetectVideoLabelsTaskResponse createDetectVideoLabelsTask(shared_ptr<CreateDetectVideoLabelsTaskRequest> request);
  CreateFigureClusteringTaskResponse createFigureClusteringTaskWithOptions(shared_ptr<CreateFigureClusteringTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFigureClusteringTaskResponse createFigureClusteringTask(shared_ptr<CreateFigureClusteringTaskRequest> request);
  CreateFigureClustersMergingTaskResponse createFigureClustersMergingTaskWithOptions(shared_ptr<CreateFigureClustersMergingTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFigureClustersMergingTaskResponse createFigureClustersMergingTask(shared_ptr<CreateFigureClustersMergingTaskRequest> request);
  CreateProjectResponse createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProjectResponse createProject(shared_ptr<CreateProjectRequest> request);
  CreateStoryResponse createStoryWithOptions(shared_ptr<CreateStoryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateStoryResponse createStory(shared_ptr<CreateStoryRequest> request);
  DeleteBindingResponse deleteBindingWithOptions(shared_ptr<DeleteBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBindingResponse deleteBinding(shared_ptr<DeleteBindingRequest> request);
  DeleteDatasetResponse deleteDatasetWithOptions(shared_ptr<DeleteDatasetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDatasetResponse deleteDataset(shared_ptr<DeleteDatasetRequest> request);
  DeleteFileMetaResponse deleteFileMetaWithOptions(shared_ptr<DeleteFileMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFileMetaResponse deleteFileMeta(shared_ptr<DeleteFileMetaRequest> request);
  DeleteProjectResponse deleteProjectWithOptions(shared_ptr<DeleteProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProjectResponse deleteProject(shared_ptr<DeleteProjectRequest> request);
  DeleteStoryResponse deleteStoryWithOptions(shared_ptr<DeleteStoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteStoryResponse deleteStory(shared_ptr<DeleteStoryRequest> request);
  DetectImageFacesResponse detectImageFacesWithOptions(shared_ptr<DetectImageFacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectImageFacesResponse detectImageFaces(shared_ptr<DetectImageFacesRequest> request);
  DetectImageLabelsResponse detectImageLabelsWithOptions(shared_ptr<DetectImageLabelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectImageLabelsResponse detectImageLabels(shared_ptr<DetectImageLabelsRequest> request);
  DetectImageScoreResponse detectImageScoreWithOptions(shared_ptr<DetectImageScoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectImageScoreResponse detectImageScore(shared_ptr<DetectImageScoreRequest> request);
  FuzzyQueryResponse fuzzyQueryWithOptions(shared_ptr<FuzzyQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FuzzyQueryResponse fuzzyQuery(shared_ptr<FuzzyQueryRequest> request);
  GetBindingResponse getBindingWithOptions(shared_ptr<GetBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBindingResponse getBinding(shared_ptr<GetBindingRequest> request);
  GetDatasetResponse getDatasetWithOptions(shared_ptr<GetDatasetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDatasetResponse getDataset(shared_ptr<GetDatasetRequest> request);
  GetDetectVideoLabelsResultResponse getDetectVideoLabelsResultWithOptions(shared_ptr<GetDetectVideoLabelsResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDetectVideoLabelsResultResponse getDetectVideoLabelsResult(shared_ptr<GetDetectVideoLabelsResultRequest> request);
  GetFigureClusterResponse getFigureClusterWithOptions(shared_ptr<GetFigureClusterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFigureClusterResponse getFigureCluster(shared_ptr<GetFigureClusterRequest> request);
  GetFileMetaResponse getFileMetaWithOptions(shared_ptr<GetFileMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFileMetaResponse getFileMeta(shared_ptr<GetFileMetaRequest> request);
  GetProjectResponse getProjectWithOptions(shared_ptr<GetProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectResponse getProject(shared_ptr<GetProjectRequest> request);
  GetStoryResponse getStoryWithOptions(shared_ptr<GetStoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStoryResponse getStory(shared_ptr<GetStoryRequest> request);
  GetTaskResponse getTaskWithOptions(shared_ptr<GetTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskResponse getTask(shared_ptr<GetTaskRequest> request);
  GetWebofficeURLResponse getWebofficeURLWithOptions(shared_ptr<GetWebofficeURLRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWebofficeURLResponse getWebofficeURL(shared_ptr<GetWebofficeURLRequest> request);
  IndexFileMetaResponse indexFileMetaWithOptions(shared_ptr<IndexFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IndexFileMetaResponse indexFileMeta(shared_ptr<IndexFileMetaRequest> request);
  ListBindingsResponse listBindingsWithOptions(shared_ptr<ListBindingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBindingsResponse listBindings(shared_ptr<ListBindingsRequest> request);
  ListDatasetsResponse listDatasetsWithOptions(shared_ptr<ListDatasetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDatasetsResponse listDatasets(shared_ptr<ListDatasetsRequest> request);
  ListProjectsResponse listProjectsWithOptions(shared_ptr<ListProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectsResponse listProjects(shared_ptr<ListProjectsRequest> request);
  ListTasksResponse listTasksWithOptions(shared_ptr<ListTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTasksResponse listTasks(shared_ptr<ListTasksRequest> request);
  MergeFigureClustersResponse mergeFigureClustersWithOptions(shared_ptr<MergeFigureClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MergeFigureClustersResponse mergeFigureClusters(shared_ptr<MergeFigureClustersRequest> request);
  QueryFigureClustersResponse queryFigureClustersWithOptions(shared_ptr<QueryFigureClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFigureClustersResponse queryFigureClusters(shared_ptr<QueryFigureClustersRequest> request);
  QueryStoriesResponse queryStoriesWithOptions(shared_ptr<QueryStoriesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryStoriesResponse queryStories(shared_ptr<QueryStoriesRequest> request);
  RefreshWebofficeTokenResponse refreshWebofficeTokenWithOptions(shared_ptr<RefreshWebofficeTokenRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshWebofficeTokenResponse refreshWebofficeToken(shared_ptr<RefreshWebofficeTokenRequest> request);
  ResumeBindingResponse resumeBindingWithOptions(shared_ptr<ResumeBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResumeBindingResponse resumeBinding(shared_ptr<ResumeBindingRequest> request);
  SemanticQueryResponse semanticQueryWithOptions(shared_ptr<SemanticQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SemanticQueryResponse semanticQuery(shared_ptr<SemanticQueryRequest> request);
  SimpleQueryResponse simpleQueryWithOptions(shared_ptr<SimpleQueryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SimpleQueryResponse simpleQuery(shared_ptr<SimpleQueryRequest> request);
  StopBindingResponse stopBindingWithOptions(shared_ptr<StopBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopBindingResponse stopBinding(shared_ptr<StopBindingRequest> request);
  UpdateDatasetResponse updateDatasetWithOptions(shared_ptr<UpdateDatasetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDatasetResponse updateDataset(shared_ptr<UpdateDatasetRequest> request);
  UpdateFigureClusterResponse updateFigureClusterWithOptions(shared_ptr<UpdateFigureClusterRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFigureClusterResponse updateFigureCluster(shared_ptr<UpdateFigureClusterRequest> request);
  UpdateFileMetaResponse updateFileMetaWithOptions(shared_ptr<UpdateFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFileMetaResponse updateFileMeta(shared_ptr<UpdateFileMetaRequest> request);
  UpdateProjectResponse updateProjectWithOptions(shared_ptr<UpdateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProjectResponse updateProject(shared_ptr<UpdateProjectRequest> request);
  UpdateStoryResponse updateStoryWithOptions(shared_ptr<UpdateStoryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateStoryResponse updateStory(shared_ptr<UpdateStoryRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Imm20200930

#endif
