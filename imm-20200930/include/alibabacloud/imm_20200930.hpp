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
  shared_ptr<long> frameCount{};
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
    if (frameCount) {
      res["FrameCount"] = boost::any(*frameCount);
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
    if (m.find("FrameCount") != m.end() && !m["FrameCount"].empty()) {
      frameCount = make_shared<long>(boost::any_cast<long>(m["FrameCount"]));
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
class Body : public Darabonba::Model {
public:
  shared_ptr<Boundary> boundary{};
  shared_ptr<double> confidence{};

  Body() {}

  explicit Body(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~Body() = default;
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
class Codes : public Darabonba::Model {
public:
  shared_ptr<Boundary> boundary{};
  shared_ptr<double> confidence{};
  shared_ptr<string> content{};
  shared_ptr<string> type{};

  Codes() {}

  explicit Codes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (type) {
      res["Type"] = boost::any(*type);
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~Codes() = default;
};
class CredentialConfigChain : public Darabonba::Model {
public:
  shared_ptr<string> assumeRoleFor{};
  shared_ptr<string> role{};
  shared_ptr<string> roleType{};

  CredentialConfigChain() {}

  explicit CredentialConfigChain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assumeRoleFor) {
      res["AssumeRoleFor"] = boost::any(*assumeRoleFor);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AssumeRoleFor") != m.end() && !m["AssumeRoleFor"].empty()) {
      assumeRoleFor = make_shared<string>(boost::any_cast<string>(m["AssumeRoleFor"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
  }


  virtual ~CredentialConfigChain() = default;
};
class CredentialConfig : public Darabonba::Model {
public:
  shared_ptr<vector<CredentialConfigChain>> chain{};
  shared_ptr<string> policy{};
  shared_ptr<string> serviceRole{};

  CredentialConfig() {}

  explicit CredentialConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (serviceRole) {
      res["ServiceRole"] = boost::any(*serviceRole);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Chain") != m.end() && !m["Chain"].empty()) {
      if (typeid(vector<boost::any>) == m["Chain"].type()) {
        vector<CredentialConfigChain> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Chain"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CredentialConfigChain model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        chain = make_shared<vector<CredentialConfigChain>>(expect1);
      }
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("ServiceRole") != m.end() && !m["ServiceRole"].empty()) {
      serviceRole = make_shared<string>(boost::any_cast<string>(m["ServiceRole"]));
    }
  }


  virtual ~CredentialConfig() = default;
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
  shared_ptr<long> bitrate{};
  shared_ptr<string> codecLongName{};
  shared_ptr<string> codecName{};
  shared_ptr<string> codecTag{};
  shared_ptr<string> codecTagString{};
  shared_ptr<string> content{};
  shared_ptr<double> duration{};
  shared_ptr<long> height{};
  shared_ptr<long> index{};
  shared_ptr<string> language{};
  shared_ptr<double> startTime{};
  shared_ptr<long> width{};

  SubtitleStream() {}

  explicit SubtitleStream(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
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
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
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
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<double>(boost::any_cast<double>(m["StartTime"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~SubtitleStream() = default;
};
class VideoStream : public Darabonba::Model {
public:
  shared_ptr<string> averageFrameRate{};
  shared_ptr<long> bitDepth{};
  shared_ptr<long> bitrate{};
  shared_ptr<string> codecLongName{};
  shared_ptr<string> codecName{};
  shared_ptr<string> codecTag{};
  shared_ptr<string> codecTagString{};
  shared_ptr<string> codecTimeBase{};
  shared_ptr<string> colorPrimaries{};
  shared_ptr<string> colorRange{};
  shared_ptr<string> colorSpace{};
  shared_ptr<string> colorTransfer{};
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
    if (bitDepth) {
      res["BitDepth"] = boost::any(*bitDepth);
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
    if (colorPrimaries) {
      res["ColorPrimaries"] = boost::any(*colorPrimaries);
    }
    if (colorRange) {
      res["ColorRange"] = boost::any(*colorRange);
    }
    if (colorSpace) {
      res["ColorSpace"] = boost::any(*colorSpace);
    }
    if (colorTransfer) {
      res["ColorTransfer"] = boost::any(*colorTransfer);
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
    if (m.find("BitDepth") != m.end() && !m["BitDepth"].empty()) {
      bitDepth = make_shared<long>(boost::any_cast<long>(m["BitDepth"]));
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
    if (m.find("ColorPrimaries") != m.end() && !m["ColorPrimaries"].empty()) {
      colorPrimaries = make_shared<string>(boost::any_cast<string>(m["ColorPrimaries"]));
    }
    if (m.find("ColorRange") != m.end() && !m["ColorRange"].empty()) {
      colorRange = make_shared<string>(boost::any_cast<string>(m["ColorRange"]));
    }
    if (m.find("ColorSpace") != m.end() && !m["ColorSpace"].empty()) {
      colorSpace = make_shared<string>(boost::any_cast<string>(m["ColorSpace"]));
    }
    if (m.find("ColorTransfer") != m.end() && !m["ColorTransfer"].empty()) {
      colorTransfer = make_shared<string>(boost::any_cast<string>(m["ColorTransfer"]));
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
  shared_ptr<long> bitrate{};
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
  shared_ptr<double> duration{};
  shared_ptr<string> ETag{};
  shared_ptr<string> EXIF{};
  shared_ptr<long> figureCount{};
  shared_ptr<vector<Figure>> figures{};
  shared_ptr<string> fileAccessTime{};
  shared_ptr<string> fileCreateTime{};
  shared_ptr<string> fileHash{};
  shared_ptr<string> fileModifiedTime{};
  shared_ptr<string> filename{};
  shared_ptr<string> formatLongName{};
  shared_ptr<string> formatName{};
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
  shared_ptr<long> programCount{};
  shared_ptr<string> projectName{};
  shared_ptr<string> serverSideDataEncryption{};
  shared_ptr<string> serverSideEncryption{};
  shared_ptr<string> serverSideEncryptionCustomerAlgorithm{};
  shared_ptr<string> serverSideEncryptionKeyId{};
  shared_ptr<long> size{};
  shared_ptr<double> startTime{};
  shared_ptr<long> streamCount{};
  shared_ptr<vector<SubtitleStream>> subtitles{};
  shared_ptr<string> timezone{};
  shared_ptr<string> title{};
  shared_ptr<string> travelClusterId{};
  shared_ptr<string> URI{};
  shared_ptr<string> updateTime{};
  shared_ptr<long> videoHeight{};
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
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
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
    if (duration) {
      res["Duration"] = boost::any(*duration);
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
    if (formatLongName) {
      res["FormatLongName"] = boost::any(*formatLongName);
    }
    if (formatName) {
      res["FormatName"] = boost::any(*formatName);
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
    if (programCount) {
      res["ProgramCount"] = boost::any(*programCount);
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
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (streamCount) {
      res["StreamCount"] = boost::any(*streamCount);
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
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
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
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
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
    if (m.find("FormatLongName") != m.end() && !m["FormatLongName"].empty()) {
      formatLongName = make_shared<string>(boost::any_cast<string>(m["FormatLongName"]));
    }
    if (m.find("FormatName") != m.end() && !m["FormatName"].empty()) {
      formatName = make_shared<string>(boost::any_cast<string>(m["FormatName"]));
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
    if (m.find("ProgramCount") != m.end() && !m["ProgramCount"].empty()) {
      programCount = make_shared<long>(boost::any_cast<long>(m["ProgramCount"]));
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
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<double>(boost::any_cast<double>(m["StartTime"]));
    }
    if (m.find("StreamCount") != m.end() && !m["StreamCount"].empty()) {
      streamCount = make_shared<long>(boost::any_cast<long>(m["StreamCount"]));
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
  shared_ptr<long> metaLockVersion{};
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
    if (metaLockVersion) {
      res["MetaLockVersion"] = boost::any(*metaLockVersion);
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
    if (m.find("MetaLockVersion") != m.end() && !m["MetaLockVersion"].empty()) {
      metaLockVersion = make_shared<long>(boost::any_cast<long>(m["MetaLockVersion"]));
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
  shared_ptr<long> metaLockVersion{};
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
    if (metaLockVersion) {
      res["MetaLockVersion"] = boost::any(*metaLockVersion);
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
    if (m.find("MetaLockVersion") != m.end() && !m["MetaLockVersion"].empty()) {
      metaLockVersion = make_shared<long>(boost::any_cast<long>(m["MetaLockVersion"]));
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
class KdtreeOption : public Darabonba::Model {
public:
  shared_ptr<long> compressionLevel{};
  shared_ptr<string> libraryName{};
  shared_ptr<long> quantizationBits{};

  KdtreeOption() {}

  explicit KdtreeOption(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compressionLevel) {
      res["CompressionLevel"] = boost::any(*compressionLevel);
    }
    if (libraryName) {
      res["LibraryName"] = boost::any(*libraryName);
    }
    if (quantizationBits) {
      res["QuantizationBits"] = boost::any(*quantizationBits);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompressionLevel") != m.end() && !m["CompressionLevel"].empty()) {
      compressionLevel = make_shared<long>(boost::any_cast<long>(m["CompressionLevel"]));
    }
    if (m.find("LibraryName") != m.end() && !m["LibraryName"].empty()) {
      libraryName = make_shared<string>(boost::any_cast<string>(m["LibraryName"]));
    }
    if (m.find("QuantizationBits") != m.end() && !m["QuantizationBits"].empty()) {
      quantizationBits = make_shared<long>(boost::any_cast<long>(m["QuantizationBits"]));
    }
  }


  virtual ~KdtreeOption() = default;
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
class OctreeOption : public Darabonba::Model {
public:
  shared_ptr<bool> doVoxelGridDownDownSampling{};
  shared_ptr<string> libraryName{};
  shared_ptr<double> octreeResolution{};
  shared_ptr<double> pointResolution{};

  OctreeOption() {}

  explicit OctreeOption(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (doVoxelGridDownDownSampling) {
      res["DoVoxelGridDownDownSampling"] = boost::any(*doVoxelGridDownDownSampling);
    }
    if (libraryName) {
      res["LibraryName"] = boost::any(*libraryName);
    }
    if (octreeResolution) {
      res["OctreeResolution"] = boost::any(*octreeResolution);
    }
    if (pointResolution) {
      res["PointResolution"] = boost::any(*pointResolution);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DoVoxelGridDownDownSampling") != m.end() && !m["DoVoxelGridDownDownSampling"].empty()) {
      doVoxelGridDownDownSampling = make_shared<bool>(boost::any_cast<bool>(m["DoVoxelGridDownDownSampling"]));
    }
    if (m.find("LibraryName") != m.end() && !m["LibraryName"].empty()) {
      libraryName = make_shared<string>(boost::any_cast<string>(m["LibraryName"]));
    }
    if (m.find("OctreeResolution") != m.end() && !m["OctreeResolution"].empty()) {
      octreeResolution = make_shared<double>(boost::any_cast<double>(m["OctreeResolution"]));
    }
    if (m.find("PointResolution") != m.end() && !m["PointResolution"].empty()) {
      pointResolution = make_shared<double>(boost::any_cast<double>(m["PointResolution"]));
    }
  }


  virtual ~OctreeOption() = default;
};
class PresetReference : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> type{};

  PresetReference() {}

  explicit PresetReference(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PresetReference() = default;
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
class RegionType : public Darabonba::Model {
public:
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  RegionType() {}

  explicit RegionType(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~RegionType() = default;
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
  shared_ptr<map<string, boost::any>> tags{};
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
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
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
class TrimPolicy : public Darabonba::Model {
public:
  shared_ptr<bool> disableDeleteEmptyCell{};
  shared_ptr<bool> disableDeleteRepeatedStyle{};
  shared_ptr<bool> disableDeleteUnusedPicture{};
  shared_ptr<bool> disableDeleteUnusedShape{};

  TrimPolicy() {}

  explicit TrimPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disableDeleteEmptyCell) {
      res["DisableDeleteEmptyCell"] = boost::any(*disableDeleteEmptyCell);
    }
    if (disableDeleteRepeatedStyle) {
      res["DisableDeleteRepeatedStyle"] = boost::any(*disableDeleteRepeatedStyle);
    }
    if (disableDeleteUnusedPicture) {
      res["DisableDeleteUnusedPicture"] = boost::any(*disableDeleteUnusedPicture);
    }
    if (disableDeleteUnusedShape) {
      res["DisableDeleteUnusedShape"] = boost::any(*disableDeleteUnusedShape);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisableDeleteEmptyCell") != m.end() && !m["DisableDeleteEmptyCell"].empty()) {
      disableDeleteEmptyCell = make_shared<bool>(boost::any_cast<bool>(m["DisableDeleteEmptyCell"]));
    }
    if (m.find("DisableDeleteRepeatedStyle") != m.end() && !m["DisableDeleteRepeatedStyle"].empty()) {
      disableDeleteRepeatedStyle = make_shared<bool>(boost::any_cast<bool>(m["DisableDeleteRepeatedStyle"]));
    }
    if (m.find("DisableDeleteUnusedPicture") != m.end() && !m["DisableDeleteUnusedPicture"].empty()) {
      disableDeleteUnusedPicture = make_shared<bool>(boost::any_cast<bool>(m["DisableDeleteUnusedPicture"]));
    }
    if (m.find("DisableDeleteUnusedShape") != m.end() && !m["DisableDeleteUnusedShape"].empty()) {
      disableDeleteUnusedShape = make_shared<bool>(boost::any_cast<bool>(m["DisableDeleteUnusedShape"]));
    }
  }


  virtual ~TrimPolicy() = default;
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
class AddImageMosaicRequestTargetsBoundary : public Darabonba::Model {
public:
  shared_ptr<double> height{};
  shared_ptr<string> referPos{};
  shared_ptr<double> width{};
  shared_ptr<double> x{};
  shared_ptr<double> y{};

  AddImageMosaicRequestTargetsBoundary() {}

  explicit AddImageMosaicRequestTargetsBoundary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (referPos) {
      res["ReferPos"] = boost::any(*referPos);
    }
    if (width) {
      res["Width"] = boost::any(*width);
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
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("ReferPos") != m.end() && !m["ReferPos"].empty()) {
      referPos = make_shared<string>(boost::any_cast<string>(m["ReferPos"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
  }


  virtual ~AddImageMosaicRequestTargetsBoundary() = default;
};
class AddImageMosaicRequestTargets : public Darabonba::Model {
public:
  shared_ptr<long> blurRadius{};
  shared_ptr<AddImageMosaicRequestTargetsBoundary> boundary{};
  shared_ptr<string> color{};
  shared_ptr<long> mosaicRadius{};
  shared_ptr<long> sigma{};
  shared_ptr<string> type{};

  AddImageMosaicRequestTargets() {}

  explicit AddImageMosaicRequestTargets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blurRadius) {
      res["BlurRadius"] = boost::any(*blurRadius);
    }
    if (boundary) {
      res["Boundary"] = boundary ? boost::any(boundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (color) {
      res["Color"] = boost::any(*color);
    }
    if (mosaicRadius) {
      res["MosaicRadius"] = boost::any(*mosaicRadius);
    }
    if (sigma) {
      res["Sigma"] = boost::any(*sigma);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlurRadius") != m.end() && !m["BlurRadius"].empty()) {
      blurRadius = make_shared<long>(boost::any_cast<long>(m["BlurRadius"]));
    }
    if (m.find("Boundary") != m.end() && !m["Boundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["Boundary"].type()) {
        AddImageMosaicRequestTargetsBoundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Boundary"]));
        boundary = make_shared<AddImageMosaicRequestTargetsBoundary>(model1);
      }
    }
    if (m.find("Color") != m.end() && !m["Color"].empty()) {
      color = make_shared<string>(boost::any_cast<string>(m["Color"]));
    }
    if (m.find("MosaicRadius") != m.end() && !m["MosaicRadius"].empty()) {
      mosaicRadius = make_shared<long>(boost::any_cast<long>(m["MosaicRadius"]));
    }
    if (m.find("Sigma") != m.end() && !m["Sigma"].empty()) {
      sigma = make_shared<long>(boost::any_cast<long>(m["Sigma"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~AddImageMosaicRequestTargets() = default;
};
class AddImageMosaicRequest : public Darabonba::Model {
public:
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<string> imageFormat{};
  shared_ptr<string> projectName{};
  shared_ptr<long> quality{};
  shared_ptr<string> sourceURI{};
  shared_ptr<string> targetURI{};
  shared_ptr<vector<AddImageMosaicRequestTargets>> targets{};

  AddImageMosaicRequest() {}

  explicit AddImageMosaicRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imageFormat) {
      res["ImageFormat"] = boost::any(*imageFormat);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (quality) {
      res["Quality"] = boost::any(*quality);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    if (targetURI) {
      res["TargetURI"] = boost::any(*targetURI);
    }
    if (targets) {
      vector<boost::any> temp1;
      for(auto item1:*targets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Targets"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("ImageFormat") != m.end() && !m["ImageFormat"].empty()) {
      imageFormat = make_shared<string>(boost::any_cast<string>(m["ImageFormat"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Quality") != m.end() && !m["Quality"].empty()) {
      quality = make_shared<long>(boost::any_cast<long>(m["Quality"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
    if (m.find("TargetURI") != m.end() && !m["TargetURI"].empty()) {
      targetURI = make_shared<string>(boost::any_cast<string>(m["TargetURI"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<AddImageMosaicRequestTargets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Targets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddImageMosaicRequestTargets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targets = make_shared<vector<AddImageMosaicRequestTargets>>(expect1);
      }
    }
  }


  virtual ~AddImageMosaicRequest() = default;
};
class AddImageMosaicShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> credentialConfigShrink{};
  shared_ptr<string> imageFormat{};
  shared_ptr<string> projectName{};
  shared_ptr<long> quality{};
  shared_ptr<string> sourceURI{};
  shared_ptr<string> targetURI{};
  shared_ptr<string> targetsShrink{};

  AddImageMosaicShrinkRequest() {}

  explicit AddImageMosaicShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfigShrink) {
      res["CredentialConfig"] = boost::any(*credentialConfigShrink);
    }
    if (imageFormat) {
      res["ImageFormat"] = boost::any(*imageFormat);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (quality) {
      res["Quality"] = boost::any(*quality);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    if (targetURI) {
      res["TargetURI"] = boost::any(*targetURI);
    }
    if (targetsShrink) {
      res["Targets"] = boost::any(*targetsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      credentialConfigShrink = make_shared<string>(boost::any_cast<string>(m["CredentialConfig"]));
    }
    if (m.find("ImageFormat") != m.end() && !m["ImageFormat"].empty()) {
      imageFormat = make_shared<string>(boost::any_cast<string>(m["ImageFormat"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Quality") != m.end() && !m["Quality"].empty()) {
      quality = make_shared<long>(boost::any_cast<long>(m["Quality"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
    if (m.find("TargetURI") != m.end() && !m["TargetURI"].empty()) {
      targetURI = make_shared<string>(boost::any_cast<string>(m["TargetURI"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      targetsShrink = make_shared<string>(boost::any_cast<string>(m["Targets"]));
    }
  }


  virtual ~AddImageMosaicShrinkRequest() = default;
};
class AddImageMosaicResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddImageMosaicResponseBody() {}

  explicit AddImageMosaicResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddImageMosaicResponseBody() = default;
};
class AddImageMosaicResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddImageMosaicResponseBody> body{};

  AddImageMosaicResponse() {}

  explicit AddImageMosaicResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddImageMosaicResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddImageMosaicResponseBody>(model1);
      }
    }
  }


  virtual ~AddImageMosaicResponse() = default;
};
class AddStoryFilesRequestFiles : public Darabonba::Model {
public:
  shared_ptr<string> URI{};

  AddStoryFilesRequestFiles() {}

  explicit AddStoryFilesRequestFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~AddStoryFilesRequestFiles() = default;
};
class AddStoryFilesRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<vector<AddStoryFilesRequestFiles>> files{};
  shared_ptr<string> objectId{};
  shared_ptr<string> projectName{};

  AddStoryFilesRequest() {}

  explicit AddStoryFilesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      if (typeid(vector<boost::any>) == m["Files"].type()) {
        vector<AddStoryFilesRequestFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Files"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddStoryFilesRequestFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        files = make_shared<vector<AddStoryFilesRequestFiles>>(expect1);
      }
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~AddStoryFilesRequest() = default;
};
class AddStoryFilesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> filesShrink{};
  shared_ptr<string> objectId{};
  shared_ptr<string> projectName{};

  AddStoryFilesShrinkRequest() {}

  explicit AddStoryFilesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      filesShrink = make_shared<string>(boost::any_cast<string>(m["Files"]));
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~AddStoryFilesShrinkRequest() = default;
};
class AddStoryFilesResponseBodyFiles : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> URI{};

  AddStoryFilesResponseBodyFiles() {}

  explicit AddStoryFilesResponseBodyFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (URI) {
      res["URI"] = boost::any(*URI);
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
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~AddStoryFilesResponseBodyFiles() = default;
};
class AddStoryFilesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<AddStoryFilesResponseBodyFiles>> files{};
  shared_ptr<string> requestId{};

  AddStoryFilesResponseBody() {}

  explicit AddStoryFilesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<AddStoryFilesResponseBodyFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Files"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AddStoryFilesResponseBodyFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        files = make_shared<vector<AddStoryFilesResponseBodyFiles>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddStoryFilesResponseBody() = default;
};
class AddStoryFilesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddStoryFilesResponseBody> body{};

  AddStoryFilesResponse() {}

  explicit AddStoryFilesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddStoryFilesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddStoryFilesResponseBody>(model1);
      }
    }
  }


  virtual ~AddStoryFilesResponse() = default;
};
class AttachOSSBucketRequest : public Darabonba::Model {
public:
  shared_ptr<string> OSSBucket{};
  shared_ptr<string> projectName{};

  AttachOSSBucketRequest() {}

  explicit AttachOSSBucketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (OSSBucket) {
      res["OSSBucket"] = boost::any(*OSSBucket);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OSSBucket") != m.end() && !m["OSSBucket"].empty()) {
      OSSBucket = make_shared<string>(boost::any_cast<string>(m["OSSBucket"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~AttachOSSBucketRequest() = default;
};
class AttachOSSBucketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AttachOSSBucketResponseBody() {}

  explicit AttachOSSBucketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AttachOSSBucketResponseBody() = default;
};
class AttachOSSBucketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AttachOSSBucketResponseBody> body{};

  AttachOSSBucketResponse() {}

  explicit AttachOSSBucketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AttachOSSBucketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AttachOSSBucketResponseBody>(model1);
      }
    }
  }


  virtual ~AttachOSSBucketResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<BatchDeleteFileMetaResponseBody> body{};

  BatchDeleteFileMetaResponse() {}

  explicit BatchDeleteFileMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<BatchGetFileMetaResponseBody> body{};

  BatchGetFileMetaResponse() {}

  explicit BatchGetFileMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<BatchIndexFileMetaResponseBody> body{};

  BatchIndexFileMetaResponse() {}

  explicit BatchIndexFileMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<BatchUpdateFileMetaResponseBody> body{};

  BatchUpdateFileMetaResponse() {}

  explicit BatchUpdateFileMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<CreateBindingResponseBody> body{};

  CreateBindingResponse() {}

  explicit CreateBindingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateBindingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBindingResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBindingResponse() = default;
};
class CreateCompressPointCloudTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> compressMethod{};
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<KdtreeOption> kdtreeOption{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<OctreeOption> octreeOption{};
  shared_ptr<vector<string>> pointCloudFields{};
  shared_ptr<string> pointCloudFileFormat{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sourceURI{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> targetURI{};
  shared_ptr<string> userData{};

  CreateCompressPointCloudTaskRequest() {}

  explicit CreateCompressPointCloudTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compressMethod) {
      res["CompressMethod"] = boost::any(*compressMethod);
    }
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (kdtreeOption) {
      res["KdtreeOption"] = kdtreeOption ? boost::any(kdtreeOption->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (octreeOption) {
      res["OctreeOption"] = octreeOption ? boost::any(octreeOption->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pointCloudFields) {
      res["PointCloudFields"] = boost::any(*pointCloudFields);
    }
    if (pointCloudFileFormat) {
      res["PointCloudFileFormat"] = boost::any(*pointCloudFileFormat);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (targetURI) {
      res["TargetURI"] = boost::any(*targetURI);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompressMethod") != m.end() && !m["CompressMethod"].empty()) {
      compressMethod = make_shared<string>(boost::any_cast<string>(m["CompressMethod"]));
    }
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("KdtreeOption") != m.end() && !m["KdtreeOption"].empty()) {
      if (typeid(map<string, boost::any>) == m["KdtreeOption"].type()) {
        KdtreeOption model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["KdtreeOption"]));
        kdtreeOption = make_shared<KdtreeOption>(model1);
      }
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("OctreeOption") != m.end() && !m["OctreeOption"].empty()) {
      if (typeid(map<string, boost::any>) == m["OctreeOption"].type()) {
        OctreeOption model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OctreeOption"]));
        octreeOption = make_shared<OctreeOption>(model1);
      }
    }
    if (m.find("PointCloudFields") != m.end() && !m["PointCloudFields"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PointCloudFields"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PointCloudFields"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      pointCloudFields = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PointCloudFileFormat") != m.end() && !m["PointCloudFileFormat"].empty()) {
      pointCloudFileFormat = make_shared<string>(boost::any_cast<string>(m["PointCloudFileFormat"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TargetURI") != m.end() && !m["TargetURI"].empty()) {
      targetURI = make_shared<string>(boost::any_cast<string>(m["TargetURI"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateCompressPointCloudTaskRequest() = default;
};
class CreateCompressPointCloudTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> compressMethod{};
  shared_ptr<string> credentialConfigShrink{};
  shared_ptr<string> kdtreeOptionShrink{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> octreeOptionShrink{};
  shared_ptr<string> pointCloudFieldsShrink{};
  shared_ptr<string> pointCloudFileFormat{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sourceURI{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> targetURI{};
  shared_ptr<string> userData{};

  CreateCompressPointCloudTaskShrinkRequest() {}

  explicit CreateCompressPointCloudTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compressMethod) {
      res["CompressMethod"] = boost::any(*compressMethod);
    }
    if (credentialConfigShrink) {
      res["CredentialConfig"] = boost::any(*credentialConfigShrink);
    }
    if (kdtreeOptionShrink) {
      res["KdtreeOption"] = boost::any(*kdtreeOptionShrink);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (octreeOptionShrink) {
      res["OctreeOption"] = boost::any(*octreeOptionShrink);
    }
    if (pointCloudFieldsShrink) {
      res["PointCloudFields"] = boost::any(*pointCloudFieldsShrink);
    }
    if (pointCloudFileFormat) {
      res["PointCloudFileFormat"] = boost::any(*pointCloudFileFormat);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (targetURI) {
      res["TargetURI"] = boost::any(*targetURI);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompressMethod") != m.end() && !m["CompressMethod"].empty()) {
      compressMethod = make_shared<string>(boost::any_cast<string>(m["CompressMethod"]));
    }
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      credentialConfigShrink = make_shared<string>(boost::any_cast<string>(m["CredentialConfig"]));
    }
    if (m.find("KdtreeOption") != m.end() && !m["KdtreeOption"].empty()) {
      kdtreeOptionShrink = make_shared<string>(boost::any_cast<string>(m["KdtreeOption"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("OctreeOption") != m.end() && !m["OctreeOption"].empty()) {
      octreeOptionShrink = make_shared<string>(boost::any_cast<string>(m["OctreeOption"]));
    }
    if (m.find("PointCloudFields") != m.end() && !m["PointCloudFields"].empty()) {
      pointCloudFieldsShrink = make_shared<string>(boost::any_cast<string>(m["PointCloudFields"]));
    }
    if (m.find("PointCloudFileFormat") != m.end() && !m["PointCloudFileFormat"].empty()) {
      pointCloudFileFormat = make_shared<string>(boost::any_cast<string>(m["PointCloudFileFormat"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("TargetURI") != m.end() && !m["TargetURI"].empty()) {
      targetURI = make_shared<string>(boost::any_cast<string>(m["TargetURI"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateCompressPointCloudTaskShrinkRequest() = default;
};
class CreateCompressPointCloudTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> eventId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateCompressPointCloudTaskResponseBody() {}

  explicit CreateCompressPointCloudTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateCompressPointCloudTaskResponseBody() = default;
};
class CreateCompressPointCloudTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCompressPointCloudTaskResponseBody> body{};

  CreateCompressPointCloudTaskResponse() {}

  explicit CreateCompressPointCloudTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCompressPointCloudTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCompressPointCloudTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCompressPointCloudTaskResponse() = default;
};
class CreateCustomizedStoryRequestCover : public Darabonba::Model {
public:
  shared_ptr<string> URI{};

  CreateCustomizedStoryRequestCover() {}

  explicit CreateCustomizedStoryRequestCover(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~CreateCustomizedStoryRequestCover() = default;
};
class CreateCustomizedStoryRequestFiles : public Darabonba::Model {
public:
  shared_ptr<string> URI{};

  CreateCustomizedStoryRequestFiles() {}

  explicit CreateCustomizedStoryRequestFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~CreateCustomizedStoryRequestFiles() = default;
};
class CreateCustomizedStoryRequest : public Darabonba::Model {
public:
  shared_ptr<CreateCustomizedStoryRequestCover> cover{};
  shared_ptr<map<string, boost::any>> customLabels{};
  shared_ptr<string> datasetName{};
  shared_ptr<vector<CreateCustomizedStoryRequestFiles>> files{};
  shared_ptr<string> projectName{};
  shared_ptr<string> storyName{};
  shared_ptr<string> storySubType{};
  shared_ptr<string> storyType{};

  CreateCustomizedStoryRequest() {}

  explicit CreateCustomizedStoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cover) {
      res["Cover"] = cover ? boost::any(cover->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (customLabels) {
      res["CustomLabels"] = boost::any(*customLabels);
    }
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
    if (storyName) {
      res["StoryName"] = boost::any(*storyName);
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
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cover"].type()) {
        CreateCustomizedStoryRequestCover model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cover"]));
        cover = make_shared<CreateCustomizedStoryRequestCover>(model1);
      }
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
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      if (typeid(vector<boost::any>) == m["Files"].type()) {
        vector<CreateCustomizedStoryRequestFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Files"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateCustomizedStoryRequestFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        files = make_shared<vector<CreateCustomizedStoryRequestFiles>>(expect1);
      }
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("StoryName") != m.end() && !m["StoryName"].empty()) {
      storyName = make_shared<string>(boost::any_cast<string>(m["StoryName"]));
    }
    if (m.find("StorySubType") != m.end() && !m["StorySubType"].empty()) {
      storySubType = make_shared<string>(boost::any_cast<string>(m["StorySubType"]));
    }
    if (m.find("StoryType") != m.end() && !m["StoryType"].empty()) {
      storyType = make_shared<string>(boost::any_cast<string>(m["StoryType"]));
    }
  }


  virtual ~CreateCustomizedStoryRequest() = default;
};
class CreateCustomizedStoryShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> coverShrink{};
  shared_ptr<string> customLabelsShrink{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> filesShrink{};
  shared_ptr<string> projectName{};
  shared_ptr<string> storyName{};
  shared_ptr<string> storySubType{};
  shared_ptr<string> storyType{};

  CreateCustomizedStoryShrinkRequest() {}

  explicit CreateCustomizedStoryShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coverShrink) {
      res["Cover"] = boost::any(*coverShrink);
    }
    if (customLabelsShrink) {
      res["CustomLabels"] = boost::any(*customLabelsShrink);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (filesShrink) {
      res["Files"] = boost::any(*filesShrink);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (storyName) {
      res["StoryName"] = boost::any(*storyName);
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
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      coverShrink = make_shared<string>(boost::any_cast<string>(m["Cover"]));
    }
    if (m.find("CustomLabels") != m.end() && !m["CustomLabels"].empty()) {
      customLabelsShrink = make_shared<string>(boost::any_cast<string>(m["CustomLabels"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      filesShrink = make_shared<string>(boost::any_cast<string>(m["Files"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("StoryName") != m.end() && !m["StoryName"].empty()) {
      storyName = make_shared<string>(boost::any_cast<string>(m["StoryName"]));
    }
    if (m.find("StorySubType") != m.end() && !m["StorySubType"].empty()) {
      storySubType = make_shared<string>(boost::any_cast<string>(m["StorySubType"]));
    }
    if (m.find("StoryType") != m.end() && !m["StoryType"].empty()) {
      storyType = make_shared<string>(boost::any_cast<string>(m["StoryType"]));
    }
  }


  virtual ~CreateCustomizedStoryShrinkRequest() = default;
};
class CreateCustomizedStoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> objectId{};
  shared_ptr<string> requestId{};

  CreateCustomizedStoryResponseBody() {}

  explicit CreateCustomizedStoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCustomizedStoryResponseBody() = default;
};
class CreateCustomizedStoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCustomizedStoryResponseBody> body{};

  CreateCustomizedStoryResponse() {}

  explicit CreateCustomizedStoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCustomizedStoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCustomizedStoryResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCustomizedStoryResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDatasetResponseBody> body{};

  CreateDatasetResponse() {}

  explicit CreateDatasetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sourceURI{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> userData{};

  CreateDetectVideoLabelsTaskRequest() {}

  explicit CreateDetectVideoLabelsTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateDetectVideoLabelsTaskRequest() = default;
};
class CreateDetectVideoLabelsTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> credentialConfigShrink{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sourceURI{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> userData{};

  CreateDetectVideoLabelsTaskShrinkRequest() {}

  explicit CreateDetectVideoLabelsTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfigShrink) {
      res["CredentialConfig"] = boost::any(*credentialConfigShrink);
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
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      credentialConfigShrink = make_shared<string>(boost::any_cast<string>(m["CredentialConfig"]));
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateDetectVideoLabelsTaskShrinkRequest() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDetectVideoLabelsTaskResponseBody> body{};

  CreateDetectVideoLabelsTaskResponse() {}

  explicit CreateDetectVideoLabelsTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> projectName{};
  shared_ptr<map<string, boost::any>> tags{};
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
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateFigureClusteringTaskRequest() = default;
};
class CreateFigureClusteringTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> userData{};

  CreateFigureClusteringTaskShrinkRequest() {}

  explicit CreateFigureClusteringTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
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
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateFigureClusteringTaskShrinkRequest() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFigureClusteringTaskResponseBody> body{};

  CreateFigureClusteringTaskResponse() {}

  explicit CreateFigureClusteringTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> projectName{};
  shared_ptr<map<string, boost::any>> tags{};
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
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
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
class CreateFigureClustersMergingTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> from{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> to{};
  shared_ptr<string> userData{};

  CreateFigureClustersMergingTaskShrinkRequest() {}

  explicit CreateFigureClustersMergingTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
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
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<string>(boost::any_cast<string>(m["To"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateFigureClustersMergingTaskShrinkRequest() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFigureClustersMergingTaskResponseBody> body{};

  CreateFigureClustersMergingTaskResponse() {}

  explicit CreateFigureClustersMergingTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFigureClustersMergingTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFigureClustersMergingTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFigureClustersMergingTaskResponse() = default;
};
class CreateFileCompressionTaskRequestSources : public Darabonba::Model {
public:
  shared_ptr<string> alias{};
  shared_ptr<string> URI{};

  CreateFileCompressionTaskRequestSources() {}

  explicit CreateFileCompressionTaskRequestSources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alias) {
      res["Alias"] = boost::any(*alias);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alias") != m.end() && !m["Alias"].empty()) {
      alias = make_shared<string>(boost::any_cast<string>(m["Alias"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~CreateFileCompressionTaskRequestSources() = default;
};
class CreateFileCompressionTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> compressedFormat{};
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> password{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sourceManifestURI{};
  shared_ptr<vector<CreateFileCompressionTaskRequestSources>> sources{};
  shared_ptr<string> targetURI{};
  shared_ptr<string> userData{};

  CreateFileCompressionTaskRequest() {}

  explicit CreateFileCompressionTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compressedFormat) {
      res["CompressedFormat"] = boost::any(*compressedFormat);
    }
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourceManifestURI) {
      res["SourceManifestURI"] = boost::any(*sourceManifestURI);
    }
    if (sources) {
      vector<boost::any> temp1;
      for(auto item1:*sources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Sources"] = boost::any(temp1);
    }
    if (targetURI) {
      res["TargetURI"] = boost::any(*targetURI);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompressedFormat") != m.end() && !m["CompressedFormat"].empty()) {
      compressedFormat = make_shared<string>(boost::any_cast<string>(m["CompressedFormat"]));
    }
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("SourceManifestURI") != m.end() && !m["SourceManifestURI"].empty()) {
      sourceManifestURI = make_shared<string>(boost::any_cast<string>(m["SourceManifestURI"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      if (typeid(vector<boost::any>) == m["Sources"].type()) {
        vector<CreateFileCompressionTaskRequestSources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Sources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateFileCompressionTaskRequestSources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sources = make_shared<vector<CreateFileCompressionTaskRequestSources>>(expect1);
      }
    }
    if (m.find("TargetURI") != m.end() && !m["TargetURI"].empty()) {
      targetURI = make_shared<string>(boost::any_cast<string>(m["TargetURI"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateFileCompressionTaskRequest() = default;
};
class CreateFileCompressionTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> compressedFormat{};
  shared_ptr<string> credentialConfigShrink{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> password{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sourceManifestURI{};
  shared_ptr<string> sourcesShrink{};
  shared_ptr<string> targetURI{};
  shared_ptr<string> userData{};

  CreateFileCompressionTaskShrinkRequest() {}

  explicit CreateFileCompressionTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (compressedFormat) {
      res["CompressedFormat"] = boost::any(*compressedFormat);
    }
    if (credentialConfigShrink) {
      res["CredentialConfig"] = boost::any(*credentialConfigShrink);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourceManifestURI) {
      res["SourceManifestURI"] = boost::any(*sourceManifestURI);
    }
    if (sourcesShrink) {
      res["Sources"] = boost::any(*sourcesShrink);
    }
    if (targetURI) {
      res["TargetURI"] = boost::any(*targetURI);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CompressedFormat") != m.end() && !m["CompressedFormat"].empty()) {
      compressedFormat = make_shared<string>(boost::any_cast<string>(m["CompressedFormat"]));
    }
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      credentialConfigShrink = make_shared<string>(boost::any_cast<string>(m["CredentialConfig"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("SourceManifestURI") != m.end() && !m["SourceManifestURI"].empty()) {
      sourceManifestURI = make_shared<string>(boost::any_cast<string>(m["SourceManifestURI"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      sourcesShrink = make_shared<string>(boost::any_cast<string>(m["Sources"]));
    }
    if (m.find("TargetURI") != m.end() && !m["TargetURI"].empty()) {
      targetURI = make_shared<string>(boost::any_cast<string>(m["TargetURI"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateFileCompressionTaskShrinkRequest() = default;
};
class CreateFileCompressionTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> eventId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateFileCompressionTaskResponseBody() {}

  explicit CreateFileCompressionTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateFileCompressionTaskResponseBody() = default;
};
class CreateFileCompressionTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFileCompressionTaskResponseBody> body{};

  CreateFileCompressionTaskResponse() {}

  explicit CreateFileCompressionTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFileCompressionTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFileCompressionTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFileCompressionTaskResponse() = default;
};
class CreateImageModerationTaskRequest : public Darabonba::Model {
public:
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<long> interval{};
  shared_ptr<long> maxFrames{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> reviewer{};
  shared_ptr<vector<string>> scenes{};
  shared_ptr<string> sourceURI{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> userData{};

  CreateImageModerationTaskRequest() {}

  explicit CreateImageModerationTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (maxFrames) {
      res["MaxFrames"] = boost::any(*maxFrames);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (reviewer) {
      res["Reviewer"] = boost::any(*reviewer);
    }
    if (scenes) {
      res["Scenes"] = boost::any(*scenes);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("MaxFrames") != m.end() && !m["MaxFrames"].empty()) {
      maxFrames = make_shared<long>(boost::any_cast<long>(m["MaxFrames"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Reviewer") != m.end() && !m["Reviewer"].empty()) {
      reviewer = make_shared<string>(boost::any_cast<string>(m["Reviewer"]));
    }
    if (m.find("Scenes") != m.end() && !m["Scenes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Scenes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Scenes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scenes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateImageModerationTaskRequest() = default;
};
class CreateImageModerationTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> credentialConfigShrink{};
  shared_ptr<long> interval{};
  shared_ptr<long> maxFrames{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> reviewer{};
  shared_ptr<string> scenesShrink{};
  shared_ptr<string> sourceURI{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> userData{};

  CreateImageModerationTaskShrinkRequest() {}

  explicit CreateImageModerationTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfigShrink) {
      res["CredentialConfig"] = boost::any(*credentialConfigShrink);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (maxFrames) {
      res["MaxFrames"] = boost::any(*maxFrames);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (reviewer) {
      res["Reviewer"] = boost::any(*reviewer);
    }
    if (scenesShrink) {
      res["Scenes"] = boost::any(*scenesShrink);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      credentialConfigShrink = make_shared<string>(boost::any_cast<string>(m["CredentialConfig"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("MaxFrames") != m.end() && !m["MaxFrames"].empty()) {
      maxFrames = make_shared<long>(boost::any_cast<long>(m["MaxFrames"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Reviewer") != m.end() && !m["Reviewer"].empty()) {
      reviewer = make_shared<string>(boost::any_cast<string>(m["Reviewer"]));
    }
    if (m.find("Scenes") != m.end() && !m["Scenes"].empty()) {
      scenesShrink = make_shared<string>(boost::any_cast<string>(m["Scenes"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateImageModerationTaskShrinkRequest() = default;
};
class CreateImageModerationTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> eventId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateImageModerationTaskResponseBody() {}

  explicit CreateImageModerationTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateImageModerationTaskResponseBody() = default;
};
class CreateImageModerationTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateImageModerationTaskResponseBody> body{};

  CreateImageModerationTaskResponse() {}

  explicit CreateImageModerationTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateImageModerationTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateImageModerationTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateImageModerationTaskResponse() = default;
};
class CreateImageSplicingTaskRequestSources : public Darabonba::Model {
public:
  shared_ptr<long> rotate{};
  shared_ptr<string> URI{};

  CreateImageSplicingTaskRequestSources() {}

  explicit CreateImageSplicingTaskRequestSources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rotate) {
      res["Rotate"] = boost::any(*rotate);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rotate") != m.end() && !m["Rotate"].empty()) {
      rotate = make_shared<long>(boost::any_cast<long>(m["Rotate"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~CreateImageSplicingTaskRequestSources() = default;
};
class CreateImageSplicingTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> align{};
  shared_ptr<string> backgroundColor{};
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<string> direction{};
  shared_ptr<string> imageFormat{};
  shared_ptr<long> margin{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<long> padding{};
  shared_ptr<string> projectName{};
  shared_ptr<long> quality{};
  shared_ptr<string> scaleType{};
  shared_ptr<vector<CreateImageSplicingTaskRequestSources>> sources{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> targetURI{};
  shared_ptr<string> userData{};

  CreateImageSplicingTaskRequest() {}

  explicit CreateImageSplicingTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (align) {
      res["Align"] = boost::any(*align);
    }
    if (backgroundColor) {
      res["BackgroundColor"] = boost::any(*backgroundColor);
    }
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (imageFormat) {
      res["ImageFormat"] = boost::any(*imageFormat);
    }
    if (margin) {
      res["Margin"] = boost::any(*margin);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (padding) {
      res["Padding"] = boost::any(*padding);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (quality) {
      res["Quality"] = boost::any(*quality);
    }
    if (scaleType) {
      res["ScaleType"] = boost::any(*scaleType);
    }
    if (sources) {
      vector<boost::any> temp1;
      for(auto item1:*sources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Sources"] = boost::any(temp1);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (targetURI) {
      res["TargetURI"] = boost::any(*targetURI);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Align") != m.end() && !m["Align"].empty()) {
      align = make_shared<long>(boost::any_cast<long>(m["Align"]));
    }
    if (m.find("BackgroundColor") != m.end() && !m["BackgroundColor"].empty()) {
      backgroundColor = make_shared<string>(boost::any_cast<string>(m["BackgroundColor"]));
    }
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("ImageFormat") != m.end() && !m["ImageFormat"].empty()) {
      imageFormat = make_shared<string>(boost::any_cast<string>(m["ImageFormat"]));
    }
    if (m.find("Margin") != m.end() && !m["Margin"].empty()) {
      margin = make_shared<long>(boost::any_cast<long>(m["Margin"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("Padding") != m.end() && !m["Padding"].empty()) {
      padding = make_shared<long>(boost::any_cast<long>(m["Padding"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Quality") != m.end() && !m["Quality"].empty()) {
      quality = make_shared<long>(boost::any_cast<long>(m["Quality"]));
    }
    if (m.find("ScaleType") != m.end() && !m["ScaleType"].empty()) {
      scaleType = make_shared<string>(boost::any_cast<string>(m["ScaleType"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      if (typeid(vector<boost::any>) == m["Sources"].type()) {
        vector<CreateImageSplicingTaskRequestSources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Sources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateImageSplicingTaskRequestSources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sources = make_shared<vector<CreateImageSplicingTaskRequestSources>>(expect1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TargetURI") != m.end() && !m["TargetURI"].empty()) {
      targetURI = make_shared<string>(boost::any_cast<string>(m["TargetURI"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateImageSplicingTaskRequest() = default;
};
class CreateImageSplicingTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<long> align{};
  shared_ptr<string> backgroundColor{};
  shared_ptr<string> credentialConfigShrink{};
  shared_ptr<string> direction{};
  shared_ptr<string> imageFormat{};
  shared_ptr<long> margin{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<long> padding{};
  shared_ptr<string> projectName{};
  shared_ptr<long> quality{};
  shared_ptr<string> scaleType{};
  shared_ptr<string> sourcesShrink{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> targetURI{};
  shared_ptr<string> userData{};

  CreateImageSplicingTaskShrinkRequest() {}

  explicit CreateImageSplicingTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (align) {
      res["Align"] = boost::any(*align);
    }
    if (backgroundColor) {
      res["BackgroundColor"] = boost::any(*backgroundColor);
    }
    if (credentialConfigShrink) {
      res["CredentialConfig"] = boost::any(*credentialConfigShrink);
    }
    if (direction) {
      res["Direction"] = boost::any(*direction);
    }
    if (imageFormat) {
      res["ImageFormat"] = boost::any(*imageFormat);
    }
    if (margin) {
      res["Margin"] = boost::any(*margin);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (padding) {
      res["Padding"] = boost::any(*padding);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (quality) {
      res["Quality"] = boost::any(*quality);
    }
    if (scaleType) {
      res["ScaleType"] = boost::any(*scaleType);
    }
    if (sourcesShrink) {
      res["Sources"] = boost::any(*sourcesShrink);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (targetURI) {
      res["TargetURI"] = boost::any(*targetURI);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Align") != m.end() && !m["Align"].empty()) {
      align = make_shared<long>(boost::any_cast<long>(m["Align"]));
    }
    if (m.find("BackgroundColor") != m.end() && !m["BackgroundColor"].empty()) {
      backgroundColor = make_shared<string>(boost::any_cast<string>(m["BackgroundColor"]));
    }
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      credentialConfigShrink = make_shared<string>(boost::any_cast<string>(m["CredentialConfig"]));
    }
    if (m.find("Direction") != m.end() && !m["Direction"].empty()) {
      direction = make_shared<string>(boost::any_cast<string>(m["Direction"]));
    }
    if (m.find("ImageFormat") != m.end() && !m["ImageFormat"].empty()) {
      imageFormat = make_shared<string>(boost::any_cast<string>(m["ImageFormat"]));
    }
    if (m.find("Margin") != m.end() && !m["Margin"].empty()) {
      margin = make_shared<long>(boost::any_cast<long>(m["Margin"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("Padding") != m.end() && !m["Padding"].empty()) {
      padding = make_shared<long>(boost::any_cast<long>(m["Padding"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Quality") != m.end() && !m["Quality"].empty()) {
      quality = make_shared<long>(boost::any_cast<long>(m["Quality"]));
    }
    if (m.find("ScaleType") != m.end() && !m["ScaleType"].empty()) {
      scaleType = make_shared<string>(boost::any_cast<string>(m["ScaleType"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      sourcesShrink = make_shared<string>(boost::any_cast<string>(m["Sources"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("TargetURI") != m.end() && !m["TargetURI"].empty()) {
      targetURI = make_shared<string>(boost::any_cast<string>(m["TargetURI"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateImageSplicingTaskShrinkRequest() = default;
};
class CreateImageSplicingTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> eventId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateImageSplicingTaskResponseBody() {}

  explicit CreateImageSplicingTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateImageSplicingTaskResponseBody() = default;
};
class CreateImageSplicingTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateImageSplicingTaskResponseBody> body{};

  CreateImageSplicingTaskResponse() {}

  explicit CreateImageSplicingTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateImageSplicingTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateImageSplicingTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateImageSplicingTaskResponse() = default;
};
class CreateImageToPDFTaskRequestSources : public Darabonba::Model {
public:
  shared_ptr<long> rotate{};
  shared_ptr<string> URI{};

  CreateImageToPDFTaskRequestSources() {}

  explicit CreateImageToPDFTaskRequestSources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rotate) {
      res["Rotate"] = boost::any(*rotate);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rotate") != m.end() && !m["Rotate"].empty()) {
      rotate = make_shared<long>(boost::any_cast<long>(m["Rotate"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~CreateImageToPDFTaskRequestSources() = default;
};
class CreateImageToPDFTaskRequest : public Darabonba::Model {
public:
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> projectName{};
  shared_ptr<vector<CreateImageToPDFTaskRequestSources>> sources{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> targetURI{};
  shared_ptr<string> userData{};

  CreateImageToPDFTaskRequest() {}

  explicit CreateImageToPDFTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sources) {
      vector<boost::any> temp1;
      for(auto item1:*sources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Sources"] = boost::any(temp1);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (targetURI) {
      res["TargetURI"] = boost::any(*targetURI);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      if (typeid(vector<boost::any>) == m["Sources"].type()) {
        vector<CreateImageToPDFTaskRequestSources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Sources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateImageToPDFTaskRequestSources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sources = make_shared<vector<CreateImageToPDFTaskRequestSources>>(expect1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TargetURI") != m.end() && !m["TargetURI"].empty()) {
      targetURI = make_shared<string>(boost::any_cast<string>(m["TargetURI"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateImageToPDFTaskRequest() = default;
};
class CreateImageToPDFTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> credentialConfigShrink{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sourcesShrink{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> targetURI{};
  shared_ptr<string> userData{};

  CreateImageToPDFTaskShrinkRequest() {}

  explicit CreateImageToPDFTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfigShrink) {
      res["CredentialConfig"] = boost::any(*credentialConfigShrink);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourcesShrink) {
      res["Sources"] = boost::any(*sourcesShrink);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (targetURI) {
      res["TargetURI"] = boost::any(*targetURI);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      credentialConfigShrink = make_shared<string>(boost::any_cast<string>(m["CredentialConfig"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      sourcesShrink = make_shared<string>(boost::any_cast<string>(m["Sources"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("TargetURI") != m.end() && !m["TargetURI"].empty()) {
      targetURI = make_shared<string>(boost::any_cast<string>(m["TargetURI"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateImageToPDFTaskShrinkRequest() = default;
};
class CreateImageToPDFTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> eventId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateImageToPDFTaskResponseBody() {}

  explicit CreateImageToPDFTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateImageToPDFTaskResponseBody() = default;
};
class CreateImageToPDFTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateImageToPDFTaskResponseBody> body{};

  CreateImageToPDFTaskResponse() {}

  explicit CreateImageToPDFTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateImageToPDFTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateImageToPDFTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateImageToPDFTaskResponse() = default;
};
class CreateMediaConvertTaskRequestSourcesSubtitles : public Darabonba::Model {
public:
  shared_ptr<string> language{};
  shared_ptr<double> timeOffset{};
  shared_ptr<string> URI{};

  CreateMediaConvertTaskRequestSourcesSubtitles() {}

  explicit CreateMediaConvertTaskRequestSourcesSubtitles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (timeOffset) {
      res["TimeOffset"] = boost::any(*timeOffset);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("TimeOffset") != m.end() && !m["TimeOffset"].empty()) {
      timeOffset = make_shared<double>(boost::any_cast<double>(m["TimeOffset"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~CreateMediaConvertTaskRequestSourcesSubtitles() = default;
};
class CreateMediaConvertTaskRequestSources : public Darabonba::Model {
public:
  shared_ptr<double> duration{};
  shared_ptr<double> startTime{};
  shared_ptr<vector<CreateMediaConvertTaskRequestSourcesSubtitles>> subtitles{};
  shared_ptr<string> URI{};

  CreateMediaConvertTaskRequestSources() {}

  explicit CreateMediaConvertTaskRequestSources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (subtitles) {
      vector<boost::any> temp1;
      for(auto item1:*subtitles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Subtitles"] = boost::any(temp1);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<double>(boost::any_cast<double>(m["StartTime"]));
    }
    if (m.find("Subtitles") != m.end() && !m["Subtitles"].empty()) {
      if (typeid(vector<boost::any>) == m["Subtitles"].type()) {
        vector<CreateMediaConvertTaskRequestSourcesSubtitles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Subtitles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMediaConvertTaskRequestSourcesSubtitles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subtitles = make_shared<vector<CreateMediaConvertTaskRequestSourcesSubtitles>>(expect1);
      }
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~CreateMediaConvertTaskRequestSources() = default;
};
class CreateMediaConvertTaskRequestTargetsAudioFilterAudio : public Darabonba::Model {
public:
  shared_ptr<bool> mixing{};

  CreateMediaConvertTaskRequestTargetsAudioFilterAudio() {}

  explicit CreateMediaConvertTaskRequestTargetsAudioFilterAudio(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mixing) {
      res["Mixing"] = boost::any(*mixing);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mixing") != m.end() && !m["Mixing"].empty()) {
      mixing = make_shared<bool>(boost::any_cast<bool>(m["Mixing"]));
    }
  }


  virtual ~CreateMediaConvertTaskRequestTargetsAudioFilterAudio() = default;
};
class CreateMediaConvertTaskRequestTargetsAudioTranscodeAudio : public Darabonba::Model {
public:
  shared_ptr<long> bitrate{};
  shared_ptr<string> bitrateOption{};
  shared_ptr<long> channel{};
  shared_ptr<string> codec{};
  shared_ptr<long> quality{};
  shared_ptr<long> sampleRate{};
  shared_ptr<string> sampleRateOption{};

  CreateMediaConvertTaskRequestTargetsAudioTranscodeAudio() {}

  explicit CreateMediaConvertTaskRequestTargetsAudioTranscodeAudio(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (bitrateOption) {
      res["BitrateOption"] = boost::any(*bitrateOption);
    }
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (codec) {
      res["Codec"] = boost::any(*codec);
    }
    if (quality) {
      res["Quality"] = boost::any(*quality);
    }
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    if (sampleRateOption) {
      res["SampleRateOption"] = boost::any(*sampleRateOption);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
    if (m.find("BitrateOption") != m.end() && !m["BitrateOption"].empty()) {
      bitrateOption = make_shared<string>(boost::any_cast<string>(m["BitrateOption"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<long>(boost::any_cast<long>(m["Channel"]));
    }
    if (m.find("Codec") != m.end() && !m["Codec"].empty()) {
      codec = make_shared<string>(boost::any_cast<string>(m["Codec"]));
    }
    if (m.find("Quality") != m.end() && !m["Quality"].empty()) {
      quality = make_shared<long>(boost::any_cast<long>(m["Quality"]));
    }
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<long>(boost::any_cast<long>(m["SampleRate"]));
    }
    if (m.find("SampleRateOption") != m.end() && !m["SampleRateOption"].empty()) {
      sampleRateOption = make_shared<string>(boost::any_cast<string>(m["SampleRateOption"]));
    }
  }


  virtual ~CreateMediaConvertTaskRequestTargetsAudioTranscodeAudio() = default;
};
class CreateMediaConvertTaskRequestTargetsAudio : public Darabonba::Model {
public:
  shared_ptr<bool> disableAudio{};
  shared_ptr<CreateMediaConvertTaskRequestTargetsAudioFilterAudio> filterAudio{};
  shared_ptr<CreateMediaConvertTaskRequestTargetsAudioTranscodeAudio> transcodeAudio{};

  CreateMediaConvertTaskRequestTargetsAudio() {}

  explicit CreateMediaConvertTaskRequestTargetsAudio(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disableAudio) {
      res["DisableAudio"] = boost::any(*disableAudio);
    }
    if (filterAudio) {
      res["FilterAudio"] = filterAudio ? boost::any(filterAudio->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (transcodeAudio) {
      res["TranscodeAudio"] = transcodeAudio ? boost::any(transcodeAudio->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisableAudio") != m.end() && !m["DisableAudio"].empty()) {
      disableAudio = make_shared<bool>(boost::any_cast<bool>(m["DisableAudio"]));
    }
    if (m.find("FilterAudio") != m.end() && !m["FilterAudio"].empty()) {
      if (typeid(map<string, boost::any>) == m["FilterAudio"].type()) {
        CreateMediaConvertTaskRequestTargetsAudioFilterAudio model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FilterAudio"]));
        filterAudio = make_shared<CreateMediaConvertTaskRequestTargetsAudioFilterAudio>(model1);
      }
    }
    if (m.find("TranscodeAudio") != m.end() && !m["TranscodeAudio"].empty()) {
      if (typeid(map<string, boost::any>) == m["TranscodeAudio"].type()) {
        CreateMediaConvertTaskRequestTargetsAudioTranscodeAudio model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TranscodeAudio"]));
        transcodeAudio = make_shared<CreateMediaConvertTaskRequestTargetsAudioTranscodeAudio>(model1);
      }
    }
  }


  virtual ~CreateMediaConvertTaskRequestTargetsAudio() = default;
};
class CreateMediaConvertTaskRequestTargetsImageSnapshots : public Darabonba::Model {
public:
  shared_ptr<string> format{};
  shared_ptr<long> height{};
  shared_ptr<double> interval{};
  shared_ptr<long> number{};
  shared_ptr<string> scaleType{};
  shared_ptr<double> startTime{};
  shared_ptr<string> URI{};
  shared_ptr<long> width{};

  CreateMediaConvertTaskRequestTargetsImageSnapshots() {}

  explicit CreateMediaConvertTaskRequestTargetsImageSnapshots(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (scaleType) {
      res["ScaleType"] = boost::any(*scaleType);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<double>(boost::any_cast<double>(m["Interval"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<long>(boost::any_cast<long>(m["Number"]));
    }
    if (m.find("ScaleType") != m.end() && !m["ScaleType"].empty()) {
      scaleType = make_shared<string>(boost::any_cast<string>(m["ScaleType"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<double>(boost::any_cast<double>(m["StartTime"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~CreateMediaConvertTaskRequestTargetsImageSnapshots() = default;
};
class CreateMediaConvertTaskRequestTargetsImageSprites : public Darabonba::Model {
public:
  shared_ptr<string> format{};
  shared_ptr<double> interval{};
  shared_ptr<long> margin{};
  shared_ptr<long> number{};
  shared_ptr<long> pad{};
  shared_ptr<double> scaleHeight{};
  shared_ptr<string> scaleType{};
  shared_ptr<double> scaleWidth{};
  shared_ptr<double> startTime{};
  shared_ptr<long> tileHeight{};
  shared_ptr<long> tileWidth{};
  shared_ptr<string> URI{};

  CreateMediaConvertTaskRequestTargetsImageSprites() {}

  explicit CreateMediaConvertTaskRequestTargetsImageSprites(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (margin) {
      res["Margin"] = boost::any(*margin);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (pad) {
      res["Pad"] = boost::any(*pad);
    }
    if (scaleHeight) {
      res["ScaleHeight"] = boost::any(*scaleHeight);
    }
    if (scaleType) {
      res["ScaleType"] = boost::any(*scaleType);
    }
    if (scaleWidth) {
      res["ScaleWidth"] = boost::any(*scaleWidth);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (tileHeight) {
      res["TileHeight"] = boost::any(*tileHeight);
    }
    if (tileWidth) {
      res["TileWidth"] = boost::any(*tileWidth);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<double>(boost::any_cast<double>(m["Interval"]));
    }
    if (m.find("Margin") != m.end() && !m["Margin"].empty()) {
      margin = make_shared<long>(boost::any_cast<long>(m["Margin"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<long>(boost::any_cast<long>(m["Number"]));
    }
    if (m.find("Pad") != m.end() && !m["Pad"].empty()) {
      pad = make_shared<long>(boost::any_cast<long>(m["Pad"]));
    }
    if (m.find("ScaleHeight") != m.end() && !m["ScaleHeight"].empty()) {
      scaleHeight = make_shared<double>(boost::any_cast<double>(m["ScaleHeight"]));
    }
    if (m.find("ScaleType") != m.end() && !m["ScaleType"].empty()) {
      scaleType = make_shared<string>(boost::any_cast<string>(m["ScaleType"]));
    }
    if (m.find("ScaleWidth") != m.end() && !m["ScaleWidth"].empty()) {
      scaleWidth = make_shared<double>(boost::any_cast<double>(m["ScaleWidth"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<double>(boost::any_cast<double>(m["StartTime"]));
    }
    if (m.find("TileHeight") != m.end() && !m["TileHeight"].empty()) {
      tileHeight = make_shared<long>(boost::any_cast<long>(m["TileHeight"]));
    }
    if (m.find("TileWidth") != m.end() && !m["TileWidth"].empty()) {
      tileWidth = make_shared<long>(boost::any_cast<long>(m["TileWidth"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~CreateMediaConvertTaskRequestTargetsImageSprites() = default;
};
class CreateMediaConvertTaskRequestTargetsImage : public Darabonba::Model {
public:
  shared_ptr<vector<CreateMediaConvertTaskRequestTargetsImageSnapshots>> snapshots{};
  shared_ptr<vector<CreateMediaConvertTaskRequestTargetsImageSprites>> sprites{};

  CreateMediaConvertTaskRequestTargetsImage() {}

  explicit CreateMediaConvertTaskRequestTargetsImage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (snapshots) {
      vector<boost::any> temp1;
      for(auto item1:*snapshots){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Snapshots"] = boost::any(temp1);
    }
    if (sprites) {
      vector<boost::any> temp1;
      for(auto item1:*sprites){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Sprites"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Snapshots") != m.end() && !m["Snapshots"].empty()) {
      if (typeid(vector<boost::any>) == m["Snapshots"].type()) {
        vector<CreateMediaConvertTaskRequestTargetsImageSnapshots> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Snapshots"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMediaConvertTaskRequestTargetsImageSnapshots model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        snapshots = make_shared<vector<CreateMediaConvertTaskRequestTargetsImageSnapshots>>(expect1);
      }
    }
    if (m.find("Sprites") != m.end() && !m["Sprites"].empty()) {
      if (typeid(vector<boost::any>) == m["Sprites"].type()) {
        vector<CreateMediaConvertTaskRequestTargetsImageSprites> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Sprites"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMediaConvertTaskRequestTargetsImageSprites model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sprites = make_shared<vector<CreateMediaConvertTaskRequestTargetsImageSprites>>(expect1);
      }
    }
  }


  virtual ~CreateMediaConvertTaskRequestTargetsImage() = default;
};
class CreateMediaConvertTaskRequestTargetsSegment : public Darabonba::Model {
public:
  shared_ptr<double> duration{};
  shared_ptr<string> format{};
  shared_ptr<long> startNumber{};

  CreateMediaConvertTaskRequestTargetsSegment() {}

  explicit CreateMediaConvertTaskRequestTargetsSegment(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (startNumber) {
      res["StartNumber"] = boost::any(*startNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("StartNumber") != m.end() && !m["StartNumber"].empty()) {
      startNumber = make_shared<long>(boost::any_cast<long>(m["StartNumber"]));
    }
  }


  virtual ~CreateMediaConvertTaskRequestTargetsSegment() = default;
};
class CreateMediaConvertTaskRequestTargetsSubtitleExtractSubtitle : public Darabonba::Model {
public:
  shared_ptr<string> format{};
  shared_ptr<string> URI{};

  CreateMediaConvertTaskRequestTargetsSubtitleExtractSubtitle() {}

  explicit CreateMediaConvertTaskRequestTargetsSubtitleExtractSubtitle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~CreateMediaConvertTaskRequestTargetsSubtitleExtractSubtitle() = default;
};
class CreateMediaConvertTaskRequestTargetsSubtitle : public Darabonba::Model {
public:
  shared_ptr<bool> disableSubtitle{};
  shared_ptr<CreateMediaConvertTaskRequestTargetsSubtitleExtractSubtitle> extractSubtitle{};

  CreateMediaConvertTaskRequestTargetsSubtitle() {}

  explicit CreateMediaConvertTaskRequestTargetsSubtitle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disableSubtitle) {
      res["DisableSubtitle"] = boost::any(*disableSubtitle);
    }
    if (extractSubtitle) {
      res["ExtractSubtitle"] = extractSubtitle ? boost::any(extractSubtitle->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisableSubtitle") != m.end() && !m["DisableSubtitle"].empty()) {
      disableSubtitle = make_shared<bool>(boost::any_cast<bool>(m["DisableSubtitle"]));
    }
    if (m.find("ExtractSubtitle") != m.end() && !m["ExtractSubtitle"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExtractSubtitle"].type()) {
        CreateMediaConvertTaskRequestTargetsSubtitleExtractSubtitle model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExtractSubtitle"]));
        extractSubtitle = make_shared<CreateMediaConvertTaskRequestTargetsSubtitleExtractSubtitle>(model1);
      }
    }
  }


  virtual ~CreateMediaConvertTaskRequestTargetsSubtitle() = default;
};
class CreateMediaConvertTaskRequestTargetsVideoFilterVideoDelogos : public Darabonba::Model {
public:
  shared_ptr<double> duration{};
  shared_ptr<double> dx{};
  shared_ptr<double> dy{};
  shared_ptr<double> height{};
  shared_ptr<string> referPos{};
  shared_ptr<double> startTime{};
  shared_ptr<double> width{};

  CreateMediaConvertTaskRequestTargetsVideoFilterVideoDelogos() {}

  explicit CreateMediaConvertTaskRequestTargetsVideoFilterVideoDelogos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (dx) {
      res["Dx"] = boost::any(*dx);
    }
    if (dy) {
      res["Dy"] = boost::any(*dy);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (referPos) {
      res["ReferPos"] = boost::any(*referPos);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("Dx") != m.end() && !m["Dx"].empty()) {
      dx = make_shared<double>(boost::any_cast<double>(m["Dx"]));
    }
    if (m.find("Dy") != m.end() && !m["Dy"].empty()) {
      dy = make_shared<double>(boost::any_cast<double>(m["Dy"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("ReferPos") != m.end() && !m["ReferPos"].empty()) {
      referPos = make_shared<string>(boost::any_cast<string>(m["ReferPos"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<double>(boost::any_cast<double>(m["StartTime"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
  }


  virtual ~CreateMediaConvertTaskRequestTargetsVideoFilterVideoDelogos() = default;
};
class CreateMediaConvertTaskRequestTargetsVideoFilterVideoWatermarks : public Darabonba::Model {
public:
  shared_ptr<string> borderColor{};
  shared_ptr<long> borderWidth{};
  shared_ptr<string> content{};
  shared_ptr<double> duration{};
  shared_ptr<double> dx{};
  shared_ptr<double> dy{};
  shared_ptr<double> fontApha{};
  shared_ptr<string> fontColor{};
  shared_ptr<string> fontName{};
  shared_ptr<long> fontSize{};
  shared_ptr<double> height{};
  shared_ptr<string> referPos{};
  shared_ptr<double> startTime{};
  shared_ptr<string> type{};
  shared_ptr<string> URI{};
  shared_ptr<double> width{};

  CreateMediaConvertTaskRequestTargetsVideoFilterVideoWatermarks() {}

  explicit CreateMediaConvertTaskRequestTargetsVideoFilterVideoWatermarks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (borderColor) {
      res["BorderColor"] = boost::any(*borderColor);
    }
    if (borderWidth) {
      res["BorderWidth"] = boost::any(*borderWidth);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (dx) {
      res["Dx"] = boost::any(*dx);
    }
    if (dy) {
      res["Dy"] = boost::any(*dy);
    }
    if (fontApha) {
      res["FontApha"] = boost::any(*fontApha);
    }
    if (fontColor) {
      res["FontColor"] = boost::any(*fontColor);
    }
    if (fontName) {
      res["FontName"] = boost::any(*fontName);
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (referPos) {
      res["ReferPos"] = boost::any(*referPos);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BorderColor") != m.end() && !m["BorderColor"].empty()) {
      borderColor = make_shared<string>(boost::any_cast<string>(m["BorderColor"]));
    }
    if (m.find("BorderWidth") != m.end() && !m["BorderWidth"].empty()) {
      borderWidth = make_shared<long>(boost::any_cast<long>(m["BorderWidth"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("Dx") != m.end() && !m["Dx"].empty()) {
      dx = make_shared<double>(boost::any_cast<double>(m["Dx"]));
    }
    if (m.find("Dy") != m.end() && !m["Dy"].empty()) {
      dy = make_shared<double>(boost::any_cast<double>(m["Dy"]));
    }
    if (m.find("FontApha") != m.end() && !m["FontApha"].empty()) {
      fontApha = make_shared<double>(boost::any_cast<double>(m["FontApha"]));
    }
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      fontColor = make_shared<string>(boost::any_cast<string>(m["FontColor"]));
    }
    if (m.find("FontName") != m.end() && !m["FontName"].empty()) {
      fontName = make_shared<string>(boost::any_cast<string>(m["FontName"]));
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("ReferPos") != m.end() && !m["ReferPos"].empty()) {
      referPos = make_shared<string>(boost::any_cast<string>(m["ReferPos"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<double>(boost::any_cast<double>(m["StartTime"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
  }


  virtual ~CreateMediaConvertTaskRequestTargetsVideoFilterVideoWatermarks() = default;
};
class CreateMediaConvertTaskRequestTargetsVideoFilterVideo : public Darabonba::Model {
public:
  shared_ptr<vector<CreateMediaConvertTaskRequestTargetsVideoFilterVideoDelogos>> delogos{};
  shared_ptr<vector<CreateMediaConvertTaskRequestTargetsVideoFilterVideoWatermarks>> watermarks{};

  CreateMediaConvertTaskRequestTargetsVideoFilterVideo() {}

  explicit CreateMediaConvertTaskRequestTargetsVideoFilterVideo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delogos) {
      vector<boost::any> temp1;
      for(auto item1:*delogos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Delogos"] = boost::any(temp1);
    }
    if (watermarks) {
      vector<boost::any> temp1;
      for(auto item1:*watermarks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Watermarks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Delogos") != m.end() && !m["Delogos"].empty()) {
      if (typeid(vector<boost::any>) == m["Delogos"].type()) {
        vector<CreateMediaConvertTaskRequestTargetsVideoFilterVideoDelogos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Delogos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMediaConvertTaskRequestTargetsVideoFilterVideoDelogos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        delogos = make_shared<vector<CreateMediaConvertTaskRequestTargetsVideoFilterVideoDelogos>>(expect1);
      }
    }
    if (m.find("Watermarks") != m.end() && !m["Watermarks"].empty()) {
      if (typeid(vector<boost::any>) == m["Watermarks"].type()) {
        vector<CreateMediaConvertTaskRequestTargetsVideoFilterVideoWatermarks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Watermarks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMediaConvertTaskRequestTargetsVideoFilterVideoWatermarks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        watermarks = make_shared<vector<CreateMediaConvertTaskRequestTargetsVideoFilterVideoWatermarks>>(expect1);
      }
    }
  }


  virtual ~CreateMediaConvertTaskRequestTargetsVideoFilterVideo() = default;
};
class CreateMediaConvertTaskRequestTargetsVideoTranscodeVideo : public Darabonba::Model {
public:
  shared_ptr<bool> adaptiveResolutionDirection{};
  shared_ptr<long> BFrames{};
  shared_ptr<long> bitrate{};
  shared_ptr<string> bitrateOption{};
  shared_ptr<long> bufferSize{};
  shared_ptr<double> CRF{};
  shared_ptr<string> codec{};
  shared_ptr<double> frameRate{};
  shared_ptr<string> frameRateOption{};
  shared_ptr<long> GOPSize{};
  shared_ptr<long> maxBitrate{};
  shared_ptr<string> pixelFormat{};
  shared_ptr<long> refs{};
  shared_ptr<string> resolution{};
  shared_ptr<string> resolutionOption{};
  shared_ptr<long> rotation{};
  shared_ptr<string> scaleType{};

  CreateMediaConvertTaskRequestTargetsVideoTranscodeVideo() {}

  explicit CreateMediaConvertTaskRequestTargetsVideoTranscodeVideo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adaptiveResolutionDirection) {
      res["AdaptiveResolutionDirection"] = boost::any(*adaptiveResolutionDirection);
    }
    if (BFrames) {
      res["BFrames"] = boost::any(*BFrames);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (bitrateOption) {
      res["BitrateOption"] = boost::any(*bitrateOption);
    }
    if (bufferSize) {
      res["BufferSize"] = boost::any(*bufferSize);
    }
    if (CRF) {
      res["CRF"] = boost::any(*CRF);
    }
    if (codec) {
      res["Codec"] = boost::any(*codec);
    }
    if (frameRate) {
      res["FrameRate"] = boost::any(*frameRate);
    }
    if (frameRateOption) {
      res["FrameRateOption"] = boost::any(*frameRateOption);
    }
    if (GOPSize) {
      res["GOPSize"] = boost::any(*GOPSize);
    }
    if (maxBitrate) {
      res["MaxBitrate"] = boost::any(*maxBitrate);
    }
    if (pixelFormat) {
      res["PixelFormat"] = boost::any(*pixelFormat);
    }
    if (refs) {
      res["Refs"] = boost::any(*refs);
    }
    if (resolution) {
      res["Resolution"] = boost::any(*resolution);
    }
    if (resolutionOption) {
      res["ResolutionOption"] = boost::any(*resolutionOption);
    }
    if (rotation) {
      res["Rotation"] = boost::any(*rotation);
    }
    if (scaleType) {
      res["ScaleType"] = boost::any(*scaleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdaptiveResolutionDirection") != m.end() && !m["AdaptiveResolutionDirection"].empty()) {
      adaptiveResolutionDirection = make_shared<bool>(boost::any_cast<bool>(m["AdaptiveResolutionDirection"]));
    }
    if (m.find("BFrames") != m.end() && !m["BFrames"].empty()) {
      BFrames = make_shared<long>(boost::any_cast<long>(m["BFrames"]));
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
    if (m.find("BitrateOption") != m.end() && !m["BitrateOption"].empty()) {
      bitrateOption = make_shared<string>(boost::any_cast<string>(m["BitrateOption"]));
    }
    if (m.find("BufferSize") != m.end() && !m["BufferSize"].empty()) {
      bufferSize = make_shared<long>(boost::any_cast<long>(m["BufferSize"]));
    }
    if (m.find("CRF") != m.end() && !m["CRF"].empty()) {
      CRF = make_shared<double>(boost::any_cast<double>(m["CRF"]));
    }
    if (m.find("Codec") != m.end() && !m["Codec"].empty()) {
      codec = make_shared<string>(boost::any_cast<string>(m["Codec"]));
    }
    if (m.find("FrameRate") != m.end() && !m["FrameRate"].empty()) {
      frameRate = make_shared<double>(boost::any_cast<double>(m["FrameRate"]));
    }
    if (m.find("FrameRateOption") != m.end() && !m["FrameRateOption"].empty()) {
      frameRateOption = make_shared<string>(boost::any_cast<string>(m["FrameRateOption"]));
    }
    if (m.find("GOPSize") != m.end() && !m["GOPSize"].empty()) {
      GOPSize = make_shared<long>(boost::any_cast<long>(m["GOPSize"]));
    }
    if (m.find("MaxBitrate") != m.end() && !m["MaxBitrate"].empty()) {
      maxBitrate = make_shared<long>(boost::any_cast<long>(m["MaxBitrate"]));
    }
    if (m.find("PixelFormat") != m.end() && !m["PixelFormat"].empty()) {
      pixelFormat = make_shared<string>(boost::any_cast<string>(m["PixelFormat"]));
    }
    if (m.find("Refs") != m.end() && !m["Refs"].empty()) {
      refs = make_shared<long>(boost::any_cast<long>(m["Refs"]));
    }
    if (m.find("Resolution") != m.end() && !m["Resolution"].empty()) {
      resolution = make_shared<string>(boost::any_cast<string>(m["Resolution"]));
    }
    if (m.find("ResolutionOption") != m.end() && !m["ResolutionOption"].empty()) {
      resolutionOption = make_shared<string>(boost::any_cast<string>(m["ResolutionOption"]));
    }
    if (m.find("Rotation") != m.end() && !m["Rotation"].empty()) {
      rotation = make_shared<long>(boost::any_cast<long>(m["Rotation"]));
    }
    if (m.find("ScaleType") != m.end() && !m["ScaleType"].empty()) {
      scaleType = make_shared<string>(boost::any_cast<string>(m["ScaleType"]));
    }
  }


  virtual ~CreateMediaConvertTaskRequestTargetsVideoTranscodeVideo() = default;
};
class CreateMediaConvertTaskRequestTargetsVideo : public Darabonba::Model {
public:
  shared_ptr<bool> disableVideo{};
  shared_ptr<CreateMediaConvertTaskRequestTargetsVideoFilterVideo> filterVideo{};
  shared_ptr<CreateMediaConvertTaskRequestTargetsVideoTranscodeVideo> transcodeVideo{};

  CreateMediaConvertTaskRequestTargetsVideo() {}

  explicit CreateMediaConvertTaskRequestTargetsVideo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disableVideo) {
      res["DisableVideo"] = boost::any(*disableVideo);
    }
    if (filterVideo) {
      res["FilterVideo"] = filterVideo ? boost::any(filterVideo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (transcodeVideo) {
      res["TranscodeVideo"] = transcodeVideo ? boost::any(transcodeVideo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisableVideo") != m.end() && !m["DisableVideo"].empty()) {
      disableVideo = make_shared<bool>(boost::any_cast<bool>(m["DisableVideo"]));
    }
    if (m.find("FilterVideo") != m.end() && !m["FilterVideo"].empty()) {
      if (typeid(map<string, boost::any>) == m["FilterVideo"].type()) {
        CreateMediaConvertTaskRequestTargetsVideoFilterVideo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FilterVideo"]));
        filterVideo = make_shared<CreateMediaConvertTaskRequestTargetsVideoFilterVideo>(model1);
      }
    }
    if (m.find("TranscodeVideo") != m.end() && !m["TranscodeVideo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TranscodeVideo"].type()) {
        CreateMediaConvertTaskRequestTargetsVideoTranscodeVideo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TranscodeVideo"]));
        transcodeVideo = make_shared<CreateMediaConvertTaskRequestTargetsVideoTranscodeVideo>(model1);
      }
    }
  }


  virtual ~CreateMediaConvertTaskRequestTargetsVideo() = default;
};
class CreateMediaConvertTaskRequestTargets : public Darabonba::Model {
public:
  shared_ptr<CreateMediaConvertTaskRequestTargetsAudio> audio{};
  shared_ptr<string> container{};
  shared_ptr<CreateMediaConvertTaskRequestTargetsImage> image{};
  shared_ptr<PresetReference> preset{};
  shared_ptr<CreateMediaConvertTaskRequestTargetsSegment> segment{};
  shared_ptr<double> speed{};
  shared_ptr<CreateMediaConvertTaskRequestTargetsSubtitle> subtitle{};
  shared_ptr<string> URI{};
  shared_ptr<CreateMediaConvertTaskRequestTargetsVideo> video{};

  CreateMediaConvertTaskRequestTargets() {}

  explicit CreateMediaConvertTaskRequestTargets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audio) {
      res["Audio"] = audio ? boost::any(audio->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (container) {
      res["Container"] = boost::any(*container);
    }
    if (image) {
      res["Image"] = image ? boost::any(image->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (preset) {
      res["Preset"] = preset ? boost::any(preset->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (segment) {
      res["Segment"] = segment ? boost::any(segment->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (subtitle) {
      res["Subtitle"] = subtitle ? boost::any(subtitle->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    if (video) {
      res["Video"] = video ? boost::any(video->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Audio") != m.end() && !m["Audio"].empty()) {
      if (typeid(map<string, boost::any>) == m["Audio"].type()) {
        CreateMediaConvertTaskRequestTargetsAudio model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Audio"]));
        audio = make_shared<CreateMediaConvertTaskRequestTargetsAudio>(model1);
      }
    }
    if (m.find("Container") != m.end() && !m["Container"].empty()) {
      container = make_shared<string>(boost::any_cast<string>(m["Container"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      if (typeid(map<string, boost::any>) == m["Image"].type()) {
        CreateMediaConvertTaskRequestTargetsImage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Image"]));
        image = make_shared<CreateMediaConvertTaskRequestTargetsImage>(model1);
      }
    }
    if (m.find("Preset") != m.end() && !m["Preset"].empty()) {
      if (typeid(map<string, boost::any>) == m["Preset"].type()) {
        PresetReference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Preset"]));
        preset = make_shared<PresetReference>(model1);
      }
    }
    if (m.find("Segment") != m.end() && !m["Segment"].empty()) {
      if (typeid(map<string, boost::any>) == m["Segment"].type()) {
        CreateMediaConvertTaskRequestTargetsSegment model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Segment"]));
        segment = make_shared<CreateMediaConvertTaskRequestTargetsSegment>(model1);
      }
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<double>(boost::any_cast<double>(m["Speed"]));
    }
    if (m.find("Subtitle") != m.end() && !m["Subtitle"].empty()) {
      if (typeid(map<string, boost::any>) == m["Subtitle"].type()) {
        CreateMediaConvertTaskRequestTargetsSubtitle model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Subtitle"]));
        subtitle = make_shared<CreateMediaConvertTaskRequestTargetsSubtitle>(model1);
      }
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
    if (m.find("Video") != m.end() && !m["Video"].empty()) {
      if (typeid(map<string, boost::any>) == m["Video"].type()) {
        CreateMediaConvertTaskRequestTargetsVideo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Video"]));
        video = make_shared<CreateMediaConvertTaskRequestTargetsVideo>(model1);
      }
    }
  }


  virtual ~CreateMediaConvertTaskRequestTargets() = default;
};
class CreateMediaConvertTaskRequest : public Darabonba::Model {
public:
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> projectName{};
  shared_ptr<vector<CreateMediaConvertTaskRequestSources>> sources{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<vector<CreateMediaConvertTaskRequestTargets>> targets{};
  shared_ptr<string> userData{};

  CreateMediaConvertTaskRequest() {}

  explicit CreateMediaConvertTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sources) {
      vector<boost::any> temp1;
      for(auto item1:*sources){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Sources"] = boost::any(temp1);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (targets) {
      vector<boost::any> temp1;
      for(auto item1:*targets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Targets"] = boost::any(temp1);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      if (typeid(vector<boost::any>) == m["Sources"].type()) {
        vector<CreateMediaConvertTaskRequestSources> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Sources"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMediaConvertTaskRequestSources model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sources = make_shared<vector<CreateMediaConvertTaskRequestSources>>(expect1);
      }
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<CreateMediaConvertTaskRequestTargets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Targets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateMediaConvertTaskRequestTargets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targets = make_shared<vector<CreateMediaConvertTaskRequestTargets>>(expect1);
      }
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateMediaConvertTaskRequest() = default;
};
class CreateMediaConvertTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> credentialConfigShrink{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sourcesShrink{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> targetsShrink{};
  shared_ptr<string> userData{};

  CreateMediaConvertTaskShrinkRequest() {}

  explicit CreateMediaConvertTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfigShrink) {
      res["CredentialConfig"] = boost::any(*credentialConfigShrink);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourcesShrink) {
      res["Sources"] = boost::any(*sourcesShrink);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (targetsShrink) {
      res["Targets"] = boost::any(*targetsShrink);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      credentialConfigShrink = make_shared<string>(boost::any_cast<string>(m["CredentialConfig"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Sources") != m.end() && !m["Sources"].empty()) {
      sourcesShrink = make_shared<string>(boost::any_cast<string>(m["Sources"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      targetsShrink = make_shared<string>(boost::any_cast<string>(m["Targets"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateMediaConvertTaskShrinkRequest() = default;
};
class CreateMediaConvertTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> eventId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateMediaConvertTaskResponseBody() {}

  explicit CreateMediaConvertTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateMediaConvertTaskResponseBody() = default;
};
class CreateMediaConvertTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateMediaConvertTaskResponseBody> body{};

  CreateMediaConvertTaskResponse() {}

  explicit CreateMediaConvertTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMediaConvertTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMediaConvertTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMediaConvertTaskResponse() = default;
};
class CreateOfficeConversionTaskRequest : public Darabonba::Model {
public:
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<long> endPage{};
  shared_ptr<bool> firstPage{};
  shared_ptr<bool> fitToHeight{};
  shared_ptr<bool> fitToWidth{};
  shared_ptr<bool> holdLineFeed{};
  shared_ptr<long> imageDPI{};
  shared_ptr<bool> longPicture{};
  shared_ptr<bool> longText{};
  shared_ptr<long> maxSheetColumn{};
  shared_ptr<long> maxSheetRow{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> pages{};
  shared_ptr<bool> paperHorizontal{};
  shared_ptr<string> paperSize{};
  shared_ptr<string> password{};
  shared_ptr<string> projectName{};
  shared_ptr<long> quality{};
  shared_ptr<long> scalePercentage{};
  shared_ptr<long> sheetCount{};
  shared_ptr<long> sheetIndex{};
  shared_ptr<bool> showComments{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> sourceURI{};
  shared_ptr<long> startPage{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> targetType{};
  shared_ptr<string> targetURI{};
  shared_ptr<string> targetURIPrefix{};
  shared_ptr<TrimPolicy> trimPolicy{};
  shared_ptr<string> userData{};

  CreateOfficeConversionTaskRequest() {}

  explicit CreateOfficeConversionTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (endPage) {
      res["EndPage"] = boost::any(*endPage);
    }
    if (firstPage) {
      res["FirstPage"] = boost::any(*firstPage);
    }
    if (fitToHeight) {
      res["FitToHeight"] = boost::any(*fitToHeight);
    }
    if (fitToWidth) {
      res["FitToWidth"] = boost::any(*fitToWidth);
    }
    if (holdLineFeed) {
      res["HoldLineFeed"] = boost::any(*holdLineFeed);
    }
    if (imageDPI) {
      res["ImageDPI"] = boost::any(*imageDPI);
    }
    if (longPicture) {
      res["LongPicture"] = boost::any(*longPicture);
    }
    if (longText) {
      res["LongText"] = boost::any(*longText);
    }
    if (maxSheetColumn) {
      res["MaxSheetColumn"] = boost::any(*maxSheetColumn);
    }
    if (maxSheetRow) {
      res["MaxSheetRow"] = boost::any(*maxSheetRow);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (pages) {
      res["Pages"] = boost::any(*pages);
    }
    if (paperHorizontal) {
      res["PaperHorizontal"] = boost::any(*paperHorizontal);
    }
    if (paperSize) {
      res["PaperSize"] = boost::any(*paperSize);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (quality) {
      res["Quality"] = boost::any(*quality);
    }
    if (scalePercentage) {
      res["ScalePercentage"] = boost::any(*scalePercentage);
    }
    if (sheetCount) {
      res["SheetCount"] = boost::any(*sheetCount);
    }
    if (sheetIndex) {
      res["SheetIndex"] = boost::any(*sheetIndex);
    }
    if (showComments) {
      res["ShowComments"] = boost::any(*showComments);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    if (startPage) {
      res["StartPage"] = boost::any(*startPage);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (targetURI) {
      res["TargetURI"] = boost::any(*targetURI);
    }
    if (targetURIPrefix) {
      res["TargetURIPrefix"] = boost::any(*targetURIPrefix);
    }
    if (trimPolicy) {
      res["TrimPolicy"] = trimPolicy ? boost::any(trimPolicy->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("EndPage") != m.end() && !m["EndPage"].empty()) {
      endPage = make_shared<long>(boost::any_cast<long>(m["EndPage"]));
    }
    if (m.find("FirstPage") != m.end() && !m["FirstPage"].empty()) {
      firstPage = make_shared<bool>(boost::any_cast<bool>(m["FirstPage"]));
    }
    if (m.find("FitToHeight") != m.end() && !m["FitToHeight"].empty()) {
      fitToHeight = make_shared<bool>(boost::any_cast<bool>(m["FitToHeight"]));
    }
    if (m.find("FitToWidth") != m.end() && !m["FitToWidth"].empty()) {
      fitToWidth = make_shared<bool>(boost::any_cast<bool>(m["FitToWidth"]));
    }
    if (m.find("HoldLineFeed") != m.end() && !m["HoldLineFeed"].empty()) {
      holdLineFeed = make_shared<bool>(boost::any_cast<bool>(m["HoldLineFeed"]));
    }
    if (m.find("ImageDPI") != m.end() && !m["ImageDPI"].empty()) {
      imageDPI = make_shared<long>(boost::any_cast<long>(m["ImageDPI"]));
    }
    if (m.find("LongPicture") != m.end() && !m["LongPicture"].empty()) {
      longPicture = make_shared<bool>(boost::any_cast<bool>(m["LongPicture"]));
    }
    if (m.find("LongText") != m.end() && !m["LongText"].empty()) {
      longText = make_shared<bool>(boost::any_cast<bool>(m["LongText"]));
    }
    if (m.find("MaxSheetColumn") != m.end() && !m["MaxSheetColumn"].empty()) {
      maxSheetColumn = make_shared<long>(boost::any_cast<long>(m["MaxSheetColumn"]));
    }
    if (m.find("MaxSheetRow") != m.end() && !m["MaxSheetRow"].empty()) {
      maxSheetRow = make_shared<long>(boost::any_cast<long>(m["MaxSheetRow"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("Pages") != m.end() && !m["Pages"].empty()) {
      pages = make_shared<string>(boost::any_cast<string>(m["Pages"]));
    }
    if (m.find("PaperHorizontal") != m.end() && !m["PaperHorizontal"].empty()) {
      paperHorizontal = make_shared<bool>(boost::any_cast<bool>(m["PaperHorizontal"]));
    }
    if (m.find("PaperSize") != m.end() && !m["PaperSize"].empty()) {
      paperSize = make_shared<string>(boost::any_cast<string>(m["PaperSize"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Quality") != m.end() && !m["Quality"].empty()) {
      quality = make_shared<long>(boost::any_cast<long>(m["Quality"]));
    }
    if (m.find("ScalePercentage") != m.end() && !m["ScalePercentage"].empty()) {
      scalePercentage = make_shared<long>(boost::any_cast<long>(m["ScalePercentage"]));
    }
    if (m.find("SheetCount") != m.end() && !m["SheetCount"].empty()) {
      sheetCount = make_shared<long>(boost::any_cast<long>(m["SheetCount"]));
    }
    if (m.find("SheetIndex") != m.end() && !m["SheetIndex"].empty()) {
      sheetIndex = make_shared<long>(boost::any_cast<long>(m["SheetIndex"]));
    }
    if (m.find("ShowComments") != m.end() && !m["ShowComments"].empty()) {
      showComments = make_shared<bool>(boost::any_cast<bool>(m["ShowComments"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
    if (m.find("StartPage") != m.end() && !m["StartPage"].empty()) {
      startPage = make_shared<long>(boost::any_cast<long>(m["StartPage"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("TargetURI") != m.end() && !m["TargetURI"].empty()) {
      targetURI = make_shared<string>(boost::any_cast<string>(m["TargetURI"]));
    }
    if (m.find("TargetURIPrefix") != m.end() && !m["TargetURIPrefix"].empty()) {
      targetURIPrefix = make_shared<string>(boost::any_cast<string>(m["TargetURIPrefix"]));
    }
    if (m.find("TrimPolicy") != m.end() && !m["TrimPolicy"].empty()) {
      if (typeid(map<string, boost::any>) == m["TrimPolicy"].type()) {
        TrimPolicy model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TrimPolicy"]));
        trimPolicy = make_shared<TrimPolicy>(model1);
      }
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateOfficeConversionTaskRequest() = default;
};
class CreateOfficeConversionTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> credentialConfigShrink{};
  shared_ptr<long> endPage{};
  shared_ptr<bool> firstPage{};
  shared_ptr<bool> fitToHeight{};
  shared_ptr<bool> fitToWidth{};
  shared_ptr<bool> holdLineFeed{};
  shared_ptr<long> imageDPI{};
  shared_ptr<bool> longPicture{};
  shared_ptr<bool> longText{};
  shared_ptr<long> maxSheetColumn{};
  shared_ptr<long> maxSheetRow{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> pages{};
  shared_ptr<bool> paperHorizontal{};
  shared_ptr<string> paperSize{};
  shared_ptr<string> password{};
  shared_ptr<string> projectName{};
  shared_ptr<long> quality{};
  shared_ptr<long> scalePercentage{};
  shared_ptr<long> sheetCount{};
  shared_ptr<long> sheetIndex{};
  shared_ptr<bool> showComments{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> sourceURI{};
  shared_ptr<long> startPage{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> targetType{};
  shared_ptr<string> targetURI{};
  shared_ptr<string> targetURIPrefix{};
  shared_ptr<string> trimPolicyShrink{};
  shared_ptr<string> userData{};

  CreateOfficeConversionTaskShrinkRequest() {}

  explicit CreateOfficeConversionTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfigShrink) {
      res["CredentialConfig"] = boost::any(*credentialConfigShrink);
    }
    if (endPage) {
      res["EndPage"] = boost::any(*endPage);
    }
    if (firstPage) {
      res["FirstPage"] = boost::any(*firstPage);
    }
    if (fitToHeight) {
      res["FitToHeight"] = boost::any(*fitToHeight);
    }
    if (fitToWidth) {
      res["FitToWidth"] = boost::any(*fitToWidth);
    }
    if (holdLineFeed) {
      res["HoldLineFeed"] = boost::any(*holdLineFeed);
    }
    if (imageDPI) {
      res["ImageDPI"] = boost::any(*imageDPI);
    }
    if (longPicture) {
      res["LongPicture"] = boost::any(*longPicture);
    }
    if (longText) {
      res["LongText"] = boost::any(*longText);
    }
    if (maxSheetColumn) {
      res["MaxSheetColumn"] = boost::any(*maxSheetColumn);
    }
    if (maxSheetRow) {
      res["MaxSheetRow"] = boost::any(*maxSheetRow);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (pages) {
      res["Pages"] = boost::any(*pages);
    }
    if (paperHorizontal) {
      res["PaperHorizontal"] = boost::any(*paperHorizontal);
    }
    if (paperSize) {
      res["PaperSize"] = boost::any(*paperSize);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (quality) {
      res["Quality"] = boost::any(*quality);
    }
    if (scalePercentage) {
      res["ScalePercentage"] = boost::any(*scalePercentage);
    }
    if (sheetCount) {
      res["SheetCount"] = boost::any(*sheetCount);
    }
    if (sheetIndex) {
      res["SheetIndex"] = boost::any(*sheetIndex);
    }
    if (showComments) {
      res["ShowComments"] = boost::any(*showComments);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    if (startPage) {
      res["StartPage"] = boost::any(*startPage);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (targetType) {
      res["TargetType"] = boost::any(*targetType);
    }
    if (targetURI) {
      res["TargetURI"] = boost::any(*targetURI);
    }
    if (targetURIPrefix) {
      res["TargetURIPrefix"] = boost::any(*targetURIPrefix);
    }
    if (trimPolicyShrink) {
      res["TrimPolicy"] = boost::any(*trimPolicyShrink);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      credentialConfigShrink = make_shared<string>(boost::any_cast<string>(m["CredentialConfig"]));
    }
    if (m.find("EndPage") != m.end() && !m["EndPage"].empty()) {
      endPage = make_shared<long>(boost::any_cast<long>(m["EndPage"]));
    }
    if (m.find("FirstPage") != m.end() && !m["FirstPage"].empty()) {
      firstPage = make_shared<bool>(boost::any_cast<bool>(m["FirstPage"]));
    }
    if (m.find("FitToHeight") != m.end() && !m["FitToHeight"].empty()) {
      fitToHeight = make_shared<bool>(boost::any_cast<bool>(m["FitToHeight"]));
    }
    if (m.find("FitToWidth") != m.end() && !m["FitToWidth"].empty()) {
      fitToWidth = make_shared<bool>(boost::any_cast<bool>(m["FitToWidth"]));
    }
    if (m.find("HoldLineFeed") != m.end() && !m["HoldLineFeed"].empty()) {
      holdLineFeed = make_shared<bool>(boost::any_cast<bool>(m["HoldLineFeed"]));
    }
    if (m.find("ImageDPI") != m.end() && !m["ImageDPI"].empty()) {
      imageDPI = make_shared<long>(boost::any_cast<long>(m["ImageDPI"]));
    }
    if (m.find("LongPicture") != m.end() && !m["LongPicture"].empty()) {
      longPicture = make_shared<bool>(boost::any_cast<bool>(m["LongPicture"]));
    }
    if (m.find("LongText") != m.end() && !m["LongText"].empty()) {
      longText = make_shared<bool>(boost::any_cast<bool>(m["LongText"]));
    }
    if (m.find("MaxSheetColumn") != m.end() && !m["MaxSheetColumn"].empty()) {
      maxSheetColumn = make_shared<long>(boost::any_cast<long>(m["MaxSheetColumn"]));
    }
    if (m.find("MaxSheetRow") != m.end() && !m["MaxSheetRow"].empty()) {
      maxSheetRow = make_shared<long>(boost::any_cast<long>(m["MaxSheetRow"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("Pages") != m.end() && !m["Pages"].empty()) {
      pages = make_shared<string>(boost::any_cast<string>(m["Pages"]));
    }
    if (m.find("PaperHorizontal") != m.end() && !m["PaperHorizontal"].empty()) {
      paperHorizontal = make_shared<bool>(boost::any_cast<bool>(m["PaperHorizontal"]));
    }
    if (m.find("PaperSize") != m.end() && !m["PaperSize"].empty()) {
      paperSize = make_shared<string>(boost::any_cast<string>(m["PaperSize"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Quality") != m.end() && !m["Quality"].empty()) {
      quality = make_shared<long>(boost::any_cast<long>(m["Quality"]));
    }
    if (m.find("ScalePercentage") != m.end() && !m["ScalePercentage"].empty()) {
      scalePercentage = make_shared<long>(boost::any_cast<long>(m["ScalePercentage"]));
    }
    if (m.find("SheetCount") != m.end() && !m["SheetCount"].empty()) {
      sheetCount = make_shared<long>(boost::any_cast<long>(m["SheetCount"]));
    }
    if (m.find("SheetIndex") != m.end() && !m["SheetIndex"].empty()) {
      sheetIndex = make_shared<long>(boost::any_cast<long>(m["SheetIndex"]));
    }
    if (m.find("ShowComments") != m.end() && !m["ShowComments"].empty()) {
      showComments = make_shared<bool>(boost::any_cast<bool>(m["ShowComments"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
    if (m.find("StartPage") != m.end() && !m["StartPage"].empty()) {
      startPage = make_shared<long>(boost::any_cast<long>(m["StartPage"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("TargetType") != m.end() && !m["TargetType"].empty()) {
      targetType = make_shared<string>(boost::any_cast<string>(m["TargetType"]));
    }
    if (m.find("TargetURI") != m.end() && !m["TargetURI"].empty()) {
      targetURI = make_shared<string>(boost::any_cast<string>(m["TargetURI"]));
    }
    if (m.find("TargetURIPrefix") != m.end() && !m["TargetURIPrefix"].empty()) {
      targetURIPrefix = make_shared<string>(boost::any_cast<string>(m["TargetURIPrefix"]));
    }
    if (m.find("TrimPolicy") != m.end() && !m["TrimPolicy"].empty()) {
      trimPolicyShrink = make_shared<string>(boost::any_cast<string>(m["TrimPolicy"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateOfficeConversionTaskShrinkRequest() = default;
};
class CreateOfficeConversionTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> eventId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateOfficeConversionTaskResponseBody() {}

  explicit CreateOfficeConversionTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateOfficeConversionTaskResponseBody() = default;
};
class CreateOfficeConversionTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateOfficeConversionTaskResponseBody> body{};

  CreateOfficeConversionTaskResponse() {}

  explicit CreateOfficeConversionTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateOfficeConversionTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateOfficeConversionTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateOfficeConversionTaskResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProjectResponseBody> body{};

  CreateProjectResponse() {}

  explicit CreateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> objectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> storyEndTime{};
  shared_ptr<string> storyName{};
  shared_ptr<string> storyStartTime{};
  shared_ptr<string> storySubType{};
  shared_ptr<string> storyType{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> userData{};

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
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
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
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> objectId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> storyEndTime{};
  shared_ptr<string> storyName{};
  shared_ptr<string> storyStartTime{};
  shared_ptr<string> storySubType{};
  shared_ptr<string> storyType{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> userData{};

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
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<CreateStoryResponseBody> body{};

  CreateStoryResponse() {}

  explicit CreateStoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateStoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateStoryResponseBody>(model1);
      }
    }
  }


  virtual ~CreateStoryResponse() = default;
};
class CreateVideoModerationTaskRequest : public Darabonba::Model {
public:
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<long> interval{};
  shared_ptr<long> maxFrames{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> reviewer{};
  shared_ptr<vector<string>> scenes{};
  shared_ptr<string> sourceURI{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<string> userData{};

  CreateVideoModerationTaskRequest() {}

  explicit CreateVideoModerationTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (maxFrames) {
      res["MaxFrames"] = boost::any(*maxFrames);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (reviewer) {
      res["Reviewer"] = boost::any(*reviewer);
    }
    if (scenes) {
      res["Scenes"] = boost::any(*scenes);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("MaxFrames") != m.end() && !m["MaxFrames"].empty()) {
      maxFrames = make_shared<long>(boost::any_cast<long>(m["MaxFrames"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Reviewer") != m.end() && !m["Reviewer"].empty()) {
      reviewer = make_shared<string>(boost::any_cast<string>(m["Reviewer"]));
    }
    if (m.find("Scenes") != m.end() && !m["Scenes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Scenes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Scenes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      scenes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateVideoModerationTaskRequest() = default;
};
class CreateVideoModerationTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> credentialConfigShrink{};
  shared_ptr<long> interval{};
  shared_ptr<long> maxFrames{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> projectName{};
  shared_ptr<string> reviewer{};
  shared_ptr<string> scenesShrink{};
  shared_ptr<string> sourceURI{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> userData{};

  CreateVideoModerationTaskShrinkRequest() {}

  explicit CreateVideoModerationTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfigShrink) {
      res["CredentialConfig"] = boost::any(*credentialConfigShrink);
    }
    if (interval) {
      res["Interval"] = boost::any(*interval);
    }
    if (maxFrames) {
      res["MaxFrames"] = boost::any(*maxFrames);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (reviewer) {
      res["Reviewer"] = boost::any(*reviewer);
    }
    if (scenesShrink) {
      res["Scenes"] = boost::any(*scenesShrink);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      credentialConfigShrink = make_shared<string>(boost::any_cast<string>(m["CredentialConfig"]));
    }
    if (m.find("Interval") != m.end() && !m["Interval"].empty()) {
      interval = make_shared<long>(boost::any_cast<long>(m["Interval"]));
    }
    if (m.find("MaxFrames") != m.end() && !m["MaxFrames"].empty()) {
      maxFrames = make_shared<long>(boost::any_cast<long>(m["MaxFrames"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Reviewer") != m.end() && !m["Reviewer"].empty()) {
      reviewer = make_shared<string>(boost::any_cast<string>(m["Reviewer"]));
    }
    if (m.find("Scenes") != m.end() && !m["Scenes"].empty()) {
      scenesShrink = make_shared<string>(boost::any_cast<string>(m["Scenes"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateVideoModerationTaskShrinkRequest() = default;
};
class CreateVideoModerationTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> eventId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateVideoModerationTaskResponseBody() {}

  explicit CreateVideoModerationTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateVideoModerationTaskResponseBody() = default;
};
class CreateVideoModerationTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVideoModerationTaskResponseBody> body{};

  CreateVideoModerationTaskResponse() {}

  explicit CreateVideoModerationTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVideoModerationTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVideoModerationTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVideoModerationTaskResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteBindingResponseBody> body{};

  DeleteBindingResponse() {}

  explicit DeleteBindingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDatasetResponseBody> body{};

  DeleteDatasetResponse() {}

  explicit DeleteDatasetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFileMetaResponseBody> body{};

  DeleteFileMetaResponse() {}

  explicit DeleteFileMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteProjectResponseBody> body{};

  DeleteProjectResponse() {}

  explicit DeleteProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteStoryResponseBody> body{};

  DeleteStoryResponse() {}

  explicit DeleteStoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteStoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteStoryResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteStoryResponse() = default;
};
class DetachOSSBucketRequest : public Darabonba::Model {
public:
  shared_ptr<string> OSSBucket{};

  DetachOSSBucketRequest() {}

  explicit DetachOSSBucketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (OSSBucket) {
      res["OSSBucket"] = boost::any(*OSSBucket);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OSSBucket") != m.end() && !m["OSSBucket"].empty()) {
      OSSBucket = make_shared<string>(boost::any_cast<string>(m["OSSBucket"]));
    }
  }


  virtual ~DetachOSSBucketRequest() = default;
};
class DetachOSSBucketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DetachOSSBucketResponseBody() {}

  explicit DetachOSSBucketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetachOSSBucketResponseBody() = default;
};
class DetachOSSBucketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetachOSSBucketResponseBody> body{};

  DetachOSSBucketResponse() {}

  explicit DetachOSSBucketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetachOSSBucketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetachOSSBucketResponseBody>(model1);
      }
    }
  }


  virtual ~DetachOSSBucketResponse() = default;
};
class DetectImageBodiesRequest : public Darabonba::Model {
public:
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<string> projectName{};
  shared_ptr<double> sensitivity{};
  shared_ptr<string> sourceURI{};

  DetectImageBodiesRequest() {}

  explicit DetectImageBodiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sensitivity) {
      res["Sensitivity"] = boost::any(*sensitivity);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Sensitivity") != m.end() && !m["Sensitivity"].empty()) {
      sensitivity = make_shared<double>(boost::any_cast<double>(m["Sensitivity"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
  }


  virtual ~DetectImageBodiesRequest() = default;
};
class DetectImageBodiesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> credentialConfigShrink{};
  shared_ptr<string> projectName{};
  shared_ptr<double> sensitivity{};
  shared_ptr<string> sourceURI{};

  DetectImageBodiesShrinkRequest() {}

  explicit DetectImageBodiesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfigShrink) {
      res["CredentialConfig"] = boost::any(*credentialConfigShrink);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sensitivity) {
      res["Sensitivity"] = boost::any(*sensitivity);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      credentialConfigShrink = make_shared<string>(boost::any_cast<string>(m["CredentialConfig"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Sensitivity") != m.end() && !m["Sensitivity"].empty()) {
      sensitivity = make_shared<double>(boost::any_cast<double>(m["Sensitivity"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
  }


  virtual ~DetectImageBodiesShrinkRequest() = default;
};
class DetectImageBodiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Body>> bodies{};
  shared_ptr<string> requestId{};

  DetectImageBodiesResponseBody() {}

  explicit DetectImageBodiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodies) {
      vector<boost::any> temp1;
      for(auto item1:*bodies){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bodies"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bodies") != m.end() && !m["Bodies"].empty()) {
      if (typeid(vector<boost::any>) == m["Bodies"].type()) {
        vector<Body> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bodies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Body model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bodies = make_shared<vector<Body>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetectImageBodiesResponseBody() = default;
};
class DetectImageBodiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectImageBodiesResponseBody> body{};

  DetectImageBodiesResponse() {}

  explicit DetectImageBodiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectImageBodiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectImageBodiesResponseBody>(model1);
      }
    }
  }


  virtual ~DetectImageBodiesResponse() = default;
};
class DetectImageCodesRequest : public Darabonba::Model {
public:
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sourceURI{};

  DetectImageCodesRequest() {}

  explicit DetectImageCodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
  }


  virtual ~DetectImageCodesRequest() = default;
};
class DetectImageCodesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> credentialConfigShrink{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sourceURI{};

  DetectImageCodesShrinkRequest() {}

  explicit DetectImageCodesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfigShrink) {
      res["CredentialConfig"] = boost::any(*credentialConfigShrink);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      credentialConfigShrink = make_shared<string>(boost::any_cast<string>(m["CredentialConfig"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
  }


  virtual ~DetectImageCodesShrinkRequest() = default;
};
class DetectImageCodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Codes>> codes{};
  shared_ptr<string> requestId{};

  DetectImageCodesResponseBody() {}

  explicit DetectImageCodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codes) {
      vector<boost::any> temp1;
      for(auto item1:*codes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Codes"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Codes") != m.end() && !m["Codes"].empty()) {
      if (typeid(vector<boost::any>) == m["Codes"].type()) {
        vector<Codes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Codes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Codes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        codes = make_shared<vector<Codes>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetectImageCodesResponseBody() = default;
};
class DetectImageCodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectImageCodesResponseBody> body{};

  DetectImageCodesResponse() {}

  explicit DetectImageCodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectImageCodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectImageCodesResponseBody>(model1);
      }
    }
  }


  virtual ~DetectImageCodesResponse() = default;
};
class DetectImageCroppingRequest : public Darabonba::Model {
public:
  shared_ptr<string> aspectRatios{};
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sourceURI{};

  DetectImageCroppingRequest() {}

  explicit DetectImageCroppingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aspectRatios) {
      res["AspectRatios"] = boost::any(*aspectRatios);
    }
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AspectRatios") != m.end() && !m["AspectRatios"].empty()) {
      aspectRatios = make_shared<string>(boost::any_cast<string>(m["AspectRatios"]));
    }
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
  }


  virtual ~DetectImageCroppingRequest() = default;
};
class DetectImageCroppingShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> aspectRatios{};
  shared_ptr<string> credentialConfigShrink{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sourceURI{};

  DetectImageCroppingShrinkRequest() {}

  explicit DetectImageCroppingShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aspectRatios) {
      res["AspectRatios"] = boost::any(*aspectRatios);
    }
    if (credentialConfigShrink) {
      res["CredentialConfig"] = boost::any(*credentialConfigShrink);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AspectRatios") != m.end() && !m["AspectRatios"].empty()) {
      aspectRatios = make_shared<string>(boost::any_cast<string>(m["AspectRatios"]));
    }
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      credentialConfigShrink = make_shared<string>(boost::any_cast<string>(m["CredentialConfig"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
  }


  virtual ~DetectImageCroppingShrinkRequest() = default;
};
class DetectImageCroppingResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<CroppingSuggestion>> croppings{};
  shared_ptr<string> requestId{};

  DetectImageCroppingResponseBody() {}

  explicit DetectImageCroppingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (croppings) {
      vector<boost::any> temp1;
      for(auto item1:*croppings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Croppings"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Croppings") != m.end() && !m["Croppings"].empty()) {
      if (typeid(vector<boost::any>) == m["Croppings"].type()) {
        vector<CroppingSuggestion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Croppings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CroppingSuggestion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        croppings = make_shared<vector<CroppingSuggestion>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetectImageCroppingResponseBody() = default;
};
class DetectImageCroppingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectImageCroppingResponseBody> body{};

  DetectImageCroppingResponse() {}

  explicit DetectImageCroppingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectImageCroppingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectImageCroppingResponseBody>(model1);
      }
    }
  }


  virtual ~DetectImageCroppingResponse() = default;
};
class DetectImageFacesRequest : public Darabonba::Model {
public:
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sourceURI{};

  DetectImageFacesRequest() {}

  explicit DetectImageFacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
  }


  virtual ~DetectImageFacesRequest() = default;
};
class DetectImageFacesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> credentialConfigShrink{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sourceURI{};

  DetectImageFacesShrinkRequest() {}

  explicit DetectImageFacesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfigShrink) {
      res["CredentialConfig"] = boost::any(*credentialConfigShrink);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      credentialConfigShrink = make_shared<string>(boost::any_cast<string>(m["CredentialConfig"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
  }


  virtual ~DetectImageFacesShrinkRequest() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<DetectImageFacesResponseBody> body{};

  DetectImageFacesResponse() {}

  explicit DetectImageFacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<CredentialConfig> credentialConfig{};
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
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
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
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
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
class DetectImageLabelsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> credentialConfigShrink{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sourceURI{};
  shared_ptr<double> threshold{};

  DetectImageLabelsShrinkRequest() {}

  explicit DetectImageLabelsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfigShrink) {
      res["CredentialConfig"] = boost::any(*credentialConfigShrink);
    }
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
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      credentialConfigShrink = make_shared<string>(boost::any_cast<string>(m["CredentialConfig"]));
    }
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


  virtual ~DetectImageLabelsShrinkRequest() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<DetectImageLabelsResponseBody> body{};

  DetectImageLabelsResponse() {}

  explicit DetectImageLabelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sourceURI{};

  DetectImageScoreRequest() {}

  explicit DetectImageScoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
  }


  virtual ~DetectImageScoreRequest() = default;
};
class DetectImageScoreShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> credentialConfigShrink{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sourceURI{};

  DetectImageScoreShrinkRequest() {}

  explicit DetectImageScoreShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfigShrink) {
      res["CredentialConfig"] = boost::any(*credentialConfigShrink);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      credentialConfigShrink = make_shared<string>(boost::any_cast<string>(m["CredentialConfig"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
  }


  virtual ~DetectImageScoreShrinkRequest() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<DetectImageScoreResponseBody> body{};

  DetectImageScoreResponse() {}

  explicit DetectImageScoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectImageScoreResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectImageScoreResponseBody>(model1);
      }
    }
  }


  virtual ~DetectImageScoreResponse() = default;
};
class DetectTextAnomalyRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> projectName{};

  DetectTextAnomalyRequest() {}

  explicit DetectTextAnomalyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~DetectTextAnomalyRequest() = default;
};
class DetectTextAnomalyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> suggestion{};

  DetectTextAnomalyResponseBody() {}

  explicit DetectTextAnomalyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (suggestion) {
      res["Suggestion"] = boost::any(*suggestion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Suggestion") != m.end() && !m["Suggestion"].empty()) {
      suggestion = make_shared<string>(boost::any_cast<string>(m["Suggestion"]));
    }
  }


  virtual ~DetectTextAnomalyResponseBody() = default;
};
class DetectTextAnomalyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectTextAnomalyResponseBody> body{};

  DetectTextAnomalyResponse() {}

  explicit DetectTextAnomalyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectTextAnomalyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectTextAnomalyResponseBody>(model1);
      }
    }
  }


  virtual ~DetectTextAnomalyResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<FuzzyQueryResponseBody> body{};

  FuzzyQueryResponse() {}

  explicit FuzzyQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<GetBindingResponseBody> body{};

  GetBindingResponse() {}

  explicit GetBindingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<GetDatasetResponseBody> body{};

  GetDatasetResponse() {}

  explicit GetDatasetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<GetDetectVideoLabelsResultResponseBody> body{};

  GetDetectVideoLabelsResultResponse() {}

  explicit GetDetectVideoLabelsResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<GetFigureClusterResponseBody> body{};

  GetFigureClusterResponse() {}

  explicit GetFigureClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<GetFileMetaResponseBody> body{};

  GetFileMetaResponse() {}

  explicit GetFileMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFileMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFileMetaResponseBody>(model1);
      }
    }
  }


  virtual ~GetFileMetaResponse() = default;
};
class GetMediaMetaRequest : public Darabonba::Model {
public:
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sourceURI{};

  GetMediaMetaRequest() {}

  explicit GetMediaMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
  }


  virtual ~GetMediaMetaRequest() = default;
};
class GetMediaMetaShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> credentialConfigShrink{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sourceURI{};

  GetMediaMetaShrinkRequest() {}

  explicit GetMediaMetaShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfigShrink) {
      res["CredentialConfig"] = boost::any(*credentialConfigShrink);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      credentialConfigShrink = make_shared<string>(boost::any_cast<string>(m["CredentialConfig"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
  }


  virtual ~GetMediaMetaShrinkRequest() = default;
};
class GetMediaMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Address>> addresses{};
  shared_ptr<string> album{};
  shared_ptr<string> albumArtist{};
  shared_ptr<string> artist{};
  shared_ptr<vector<AudioStream>> audioStreams{};
  shared_ptr<long> bitrate{};
  shared_ptr<string> composer{};
  shared_ptr<double> duration{};
  shared_ptr<string> formatLongName{};
  shared_ptr<string> formatName{};
  shared_ptr<string> language{};
  shared_ptr<string> latLong{};
  shared_ptr<string> performer{};
  shared_ptr<string> produceTime{};
  shared_ptr<long> programCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> size{};
  shared_ptr<double> startTime{};
  shared_ptr<long> streamCount{};
  shared_ptr<vector<SubtitleStream>> subtitles{};
  shared_ptr<string> title{};
  shared_ptr<long> videoHeight{};
  shared_ptr<vector<VideoStream>> videoStreams{};
  shared_ptr<long> videoWidth{};

  GetMediaMetaResponseBody() {}

  explicit GetMediaMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (audioStreams) {
      vector<boost::any> temp1;
      for(auto item1:*audioStreams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AudioStreams"] = boost::any(temp1);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (composer) {
      res["Composer"] = boost::any(*composer);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (formatLongName) {
      res["FormatLongName"] = boost::any(*formatLongName);
    }
    if (formatName) {
      res["FormatName"] = boost::any(*formatName);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (latLong) {
      res["LatLong"] = boost::any(*latLong);
    }
    if (performer) {
      res["Performer"] = boost::any(*performer);
    }
    if (produceTime) {
      res["ProduceTime"] = boost::any(*produceTime);
    }
    if (programCount) {
      res["ProgramCount"] = boost::any(*programCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (streamCount) {
      res["StreamCount"] = boost::any(*streamCount);
    }
    if (subtitles) {
      vector<boost::any> temp1;
      for(auto item1:*subtitles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Subtitles"] = boost::any(temp1);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (videoHeight) {
      res["VideoHeight"] = boost::any(*videoHeight);
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
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
    if (m.find("Composer") != m.end() && !m["Composer"].empty()) {
      composer = make_shared<string>(boost::any_cast<string>(m["Composer"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("FormatLongName") != m.end() && !m["FormatLongName"].empty()) {
      formatLongName = make_shared<string>(boost::any_cast<string>(m["FormatLongName"]));
    }
    if (m.find("FormatName") != m.end() && !m["FormatName"].empty()) {
      formatName = make_shared<string>(boost::any_cast<string>(m["FormatName"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("LatLong") != m.end() && !m["LatLong"].empty()) {
      latLong = make_shared<string>(boost::any_cast<string>(m["LatLong"]));
    }
    if (m.find("Performer") != m.end() && !m["Performer"].empty()) {
      performer = make_shared<string>(boost::any_cast<string>(m["Performer"]));
    }
    if (m.find("ProduceTime") != m.end() && !m["ProduceTime"].empty()) {
      produceTime = make_shared<string>(boost::any_cast<string>(m["ProduceTime"]));
    }
    if (m.find("ProgramCount") != m.end() && !m["ProgramCount"].empty()) {
      programCount = make_shared<long>(boost::any_cast<long>(m["ProgramCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<double>(boost::any_cast<double>(m["StartTime"]));
    }
    if (m.find("StreamCount") != m.end() && !m["StreamCount"].empty()) {
      streamCount = make_shared<long>(boost::any_cast<long>(m["StreamCount"]));
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
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("VideoHeight") != m.end() && !m["VideoHeight"].empty()) {
      videoHeight = make_shared<long>(boost::any_cast<long>(m["VideoHeight"]));
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


  virtual ~GetMediaMetaResponseBody() = default;
};
class GetMediaMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMediaMetaResponseBody> body{};

  GetMediaMetaResponse() {}

  explicit GetMediaMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMediaMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMediaMetaResponseBody>(model1);
      }
    }
  }


  virtual ~GetMediaMetaResponse() = default;
};
class GetOSSBucketAttachmentRequest : public Darabonba::Model {
public:
  shared_ptr<string> OSSBucket{};

  GetOSSBucketAttachmentRequest() {}

  explicit GetOSSBucketAttachmentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (OSSBucket) {
      res["OSSBucket"] = boost::any(*OSSBucket);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OSSBucket") != m.end() && !m["OSSBucket"].empty()) {
      OSSBucket = make_shared<string>(boost::any_cast<string>(m["OSSBucket"]));
    }
  }


  virtual ~GetOSSBucketAttachmentRequest() = default;
};
class GetOSSBucketAttachmentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> requestId{};

  GetOSSBucketAttachmentResponseBody() {}

  explicit GetOSSBucketAttachmentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetOSSBucketAttachmentResponseBody() = default;
};
class GetOSSBucketAttachmentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOSSBucketAttachmentResponseBody> body{};

  GetOSSBucketAttachmentResponse() {}

  explicit GetOSSBucketAttachmentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOSSBucketAttachmentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOSSBucketAttachmentResponseBody>(model1);
      }
    }
  }


  virtual ~GetOSSBucketAttachmentResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<GetProjectResponseBody> body{};

  GetProjectResponse() {}

  explicit GetProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<GetStoryResponseBody> body{};

  GetStoryResponse() {}

  explicit GetStoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<map<string, boost::any>> tags{};
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
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
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
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskResponseBody> body{};

  GetTaskResponse() {}

  explicit GetTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskResponse() = default;
};
class GetVideoPlaylistRequestSourceSubtitles : public Darabonba::Model {
public:
  shared_ptr<string> language{};
  shared_ptr<string> URI{};

  GetVideoPlaylistRequestSourceSubtitles() {}

  explicit GetVideoPlaylistRequestSourceSubtitles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~GetVideoPlaylistRequestSourceSubtitles() = default;
};
class GetVideoPlaylistRequestTargetsAudioFilterAudio : public Darabonba::Model {
public:
  shared_ptr<bool> mixing{};

  GetVideoPlaylistRequestTargetsAudioFilterAudio() {}

  explicit GetVideoPlaylistRequestTargetsAudioFilterAudio(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mixing) {
      res["Mixing"] = boost::any(*mixing);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Mixing") != m.end() && !m["Mixing"].empty()) {
      mixing = make_shared<bool>(boost::any_cast<bool>(m["Mixing"]));
    }
  }


  virtual ~GetVideoPlaylistRequestTargetsAudioFilterAudio() = default;
};
class GetVideoPlaylistRequestTargetsAudioTranscodeAudio : public Darabonba::Model {
public:
  shared_ptr<long> bitrate{};
  shared_ptr<string> bitrateOption{};
  shared_ptr<long> channel{};
  shared_ptr<string> codec{};
  shared_ptr<long> quality{};
  shared_ptr<long> sampleRate{};
  shared_ptr<string> sampleRateOption{};

  GetVideoPlaylistRequestTargetsAudioTranscodeAudio() {}

  explicit GetVideoPlaylistRequestTargetsAudioTranscodeAudio(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (bitrateOption) {
      res["BitrateOption"] = boost::any(*bitrateOption);
    }
    if (channel) {
      res["Channel"] = boost::any(*channel);
    }
    if (codec) {
      res["Codec"] = boost::any(*codec);
    }
    if (quality) {
      res["Quality"] = boost::any(*quality);
    }
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    if (sampleRateOption) {
      res["SampleRateOption"] = boost::any(*sampleRateOption);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
    if (m.find("BitrateOption") != m.end() && !m["BitrateOption"].empty()) {
      bitrateOption = make_shared<string>(boost::any_cast<string>(m["BitrateOption"]));
    }
    if (m.find("Channel") != m.end() && !m["Channel"].empty()) {
      channel = make_shared<long>(boost::any_cast<long>(m["Channel"]));
    }
    if (m.find("Codec") != m.end() && !m["Codec"].empty()) {
      codec = make_shared<string>(boost::any_cast<string>(m["Codec"]));
    }
    if (m.find("Quality") != m.end() && !m["Quality"].empty()) {
      quality = make_shared<long>(boost::any_cast<long>(m["Quality"]));
    }
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<long>(boost::any_cast<long>(m["SampleRate"]));
    }
    if (m.find("SampleRateOption") != m.end() && !m["SampleRateOption"].empty()) {
      sampleRateOption = make_shared<string>(boost::any_cast<string>(m["SampleRateOption"]));
    }
  }


  virtual ~GetVideoPlaylistRequestTargetsAudioTranscodeAudio() = default;
};
class GetVideoPlaylistRequestTargetsAudio : public Darabonba::Model {
public:
  shared_ptr<bool> disableAudio{};
  shared_ptr<GetVideoPlaylistRequestTargetsAudioFilterAudio> filterAudio{};
  shared_ptr<GetVideoPlaylistRequestTargetsAudioTranscodeAudio> transcodeAudio{};

  GetVideoPlaylistRequestTargetsAudio() {}

  explicit GetVideoPlaylistRequestTargetsAudio(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disableAudio) {
      res["DisableAudio"] = boost::any(*disableAudio);
    }
    if (filterAudio) {
      res["FilterAudio"] = filterAudio ? boost::any(filterAudio->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (transcodeAudio) {
      res["TranscodeAudio"] = transcodeAudio ? boost::any(transcodeAudio->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisableAudio") != m.end() && !m["DisableAudio"].empty()) {
      disableAudio = make_shared<bool>(boost::any_cast<bool>(m["DisableAudio"]));
    }
    if (m.find("FilterAudio") != m.end() && !m["FilterAudio"].empty()) {
      if (typeid(map<string, boost::any>) == m["FilterAudio"].type()) {
        GetVideoPlaylistRequestTargetsAudioFilterAudio model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FilterAudio"]));
        filterAudio = make_shared<GetVideoPlaylistRequestTargetsAudioFilterAudio>(model1);
      }
    }
    if (m.find("TranscodeAudio") != m.end() && !m["TranscodeAudio"].empty()) {
      if (typeid(map<string, boost::any>) == m["TranscodeAudio"].type()) {
        GetVideoPlaylistRequestTargetsAudioTranscodeAudio model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TranscodeAudio"]));
        transcodeAudio = make_shared<GetVideoPlaylistRequestTargetsAudioTranscodeAudio>(model1);
      }
    }
  }


  virtual ~GetVideoPlaylistRequestTargetsAudio() = default;
};
class GetVideoPlaylistRequestTargetsSubtitleExtractSubtitle : public Darabonba::Model {
public:
  shared_ptr<string> format{};
  shared_ptr<string> URI{};

  GetVideoPlaylistRequestTargetsSubtitleExtractSubtitle() {}

  explicit GetVideoPlaylistRequestTargetsSubtitleExtractSubtitle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~GetVideoPlaylistRequestTargetsSubtitleExtractSubtitle() = default;
};
class GetVideoPlaylistRequestTargetsSubtitle : public Darabonba::Model {
public:
  shared_ptr<bool> disableSubtitle{};
  shared_ptr<GetVideoPlaylistRequestTargetsSubtitleExtractSubtitle> extractSubtitle{};

  GetVideoPlaylistRequestTargetsSubtitle() {}

  explicit GetVideoPlaylistRequestTargetsSubtitle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disableSubtitle) {
      res["DisableSubtitle"] = boost::any(*disableSubtitle);
    }
    if (extractSubtitle) {
      res["ExtractSubtitle"] = extractSubtitle ? boost::any(extractSubtitle->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisableSubtitle") != m.end() && !m["DisableSubtitle"].empty()) {
      disableSubtitle = make_shared<bool>(boost::any_cast<bool>(m["DisableSubtitle"]));
    }
    if (m.find("ExtractSubtitle") != m.end() && !m["ExtractSubtitle"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExtractSubtitle"].type()) {
        GetVideoPlaylistRequestTargetsSubtitleExtractSubtitle model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExtractSubtitle"]));
        extractSubtitle = make_shared<GetVideoPlaylistRequestTargetsSubtitleExtractSubtitle>(model1);
      }
    }
  }


  virtual ~GetVideoPlaylistRequestTargetsSubtitle() = default;
};
class GetVideoPlaylistRequestTargetsVideoFilterVideoDelogos : public Darabonba::Model {
public:
  shared_ptr<double> duration{};
  shared_ptr<double> dx{};
  shared_ptr<double> dy{};
  shared_ptr<double> height{};
  shared_ptr<string> referPos{};
  shared_ptr<double> startTime{};
  shared_ptr<double> width{};

  GetVideoPlaylistRequestTargetsVideoFilterVideoDelogos() {}

  explicit GetVideoPlaylistRequestTargetsVideoFilterVideoDelogos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (dx) {
      res["Dx"] = boost::any(*dx);
    }
    if (dy) {
      res["Dy"] = boost::any(*dy);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (referPos) {
      res["ReferPos"] = boost::any(*referPos);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("Dx") != m.end() && !m["Dx"].empty()) {
      dx = make_shared<double>(boost::any_cast<double>(m["Dx"]));
    }
    if (m.find("Dy") != m.end() && !m["Dy"].empty()) {
      dy = make_shared<double>(boost::any_cast<double>(m["Dy"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("ReferPos") != m.end() && !m["ReferPos"].empty()) {
      referPos = make_shared<string>(boost::any_cast<string>(m["ReferPos"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<double>(boost::any_cast<double>(m["StartTime"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
  }


  virtual ~GetVideoPlaylistRequestTargetsVideoFilterVideoDelogos() = default;
};
class GetVideoPlaylistRequestTargetsVideoFilterVideoWatermarks : public Darabonba::Model {
public:
  shared_ptr<long> boardWidth{};
  shared_ptr<string> borderColor{};
  shared_ptr<string> content{};
  shared_ptr<double> duration{};
  shared_ptr<double> dx{};
  shared_ptr<double> dy{};
  shared_ptr<double> fontApha{};
  shared_ptr<string> fontColor{};
  shared_ptr<string> fontName{};
  shared_ptr<long> fontSize{};
  shared_ptr<double> height{};
  shared_ptr<string> referPos{};
  shared_ptr<double> startTime{};
  shared_ptr<string> type{};
  shared_ptr<string> URI{};
  shared_ptr<double> width{};

  GetVideoPlaylistRequestTargetsVideoFilterVideoWatermarks() {}

  explicit GetVideoPlaylistRequestTargetsVideoFilterVideoWatermarks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (boardWidth) {
      res["BoardWidth"] = boost::any(*boardWidth);
    }
    if (borderColor) {
      res["BorderColor"] = boost::any(*borderColor);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (dx) {
      res["Dx"] = boost::any(*dx);
    }
    if (dy) {
      res["Dy"] = boost::any(*dy);
    }
    if (fontApha) {
      res["FontApha"] = boost::any(*fontApha);
    }
    if (fontColor) {
      res["FontColor"] = boost::any(*fontColor);
    }
    if (fontName) {
      res["FontName"] = boost::any(*fontName);
    }
    if (fontSize) {
      res["FontSize"] = boost::any(*fontSize);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (referPos) {
      res["ReferPos"] = boost::any(*referPos);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BoardWidth") != m.end() && !m["BoardWidth"].empty()) {
      boardWidth = make_shared<long>(boost::any_cast<long>(m["BoardWidth"]));
    }
    if (m.find("BorderColor") != m.end() && !m["BorderColor"].empty()) {
      borderColor = make_shared<string>(boost::any_cast<string>(m["BorderColor"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("Dx") != m.end() && !m["Dx"].empty()) {
      dx = make_shared<double>(boost::any_cast<double>(m["Dx"]));
    }
    if (m.find("Dy") != m.end() && !m["Dy"].empty()) {
      dy = make_shared<double>(boost::any_cast<double>(m["Dy"]));
    }
    if (m.find("FontApha") != m.end() && !m["FontApha"].empty()) {
      fontApha = make_shared<double>(boost::any_cast<double>(m["FontApha"]));
    }
    if (m.find("FontColor") != m.end() && !m["FontColor"].empty()) {
      fontColor = make_shared<string>(boost::any_cast<string>(m["FontColor"]));
    }
    if (m.find("FontName") != m.end() && !m["FontName"].empty()) {
      fontName = make_shared<string>(boost::any_cast<string>(m["FontName"]));
    }
    if (m.find("FontSize") != m.end() && !m["FontSize"].empty()) {
      fontSize = make_shared<long>(boost::any_cast<long>(m["FontSize"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<double>(boost::any_cast<double>(m["Height"]));
    }
    if (m.find("ReferPos") != m.end() && !m["ReferPos"].empty()) {
      referPos = make_shared<string>(boost::any_cast<string>(m["ReferPos"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<double>(boost::any_cast<double>(m["StartTime"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<double>(boost::any_cast<double>(m["Width"]));
    }
  }


  virtual ~GetVideoPlaylistRequestTargetsVideoFilterVideoWatermarks() = default;
};
class GetVideoPlaylistRequestTargetsVideoFilterVideo : public Darabonba::Model {
public:
  shared_ptr<vector<GetVideoPlaylistRequestTargetsVideoFilterVideoDelogos>> delogos{};
  shared_ptr<vector<GetVideoPlaylistRequestTargetsVideoFilterVideoWatermarks>> watermarks{};

  GetVideoPlaylistRequestTargetsVideoFilterVideo() {}

  explicit GetVideoPlaylistRequestTargetsVideoFilterVideo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delogos) {
      vector<boost::any> temp1;
      for(auto item1:*delogos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Delogos"] = boost::any(temp1);
    }
    if (watermarks) {
      vector<boost::any> temp1;
      for(auto item1:*watermarks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Watermarks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Delogos") != m.end() && !m["Delogos"].empty()) {
      if (typeid(vector<boost::any>) == m["Delogos"].type()) {
        vector<GetVideoPlaylistRequestTargetsVideoFilterVideoDelogos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Delogos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVideoPlaylistRequestTargetsVideoFilterVideoDelogos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        delogos = make_shared<vector<GetVideoPlaylistRequestTargetsVideoFilterVideoDelogos>>(expect1);
      }
    }
    if (m.find("Watermarks") != m.end() && !m["Watermarks"].empty()) {
      if (typeid(vector<boost::any>) == m["Watermarks"].type()) {
        vector<GetVideoPlaylistRequestTargetsVideoFilterVideoWatermarks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Watermarks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVideoPlaylistRequestTargetsVideoFilterVideoWatermarks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        watermarks = make_shared<vector<GetVideoPlaylistRequestTargetsVideoFilterVideoWatermarks>>(expect1);
      }
    }
  }


  virtual ~GetVideoPlaylistRequestTargetsVideoFilterVideo() = default;
};
class GetVideoPlaylistRequestTargetsVideoTranscodeVideo : public Darabonba::Model {
public:
  shared_ptr<bool> adaptiveResolutionDirection{};
  shared_ptr<long> BFrames{};
  shared_ptr<long> bitrate{};
  shared_ptr<string> bitrateOption{};
  shared_ptr<long> bufferSize{};
  shared_ptr<double> CRF{};
  shared_ptr<string> codec{};
  shared_ptr<double> frameRate{};
  shared_ptr<string> frameRateOption{};
  shared_ptr<long> GOPSize{};
  shared_ptr<long> maxBitrate{};
  shared_ptr<string> pixelFormat{};
  shared_ptr<long> refs{};
  shared_ptr<string> resolution{};
  shared_ptr<string> resolutionOption{};
  shared_ptr<long> rotation{};
  shared_ptr<string> scaleType{};

  GetVideoPlaylistRequestTargetsVideoTranscodeVideo() {}

  explicit GetVideoPlaylistRequestTargetsVideoTranscodeVideo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adaptiveResolutionDirection) {
      res["AdaptiveResolutionDirection"] = boost::any(*adaptiveResolutionDirection);
    }
    if (BFrames) {
      res["BFrames"] = boost::any(*BFrames);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (bitrateOption) {
      res["BitrateOption"] = boost::any(*bitrateOption);
    }
    if (bufferSize) {
      res["BufferSize"] = boost::any(*bufferSize);
    }
    if (CRF) {
      res["CRF"] = boost::any(*CRF);
    }
    if (codec) {
      res["Codec"] = boost::any(*codec);
    }
    if (frameRate) {
      res["FrameRate"] = boost::any(*frameRate);
    }
    if (frameRateOption) {
      res["FrameRateOption"] = boost::any(*frameRateOption);
    }
    if (GOPSize) {
      res["GOPSize"] = boost::any(*GOPSize);
    }
    if (maxBitrate) {
      res["MaxBitrate"] = boost::any(*maxBitrate);
    }
    if (pixelFormat) {
      res["PixelFormat"] = boost::any(*pixelFormat);
    }
    if (refs) {
      res["Refs"] = boost::any(*refs);
    }
    if (resolution) {
      res["Resolution"] = boost::any(*resolution);
    }
    if (resolutionOption) {
      res["ResolutionOption"] = boost::any(*resolutionOption);
    }
    if (rotation) {
      res["Rotation"] = boost::any(*rotation);
    }
    if (scaleType) {
      res["ScaleType"] = boost::any(*scaleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdaptiveResolutionDirection") != m.end() && !m["AdaptiveResolutionDirection"].empty()) {
      adaptiveResolutionDirection = make_shared<bool>(boost::any_cast<bool>(m["AdaptiveResolutionDirection"]));
    }
    if (m.find("BFrames") != m.end() && !m["BFrames"].empty()) {
      BFrames = make_shared<long>(boost::any_cast<long>(m["BFrames"]));
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
    if (m.find("BitrateOption") != m.end() && !m["BitrateOption"].empty()) {
      bitrateOption = make_shared<string>(boost::any_cast<string>(m["BitrateOption"]));
    }
    if (m.find("BufferSize") != m.end() && !m["BufferSize"].empty()) {
      bufferSize = make_shared<long>(boost::any_cast<long>(m["BufferSize"]));
    }
    if (m.find("CRF") != m.end() && !m["CRF"].empty()) {
      CRF = make_shared<double>(boost::any_cast<double>(m["CRF"]));
    }
    if (m.find("Codec") != m.end() && !m["Codec"].empty()) {
      codec = make_shared<string>(boost::any_cast<string>(m["Codec"]));
    }
    if (m.find("FrameRate") != m.end() && !m["FrameRate"].empty()) {
      frameRate = make_shared<double>(boost::any_cast<double>(m["FrameRate"]));
    }
    if (m.find("FrameRateOption") != m.end() && !m["FrameRateOption"].empty()) {
      frameRateOption = make_shared<string>(boost::any_cast<string>(m["FrameRateOption"]));
    }
    if (m.find("GOPSize") != m.end() && !m["GOPSize"].empty()) {
      GOPSize = make_shared<long>(boost::any_cast<long>(m["GOPSize"]));
    }
    if (m.find("MaxBitrate") != m.end() && !m["MaxBitrate"].empty()) {
      maxBitrate = make_shared<long>(boost::any_cast<long>(m["MaxBitrate"]));
    }
    if (m.find("PixelFormat") != m.end() && !m["PixelFormat"].empty()) {
      pixelFormat = make_shared<string>(boost::any_cast<string>(m["PixelFormat"]));
    }
    if (m.find("Refs") != m.end() && !m["Refs"].empty()) {
      refs = make_shared<long>(boost::any_cast<long>(m["Refs"]));
    }
    if (m.find("Resolution") != m.end() && !m["Resolution"].empty()) {
      resolution = make_shared<string>(boost::any_cast<string>(m["Resolution"]));
    }
    if (m.find("ResolutionOption") != m.end() && !m["ResolutionOption"].empty()) {
      resolutionOption = make_shared<string>(boost::any_cast<string>(m["ResolutionOption"]));
    }
    if (m.find("Rotation") != m.end() && !m["Rotation"].empty()) {
      rotation = make_shared<long>(boost::any_cast<long>(m["Rotation"]));
    }
    if (m.find("ScaleType") != m.end() && !m["ScaleType"].empty()) {
      scaleType = make_shared<string>(boost::any_cast<string>(m["ScaleType"]));
    }
  }


  virtual ~GetVideoPlaylistRequestTargetsVideoTranscodeVideo() = default;
};
class GetVideoPlaylistRequestTargetsVideo : public Darabonba::Model {
public:
  shared_ptr<bool> disableVideo{};
  shared_ptr<GetVideoPlaylistRequestTargetsVideoFilterVideo> filterVideo{};
  shared_ptr<GetVideoPlaylistRequestTargetsVideoTranscodeVideo> transcodeVideo{};

  GetVideoPlaylistRequestTargetsVideo() {}

  explicit GetVideoPlaylistRequestTargetsVideo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (disableVideo) {
      res["DisableVideo"] = boost::any(*disableVideo);
    }
    if (filterVideo) {
      res["FilterVideo"] = filterVideo ? boost::any(filterVideo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (transcodeVideo) {
      res["TranscodeVideo"] = transcodeVideo ? boost::any(transcodeVideo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisableVideo") != m.end() && !m["DisableVideo"].empty()) {
      disableVideo = make_shared<bool>(boost::any_cast<bool>(m["DisableVideo"]));
    }
    if (m.find("FilterVideo") != m.end() && !m["FilterVideo"].empty()) {
      if (typeid(map<string, boost::any>) == m["FilterVideo"].type()) {
        GetVideoPlaylistRequestTargetsVideoFilterVideo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FilterVideo"]));
        filterVideo = make_shared<GetVideoPlaylistRequestTargetsVideoFilterVideo>(model1);
      }
    }
    if (m.find("TranscodeVideo") != m.end() && !m["TranscodeVideo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TranscodeVideo"].type()) {
        GetVideoPlaylistRequestTargetsVideoTranscodeVideo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TranscodeVideo"]));
        transcodeVideo = make_shared<GetVideoPlaylistRequestTargetsVideoTranscodeVideo>(model1);
      }
    }
  }


  virtual ~GetVideoPlaylistRequestTargetsVideo() = default;
};
class GetVideoPlaylistRequestTargets : public Darabonba::Model {
public:
  shared_ptr<GetVideoPlaylistRequestTargetsAudio> audio{};
  shared_ptr<double> duration{};
  shared_ptr<vector<double>> initialSegments{};
  shared_ptr<double> initialTranscode{};
  shared_ptr<PresetReference> presetId{};
  shared_ptr<double> speed{};
  shared_ptr<GetVideoPlaylistRequestTargetsSubtitle> subtitle{};
  shared_ptr<long> transcodeAhead{};
  shared_ptr<string> URI{};
  shared_ptr<GetVideoPlaylistRequestTargetsVideo> video{};

  GetVideoPlaylistRequestTargets() {}

  explicit GetVideoPlaylistRequestTargets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audio) {
      res["Audio"] = audio ? boost::any(audio->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (initialSegments) {
      res["InitialSegments"] = boost::any(*initialSegments);
    }
    if (initialTranscode) {
      res["InitialTranscode"] = boost::any(*initialTranscode);
    }
    if (presetId) {
      res["PresetId"] = presetId ? boost::any(presetId->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    if (subtitle) {
      res["Subtitle"] = subtitle ? boost::any(subtitle->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (transcodeAhead) {
      res["TranscodeAhead"] = boost::any(*transcodeAhead);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    if (video) {
      res["Video"] = video ? boost::any(video->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Audio") != m.end() && !m["Audio"].empty()) {
      if (typeid(map<string, boost::any>) == m["Audio"].type()) {
        GetVideoPlaylistRequestTargetsAudio model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Audio"]));
        audio = make_shared<GetVideoPlaylistRequestTargetsAudio>(model1);
      }
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("InitialSegments") != m.end() && !m["InitialSegments"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["InitialSegments"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["InitialSegments"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      initialSegments = make_shared<vector<double>>(toVec1);
    }
    if (m.find("InitialTranscode") != m.end() && !m["InitialTranscode"].empty()) {
      initialTranscode = make_shared<double>(boost::any_cast<double>(m["InitialTranscode"]));
    }
    if (m.find("PresetId") != m.end() && !m["PresetId"].empty()) {
      if (typeid(map<string, boost::any>) == m["PresetId"].type()) {
        PresetReference model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PresetId"]));
        presetId = make_shared<PresetReference>(model1);
      }
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<double>(boost::any_cast<double>(m["Speed"]));
    }
    if (m.find("Subtitle") != m.end() && !m["Subtitle"].empty()) {
      if (typeid(map<string, boost::any>) == m["Subtitle"].type()) {
        GetVideoPlaylistRequestTargetsSubtitle model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Subtitle"]));
        subtitle = make_shared<GetVideoPlaylistRequestTargetsSubtitle>(model1);
      }
    }
    if (m.find("TranscodeAhead") != m.end() && !m["TranscodeAhead"].empty()) {
      transcodeAhead = make_shared<long>(boost::any_cast<long>(m["TranscodeAhead"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
    if (m.find("Video") != m.end() && !m["Video"].empty()) {
      if (typeid(map<string, boost::any>) == m["Video"].type()) {
        GetVideoPlaylistRequestTargetsVideo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Video"]));
        video = make_shared<GetVideoPlaylistRequestTargetsVideo>(model1);
      }
    }
  }


  virtual ~GetVideoPlaylistRequestTargets() = default;
};
class GetVideoPlaylistRequest : public Darabonba::Model {
public:
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<string> masterURI{};
  shared_ptr<string> projectName{};
  shared_ptr<double> sourceDuration{};
  shared_ptr<double> sourceStartTime{};
  shared_ptr<vector<GetVideoPlaylistRequestSourceSubtitles>> sourceSubtitles{};
  shared_ptr<string> sourceURI{};
  shared_ptr<map<string, boost::any>> tags{};
  shared_ptr<vector<GetVideoPlaylistRequestTargets>> targets{};

  GetVideoPlaylistRequest() {}

  explicit GetVideoPlaylistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (masterURI) {
      res["MasterURI"] = boost::any(*masterURI);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourceDuration) {
      res["SourceDuration"] = boost::any(*sourceDuration);
    }
    if (sourceStartTime) {
      res["SourceStartTime"] = boost::any(*sourceStartTime);
    }
    if (sourceSubtitles) {
      vector<boost::any> temp1;
      for(auto item1:*sourceSubtitles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SourceSubtitles"] = boost::any(temp1);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (targets) {
      vector<boost::any> temp1;
      for(auto item1:*targets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Targets"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("MasterURI") != m.end() && !m["MasterURI"].empty()) {
      masterURI = make_shared<string>(boost::any_cast<string>(m["MasterURI"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("SourceDuration") != m.end() && !m["SourceDuration"].empty()) {
      sourceDuration = make_shared<double>(boost::any_cast<double>(m["SourceDuration"]));
    }
    if (m.find("SourceStartTime") != m.end() && !m["SourceStartTime"].empty()) {
      sourceStartTime = make_shared<double>(boost::any_cast<double>(m["SourceStartTime"]));
    }
    if (m.find("SourceSubtitles") != m.end() && !m["SourceSubtitles"].empty()) {
      if (typeid(vector<boost::any>) == m["SourceSubtitles"].type()) {
        vector<GetVideoPlaylistRequestSourceSubtitles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SourceSubtitles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVideoPlaylistRequestSourceSubtitles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sourceSubtitles = make_shared<vector<GetVideoPlaylistRequestSourceSubtitles>>(expect1);
      }
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Tags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      tags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      if (typeid(vector<boost::any>) == m["Targets"].type()) {
        vector<GetVideoPlaylistRequestTargets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Targets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVideoPlaylistRequestTargets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targets = make_shared<vector<GetVideoPlaylistRequestTargets>>(expect1);
      }
    }
  }


  virtual ~GetVideoPlaylistRequest() = default;
};
class GetVideoPlaylistShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> credentialConfigShrink{};
  shared_ptr<string> masterURI{};
  shared_ptr<string> projectName{};
  shared_ptr<double> sourceDuration{};
  shared_ptr<double> sourceStartTime{};
  shared_ptr<string> sourceSubtitlesShrink{};
  shared_ptr<string> sourceURI{};
  shared_ptr<string> tagsShrink{};
  shared_ptr<string> targetsShrink{};

  GetVideoPlaylistShrinkRequest() {}

  explicit GetVideoPlaylistShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfigShrink) {
      res["CredentialConfig"] = boost::any(*credentialConfigShrink);
    }
    if (masterURI) {
      res["MasterURI"] = boost::any(*masterURI);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourceDuration) {
      res["SourceDuration"] = boost::any(*sourceDuration);
    }
    if (sourceStartTime) {
      res["SourceStartTime"] = boost::any(*sourceStartTime);
    }
    if (sourceSubtitlesShrink) {
      res["SourceSubtitles"] = boost::any(*sourceSubtitlesShrink);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    if (targetsShrink) {
      res["Targets"] = boost::any(*targetsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      credentialConfigShrink = make_shared<string>(boost::any_cast<string>(m["CredentialConfig"]));
    }
    if (m.find("MasterURI") != m.end() && !m["MasterURI"].empty()) {
      masterURI = make_shared<string>(boost::any_cast<string>(m["MasterURI"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("SourceDuration") != m.end() && !m["SourceDuration"].empty()) {
      sourceDuration = make_shared<double>(boost::any_cast<double>(m["SourceDuration"]));
    }
    if (m.find("SourceStartTime") != m.end() && !m["SourceStartTime"].empty()) {
      sourceStartTime = make_shared<double>(boost::any_cast<double>(m["SourceStartTime"]));
    }
    if (m.find("SourceSubtitles") != m.end() && !m["SourceSubtitles"].empty()) {
      sourceSubtitlesShrink = make_shared<string>(boost::any_cast<string>(m["SourceSubtitles"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("Targets") != m.end() && !m["Targets"].empty()) {
      targetsShrink = make_shared<string>(boost::any_cast<string>(m["Targets"]));
    }
  }


  virtual ~GetVideoPlaylistShrinkRequest() = default;
};
class GetVideoPlaylistResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> signedURL{};
  shared_ptr<string> token{};
  shared_ptr<string> URI{};

  GetVideoPlaylistResponseBody() {}

  explicit GetVideoPlaylistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (signedURL) {
      res["SignedURL"] = boost::any(*signedURL);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SignedURL") != m.end() && !m["SignedURL"].empty()) {
      signedURL = make_shared<string>(boost::any_cast<string>(m["SignedURL"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~GetVideoPlaylistResponseBody() = default;
};
class GetVideoPlaylistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVideoPlaylistResponseBody> body{};

  GetVideoPlaylistResponse() {}

  explicit GetVideoPlaylistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVideoPlaylistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVideoPlaylistResponseBody>(model1);
      }
    }
  }


  virtual ~GetVideoPlaylistResponse() = default;
};
class GetWebofficeURLRequest : public Darabonba::Model {
public:
  shared_ptr<bool> cachePreview{};
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<bool> externalUploaded{};
  shared_ptr<string> filename{};
  shared_ptr<bool> hidecmb{};
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
    if (cachePreview) {
      res["CachePreview"] = boost::any(*cachePreview);
    }
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("CachePreview") != m.end() && !m["CachePreview"].empty()) {
      cachePreview = make_shared<bool>(boost::any_cast<bool>(m["CachePreview"]));
    }
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
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
  shared_ptr<bool> cachePreview{};
  shared_ptr<string> credentialConfigShrink{};
  shared_ptr<bool> externalUploaded{};
  shared_ptr<string> filename{};
  shared_ptr<bool> hidecmb{};
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
    if (cachePreview) {
      res["CachePreview"] = boost::any(*cachePreview);
    }
    if (credentialConfigShrink) {
      res["CredentialConfig"] = boost::any(*credentialConfigShrink);
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
    if (m.find("CachePreview") != m.end() && !m["CachePreview"].empty()) {
      cachePreview = make_shared<bool>(boost::any_cast<bool>(m["CachePreview"]));
    }
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      credentialConfigShrink = make_shared<string>(boost::any_cast<string>(m["CredentialConfig"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<GetWebofficeURLResponseBody> body{};

  GetWebofficeURLResponse() {}

  explicit GetWebofficeURLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<IndexFileMetaResponseBody> body{};

  IndexFileMetaResponse() {}

  explicit IndexFileMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<ListBindingsResponseBody> body{};

  ListBindingsResponse() {}

  explicit ListBindingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<ListDatasetsResponseBody> body{};

  ListDatasetsResponse() {}

  explicit ListDatasetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<ListProjectsResponseBody> body{};

  ListProjectsResponse() {}

  explicit ListProjectsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProjectsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProjectsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProjectsResponse() = default;
};
class ListRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> acceptLanguage{};

  ListRegionsRequest() {}

  explicit ListRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptLanguage) {
      res["AcceptLanguage"] = boost::any(*acceptLanguage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptLanguage") != m.end() && !m["AcceptLanguage"].empty()) {
      acceptLanguage = make_shared<string>(boost::any_cast<string>(m["AcceptLanguage"]));
    }
  }


  virtual ~ListRegionsRequest() = default;
};
class ListRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<RegionType>> regions{};
  shared_ptr<string> requestId{};

  ListRegionsResponseBody() {}

  explicit ListRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      vector<boost::any> temp1;
      for(auto item1:*regions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Regions"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(vector<boost::any>) == m["Regions"].type()) {
        vector<RegionType> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Regions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RegionType model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        regions = make_shared<vector<RegionType>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListRegionsResponseBody() = default;
};
class ListRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListRegionsResponseBody> body{};

  ListRegionsResponse() {}

  explicit ListRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListRegionsResponse() = default;
};
class ListTasksRequest : public Darabonba::Model {
public:
  shared_ptr<TimeRange> endTimeRange{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> order{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sort{};
  shared_ptr<TimeRange> startTimeRange{};
  shared_ptr<string> status{};
  shared_ptr<string> tagSelector{};
  shared_ptr<vector<string>> taskTypes{};

  ListTasksRequest() {}

  explicit ListTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTimeRange) {
      res["EndTimeRange"] = endTimeRange ? boost::any(endTimeRange->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (startTimeRange) {
      res["StartTimeRange"] = startTimeRange ? boost::any(startTimeRange->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagSelector) {
      res["TagSelector"] = boost::any(*tagSelector);
    }
    if (taskTypes) {
      res["TaskTypes"] = boost::any(*taskTypes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTimeRange") != m.end() && !m["EndTimeRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["EndTimeRange"].type()) {
        TimeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EndTimeRange"]));
        endTimeRange = make_shared<TimeRange>(model1);
      }
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
    if (m.find("StartTimeRange") != m.end() && !m["StartTimeRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["StartTimeRange"].type()) {
        TimeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StartTimeRange"]));
        startTimeRange = make_shared<TimeRange>(model1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TagSelector") != m.end() && !m["TagSelector"].empty()) {
      tagSelector = make_shared<string>(boost::any_cast<string>(m["TagSelector"]));
    }
    if (m.find("TaskTypes") != m.end() && !m["TaskTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TaskTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TaskTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      taskTypes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTasksRequest() = default;
};
class ListTasksShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTimeRangeShrink{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> order{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sort{};
  shared_ptr<string> startTimeRangeShrink{};
  shared_ptr<string> status{};
  shared_ptr<string> tagSelector{};
  shared_ptr<string> taskTypesShrink{};

  ListTasksShrinkRequest() {}

  explicit ListTasksShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTimeRangeShrink) {
      res["EndTimeRange"] = boost::any(*endTimeRangeShrink);
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
    if (startTimeRangeShrink) {
      res["StartTimeRange"] = boost::any(*startTimeRangeShrink);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tagSelector) {
      res["TagSelector"] = boost::any(*tagSelector);
    }
    if (taskTypesShrink) {
      res["TaskTypes"] = boost::any(*taskTypesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTimeRange") != m.end() && !m["EndTimeRange"].empty()) {
      endTimeRangeShrink = make_shared<string>(boost::any_cast<string>(m["EndTimeRange"]));
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
    if (m.find("StartTimeRange") != m.end() && !m["StartTimeRange"].empty()) {
      startTimeRangeShrink = make_shared<string>(boost::any_cast<string>(m["StartTimeRange"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TagSelector") != m.end() && !m["TagSelector"].empty()) {
      tagSelector = make_shared<string>(boost::any_cast<string>(m["TagSelector"]));
    }
    if (m.find("TaskTypes") != m.end() && !m["TaskTypes"].empty()) {
      taskTypesShrink = make_shared<string>(boost::any_cast<string>(m["TaskTypes"]));
    }
  }


  virtual ~ListTasksShrinkRequest() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<ListTasksResponseBody> body{};

  ListTasksResponse() {}

  explicit ListTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListTasksResponse() = default;
};
class LiveTranscodingRequest : public Darabonba::Model {
public:
  shared_ptr<CredentialConfig> credentialConfig{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sourceURI{};
  shared_ptr<string> token{};

  LiveTranscodingRequest() {}

  explicit LiveTranscodingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
      }
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~LiveTranscodingRequest() = default;
};
class LiveTranscodingShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> credentialConfigShrink{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sourceURI{};
  shared_ptr<string> token{};

  LiveTranscodingShrinkRequest() {}

  explicit LiveTranscodingShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (credentialConfigShrink) {
      res["CredentialConfig"] = boost::any(*credentialConfigShrink);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sourceURI) {
      res["SourceURI"] = boost::any(*sourceURI);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      credentialConfigShrink = make_shared<string>(boost::any_cast<string>(m["CredentialConfig"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("SourceURI") != m.end() && !m["SourceURI"].empty()) {
      sourceURI = make_shared<string>(boost::any_cast<string>(m["SourceURI"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~LiveTranscodingShrinkRequest() = default;
};
class LiveTranscodingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> signedURL{};
  shared_ptr<string> URI{};

  LiveTranscodingResponseBody() {}

  explicit LiveTranscodingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (signedURL) {
      res["SignedURL"] = boost::any(*signedURL);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SignedURL") != m.end() && !m["SignedURL"].empty()) {
      signedURL = make_shared<string>(boost::any_cast<string>(m["SignedURL"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~LiveTranscodingResponseBody() = default;
};
class LiveTranscodingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LiveTranscodingResponseBody> body{};

  LiveTranscodingResponse() {}

  explicit LiveTranscodingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LiveTranscodingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LiveTranscodingResponseBody>(model1);
      }
    }
  }


  virtual ~LiveTranscodingResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<MergeFigureClustersResponseBody> body{};

  MergeFigureClustersResponse() {}

  explicit MergeFigureClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<TimeRange> createTimeRange{};
  shared_ptr<string> customLabels{};
  shared_ptr<string> datasetName{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> order{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sort{};
  shared_ptr<TimeRange> updateTimeRange{};

  QueryFigureClustersRequest() {}

  explicit QueryFigureClustersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (updateTimeRange) {
      res["UpdateTimeRange"] = updateTimeRange ? boost::any(updateTimeRange->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("UpdateTimeRange") != m.end() && !m["UpdateTimeRange"].empty()) {
      if (typeid(map<string, boost::any>) == m["UpdateTimeRange"].type()) {
        TimeRange model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UpdateTimeRange"]));
        updateTimeRange = make_shared<TimeRange>(model1);
      }
    }
  }


  virtual ~QueryFigureClustersRequest() = default;
};
class QueryFigureClustersShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> createTimeRangeShrink{};
  shared_ptr<string> customLabels{};
  shared_ptr<string> datasetName{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> order{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sort{};
  shared_ptr<string> updateTimeRangeShrink{};

  QueryFigureClustersShrinkRequest() {}

  explicit QueryFigureClustersShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (updateTimeRangeShrink) {
      res["UpdateTimeRange"] = boost::any(*updateTimeRangeShrink);
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
    if (m.find("UpdateTimeRange") != m.end() && !m["UpdateTimeRange"].empty()) {
      updateTimeRangeShrink = make_shared<string>(boost::any_cast<string>(m["UpdateTimeRange"]));
    }
  }


  virtual ~QueryFigureClustersShrinkRequest() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<QueryFigureClustersResponseBody> body{};

  QueryFigureClustersResponse() {}

  explicit QueryFigureClustersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> order{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sort{};
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
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
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
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
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
  shared_ptr<string> order{};
  shared_ptr<string> projectName{};
  shared_ptr<string> sort{};
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
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
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
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<QueryStoriesResponseBody> body{};

  QueryStoriesResponse() {}

  explicit QueryStoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<CredentialConfig> credentialConfig{};
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
    if (credentialConfig) {
      res["CredentialConfig"] = credentialConfig ? boost::any(credentialConfig->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["CredentialConfig"].type()) {
        CredentialConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CredentialConfig"]));
        credentialConfig = make_shared<CredentialConfig>(model1);
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
  shared_ptr<string> credentialConfigShrink{};
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
    if (credentialConfigShrink) {
      res["CredentialConfig"] = boost::any(*credentialConfigShrink);
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
    if (m.find("CredentialConfig") != m.end() && !m["CredentialConfig"].empty()) {
      credentialConfigShrink = make_shared<string>(boost::any_cast<string>(m["CredentialConfig"]));
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
  shared_ptr<long> statusCode{};
  shared_ptr<RefreshWebofficeTokenResponseBody> body{};

  RefreshWebofficeTokenResponse() {}

  explicit RefreshWebofficeTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefreshWebofficeTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefreshWebofficeTokenResponseBody>(model1);
      }
    }
  }


  virtual ~RefreshWebofficeTokenResponse() = default;
};
class RemoveStoryFilesRequestFiles : public Darabonba::Model {
public:
  shared_ptr<string> URI{};

  RemoveStoryFilesRequestFiles() {}

  explicit RemoveStoryFilesRequestFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~RemoveStoryFilesRequestFiles() = default;
};
class RemoveStoryFilesRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<vector<RemoveStoryFilesRequestFiles>> files{};
  shared_ptr<string> objectId{};
  shared_ptr<string> projectName{};

  RemoveStoryFilesRequest() {}

  explicit RemoveStoryFilesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      if (typeid(vector<boost::any>) == m["Files"].type()) {
        vector<RemoveStoryFilesRequestFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Files"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RemoveStoryFilesRequestFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        files = make_shared<vector<RemoveStoryFilesRequestFiles>>(expect1);
      }
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~RemoveStoryFilesRequest() = default;
};
class RemoveStoryFilesShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> datasetName{};
  shared_ptr<string> filesShrink{};
  shared_ptr<string> objectId{};
  shared_ptr<string> projectName{};

  RemoveStoryFilesShrinkRequest() {}

  explicit RemoveStoryFilesShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      filesShrink = make_shared<string>(boost::any_cast<string>(m["Files"]));
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~RemoveStoryFilesShrinkRequest() = default;
};
class RemoveStoryFilesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveStoryFilesResponseBody() {}

  explicit RemoveStoryFilesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveStoryFilesResponseBody() = default;
};
class RemoveStoryFilesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveStoryFilesResponseBody> body{};

  RemoveStoryFilesResponse() {}

  explicit RemoveStoryFilesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveStoryFilesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveStoryFilesResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveStoryFilesResponse() = default;
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
  shared_ptr<long> statusCode{};
  shared_ptr<ResumeBindingResponseBody> body{};

  ResumeBindingResponse() {}

  explicit ResumeBindingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<SemanticQueryResponseBody> body{};

  SemanticQueryResponse() {}

  explicit SemanticQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<SimpleQueryResponseBody> body{};

  SimpleQueryResponse() {}

  explicit SimpleQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<StopBindingResponseBody> body{};

  StopBindingResponse() {}

  explicit StopBindingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDatasetResponseBody> body{};

  UpdateDatasetResponse() {}

  explicit UpdateDatasetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<FigureCluster> figureCluster{};
  shared_ptr<string> requestId{};

  UpdateFigureClusterResponseBody() {}

  explicit UpdateFigureClusterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateFigureClusterResponseBody() = default;
};
class UpdateFigureClusterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFigureClusterResponseBody> body{};

  UpdateFigureClusterResponse() {}

  explicit UpdateFigureClusterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFileMetaResponseBody> body{};

  UpdateFileMetaResponse() {}

  explicit UpdateFileMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateProjectResponseBody> body{};

  UpdateProjectResponse() {}

  explicit UpdateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProjectResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProjectResponse() = default;
};
class UpdateStoryRequestCover : public Darabonba::Model {
public:
  shared_ptr<string> URI{};

  UpdateStoryRequestCover() {}

  explicit UpdateStoryRequestCover(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~UpdateStoryRequestCover() = default;
};
class UpdateStoryRequest : public Darabonba::Model {
public:
  shared_ptr<UpdateStoryRequestCover> cover{};
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
    if (cover) {
      res["Cover"] = cover ? boost::any(cover->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cover"].type()) {
        UpdateStoryRequestCover model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cover"]));
        cover = make_shared<UpdateStoryRequestCover>(model1);
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
  shared_ptr<string> coverShrink{};
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
    if (coverShrink) {
      res["Cover"] = boost::any(*coverShrink);
    }
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
    if (m.find("Cover") != m.end() && !m["Cover"].empty()) {
      coverShrink = make_shared<string>(boost::any_cast<string>(m["Cover"]));
    }
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
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateStoryResponseBody> body{};

  UpdateStoryResponse() {}

  explicit UpdateStoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  AddImageMosaicResponse addImageMosaicWithOptions(shared_ptr<AddImageMosaicRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddImageMosaicResponse addImageMosaic(shared_ptr<AddImageMosaicRequest> request);
  AddStoryFilesResponse addStoryFilesWithOptions(shared_ptr<AddStoryFilesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddStoryFilesResponse addStoryFiles(shared_ptr<AddStoryFilesRequest> request);
  AttachOSSBucketResponse attachOSSBucketWithOptions(shared_ptr<AttachOSSBucketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AttachOSSBucketResponse attachOSSBucket(shared_ptr<AttachOSSBucketRequest> request);
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
  CreateCompressPointCloudTaskResponse createCompressPointCloudTaskWithOptions(shared_ptr<CreateCompressPointCloudTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCompressPointCloudTaskResponse createCompressPointCloudTask(shared_ptr<CreateCompressPointCloudTaskRequest> request);
  CreateCustomizedStoryResponse createCustomizedStoryWithOptions(shared_ptr<CreateCustomizedStoryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCustomizedStoryResponse createCustomizedStory(shared_ptr<CreateCustomizedStoryRequest> request);
  CreateDatasetResponse createDatasetWithOptions(shared_ptr<CreateDatasetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDatasetResponse createDataset(shared_ptr<CreateDatasetRequest> request);
  CreateDetectVideoLabelsTaskResponse createDetectVideoLabelsTaskWithOptions(shared_ptr<CreateDetectVideoLabelsTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDetectVideoLabelsTaskResponse createDetectVideoLabelsTask(shared_ptr<CreateDetectVideoLabelsTaskRequest> request);
  CreateFigureClusteringTaskResponse createFigureClusteringTaskWithOptions(shared_ptr<CreateFigureClusteringTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFigureClusteringTaskResponse createFigureClusteringTask(shared_ptr<CreateFigureClusteringTaskRequest> request);
  CreateFigureClustersMergingTaskResponse createFigureClustersMergingTaskWithOptions(shared_ptr<CreateFigureClustersMergingTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFigureClustersMergingTaskResponse createFigureClustersMergingTask(shared_ptr<CreateFigureClustersMergingTaskRequest> request);
  CreateFileCompressionTaskResponse createFileCompressionTaskWithOptions(shared_ptr<CreateFileCompressionTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFileCompressionTaskResponse createFileCompressionTask(shared_ptr<CreateFileCompressionTaskRequest> request);
  CreateImageModerationTaskResponse createImageModerationTaskWithOptions(shared_ptr<CreateImageModerationTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateImageModerationTaskResponse createImageModerationTask(shared_ptr<CreateImageModerationTaskRequest> request);
  CreateImageSplicingTaskResponse createImageSplicingTaskWithOptions(shared_ptr<CreateImageSplicingTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateImageSplicingTaskResponse createImageSplicingTask(shared_ptr<CreateImageSplicingTaskRequest> request);
  CreateImageToPDFTaskResponse createImageToPDFTaskWithOptions(shared_ptr<CreateImageToPDFTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateImageToPDFTaskResponse createImageToPDFTask(shared_ptr<CreateImageToPDFTaskRequest> request);
  CreateMediaConvertTaskResponse createMediaConvertTaskWithOptions(shared_ptr<CreateMediaConvertTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMediaConvertTaskResponse createMediaConvertTask(shared_ptr<CreateMediaConvertTaskRequest> request);
  CreateOfficeConversionTaskResponse createOfficeConversionTaskWithOptions(shared_ptr<CreateOfficeConversionTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOfficeConversionTaskResponse createOfficeConversionTask(shared_ptr<CreateOfficeConversionTaskRequest> request);
  CreateProjectResponse createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProjectResponse createProject(shared_ptr<CreateProjectRequest> request);
  CreateStoryResponse createStoryWithOptions(shared_ptr<CreateStoryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateStoryResponse createStory(shared_ptr<CreateStoryRequest> request);
  CreateVideoModerationTaskResponse createVideoModerationTaskWithOptions(shared_ptr<CreateVideoModerationTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVideoModerationTaskResponse createVideoModerationTask(shared_ptr<CreateVideoModerationTaskRequest> request);
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
  DetachOSSBucketResponse detachOSSBucketWithOptions(shared_ptr<DetachOSSBucketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetachOSSBucketResponse detachOSSBucket(shared_ptr<DetachOSSBucketRequest> request);
  DetectImageBodiesResponse detectImageBodiesWithOptions(shared_ptr<DetectImageBodiesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectImageBodiesResponse detectImageBodies(shared_ptr<DetectImageBodiesRequest> request);
  DetectImageCodesResponse detectImageCodesWithOptions(shared_ptr<DetectImageCodesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectImageCodesResponse detectImageCodes(shared_ptr<DetectImageCodesRequest> request);
  DetectImageCroppingResponse detectImageCroppingWithOptions(shared_ptr<DetectImageCroppingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectImageCroppingResponse detectImageCropping(shared_ptr<DetectImageCroppingRequest> request);
  DetectImageFacesResponse detectImageFacesWithOptions(shared_ptr<DetectImageFacesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectImageFacesResponse detectImageFaces(shared_ptr<DetectImageFacesRequest> request);
  DetectImageLabelsResponse detectImageLabelsWithOptions(shared_ptr<DetectImageLabelsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectImageLabelsResponse detectImageLabels(shared_ptr<DetectImageLabelsRequest> request);
  DetectImageScoreResponse detectImageScoreWithOptions(shared_ptr<DetectImageScoreRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectImageScoreResponse detectImageScore(shared_ptr<DetectImageScoreRequest> request);
  DetectTextAnomalyResponse detectTextAnomalyWithOptions(shared_ptr<DetectTextAnomalyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectTextAnomalyResponse detectTextAnomaly(shared_ptr<DetectTextAnomalyRequest> request);
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
  GetMediaMetaResponse getMediaMetaWithOptions(shared_ptr<GetMediaMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMediaMetaResponse getMediaMeta(shared_ptr<GetMediaMetaRequest> request);
  GetOSSBucketAttachmentResponse getOSSBucketAttachmentWithOptions(shared_ptr<GetOSSBucketAttachmentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOSSBucketAttachmentResponse getOSSBucketAttachment(shared_ptr<GetOSSBucketAttachmentRequest> request);
  GetProjectResponse getProjectWithOptions(shared_ptr<GetProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectResponse getProject(shared_ptr<GetProjectRequest> request);
  GetStoryResponse getStoryWithOptions(shared_ptr<GetStoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetStoryResponse getStory(shared_ptr<GetStoryRequest> request);
  GetTaskResponse getTaskWithOptions(shared_ptr<GetTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskResponse getTask(shared_ptr<GetTaskRequest> request);
  GetVideoPlaylistResponse getVideoPlaylistWithOptions(shared_ptr<GetVideoPlaylistRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVideoPlaylistResponse getVideoPlaylist(shared_ptr<GetVideoPlaylistRequest> request);
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
  ListRegionsResponse listRegionsWithOptions(shared_ptr<ListRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListRegionsResponse listRegions(shared_ptr<ListRegionsRequest> request);
  ListTasksResponse listTasksWithOptions(shared_ptr<ListTasksRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTasksResponse listTasks(shared_ptr<ListTasksRequest> request);
  LiveTranscodingResponse liveTranscodingWithOptions(shared_ptr<LiveTranscodingRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LiveTranscodingResponse liveTranscoding(shared_ptr<LiveTranscodingRequest> request);
  MergeFigureClustersResponse mergeFigureClustersWithOptions(shared_ptr<MergeFigureClustersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MergeFigureClustersResponse mergeFigureClusters(shared_ptr<MergeFigureClustersRequest> request);
  QueryFigureClustersResponse queryFigureClustersWithOptions(shared_ptr<QueryFigureClustersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFigureClustersResponse queryFigureClusters(shared_ptr<QueryFigureClustersRequest> request);
  QueryStoriesResponse queryStoriesWithOptions(shared_ptr<QueryStoriesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryStoriesResponse queryStories(shared_ptr<QueryStoriesRequest> request);
  RefreshWebofficeTokenResponse refreshWebofficeTokenWithOptions(shared_ptr<RefreshWebofficeTokenRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshWebofficeTokenResponse refreshWebofficeToken(shared_ptr<RefreshWebofficeTokenRequest> request);
  RemoveStoryFilesResponse removeStoryFilesWithOptions(shared_ptr<RemoveStoryFilesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveStoryFilesResponse removeStoryFiles(shared_ptr<RemoveStoryFilesRequest> request);
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
