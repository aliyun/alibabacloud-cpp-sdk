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
class Boundary : public Darabonba::Model {
public:
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};

  Boundary() {}

  explicit Boundary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (width) {
      res["Width"] = boost::any(*width);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
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
  }


  virtual ~Boundary() = default;
};
class CroppingSuggestion : public Darabonba::Model {
public:
  shared_ptr<string> aspectRatio{};
  shared_ptr<double> confidence{};
  shared_ptr<Boundary> boundary{};

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
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (boundary) {
      res["Boundary"] = boundary ? boost::any(boundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AspectRatio") != m.end() && !m["AspectRatio"].empty()) {
      aspectRatio = make_shared<string>(boost::any_cast<string>(m["AspectRatio"]));
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("Boundary") != m.end() && !m["Boundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["Boundary"].type()) {
        Boundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Boundary"]));
        boundary = make_shared<Boundary>(model1);
      }
    }
  }


  virtual ~CroppingSuggestion() = default;
};
class Address : public Darabonba::Model {
public:
  shared_ptr<string> language{};
  shared_ptr<string> addressLine{};
  shared_ptr<string> country{};
  shared_ptr<string> province{};
  shared_ptr<string> city{};
  shared_ptr<string> district{};
  shared_ptr<string> township{};

  Address() {}

  explicit Address(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (addressLine) {
      res["AddressLine"] = boost::any(*addressLine);
    }
    if (country) {
      res["Country"] = boost::any(*country);
    }
    if (province) {
      res["Province"] = boost::any(*province);
    }
    if (city) {
      res["City"] = boost::any(*city);
    }
    if (district) {
      res["District"] = boost::any(*district);
    }
    if (township) {
      res["Township"] = boost::any(*township);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("AddressLine") != m.end() && !m["AddressLine"].empty()) {
      addressLine = make_shared<string>(boost::any_cast<string>(m["AddressLine"]));
    }
    if (m.find("Country") != m.end() && !m["Country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["Country"]));
    }
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("City") != m.end() && !m["City"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["City"]));
    }
    if (m.find("District") != m.end() && !m["District"].empty()) {
      district = make_shared<string>(boost::any_cast<string>(m["District"]));
    }
    if (m.find("Township") != m.end() && !m["Township"].empty()) {
      township = make_shared<string>(boost::any_cast<string>(m["Township"]));
    }
  }


  virtual ~Address() = default;
};
class SubtitleStream : public Darabonba::Model {
public:
  shared_ptr<long> index{};
  shared_ptr<string> language{};
  shared_ptr<string> content{};

  SubtitleStream() {}

  explicit SubtitleStream(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~SubtitleStream() = default;
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
class Label : public Darabonba::Model {
public:
  shared_ptr<string> language{};
  shared_ptr<string> labelName{};
  shared_ptr<long> labelLevel{};
  shared_ptr<double> labelConfidence{};

  Label() {}

  explicit Label(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (labelName) {
      res["LabelName"] = boost::any(*labelName);
    }
    if (labelLevel) {
      res["LabelLevel"] = boost::any(*labelLevel);
    }
    if (labelConfidence) {
      res["LabelConfidence"] = boost::any(*labelConfidence);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("LabelName") != m.end() && !m["LabelName"].empty()) {
      labelName = make_shared<string>(boost::any_cast<string>(m["LabelName"]));
    }
    if (m.find("LabelLevel") != m.end() && !m["LabelLevel"].empty()) {
      labelLevel = make_shared<long>(boost::any_cast<long>(m["LabelLevel"]));
    }
    if (m.find("LabelConfidence") != m.end() && !m["LabelConfidence"].empty()) {
      labelConfidence = make_shared<double>(boost::any_cast<double>(m["LabelConfidence"]));
    }
  }


  virtual ~Label() = default;
};
class VideoStream : public Darabonba::Model {
public:
  shared_ptr<long> index{};
  shared_ptr<string> language{};
  shared_ptr<string> codecName{};
  shared_ptr<string> codecLongName{};
  shared_ptr<string> profile{};
  shared_ptr<string> codecTimeBase{};
  shared_ptr<string> codecTagString{};
  shared_ptr<string> codecTag{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<string> hasBFrames{};
  shared_ptr<string> sampleAspectRatio{};
  shared_ptr<string> displayAspectRatio{};
  shared_ptr<string> pixelFormat{};
  shared_ptr<long> level{};
  shared_ptr<double> frameRate{};
  shared_ptr<double> averageFrameRate{};
  shared_ptr<string> timeBase{};
  shared_ptr<double> startTime{};
  shared_ptr<double> duration{};
  shared_ptr<long> bitrate{};
  shared_ptr<long> frameCount{};

  VideoStream() {}

  explicit VideoStream(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (codecName) {
      res["CodecName"] = boost::any(*codecName);
    }
    if (codecLongName) {
      res["CodecLongName"] = boost::any(*codecLongName);
    }
    if (profile) {
      res["Profile"] = boost::any(*profile);
    }
    if (codecTimeBase) {
      res["CodecTimeBase"] = boost::any(*codecTimeBase);
    }
    if (codecTagString) {
      res["CodecTagString"] = boost::any(*codecTagString);
    }
    if (codecTag) {
      res["CodecTag"] = boost::any(*codecTag);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (hasBFrames) {
      res["HasBFrames"] = boost::any(*hasBFrames);
    }
    if (sampleAspectRatio) {
      res["SampleAspectRatio"] = boost::any(*sampleAspectRatio);
    }
    if (displayAspectRatio) {
      res["DisplayAspectRatio"] = boost::any(*displayAspectRatio);
    }
    if (pixelFormat) {
      res["PixelFormat"] = boost::any(*pixelFormat);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (frameRate) {
      res["FrameRate"] = boost::any(*frameRate);
    }
    if (averageFrameRate) {
      res["AverageFrameRate"] = boost::any(*averageFrameRate);
    }
    if (timeBase) {
      res["TimeBase"] = boost::any(*timeBase);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (frameCount) {
      res["FrameCount"] = boost::any(*frameCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("CodecName") != m.end() && !m["CodecName"].empty()) {
      codecName = make_shared<string>(boost::any_cast<string>(m["CodecName"]));
    }
    if (m.find("CodecLongName") != m.end() && !m["CodecLongName"].empty()) {
      codecLongName = make_shared<string>(boost::any_cast<string>(m["CodecLongName"]));
    }
    if (m.find("Profile") != m.end() && !m["Profile"].empty()) {
      profile = make_shared<string>(boost::any_cast<string>(m["Profile"]));
    }
    if (m.find("CodecTimeBase") != m.end() && !m["CodecTimeBase"].empty()) {
      codecTimeBase = make_shared<string>(boost::any_cast<string>(m["CodecTimeBase"]));
    }
    if (m.find("CodecTagString") != m.end() && !m["CodecTagString"].empty()) {
      codecTagString = make_shared<string>(boost::any_cast<string>(m["CodecTagString"]));
    }
    if (m.find("CodecTag") != m.end() && !m["CodecTag"].empty()) {
      codecTag = make_shared<string>(boost::any_cast<string>(m["CodecTag"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("HasBFrames") != m.end() && !m["HasBFrames"].empty()) {
      hasBFrames = make_shared<string>(boost::any_cast<string>(m["HasBFrames"]));
    }
    if (m.find("SampleAspectRatio") != m.end() && !m["SampleAspectRatio"].empty()) {
      sampleAspectRatio = make_shared<string>(boost::any_cast<string>(m["SampleAspectRatio"]));
    }
    if (m.find("DisplayAspectRatio") != m.end() && !m["DisplayAspectRatio"].empty()) {
      displayAspectRatio = make_shared<string>(boost::any_cast<string>(m["DisplayAspectRatio"]));
    }
    if (m.find("PixelFormat") != m.end() && !m["PixelFormat"].empty()) {
      pixelFormat = make_shared<string>(boost::any_cast<string>(m["PixelFormat"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["Level"]));
    }
    if (m.find("FrameRate") != m.end() && !m["FrameRate"].empty()) {
      frameRate = make_shared<double>(boost::any_cast<double>(m["FrameRate"]));
    }
    if (m.find("AverageFrameRate") != m.end() && !m["AverageFrameRate"].empty()) {
      averageFrameRate = make_shared<double>(boost::any_cast<double>(m["AverageFrameRate"]));
    }
    if (m.find("TimeBase") != m.end() && !m["TimeBase"].empty()) {
      timeBase = make_shared<string>(boost::any_cast<string>(m["TimeBase"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<double>(boost::any_cast<double>(m["StartTime"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
    if (m.find("FrameCount") != m.end() && !m["FrameCount"].empty()) {
      frameCount = make_shared<long>(boost::any_cast<long>(m["FrameCount"]));
    }
  }


  virtual ~VideoStream() = default;
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
  shared_ptr<string> language{};
  shared_ptr<string> contents{};
  shared_ptr<double> confidence{};
  shared_ptr<Boundary> boundary{};

  OCRContents() {}

  explicit OCRContents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (contents) {
      res["Contents"] = boost::any(*contents);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (boundary) {
      res["Boundary"] = boundary ? boost::any(boundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Contents") != m.end() && !m["Contents"].empty()) {
      contents = make_shared<string>(boost::any_cast<string>(m["Contents"]));
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("Boundary") != m.end() && !m["Boundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["Boundary"].type()) {
        Boundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Boundary"]));
        boundary = make_shared<Boundary>(model1);
      }
    }
  }


  virtual ~OCRContents() = default;
};
class Image : public Darabonba::Model {
public:
  shared_ptr<long> imageWidth{};
  shared_ptr<long> imageHeight{};
  shared_ptr<string> EXIF{};
  shared_ptr<ImageScore> imageScore{};
  shared_ptr<vector<CroppingSuggestion>> croppingSuggestions{};
  shared_ptr<vector<OCRContents>> OCRContents{};

  Image() {}

  explicit Image(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageWidth) {
      res["ImageWidth"] = boost::any(*imageWidth);
    }
    if (imageHeight) {
      res["ImageHeight"] = boost::any(*imageHeight);
    }
    if (EXIF) {
      res["EXIF"] = boost::any(*EXIF);
    }
    if (imageScore) {
      res["ImageScore"] = imageScore ? boost::any(imageScore->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (croppingSuggestions) {
      vector<boost::any> temp1;
      for(auto item1:*croppingSuggestions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CroppingSuggestions"] = boost::any(temp1);
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
    if (m.find("ImageWidth") != m.end() && !m["ImageWidth"].empty()) {
      imageWidth = make_shared<long>(boost::any_cast<long>(m["ImageWidth"]));
    }
    if (m.find("ImageHeight") != m.end() && !m["ImageHeight"].empty()) {
      imageHeight = make_shared<long>(boost::any_cast<long>(m["ImageHeight"]));
    }
    if (m.find("EXIF") != m.end() && !m["EXIF"].empty()) {
      EXIF = make_shared<string>(boost::any_cast<string>(m["EXIF"]));
    }
    if (m.find("ImageScore") != m.end() && !m["ImageScore"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImageScore"].type()) {
        ImageScore model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImageScore"]));
        imageScore = make_shared<ImageScore>(model1);
      }
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
class AudioStream : public Darabonba::Model {
public:
  shared_ptr<long> index{};
  shared_ptr<string> language{};
  shared_ptr<string> codecName{};
  shared_ptr<string> codecLongName{};
  shared_ptr<string> codecTimeBase{};
  shared_ptr<string> codecTagString{};
  shared_ptr<string> codecTag{};
  shared_ptr<string> sampleFormat{};
  shared_ptr<long> sampleRate{};
  shared_ptr<long> channels{};
  shared_ptr<string> channelLayout{};
  shared_ptr<string> timeBase{};
  shared_ptr<double> startTime{};
  shared_ptr<double> duration{};
  shared_ptr<long> bitrate{};
  shared_ptr<string> lyric{};

  AudioStream() {}

  explicit AudioStream(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (codecName) {
      res["CodecName"] = boost::any(*codecName);
    }
    if (codecLongName) {
      res["CodecLongName"] = boost::any(*codecLongName);
    }
    if (codecTimeBase) {
      res["CodecTimeBase"] = boost::any(*codecTimeBase);
    }
    if (codecTagString) {
      res["CodecTagString"] = boost::any(*codecTagString);
    }
    if (codecTag) {
      res["CodecTag"] = boost::any(*codecTag);
    }
    if (sampleFormat) {
      res["SampleFormat"] = boost::any(*sampleFormat);
    }
    if (sampleRate) {
      res["SampleRate"] = boost::any(*sampleRate);
    }
    if (channels) {
      res["Channels"] = boost::any(*channels);
    }
    if (channelLayout) {
      res["ChannelLayout"] = boost::any(*channelLayout);
    }
    if (timeBase) {
      res["TimeBase"] = boost::any(*timeBase);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (lyric) {
      res["Lyric"] = boost::any(*lyric);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("CodecName") != m.end() && !m["CodecName"].empty()) {
      codecName = make_shared<string>(boost::any_cast<string>(m["CodecName"]));
    }
    if (m.find("CodecLongName") != m.end() && !m["CodecLongName"].empty()) {
      codecLongName = make_shared<string>(boost::any_cast<string>(m["CodecLongName"]));
    }
    if (m.find("CodecTimeBase") != m.end() && !m["CodecTimeBase"].empty()) {
      codecTimeBase = make_shared<string>(boost::any_cast<string>(m["CodecTimeBase"]));
    }
    if (m.find("CodecTagString") != m.end() && !m["CodecTagString"].empty()) {
      codecTagString = make_shared<string>(boost::any_cast<string>(m["CodecTagString"]));
    }
    if (m.find("CodecTag") != m.end() && !m["CodecTag"].empty()) {
      codecTag = make_shared<string>(boost::any_cast<string>(m["CodecTag"]));
    }
    if (m.find("SampleFormat") != m.end() && !m["SampleFormat"].empty()) {
      sampleFormat = make_shared<string>(boost::any_cast<string>(m["SampleFormat"]));
    }
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<long>(boost::any_cast<long>(m["SampleRate"]));
    }
    if (m.find("Channels") != m.end() && !m["Channels"].empty()) {
      channels = make_shared<long>(boost::any_cast<long>(m["Channels"]));
    }
    if (m.find("ChannelLayout") != m.end() && !m["ChannelLayout"].empty()) {
      channelLayout = make_shared<string>(boost::any_cast<string>(m["ChannelLayout"]));
    }
    if (m.find("TimeBase") != m.end() && !m["TimeBase"].empty()) {
      timeBase = make_shared<string>(boost::any_cast<string>(m["TimeBase"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<double>(boost::any_cast<double>(m["StartTime"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
    if (m.find("Lyric") != m.end() && !m["Lyric"].empty()) {
      lyric = make_shared<string>(boost::any_cast<string>(m["Lyric"]));
    }
  }


  virtual ~AudioStream() = default;
};
class Face : public Darabonba::Model {
public:
  shared_ptr<string> faceId{};
  shared_ptr<double> faceConfidence{};
  shared_ptr<long> age{};
  shared_ptr<double> ageConfidence{};
  shared_ptr<string> gender{};
  shared_ptr<double> genderConfidence{};
  shared_ptr<string> emotion{};
  shared_ptr<double> emotionConfidence{};
  shared_ptr<string> faceClusterId{};
  shared_ptr<string> mouth{};
  shared_ptr<double> mouthConfidence{};
  shared_ptr<string> beard{};
  shared_ptr<double> beardConfidence{};
  shared_ptr<string> hat{};
  shared_ptr<double> hatConfidence{};
  shared_ptr<string> race{};
  shared_ptr<double> raceConfidence{};
  shared_ptr<string> mask{};
  shared_ptr<double> maskConfidence{};
  shared_ptr<string> glasses{};
  shared_ptr<double> glassesConfidence{};
  shared_ptr<string> leftEye{};
  shared_ptr<double> leftEyeConfidence{};
  shared_ptr<string> rightEye{};
  shared_ptr<double> rightEyeConfidence{};
  shared_ptr<HeadPose> headPose{};
  shared_ptr<Boundary> boundary{};
  shared_ptr<vector<double>> embeddingsFloat32{};
  shared_ptr<vector<long>> embeddingsInt8{};

  Face() {}

  explicit Face(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceId) {
      res["FaceId"] = boost::any(*faceId);
    }
    if (faceConfidence) {
      res["FaceConfidence"] = boost::any(*faceConfidence);
    }
    if (age) {
      res["Age"] = boost::any(*age);
    }
    if (ageConfidence) {
      res["AgeConfidence"] = boost::any(*ageConfidence);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (genderConfidence) {
      res["GenderConfidence"] = boost::any(*genderConfidence);
    }
    if (emotion) {
      res["Emotion"] = boost::any(*emotion);
    }
    if (emotionConfidence) {
      res["EmotionConfidence"] = boost::any(*emotionConfidence);
    }
    if (faceClusterId) {
      res["FaceClusterId"] = boost::any(*faceClusterId);
    }
    if (mouth) {
      res["Mouth"] = boost::any(*mouth);
    }
    if (mouthConfidence) {
      res["MouthConfidence"] = boost::any(*mouthConfidence);
    }
    if (beard) {
      res["Beard"] = boost::any(*beard);
    }
    if (beardConfidence) {
      res["BeardConfidence"] = boost::any(*beardConfidence);
    }
    if (hat) {
      res["Hat"] = boost::any(*hat);
    }
    if (hatConfidence) {
      res["HatConfidence"] = boost::any(*hatConfidence);
    }
    if (race) {
      res["Race"] = boost::any(*race);
    }
    if (raceConfidence) {
      res["RaceConfidence"] = boost::any(*raceConfidence);
    }
    if (mask) {
      res["Mask"] = boost::any(*mask);
    }
    if (maskConfidence) {
      res["MaskConfidence"] = boost::any(*maskConfidence);
    }
    if (glasses) {
      res["Glasses"] = boost::any(*glasses);
    }
    if (glassesConfidence) {
      res["GlassesConfidence"] = boost::any(*glassesConfidence);
    }
    if (leftEye) {
      res["LeftEye"] = boost::any(*leftEye);
    }
    if (leftEyeConfidence) {
      res["LeftEyeConfidence"] = boost::any(*leftEyeConfidence);
    }
    if (rightEye) {
      res["RightEye"] = boost::any(*rightEye);
    }
    if (rightEyeConfidence) {
      res["RightEyeConfidence"] = boost::any(*rightEyeConfidence);
    }
    if (headPose) {
      res["HeadPose"] = headPose ? boost::any(headPose->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (boundary) {
      res["Boundary"] = boundary ? boost::any(boundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (embeddingsFloat32) {
      res["EmbeddingsFloat32"] = boost::any(*embeddingsFloat32);
    }
    if (embeddingsInt8) {
      res["EmbeddingsInt8"] = boost::any(*embeddingsInt8);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceId") != m.end() && !m["FaceId"].empty()) {
      faceId = make_shared<string>(boost::any_cast<string>(m["FaceId"]));
    }
    if (m.find("FaceConfidence") != m.end() && !m["FaceConfidence"].empty()) {
      faceConfidence = make_shared<double>(boost::any_cast<double>(m["FaceConfidence"]));
    }
    if (m.find("Age") != m.end() && !m["Age"].empty()) {
      age = make_shared<long>(boost::any_cast<long>(m["Age"]));
    }
    if (m.find("AgeConfidence") != m.end() && !m["AgeConfidence"].empty()) {
      ageConfidence = make_shared<double>(boost::any_cast<double>(m["AgeConfidence"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("GenderConfidence") != m.end() && !m["GenderConfidence"].empty()) {
      genderConfidence = make_shared<double>(boost::any_cast<double>(m["GenderConfidence"]));
    }
    if (m.find("Emotion") != m.end() && !m["Emotion"].empty()) {
      emotion = make_shared<string>(boost::any_cast<string>(m["Emotion"]));
    }
    if (m.find("EmotionConfidence") != m.end() && !m["EmotionConfidence"].empty()) {
      emotionConfidence = make_shared<double>(boost::any_cast<double>(m["EmotionConfidence"]));
    }
    if (m.find("FaceClusterId") != m.end() && !m["FaceClusterId"].empty()) {
      faceClusterId = make_shared<string>(boost::any_cast<string>(m["FaceClusterId"]));
    }
    if (m.find("Mouth") != m.end() && !m["Mouth"].empty()) {
      mouth = make_shared<string>(boost::any_cast<string>(m["Mouth"]));
    }
    if (m.find("MouthConfidence") != m.end() && !m["MouthConfidence"].empty()) {
      mouthConfidence = make_shared<double>(boost::any_cast<double>(m["MouthConfidence"]));
    }
    if (m.find("Beard") != m.end() && !m["Beard"].empty()) {
      beard = make_shared<string>(boost::any_cast<string>(m["Beard"]));
    }
    if (m.find("BeardConfidence") != m.end() && !m["BeardConfidence"].empty()) {
      beardConfidence = make_shared<double>(boost::any_cast<double>(m["BeardConfidence"]));
    }
    if (m.find("Hat") != m.end() && !m["Hat"].empty()) {
      hat = make_shared<string>(boost::any_cast<string>(m["Hat"]));
    }
    if (m.find("HatConfidence") != m.end() && !m["HatConfidence"].empty()) {
      hatConfidence = make_shared<double>(boost::any_cast<double>(m["HatConfidence"]));
    }
    if (m.find("Race") != m.end() && !m["Race"].empty()) {
      race = make_shared<string>(boost::any_cast<string>(m["Race"]));
    }
    if (m.find("RaceConfidence") != m.end() && !m["RaceConfidence"].empty()) {
      raceConfidence = make_shared<double>(boost::any_cast<double>(m["RaceConfidence"]));
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("MaskConfidence") != m.end() && !m["MaskConfidence"].empty()) {
      maskConfidence = make_shared<double>(boost::any_cast<double>(m["MaskConfidence"]));
    }
    if (m.find("Glasses") != m.end() && !m["Glasses"].empty()) {
      glasses = make_shared<string>(boost::any_cast<string>(m["Glasses"]));
    }
    if (m.find("GlassesConfidence") != m.end() && !m["GlassesConfidence"].empty()) {
      glassesConfidence = make_shared<double>(boost::any_cast<double>(m["GlassesConfidence"]));
    }
    if (m.find("LeftEye") != m.end() && !m["LeftEye"].empty()) {
      leftEye = make_shared<string>(boost::any_cast<string>(m["LeftEye"]));
    }
    if (m.find("LeftEyeConfidence") != m.end() && !m["LeftEyeConfidence"].empty()) {
      leftEyeConfidence = make_shared<double>(boost::any_cast<double>(m["LeftEyeConfidence"]));
    }
    if (m.find("RightEye") != m.end() && !m["RightEye"].empty()) {
      rightEye = make_shared<string>(boost::any_cast<string>(m["RightEye"]));
    }
    if (m.find("RightEyeConfidence") != m.end() && !m["RightEyeConfidence"].empty()) {
      rightEyeConfidence = make_shared<double>(boost::any_cast<double>(m["RightEyeConfidence"]));
    }
    if (m.find("HeadPose") != m.end() && !m["HeadPose"].empty()) {
      if (typeid(map<string, boost::any>) == m["HeadPose"].type()) {
        HeadPose model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HeadPose"]));
        headPose = make_shared<HeadPose>(model1);
      }
    }
    if (m.find("Boundary") != m.end() && !m["Boundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["Boundary"].type()) {
        Boundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Boundary"]));
        boundary = make_shared<Boundary>(model1);
      }
    }
    if (m.find("EmbeddingsFloat32") != m.end() && !m["EmbeddingsFloat32"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["EmbeddingsFloat32"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EmbeddingsFloat32"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      embeddingsFloat32 = make_shared<vector<double>>(toVec1);
    }
    if (m.find("EmbeddingsInt8") != m.end() && !m["EmbeddingsInt8"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["EmbeddingsInt8"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EmbeddingsInt8"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      embeddingsInt8 = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~Face() = default;
};
class File : public Darabonba::Model {
public:
  shared_ptr<string> ownerId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> objectType{};
  shared_ptr<string> objectId{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> createTime{};
  shared_ptr<string> URI{};
  shared_ptr<string> filename{};
  shared_ptr<string> mediaType{};
  shared_ptr<string> contentType{};
  shared_ptr<long> size{};
  shared_ptr<string> fileHash{};
  shared_ptr<string> fileModifiedTime{};
  shared_ptr<string> fileCreateTime{};
  shared_ptr<string> fileAccessTime{};
  shared_ptr<string> produceTime{};
  shared_ptr<string> latLong{};
  shared_ptr<string> timezone{};
  shared_ptr<vector<Address>> addresses{};
  shared_ptr<string> travelClusterId{};
  shared_ptr<string> orientation{};
  shared_ptr<vector<Face>> faces{};
  shared_ptr<long> faceCount{};
  shared_ptr<vector<Label>> labels{};
  shared_ptr<string> title{};
  shared_ptr<long> imageWidth{};
  shared_ptr<long> imageHeight{};
  shared_ptr<string> EXIF{};
  shared_ptr<ImageScore> imageScore{};
  shared_ptr<vector<CroppingSuggestion>> croppingSuggestions{};
  shared_ptr<vector<OCRContents>> OCRContents{};
  shared_ptr<vector<double>> imageEmbeddingsFloat32{};
  shared_ptr<vector<long>> imageEmbeddingsInt8{};
  shared_ptr<long> videoWidth{};
  shared_ptr<long> videoHeight{};
  shared_ptr<string> videoTakenTime{};
  shared_ptr<double> videoDuration{};
  shared_ptr<long> videoBitrate{};
  shared_ptr<double> videoStartTime{};
  shared_ptr<vector<VideoStream>> videoStreams{};
  shared_ptr<vector<SubtitleStream>> subtitles{};
  shared_ptr<vector<double>> videoEmbeddingsFloat32{};
  shared_ptr<vector<long>> videoEmbeddingsInt8{};
  shared_ptr<string> audioTakenTime{};
  shared_ptr<double> audioDuration{};
  shared_ptr<double> audioBitrate{};
  shared_ptr<vector<AudioStream>> audioStreams{};
  shared_ptr<vector<string>> artists{};
  shared_ptr<vector<Image>> audioCovers{};
  shared_ptr<string> composer{};
  shared_ptr<string> performer{};
  shared_ptr<string> audioLanguage{};
  shared_ptr<string> album{};
  shared_ptr<string> albumArtist{};
  shared_ptr<vector<double>> audioEmbeddingsFloat32{};
  shared_ptr<vector<long>> audioEmbeddingsInt8{};
  shared_ptr<string> documentLanguage{};
  shared_ptr<long> pageCount{};
  shared_ptr<string> documentContent{};
  shared_ptr<vector<double>> documentEmbeddingsFloat32{};
  shared_ptr<vector<long>> documentEmbeddingsInt8{};
  shared_ptr<string> ETag{};
  shared_ptr<string> cacheControl{};
  shared_ptr<string> contentDisposition{};
  shared_ptr<string> contentEncoding{};
  shared_ptr<string> contentLanguage{};
  shared_ptr<string> accessControlAllowOrigin{};
  shared_ptr<string> accessControlRequestMethod{};
  shared_ptr<string> serverSideEncryptionCustomerAlgorithm{};
  shared_ptr<string> serverSideEncryption{};
  shared_ptr<string> serverSideDataEncryption{};
  shared_ptr<string> serverSideEncryptionKeyId{};
  shared_ptr<string> storageClass{};
  shared_ptr<string> objectACL{};
  shared_ptr<string> contentMd5{};
  shared_ptr<map<string, boost::any>> OSSUserMeta{};
  shared_ptr<long> OSSTaggingCount{};
  shared_ptr<map<string, boost::any>> OSSTagging{};
  shared_ptr<string> OSSExpiration{};
  shared_ptr<string> OSSVersionId{};
  shared_ptr<string> OSSDeleteMarker{};
  shared_ptr<string> OSSObjectType{};
  shared_ptr<string> customId{};
  shared_ptr<map<string, boost::any>> customLabels{};

  File() {}

  explicit File(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (objectId) {
      res["ObjectId"] = boost::any(*objectId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    if (filename) {
      res["Filename"] = boost::any(*filename);
    }
    if (mediaType) {
      res["MediaType"] = boost::any(*mediaType);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (fileHash) {
      res["FileHash"] = boost::any(*fileHash);
    }
    if (fileModifiedTime) {
      res["FileModifiedTime"] = boost::any(*fileModifiedTime);
    }
    if (fileCreateTime) {
      res["FileCreateTime"] = boost::any(*fileCreateTime);
    }
    if (fileAccessTime) {
      res["FileAccessTime"] = boost::any(*fileAccessTime);
    }
    if (produceTime) {
      res["ProduceTime"] = boost::any(*produceTime);
    }
    if (latLong) {
      res["LatLong"] = boost::any(*latLong);
    }
    if (timezone) {
      res["Timezone"] = boost::any(*timezone);
    }
    if (addresses) {
      vector<boost::any> temp1;
      for(auto item1:*addresses){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Addresses"] = boost::any(temp1);
    }
    if (travelClusterId) {
      res["TravelClusterId"] = boost::any(*travelClusterId);
    }
    if (orientation) {
      res["Orientation"] = boost::any(*orientation);
    }
    if (faces) {
      vector<boost::any> temp1;
      for(auto item1:*faces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Faces"] = boost::any(temp1);
    }
    if (faceCount) {
      res["FaceCount"] = boost::any(*faceCount);
    }
    if (labels) {
      vector<boost::any> temp1;
      for(auto item1:*labels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Labels"] = boost::any(temp1);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (imageWidth) {
      res["ImageWidth"] = boost::any(*imageWidth);
    }
    if (imageHeight) {
      res["ImageHeight"] = boost::any(*imageHeight);
    }
    if (EXIF) {
      res["EXIF"] = boost::any(*EXIF);
    }
    if (imageScore) {
      res["ImageScore"] = imageScore ? boost::any(imageScore->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (croppingSuggestions) {
      vector<boost::any> temp1;
      for(auto item1:*croppingSuggestions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CroppingSuggestions"] = boost::any(temp1);
    }
    if (OCRContents) {
      vector<boost::any> temp1;
      for(auto item1:*OCRContents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OCRContents"] = boost::any(temp1);
    }
    if (imageEmbeddingsFloat32) {
      res["ImageEmbeddingsFloat32"] = boost::any(*imageEmbeddingsFloat32);
    }
    if (imageEmbeddingsInt8) {
      res["ImageEmbeddingsInt8"] = boost::any(*imageEmbeddingsInt8);
    }
    if (videoWidth) {
      res["VideoWidth"] = boost::any(*videoWidth);
    }
    if (videoHeight) {
      res["VideoHeight"] = boost::any(*videoHeight);
    }
    if (videoTakenTime) {
      res["VideoTakenTime"] = boost::any(*videoTakenTime);
    }
    if (videoDuration) {
      res["VideoDuration"] = boost::any(*videoDuration);
    }
    if (videoBitrate) {
      res["VideoBitrate"] = boost::any(*videoBitrate);
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
    if (subtitles) {
      vector<boost::any> temp1;
      for(auto item1:*subtitles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Subtitles"] = boost::any(temp1);
    }
    if (videoEmbeddingsFloat32) {
      res["VideoEmbeddingsFloat32"] = boost::any(*videoEmbeddingsFloat32);
    }
    if (videoEmbeddingsInt8) {
      res["VideoEmbeddingsInt8"] = boost::any(*videoEmbeddingsInt8);
    }
    if (audioTakenTime) {
      res["AudioTakenTime"] = boost::any(*audioTakenTime);
    }
    if (audioDuration) {
      res["AudioDuration"] = boost::any(*audioDuration);
    }
    if (audioBitrate) {
      res["AudioBitrate"] = boost::any(*audioBitrate);
    }
    if (audioStreams) {
      vector<boost::any> temp1;
      for(auto item1:*audioStreams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AudioStreams"] = boost::any(temp1);
    }
    if (artists) {
      res["Artists"] = boost::any(*artists);
    }
    if (audioCovers) {
      vector<boost::any> temp1;
      for(auto item1:*audioCovers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AudioCovers"] = boost::any(temp1);
    }
    if (composer) {
      res["Composer"] = boost::any(*composer);
    }
    if (performer) {
      res["Performer"] = boost::any(*performer);
    }
    if (audioLanguage) {
      res["AudioLanguage"] = boost::any(*audioLanguage);
    }
    if (album) {
      res["Album"] = boost::any(*album);
    }
    if (albumArtist) {
      res["AlbumArtist"] = boost::any(*albumArtist);
    }
    if (audioEmbeddingsFloat32) {
      res["AudioEmbeddingsFloat32"] = boost::any(*audioEmbeddingsFloat32);
    }
    if (audioEmbeddingsInt8) {
      res["AudioEmbeddingsInt8"] = boost::any(*audioEmbeddingsInt8);
    }
    if (documentLanguage) {
      res["DocumentLanguage"] = boost::any(*documentLanguage);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (documentContent) {
      res["DocumentContent"] = boost::any(*documentContent);
    }
    if (documentEmbeddingsFloat32) {
      res["DocumentEmbeddingsFloat32"] = boost::any(*documentEmbeddingsFloat32);
    }
    if (documentEmbeddingsInt8) {
      res["DocumentEmbeddingsInt8"] = boost::any(*documentEmbeddingsInt8);
    }
    if (ETag) {
      res["ETag"] = boost::any(*ETag);
    }
    if (cacheControl) {
      res["CacheControl"] = boost::any(*cacheControl);
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
    if (accessControlAllowOrigin) {
      res["AccessControlAllowOrigin"] = boost::any(*accessControlAllowOrigin);
    }
    if (accessControlRequestMethod) {
      res["AccessControlRequestMethod"] = boost::any(*accessControlRequestMethod);
    }
    if (serverSideEncryptionCustomerAlgorithm) {
      res["ServerSideEncryptionCustomerAlgorithm"] = boost::any(*serverSideEncryptionCustomerAlgorithm);
    }
    if (serverSideEncryption) {
      res["ServerSideEncryption"] = boost::any(*serverSideEncryption);
    }
    if (serverSideDataEncryption) {
      res["ServerSideDataEncryption"] = boost::any(*serverSideDataEncryption);
    }
    if (serverSideEncryptionKeyId) {
      res["ServerSideEncryptionKeyId"] = boost::any(*serverSideEncryptionKeyId);
    }
    if (storageClass) {
      res["StorageClass"] = boost::any(*storageClass);
    }
    if (objectACL) {
      res["ObjectACL"] = boost::any(*objectACL);
    }
    if (contentMd5) {
      res["ContentMd5"] = boost::any(*contentMd5);
    }
    if (OSSUserMeta) {
      res["OSSUserMeta"] = boost::any(*OSSUserMeta);
    }
    if (OSSTaggingCount) {
      res["OSSTaggingCount"] = boost::any(*OSSTaggingCount);
    }
    if (OSSTagging) {
      res["OSSTagging"] = boost::any(*OSSTagging);
    }
    if (OSSExpiration) {
      res["OSSExpiration"] = boost::any(*OSSExpiration);
    }
    if (OSSVersionId) {
      res["OSSVersionId"] = boost::any(*OSSVersionId);
    }
    if (OSSDeleteMarker) {
      res["OSSDeleteMarker"] = boost::any(*OSSDeleteMarker);
    }
    if (OSSObjectType) {
      res["OSSObjectType"] = boost::any(*OSSObjectType);
    }
    if (customId) {
      res["CustomId"] = boost::any(*customId);
    }
    if (customLabels) {
      res["CustomLabels"] = boost::any(*customLabels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("ObjectId") != m.end() && !m["ObjectId"].empty()) {
      objectId = make_shared<string>(boost::any_cast<string>(m["ObjectId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
    if (m.find("Filename") != m.end() && !m["Filename"].empty()) {
      filename = make_shared<string>(boost::any_cast<string>(m["Filename"]));
    }
    if (m.find("MediaType") != m.end() && !m["MediaType"].empty()) {
      mediaType = make_shared<string>(boost::any_cast<string>(m["MediaType"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("FileHash") != m.end() && !m["FileHash"].empty()) {
      fileHash = make_shared<string>(boost::any_cast<string>(m["FileHash"]));
    }
    if (m.find("FileModifiedTime") != m.end() && !m["FileModifiedTime"].empty()) {
      fileModifiedTime = make_shared<string>(boost::any_cast<string>(m["FileModifiedTime"]));
    }
    if (m.find("FileCreateTime") != m.end() && !m["FileCreateTime"].empty()) {
      fileCreateTime = make_shared<string>(boost::any_cast<string>(m["FileCreateTime"]));
    }
    if (m.find("FileAccessTime") != m.end() && !m["FileAccessTime"].empty()) {
      fileAccessTime = make_shared<string>(boost::any_cast<string>(m["FileAccessTime"]));
    }
    if (m.find("ProduceTime") != m.end() && !m["ProduceTime"].empty()) {
      produceTime = make_shared<string>(boost::any_cast<string>(m["ProduceTime"]));
    }
    if (m.find("LatLong") != m.end() && !m["LatLong"].empty()) {
      latLong = make_shared<string>(boost::any_cast<string>(m["LatLong"]));
    }
    if (m.find("Timezone") != m.end() && !m["Timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["Timezone"]));
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
    if (m.find("TravelClusterId") != m.end() && !m["TravelClusterId"].empty()) {
      travelClusterId = make_shared<string>(boost::any_cast<string>(m["TravelClusterId"]));
    }
    if (m.find("Orientation") != m.end() && !m["Orientation"].empty()) {
      orientation = make_shared<string>(boost::any_cast<string>(m["Orientation"]));
    }
    if (m.find("Faces") != m.end() && !m["Faces"].empty()) {
      if (typeid(vector<boost::any>) == m["Faces"].type()) {
        vector<Face> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Faces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Face model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faces = make_shared<vector<Face>>(expect1);
      }
    }
    if (m.find("FaceCount") != m.end() && !m["FaceCount"].empty()) {
      faceCount = make_shared<long>(boost::any_cast<long>(m["FaceCount"]));
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
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("ImageWidth") != m.end() && !m["ImageWidth"].empty()) {
      imageWidth = make_shared<long>(boost::any_cast<long>(m["ImageWidth"]));
    }
    if (m.find("ImageHeight") != m.end() && !m["ImageHeight"].empty()) {
      imageHeight = make_shared<long>(boost::any_cast<long>(m["ImageHeight"]));
    }
    if (m.find("EXIF") != m.end() && !m["EXIF"].empty()) {
      EXIF = make_shared<string>(boost::any_cast<string>(m["EXIF"]));
    }
    if (m.find("ImageScore") != m.end() && !m["ImageScore"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImageScore"].type()) {
        ImageScore model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImageScore"]));
        imageScore = make_shared<ImageScore>(model1);
      }
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
    if (m.find("ImageEmbeddingsFloat32") != m.end() && !m["ImageEmbeddingsFloat32"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["ImageEmbeddingsFloat32"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageEmbeddingsFloat32"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      imageEmbeddingsFloat32 = make_shared<vector<double>>(toVec1);
    }
    if (m.find("ImageEmbeddingsInt8") != m.end() && !m["ImageEmbeddingsInt8"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["ImageEmbeddingsInt8"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageEmbeddingsInt8"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      imageEmbeddingsInt8 = make_shared<vector<long>>(toVec1);
    }
    if (m.find("VideoWidth") != m.end() && !m["VideoWidth"].empty()) {
      videoWidth = make_shared<long>(boost::any_cast<long>(m["VideoWidth"]));
    }
    if (m.find("VideoHeight") != m.end() && !m["VideoHeight"].empty()) {
      videoHeight = make_shared<long>(boost::any_cast<long>(m["VideoHeight"]));
    }
    if (m.find("VideoTakenTime") != m.end() && !m["VideoTakenTime"].empty()) {
      videoTakenTime = make_shared<string>(boost::any_cast<string>(m["VideoTakenTime"]));
    }
    if (m.find("VideoDuration") != m.end() && !m["VideoDuration"].empty()) {
      videoDuration = make_shared<double>(boost::any_cast<double>(m["VideoDuration"]));
    }
    if (m.find("VideoBitrate") != m.end() && !m["VideoBitrate"].empty()) {
      videoBitrate = make_shared<long>(boost::any_cast<long>(m["VideoBitrate"]));
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
    if (m.find("VideoEmbeddingsFloat32") != m.end() && !m["VideoEmbeddingsFloat32"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["VideoEmbeddingsFloat32"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VideoEmbeddingsFloat32"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      videoEmbeddingsFloat32 = make_shared<vector<double>>(toVec1);
    }
    if (m.find("VideoEmbeddingsInt8") != m.end() && !m["VideoEmbeddingsInt8"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["VideoEmbeddingsInt8"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["VideoEmbeddingsInt8"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      videoEmbeddingsInt8 = make_shared<vector<long>>(toVec1);
    }
    if (m.find("AudioTakenTime") != m.end() && !m["AudioTakenTime"].empty()) {
      audioTakenTime = make_shared<string>(boost::any_cast<string>(m["AudioTakenTime"]));
    }
    if (m.find("AudioDuration") != m.end() && !m["AudioDuration"].empty()) {
      audioDuration = make_shared<double>(boost::any_cast<double>(m["AudioDuration"]));
    }
    if (m.find("AudioBitrate") != m.end() && !m["AudioBitrate"].empty()) {
      audioBitrate = make_shared<double>(boost::any_cast<double>(m["AudioBitrate"]));
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
    if (m.find("Artists") != m.end() && !m["Artists"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Artists"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Artists"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      artists = make_shared<vector<string>>(toVec1);
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
    if (m.find("Composer") != m.end() && !m["Composer"].empty()) {
      composer = make_shared<string>(boost::any_cast<string>(m["Composer"]));
    }
    if (m.find("Performer") != m.end() && !m["Performer"].empty()) {
      performer = make_shared<string>(boost::any_cast<string>(m["Performer"]));
    }
    if (m.find("AudioLanguage") != m.end() && !m["AudioLanguage"].empty()) {
      audioLanguage = make_shared<string>(boost::any_cast<string>(m["AudioLanguage"]));
    }
    if (m.find("Album") != m.end() && !m["Album"].empty()) {
      album = make_shared<string>(boost::any_cast<string>(m["Album"]));
    }
    if (m.find("AlbumArtist") != m.end() && !m["AlbumArtist"].empty()) {
      albumArtist = make_shared<string>(boost::any_cast<string>(m["AlbumArtist"]));
    }
    if (m.find("AudioEmbeddingsFloat32") != m.end() && !m["AudioEmbeddingsFloat32"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["AudioEmbeddingsFloat32"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AudioEmbeddingsFloat32"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      audioEmbeddingsFloat32 = make_shared<vector<double>>(toVec1);
    }
    if (m.find("AudioEmbeddingsInt8") != m.end() && !m["AudioEmbeddingsInt8"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["AudioEmbeddingsInt8"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AudioEmbeddingsInt8"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      audioEmbeddingsInt8 = make_shared<vector<long>>(toVec1);
    }
    if (m.find("DocumentLanguage") != m.end() && !m["DocumentLanguage"].empty()) {
      documentLanguage = make_shared<string>(boost::any_cast<string>(m["DocumentLanguage"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("DocumentContent") != m.end() && !m["DocumentContent"].empty()) {
      documentContent = make_shared<string>(boost::any_cast<string>(m["DocumentContent"]));
    }
    if (m.find("DocumentEmbeddingsFloat32") != m.end() && !m["DocumentEmbeddingsFloat32"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["DocumentEmbeddingsFloat32"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DocumentEmbeddingsFloat32"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      documentEmbeddingsFloat32 = make_shared<vector<double>>(toVec1);
    }
    if (m.find("DocumentEmbeddingsInt8") != m.end() && !m["DocumentEmbeddingsInt8"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["DocumentEmbeddingsInt8"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DocumentEmbeddingsInt8"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      documentEmbeddingsInt8 = make_shared<vector<long>>(toVec1);
    }
    if (m.find("ETag") != m.end() && !m["ETag"].empty()) {
      ETag = make_shared<string>(boost::any_cast<string>(m["ETag"]));
    }
    if (m.find("CacheControl") != m.end() && !m["CacheControl"].empty()) {
      cacheControl = make_shared<string>(boost::any_cast<string>(m["CacheControl"]));
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
    if (m.find("AccessControlAllowOrigin") != m.end() && !m["AccessControlAllowOrigin"].empty()) {
      accessControlAllowOrigin = make_shared<string>(boost::any_cast<string>(m["AccessControlAllowOrigin"]));
    }
    if (m.find("AccessControlRequestMethod") != m.end() && !m["AccessControlRequestMethod"].empty()) {
      accessControlRequestMethod = make_shared<string>(boost::any_cast<string>(m["AccessControlRequestMethod"]));
    }
    if (m.find("ServerSideEncryptionCustomerAlgorithm") != m.end() && !m["ServerSideEncryptionCustomerAlgorithm"].empty()) {
      serverSideEncryptionCustomerAlgorithm = make_shared<string>(boost::any_cast<string>(m["ServerSideEncryptionCustomerAlgorithm"]));
    }
    if (m.find("ServerSideEncryption") != m.end() && !m["ServerSideEncryption"].empty()) {
      serverSideEncryption = make_shared<string>(boost::any_cast<string>(m["ServerSideEncryption"]));
    }
    if (m.find("ServerSideDataEncryption") != m.end() && !m["ServerSideDataEncryption"].empty()) {
      serverSideDataEncryption = make_shared<string>(boost::any_cast<string>(m["ServerSideDataEncryption"]));
    }
    if (m.find("ServerSideEncryptionKeyId") != m.end() && !m["ServerSideEncryptionKeyId"].empty()) {
      serverSideEncryptionKeyId = make_shared<string>(boost::any_cast<string>(m["ServerSideEncryptionKeyId"]));
    }
    if (m.find("StorageClass") != m.end() && !m["StorageClass"].empty()) {
      storageClass = make_shared<string>(boost::any_cast<string>(m["StorageClass"]));
    }
    if (m.find("ObjectACL") != m.end() && !m["ObjectACL"].empty()) {
      objectACL = make_shared<string>(boost::any_cast<string>(m["ObjectACL"]));
    }
    if (m.find("ContentMd5") != m.end() && !m["ContentMd5"].empty()) {
      contentMd5 = make_shared<string>(boost::any_cast<string>(m["ContentMd5"]));
    }
    if (m.find("OSSUserMeta") != m.end() && !m["OSSUserMeta"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OSSUserMeta"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      OSSUserMeta = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("OSSTaggingCount") != m.end() && !m["OSSTaggingCount"].empty()) {
      OSSTaggingCount = make_shared<long>(boost::any_cast<long>(m["OSSTaggingCount"]));
    }
    if (m.find("OSSTagging") != m.end() && !m["OSSTagging"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["OSSTagging"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      OSSTagging = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("OSSExpiration") != m.end() && !m["OSSExpiration"].empty()) {
      OSSExpiration = make_shared<string>(boost::any_cast<string>(m["OSSExpiration"]));
    }
    if (m.find("OSSVersionId") != m.end() && !m["OSSVersionId"].empty()) {
      OSSVersionId = make_shared<string>(boost::any_cast<string>(m["OSSVersionId"]));
    }
    if (m.find("OSSDeleteMarker") != m.end() && !m["OSSDeleteMarker"].empty()) {
      OSSDeleteMarker = make_shared<string>(boost::any_cast<string>(m["OSSDeleteMarker"]));
    }
    if (m.find("OSSObjectType") != m.end() && !m["OSSObjectType"].empty()) {
      OSSObjectType = make_shared<string>(boost::any_cast<string>(m["OSSObjectType"]));
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
  }


  virtual ~File() = default;
};
class SimpleQuery : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> value{};
  shared_ptr<string> operation{};
  shared_ptr<vector<SimpleQuery>> subQueries{};

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
    if (value) {
      res["Value"] = boost::any(*value);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Field") != m.end() && !m["Field"].empty()) {
      field = make_shared<string>(boost::any_cast<string>(m["Field"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
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
  }


  virtual ~SimpleQuery() = default;
};
class BatchDeleteFileMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<vector<string>> URIs{};

  BatchDeleteFileMetaRequest() {}

  explicit BatchDeleteFileMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (URIs) {
      res["URIs"] = boost::any(*URIs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
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
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> URIsShrink{};

  BatchDeleteFileMetaShrinkRequest() {}

  explicit BatchDeleteFileMetaShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (URIsShrink) {
      res["URIs"] = boost::any(*URIsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
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
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<vector<string>> URIs{};

  BatchGetFileMetaRequest() {}

  explicit BatchGetFileMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (URIs) {
      res["URIs"] = boost::any(*URIs);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
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
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> URIsShrink{};

  BatchGetFileMetaShrinkRequest() {}

  explicit BatchGetFileMetaShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (URIsShrink) {
      res["URIs"] = boost::any(*URIsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("URIs") != m.end() && !m["URIs"].empty()) {
      URIsShrink = make_shared<string>(boost::any_cast<string>(m["URIs"]));
    }
  }


  virtual ~BatchGetFileMetaShrinkRequest() = default;
};
class BatchGetFileMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<File>> files{};

  BatchGetFileMetaResponseBody() {}

  explicit BatchGetFileMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (files) {
      vector<boost::any> temp1;
      for(auto item1:*files){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Files"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class BatchIndexFileMetaRequestFiles : public Darabonba::Model {
public:
  shared_ptr<string> URI{};
  shared_ptr<map<string, boost::any>> customLabels{};

  BatchIndexFileMetaRequestFiles() {}

  explicit BatchIndexFileMetaRequestFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    if (customLabels) {
      res["CustomLabels"] = boost::any(*customLabels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
    if (m.find("CustomLabels") != m.end() && !m["CustomLabels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CustomLabels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customLabels = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~BatchIndexFileMetaRequestFiles() = default;
};
class BatchIndexFileMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<vector<BatchIndexFileMetaRequestFiles>> files{};

  BatchIndexFileMetaRequest() {}

  explicit BatchIndexFileMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      if (typeid(vector<boost::any>) == m["Files"].type()) {
        vector<BatchIndexFileMetaRequestFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Files"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchIndexFileMetaRequestFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        files = make_shared<vector<BatchIndexFileMetaRequestFiles>>(expect1);
      }
    }
  }


  virtual ~BatchIndexFileMetaRequest() = default;
};
class BatchIndexFileMetaShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> filesShrink{};

  BatchIndexFileMetaShrinkRequest() {}

  explicit BatchIndexFileMetaShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (filesShrink) {
      res["Files"] = boost::any(*filesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      filesShrink = make_shared<string>(boost::any_cast<string>(m["Files"]));
    }
  }


  virtual ~BatchIndexFileMetaShrinkRequest() = default;
};
class BatchIndexFileMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BatchIndexFileMetaResponseBody() {}

  explicit BatchIndexFileMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
class BatchUpdateFileMetaRequestFiles : public Darabonba::Model {
public:
  shared_ptr<string> URI{};
  shared_ptr<map<string, boost::any>> customLabels{};

  BatchUpdateFileMetaRequestFiles() {}

  explicit BatchUpdateFileMetaRequestFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    if (customLabels) {
      res["CustomLabels"] = boost::any(*customLabels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
    if (m.find("CustomLabels") != m.end() && !m["CustomLabels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CustomLabels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customLabels = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~BatchUpdateFileMetaRequestFiles() = default;
};
class BatchUpdateFileMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<vector<BatchUpdateFileMetaRequestFiles>> files{};

  BatchUpdateFileMetaRequest() {}

  explicit BatchUpdateFileMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      if (typeid(vector<boost::any>) == m["Files"].type()) {
        vector<BatchUpdateFileMetaRequestFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Files"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchUpdateFileMetaRequestFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        files = make_shared<vector<BatchUpdateFileMetaRequestFiles>>(expect1);
      }
    }
  }


  virtual ~BatchUpdateFileMetaRequest() = default;
};
class BatchUpdateFileMetaShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> filesShrink{};

  BatchUpdateFileMetaShrinkRequest() {}

  explicit BatchUpdateFileMetaShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (filesShrink) {
      res["Files"] = boost::any(*filesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("Files") != m.end() && !m["Files"].empty()) {
      filesShrink = make_shared<string>(boost::any_cast<string>(m["Files"]));
    }
  }


  virtual ~BatchUpdateFileMetaShrinkRequest() = default;
};
class BatchUpdateFileMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  BatchUpdateFileMetaResponseBody() {}

  explicit BatchUpdateFileMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> URI{};

  CreateBindingRequest() {}

  explicit CreateBindingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~CreateBindingRequest() = default;
};
class CreateBindingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateBindingResponseBody() {}

  explicit CreateBindingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> description{};
  shared_ptr<string> templateId{};
  shared_ptr<long> datasetMaxOSSBindCount{};
  shared_ptr<long> datasetMaxFileCount{};
  shared_ptr<long> datasetMaxEntityCount{};
  shared_ptr<long> datasetMaxRelationCount{};
  shared_ptr<long> datasetMaxTotalFileSize{};

  CreateDatasetRequest() {}

  explicit CreateDatasetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (datasetMaxOSSBindCount) {
      res["DatasetMaxOSSBindCount"] = boost::any(*datasetMaxOSSBindCount);
    }
    if (datasetMaxFileCount) {
      res["DatasetMaxFileCount"] = boost::any(*datasetMaxFileCount);
    }
    if (datasetMaxEntityCount) {
      res["DatasetMaxEntityCount"] = boost::any(*datasetMaxEntityCount);
    }
    if (datasetMaxRelationCount) {
      res["DatasetMaxRelationCount"] = boost::any(*datasetMaxRelationCount);
    }
    if (datasetMaxTotalFileSize) {
      res["DatasetMaxTotalFileSize"] = boost::any(*datasetMaxTotalFileSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("DatasetMaxOSSBindCount") != m.end() && !m["DatasetMaxOSSBindCount"].empty()) {
      datasetMaxOSSBindCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxOSSBindCount"]));
    }
    if (m.find("DatasetMaxFileCount") != m.end() && !m["DatasetMaxFileCount"].empty()) {
      datasetMaxFileCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxFileCount"]));
    }
    if (m.find("DatasetMaxEntityCount") != m.end() && !m["DatasetMaxEntityCount"].empty()) {
      datasetMaxEntityCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxEntityCount"]));
    }
    if (m.find("DatasetMaxRelationCount") != m.end() && !m["DatasetMaxRelationCount"].empty()) {
      datasetMaxRelationCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxRelationCount"]));
    }
    if (m.find("DatasetMaxTotalFileSize") != m.end() && !m["DatasetMaxTotalFileSize"].empty()) {
      datasetMaxTotalFileSize = make_shared<long>(boost::any_cast<long>(m["DatasetMaxTotalFileSize"]));
    }
  }


  virtual ~CreateDatasetRequest() = default;
};
class CreateDatasetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};

  CreateDatasetResponseBody() {}

  explicit CreateDatasetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
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
class CreateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> description{};
  shared_ptr<string> serviceRole{};
  shared_ptr<string> templateId{};
  shared_ptr<long> projectQPS{};
  shared_ptr<long> projectTPS{};
  shared_ptr<long> projectMaxDatasetCount{};
  shared_ptr<long> datasetMaxOSSBindCount{};
  shared_ptr<long> datasetMaxFileCount{};
  shared_ptr<long> datasetMaxEntityCount{};
  shared_ptr<long> datasetMaxRelationCount{};
  shared_ptr<long> datasetMaxTotalFileSize{};

  CreateProjectRequest() {}

  explicit CreateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (serviceRole) {
      res["ServiceRole"] = boost::any(*serviceRole);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (projectQPS) {
      res["ProjectQPS"] = boost::any(*projectQPS);
    }
    if (projectTPS) {
      res["ProjectTPS"] = boost::any(*projectTPS);
    }
    if (projectMaxDatasetCount) {
      res["ProjectMaxDatasetCount"] = boost::any(*projectMaxDatasetCount);
    }
    if (datasetMaxOSSBindCount) {
      res["DatasetMaxOSSBindCount"] = boost::any(*datasetMaxOSSBindCount);
    }
    if (datasetMaxFileCount) {
      res["DatasetMaxFileCount"] = boost::any(*datasetMaxFileCount);
    }
    if (datasetMaxEntityCount) {
      res["DatasetMaxEntityCount"] = boost::any(*datasetMaxEntityCount);
    }
    if (datasetMaxRelationCount) {
      res["DatasetMaxRelationCount"] = boost::any(*datasetMaxRelationCount);
    }
    if (datasetMaxTotalFileSize) {
      res["DatasetMaxTotalFileSize"] = boost::any(*datasetMaxTotalFileSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ServiceRole") != m.end() && !m["ServiceRole"].empty()) {
      serviceRole = make_shared<string>(boost::any_cast<string>(m["ServiceRole"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("ProjectQPS") != m.end() && !m["ProjectQPS"].empty()) {
      projectQPS = make_shared<long>(boost::any_cast<long>(m["ProjectQPS"]));
    }
    if (m.find("ProjectTPS") != m.end() && !m["ProjectTPS"].empty()) {
      projectTPS = make_shared<long>(boost::any_cast<long>(m["ProjectTPS"]));
    }
    if (m.find("ProjectMaxDatasetCount") != m.end() && !m["ProjectMaxDatasetCount"].empty()) {
      projectMaxDatasetCount = make_shared<long>(boost::any_cast<long>(m["ProjectMaxDatasetCount"]));
    }
    if (m.find("DatasetMaxOSSBindCount") != m.end() && !m["DatasetMaxOSSBindCount"].empty()) {
      datasetMaxOSSBindCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxOSSBindCount"]));
    }
    if (m.find("DatasetMaxFileCount") != m.end() && !m["DatasetMaxFileCount"].empty()) {
      datasetMaxFileCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxFileCount"]));
    }
    if (m.find("DatasetMaxEntityCount") != m.end() && !m["DatasetMaxEntityCount"].empty()) {
      datasetMaxEntityCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxEntityCount"]));
    }
    if (m.find("DatasetMaxRelationCount") != m.end() && !m["DatasetMaxRelationCount"].empty()) {
      datasetMaxRelationCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxRelationCount"]));
    }
    if (m.find("DatasetMaxTotalFileSize") != m.end() && !m["DatasetMaxTotalFileSize"].empty()) {
      datasetMaxTotalFileSize = make_shared<long>(boost::any_cast<long>(m["DatasetMaxTotalFileSize"]));
    }
  }


  virtual ~CreateProjectRequest() = default;
};
class CreateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<long> createTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> description{};

  CreateProjectResponseBody() {}

  explicit CreateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
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
class DeleteBindingRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> URI{};

  DeleteBindingRequest() {}

  explicit DeleteBindingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
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
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};

  DeleteDatasetRequest() {}

  explicit DeleteDatasetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
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
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> URI{};

  DeleteFileMetaRequest() {}

  explicit DeleteFileMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
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
class FuzzyQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> query{};

  FuzzyQueryRequest() {}

  explicit FuzzyQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (query) {
      res["Query"] = boost::any(*query);
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
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
  }


  virtual ~FuzzyQueryRequest() = default;
};
class FuzzyQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<File>> files{};

  FuzzyQueryResponseBody() {}

  explicit FuzzyQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (files) {
      vector<boost::any> temp1;
      for(auto item1:*files){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Files"] = boost::any(temp1);
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
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> URI{};

  GetBindingRequest() {}

  explicit GetBindingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~GetBindingRequest() = default;
};
class GetBindingResponseBodyBinding : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> URI{};
  shared_ptr<string> state{};
  shared_ptr<string> phase{};
  shared_ptr<string> reason{};
  shared_ptr<long> createTime{};
  shared_ptr<long> updateTime{};

  GetBindingResponseBodyBinding() {}

  explicit GetBindingResponseBodyBinding(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (phase) {
      res["Phase"] = boost::any(*phase);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Phase") != m.end() && !m["Phase"].empty()) {
      phase = make_shared<string>(boost::any_cast<string>(m["Phase"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~GetBindingResponseBodyBinding() = default;
};
class GetBindingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetBindingResponseBodyBinding> binding{};

  GetBindingResponseBody() {}

  explicit GetBindingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (binding) {
      res["Binding"] = binding ? boost::any(binding->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Binding") != m.end() && !m["Binding"].empty()) {
      if (typeid(map<string, boost::any>) == m["Binding"].type()) {
        GetBindingResponseBodyBinding model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Binding"]));
        binding = make_shared<GetBindingResponseBodyBinding>(model1);
      }
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
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};

  GetDatasetRequest() {}

  explicit GetDatasetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
  }


  virtual ~GetDatasetRequest() = default;
};
class GetDatasetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> templateId{};
  shared_ptr<long> createTime{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> description{};
  shared_ptr<long> datasetMaxOSSBindCount{};
  shared_ptr<long> datasetMaxFileCount{};
  shared_ptr<long> datasetMaxEntityCount{};
  shared_ptr<long> datasetMaxRelationCount{};
  shared_ptr<long> datasetMaxTotalFileSize{};
  shared_ptr<long> bindCount{};
  shared_ptr<long> fileCount{};
  shared_ptr<long> totalFileSize{};

  GetDatasetResponseBody() {}

  explicit GetDatasetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (datasetMaxOSSBindCount) {
      res["DatasetMaxOSSBindCount"] = boost::any(*datasetMaxOSSBindCount);
    }
    if (datasetMaxFileCount) {
      res["DatasetMaxFileCount"] = boost::any(*datasetMaxFileCount);
    }
    if (datasetMaxEntityCount) {
      res["DatasetMaxEntityCount"] = boost::any(*datasetMaxEntityCount);
    }
    if (datasetMaxRelationCount) {
      res["DatasetMaxRelationCount"] = boost::any(*datasetMaxRelationCount);
    }
    if (datasetMaxTotalFileSize) {
      res["DatasetMaxTotalFileSize"] = boost::any(*datasetMaxTotalFileSize);
    }
    if (bindCount) {
      res["BindCount"] = boost::any(*bindCount);
    }
    if (fileCount) {
      res["FileCount"] = boost::any(*fileCount);
    }
    if (totalFileSize) {
      res["TotalFileSize"] = boost::any(*totalFileSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DatasetMaxOSSBindCount") != m.end() && !m["DatasetMaxOSSBindCount"].empty()) {
      datasetMaxOSSBindCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxOSSBindCount"]));
    }
    if (m.find("DatasetMaxFileCount") != m.end() && !m["DatasetMaxFileCount"].empty()) {
      datasetMaxFileCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxFileCount"]));
    }
    if (m.find("DatasetMaxEntityCount") != m.end() && !m["DatasetMaxEntityCount"].empty()) {
      datasetMaxEntityCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxEntityCount"]));
    }
    if (m.find("DatasetMaxRelationCount") != m.end() && !m["DatasetMaxRelationCount"].empty()) {
      datasetMaxRelationCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxRelationCount"]));
    }
    if (m.find("DatasetMaxTotalFileSize") != m.end() && !m["DatasetMaxTotalFileSize"].empty()) {
      datasetMaxTotalFileSize = make_shared<long>(boost::any_cast<long>(m["DatasetMaxTotalFileSize"]));
    }
    if (m.find("BindCount") != m.end() && !m["BindCount"].empty()) {
      bindCount = make_shared<long>(boost::any_cast<long>(m["BindCount"]));
    }
    if (m.find("FileCount") != m.end() && !m["FileCount"].empty()) {
      fileCount = make_shared<long>(boost::any_cast<long>(m["FileCount"]));
    }
    if (m.find("TotalFileSize") != m.end() && !m["TotalFileSize"].empty()) {
      totalFileSize = make_shared<long>(boost::any_cast<long>(m["TotalFileSize"]));
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
class GetFileMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> URI{};

  GetFileMetaRequest() {}

  explicit GetFileMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~GetFileMetaRequest() = default;
};
class GetFileMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<File>> files{};

  GetFileMetaResponseBody() {}

  explicit GetFileMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (files) {
      vector<boost::any> temp1;
      for(auto item1:*files){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Files"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
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
class GetFileSignedURIRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> URI{};

  GetFileSignedURIRequest() {}

  explicit GetFileSignedURIRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~GetFileSignedURIRequest() = default;
};
class GetFileSignedURIResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> URI{};

  GetFileSignedURIResponseBody() {}

  explicit GetFileSignedURIResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
  }


  virtual ~GetFileSignedURIResponseBody() = default;
};
class GetFileSignedURIResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetFileSignedURIResponseBody> body{};

  GetFileSignedURIResponse() {}

  explicit GetFileSignedURIResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFileSignedURIResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFileSignedURIResponseBody>(model1);
      }
    }
  }


  virtual ~GetFileSignedURIResponse() = default;
};
class GetProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};

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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
  }


  virtual ~GetProjectRequest() = default;
};
class GetProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> description{};
  shared_ptr<string> serviceRole{};
  shared_ptr<string> templateId{};
  shared_ptr<long> createTime{};
  shared_ptr<long> updateTime{};
  shared_ptr<long> projectQPS{};
  shared_ptr<long> projectTPS{};
  shared_ptr<long> projectMaxDatasetCount{};
  shared_ptr<long> datasetMaxOSSBindCount{};
  shared_ptr<long> datasetMaxFileCount{};
  shared_ptr<long> datasetMaxEntityCount{};
  shared_ptr<long> datasetMaxRelationCount{};
  shared_ptr<long> datasetMaxTotalFileSize{};
  shared_ptr<long> datasetCount{};
  shared_ptr<long> fileCount{};
  shared_ptr<long> totalFileSize{};
  shared_ptr<string> requestId{};

  GetProjectResponseBody() {}

  explicit GetProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (serviceRole) {
      res["ServiceRole"] = boost::any(*serviceRole);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (projectQPS) {
      res["ProjectQPS"] = boost::any(*projectQPS);
    }
    if (projectTPS) {
      res["ProjectTPS"] = boost::any(*projectTPS);
    }
    if (projectMaxDatasetCount) {
      res["ProjectMaxDatasetCount"] = boost::any(*projectMaxDatasetCount);
    }
    if (datasetMaxOSSBindCount) {
      res["DatasetMaxOSSBindCount"] = boost::any(*datasetMaxOSSBindCount);
    }
    if (datasetMaxFileCount) {
      res["DatasetMaxFileCount"] = boost::any(*datasetMaxFileCount);
    }
    if (datasetMaxEntityCount) {
      res["DatasetMaxEntityCount"] = boost::any(*datasetMaxEntityCount);
    }
    if (datasetMaxRelationCount) {
      res["DatasetMaxRelationCount"] = boost::any(*datasetMaxRelationCount);
    }
    if (datasetMaxTotalFileSize) {
      res["DatasetMaxTotalFileSize"] = boost::any(*datasetMaxTotalFileSize);
    }
    if (datasetCount) {
      res["DatasetCount"] = boost::any(*datasetCount);
    }
    if (fileCount) {
      res["FileCount"] = boost::any(*fileCount);
    }
    if (totalFileSize) {
      res["TotalFileSize"] = boost::any(*totalFileSize);
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
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ServiceRole") != m.end() && !m["ServiceRole"].empty()) {
      serviceRole = make_shared<string>(boost::any_cast<string>(m["ServiceRole"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("ProjectQPS") != m.end() && !m["ProjectQPS"].empty()) {
      projectQPS = make_shared<long>(boost::any_cast<long>(m["ProjectQPS"]));
    }
    if (m.find("ProjectTPS") != m.end() && !m["ProjectTPS"].empty()) {
      projectTPS = make_shared<long>(boost::any_cast<long>(m["ProjectTPS"]));
    }
    if (m.find("ProjectMaxDatasetCount") != m.end() && !m["ProjectMaxDatasetCount"].empty()) {
      projectMaxDatasetCount = make_shared<long>(boost::any_cast<long>(m["ProjectMaxDatasetCount"]));
    }
    if (m.find("DatasetMaxOSSBindCount") != m.end() && !m["DatasetMaxOSSBindCount"].empty()) {
      datasetMaxOSSBindCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxOSSBindCount"]));
    }
    if (m.find("DatasetMaxFileCount") != m.end() && !m["DatasetMaxFileCount"].empty()) {
      datasetMaxFileCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxFileCount"]));
    }
    if (m.find("DatasetMaxEntityCount") != m.end() && !m["DatasetMaxEntityCount"].empty()) {
      datasetMaxEntityCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxEntityCount"]));
    }
    if (m.find("DatasetMaxRelationCount") != m.end() && !m["DatasetMaxRelationCount"].empty()) {
      datasetMaxRelationCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxRelationCount"]));
    }
    if (m.find("DatasetMaxTotalFileSize") != m.end() && !m["DatasetMaxTotalFileSize"].empty()) {
      datasetMaxTotalFileSize = make_shared<long>(boost::any_cast<long>(m["DatasetMaxTotalFileSize"]));
    }
    if (m.find("DatasetCount") != m.end() && !m["DatasetCount"].empty()) {
      datasetCount = make_shared<long>(boost::any_cast<long>(m["DatasetCount"]));
    }
    if (m.find("FileCount") != m.end() && !m["FileCount"].empty()) {
      fileCount = make_shared<long>(boost::any_cast<long>(m["FileCount"]));
    }
    if (m.find("TotalFileSize") != m.end() && !m["TotalFileSize"].empty()) {
      totalFileSize = make_shared<long>(boost::any_cast<long>(m["TotalFileSize"]));
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
class IndexFileMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> URI{};
  shared_ptr<map<string, boost::any>> customLabels{};

  IndexFileMetaRequest() {}

  explicit IndexFileMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    if (customLabels) {
      res["CustomLabels"] = boost::any(*customLabels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
    if (m.find("CustomLabels") != m.end() && !m["CustomLabels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CustomLabels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customLabels = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~IndexFileMetaRequest() = default;
};
class IndexFileMetaShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> URI{};
  shared_ptr<string> customLabelsShrink{};

  IndexFileMetaShrinkRequest() {}

  explicit IndexFileMetaShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    if (customLabelsShrink) {
      res["CustomLabels"] = boost::any(*customLabelsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
    if (m.find("CustomLabels") != m.end() && !m["CustomLabels"].empty()) {
      customLabelsShrink = make_shared<string>(boost::any_cast<string>(m["CustomLabels"]));
    }
  }


  virtual ~IndexFileMetaShrinkRequest() = default;
};
class IndexFileMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  IndexFileMetaResponseBody() {}

  explicit IndexFileMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListBindingsRequest() {}

  explicit ListBindingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
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
  }


  virtual ~ListBindingsRequest() = default;
};
class ListBindingsResponseBodyBindingsBinding : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> URI{};
  shared_ptr<string> state{};
  shared_ptr<string> phase{};
  shared_ptr<string> reason{};
  shared_ptr<long> createTime{};
  shared_ptr<long> updateTime{};

  ListBindingsResponseBodyBindingsBinding() {}

  explicit ListBindingsResponseBodyBindingsBinding(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (phase) {
      res["Phase"] = boost::any(*phase);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Phase") != m.end() && !m["Phase"].empty()) {
      phase = make_shared<string>(boost::any_cast<string>(m["Phase"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~ListBindingsResponseBodyBindingsBinding() = default;
};
class ListBindingsResponseBodyBindings : public Darabonba::Model {
public:
  shared_ptr<ListBindingsResponseBodyBindingsBinding> binding{};

  ListBindingsResponseBodyBindings() {}

  explicit ListBindingsResponseBodyBindings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (binding) {
      res["Binding"] = binding ? boost::any(binding->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Binding") != m.end() && !m["Binding"].empty()) {
      if (typeid(map<string, boost::any>) == m["Binding"].type()) {
        ListBindingsResponseBodyBindingsBinding model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Binding"]));
        binding = make_shared<ListBindingsResponseBodyBindingsBinding>(model1);
      }
    }
  }


  virtual ~ListBindingsResponseBodyBindings() = default;
};
class ListBindingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListBindingsResponseBodyBindings>> bindings{};

  ListBindingsResponseBody() {}

  explicit ListBindingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (bindings) {
      vector<boost::any> temp1;
      for(auto item1:*bindings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bindings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Bindings") != m.end() && !m["Bindings"].empty()) {
      if (typeid(vector<boost::any>) == m["Bindings"].type()) {
        vector<ListBindingsResponseBodyBindings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bindings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListBindingsResponseBodyBindings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bindings = make_shared<vector<ListBindingsResponseBodyBindings>>(expect1);
      }
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
  shared_ptr<string> projectName{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};

  ListDatasetsRequest() {}

  explicit ListDatasetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
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
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
  }


  virtual ~ListDatasetsRequest() = default;
};
class ListDatasetsResponseBodyDatasets : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> workflow{};
  shared_ptr<long> createTime{};
  shared_ptr<long> updateTime{};
  shared_ptr<string> description{};
  shared_ptr<long> datasetMaxOSSBindCount{};
  shared_ptr<long> datasetMaxFileCount{};
  shared_ptr<long> datasetMaxEntityCount{};
  shared_ptr<long> datasetMaxRelationCount{};
  shared_ptr<long> datasetMaxTotalFileSize{};
  shared_ptr<long> bindCount{};

  ListDatasetsResponseBodyDatasets() {}

  explicit ListDatasetsResponseBodyDatasets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (workflow) {
      res["Workflow"] = boost::any(*workflow);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (datasetMaxOSSBindCount) {
      res["DatasetMaxOSSBindCount"] = boost::any(*datasetMaxOSSBindCount);
    }
    if (datasetMaxFileCount) {
      res["DatasetMaxFileCount"] = boost::any(*datasetMaxFileCount);
    }
    if (datasetMaxEntityCount) {
      res["DatasetMaxEntityCount"] = boost::any(*datasetMaxEntityCount);
    }
    if (datasetMaxRelationCount) {
      res["DatasetMaxRelationCount"] = boost::any(*datasetMaxRelationCount);
    }
    if (datasetMaxTotalFileSize) {
      res["DatasetMaxTotalFileSize"] = boost::any(*datasetMaxTotalFileSize);
    }
    if (bindCount) {
      res["BindCount"] = boost::any(*bindCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("Workflow") != m.end() && !m["Workflow"].empty()) {
      workflow = make_shared<string>(boost::any_cast<string>(m["Workflow"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DatasetMaxOSSBindCount") != m.end() && !m["DatasetMaxOSSBindCount"].empty()) {
      datasetMaxOSSBindCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxOSSBindCount"]));
    }
    if (m.find("DatasetMaxFileCount") != m.end() && !m["DatasetMaxFileCount"].empty()) {
      datasetMaxFileCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxFileCount"]));
    }
    if (m.find("DatasetMaxEntityCount") != m.end() && !m["DatasetMaxEntityCount"].empty()) {
      datasetMaxEntityCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxEntityCount"]));
    }
    if (m.find("DatasetMaxRelationCount") != m.end() && !m["DatasetMaxRelationCount"].empty()) {
      datasetMaxRelationCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxRelationCount"]));
    }
    if (m.find("DatasetMaxTotalFileSize") != m.end() && !m["DatasetMaxTotalFileSize"].empty()) {
      datasetMaxTotalFileSize = make_shared<long>(boost::any_cast<long>(m["DatasetMaxTotalFileSize"]));
    }
    if (m.find("BindCount") != m.end() && !m["BindCount"].empty()) {
      bindCount = make_shared<long>(boost::any_cast<long>(m["BindCount"]));
    }
  }


  virtual ~ListDatasetsResponseBodyDatasets() = default;
};
class ListDatasetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListDatasetsResponseBodyDatasets>> datasets{};

  ListDatasetsResponseBody() {}

  explicit ListDatasetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (datasets) {
      vector<boost::any> temp1;
      for(auto item1:*datasets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Datasets"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Datasets") != m.end() && !m["Datasets"].empty()) {
      if (typeid(vector<boost::any>) == m["Datasets"].type()) {
        vector<ListDatasetsResponseBodyDatasets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Datasets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDatasetsResponseBodyDatasets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        datasets = make_shared<vector<ListDatasetsResponseBodyDatasets>>(expect1);
      }
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
class ListProjectsResponseBodyProjects : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> serviceRole{};
  shared_ptr<string> workflow{};
  shared_ptr<string> description{};
  shared_ptr<long> createTime{};
  shared_ptr<long> updateTime{};
  shared_ptr<long> projectQPS{};
  shared_ptr<long> projectTPS{};
  shared_ptr<long> projectMaxDatasetCount{};
  shared_ptr<long> datasetMaxOSSBindCount{};
  shared_ptr<long> datasetMaxFileCount{};
  shared_ptr<long> datasetMaxEntityCount{};
  shared_ptr<long> datasetMaxRelationCount{};
  shared_ptr<long> datasetMaxTotalFileSize{};
  shared_ptr<long> datasetCount{};

  ListProjectsResponseBodyProjects() {}

  explicit ListProjectsResponseBodyProjects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (serviceRole) {
      res["ServiceRole"] = boost::any(*serviceRole);
    }
    if (workflow) {
      res["Workflow"] = boost::any(*workflow);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (projectQPS) {
      res["ProjectQPS"] = boost::any(*projectQPS);
    }
    if (projectTPS) {
      res["ProjectTPS"] = boost::any(*projectTPS);
    }
    if (projectMaxDatasetCount) {
      res["ProjectMaxDatasetCount"] = boost::any(*projectMaxDatasetCount);
    }
    if (datasetMaxOSSBindCount) {
      res["DatasetMaxOSSBindCount"] = boost::any(*datasetMaxOSSBindCount);
    }
    if (datasetMaxFileCount) {
      res["DatasetMaxFileCount"] = boost::any(*datasetMaxFileCount);
    }
    if (datasetMaxEntityCount) {
      res["DatasetMaxEntityCount"] = boost::any(*datasetMaxEntityCount);
    }
    if (datasetMaxRelationCount) {
      res["DatasetMaxRelationCount"] = boost::any(*datasetMaxRelationCount);
    }
    if (datasetMaxTotalFileSize) {
      res["DatasetMaxTotalFileSize"] = boost::any(*datasetMaxTotalFileSize);
    }
    if (datasetCount) {
      res["DatasetCount"] = boost::any(*datasetCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("ServiceRole") != m.end() && !m["ServiceRole"].empty()) {
      serviceRole = make_shared<string>(boost::any_cast<string>(m["ServiceRole"]));
    }
    if (m.find("Workflow") != m.end() && !m["Workflow"].empty()) {
      workflow = make_shared<string>(boost::any_cast<string>(m["Workflow"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
    if (m.find("ProjectQPS") != m.end() && !m["ProjectQPS"].empty()) {
      projectQPS = make_shared<long>(boost::any_cast<long>(m["ProjectQPS"]));
    }
    if (m.find("ProjectTPS") != m.end() && !m["ProjectTPS"].empty()) {
      projectTPS = make_shared<long>(boost::any_cast<long>(m["ProjectTPS"]));
    }
    if (m.find("ProjectMaxDatasetCount") != m.end() && !m["ProjectMaxDatasetCount"].empty()) {
      projectMaxDatasetCount = make_shared<long>(boost::any_cast<long>(m["ProjectMaxDatasetCount"]));
    }
    if (m.find("DatasetMaxOSSBindCount") != m.end() && !m["DatasetMaxOSSBindCount"].empty()) {
      datasetMaxOSSBindCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxOSSBindCount"]));
    }
    if (m.find("DatasetMaxFileCount") != m.end() && !m["DatasetMaxFileCount"].empty()) {
      datasetMaxFileCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxFileCount"]));
    }
    if (m.find("DatasetMaxEntityCount") != m.end() && !m["DatasetMaxEntityCount"].empty()) {
      datasetMaxEntityCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxEntityCount"]));
    }
    if (m.find("DatasetMaxRelationCount") != m.end() && !m["DatasetMaxRelationCount"].empty()) {
      datasetMaxRelationCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxRelationCount"]));
    }
    if (m.find("DatasetMaxTotalFileSize") != m.end() && !m["DatasetMaxTotalFileSize"].empty()) {
      datasetMaxTotalFileSize = make_shared<long>(boost::any_cast<long>(m["DatasetMaxTotalFileSize"]));
    }
    if (m.find("DatasetCount") != m.end() && !m["DatasetCount"].empty()) {
      datasetCount = make_shared<long>(boost::any_cast<long>(m["DatasetCount"]));
    }
  }


  virtual ~ListProjectsResponseBodyProjects() = default;
};
class ListProjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListProjectsResponseBodyProjects>> projects{};
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
        vector<ListProjectsResponseBodyProjects> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Projects"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListProjectsResponseBodyProjects model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projects = make_shared<vector<ListProjectsResponseBodyProjects>>(expect1);
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
class ResumeBindingRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> URI{};

  ResumeBindingRequest() {}

  explicit ResumeBindingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
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
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<SimpleQuery> query{};
  shared_ptr<string> sort{};
  shared_ptr<string> order{};
  shared_ptr<vector<SimpleQueryRequestAggregations>> aggregations{};

  SimpleQueryRequest() {}

  explicit SimpleQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (query) {
      res["Query"] = query ? boost::any(query->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (aggregations) {
      vector<boost::any> temp1;
      for(auto item1:*aggregations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Aggregations"] = boost::any(temp1);
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
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
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
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
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
  }


  virtual ~SimpleQueryRequest() = default;
};
class SimpleQueryShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> queryShrink{};
  shared_ptr<string> sort{};
  shared_ptr<string> order{};
  shared_ptr<string> aggregationsShrink{};

  SimpleQueryShrinkRequest() {}

  explicit SimpleQueryShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (queryShrink) {
      res["Query"] = boost::any(*queryShrink);
    }
    if (sort) {
      res["Sort"] = boost::any(*sort);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (aggregationsShrink) {
      res["Aggregations"] = boost::any(*aggregationsShrink);
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
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      queryShrink = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("Sort") != m.end() && !m["Sort"].empty()) {
      sort = make_shared<string>(boost::any_cast<string>(m["Sort"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("Aggregations") != m.end() && !m["Aggregations"].empty()) {
      aggregationsShrink = make_shared<string>(boost::any_cast<string>(m["Aggregations"]));
    }
  }


  virtual ~SimpleQueryShrinkRequest() = default;
};
class SimpleQueryResponseBodyAggregationsGroups : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<long> count{};

  SimpleQueryResponseBodyAggregationsGroups() {}

  explicit SimpleQueryResponseBodyAggregationsGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
  }


  virtual ~SimpleQueryResponseBodyAggregationsGroups() = default;
};
class SimpleQueryResponseBodyAggregations : public Darabonba::Model {
public:
  shared_ptr<string> field{};
  shared_ptr<string> operation{};
  shared_ptr<double> value{};
  shared_ptr<vector<SimpleQueryResponseBodyAggregationsGroups>> groups{};

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
    if (operation) {
      res["Operation"] = boost::any(*operation);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (groups) {
      vector<boost::any> temp1;
      for(auto item1:*groups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Groups"] = boost::any(temp1);
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
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["Value"]));
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
  }


  virtual ~SimpleQueryResponseBodyAggregations() = default;
};
class SimpleQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<File>> files{};
  shared_ptr<vector<SimpleQueryResponseBodyAggregations>> aggregations{};

  SimpleQueryResponseBody() {}

  explicit SimpleQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (files) {
      vector<boost::any> temp1;
      for(auto item1:*files){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Files"] = boost::any(temp1);
    }
    if (aggregations) {
      vector<boost::any> temp1;
      for(auto item1:*aggregations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Aggregations"] = boost::any(temp1);
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
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> URI{};
  shared_ptr<string> reason{};

  StopBindingRequest() {}

  explicit StopBindingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
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
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> description{};
  shared_ptr<string> templateId{};
  shared_ptr<long> datasetMaxOSSBindCount{};
  shared_ptr<long> datasetMaxFileCount{};
  shared_ptr<long> datasetMaxEntityCount{};
  shared_ptr<long> datasetMaxRelationCount{};
  shared_ptr<long> datasetMaxTotalFileSize{};
  shared_ptr<vector<string>> resetItems{};

  UpdateDatasetRequest() {}

  explicit UpdateDatasetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (datasetMaxOSSBindCount) {
      res["DatasetMaxOSSBindCount"] = boost::any(*datasetMaxOSSBindCount);
    }
    if (datasetMaxFileCount) {
      res["DatasetMaxFileCount"] = boost::any(*datasetMaxFileCount);
    }
    if (datasetMaxEntityCount) {
      res["DatasetMaxEntityCount"] = boost::any(*datasetMaxEntityCount);
    }
    if (datasetMaxRelationCount) {
      res["DatasetMaxRelationCount"] = boost::any(*datasetMaxRelationCount);
    }
    if (datasetMaxTotalFileSize) {
      res["DatasetMaxTotalFileSize"] = boost::any(*datasetMaxTotalFileSize);
    }
    if (resetItems) {
      res["ResetItems"] = boost::any(*resetItems);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("DatasetMaxOSSBindCount") != m.end() && !m["DatasetMaxOSSBindCount"].empty()) {
      datasetMaxOSSBindCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxOSSBindCount"]));
    }
    if (m.find("DatasetMaxFileCount") != m.end() && !m["DatasetMaxFileCount"].empty()) {
      datasetMaxFileCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxFileCount"]));
    }
    if (m.find("DatasetMaxEntityCount") != m.end() && !m["DatasetMaxEntityCount"].empty()) {
      datasetMaxEntityCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxEntityCount"]));
    }
    if (m.find("DatasetMaxRelationCount") != m.end() && !m["DatasetMaxRelationCount"].empty()) {
      datasetMaxRelationCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxRelationCount"]));
    }
    if (m.find("DatasetMaxTotalFileSize") != m.end() && !m["DatasetMaxTotalFileSize"].empty()) {
      datasetMaxTotalFileSize = make_shared<long>(boost::any_cast<long>(m["DatasetMaxTotalFileSize"]));
    }
    if (m.find("ResetItems") != m.end() && !m["ResetItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResetItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResetItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resetItems = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateDatasetRequest() = default;
};
class UpdateDatasetShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> description{};
  shared_ptr<string> templateId{};
  shared_ptr<long> datasetMaxOSSBindCount{};
  shared_ptr<long> datasetMaxFileCount{};
  shared_ptr<long> datasetMaxEntityCount{};
  shared_ptr<long> datasetMaxRelationCount{};
  shared_ptr<long> datasetMaxTotalFileSize{};
  shared_ptr<string> resetItemsShrink{};

  UpdateDatasetShrinkRequest() {}

  explicit UpdateDatasetShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (datasetMaxOSSBindCount) {
      res["DatasetMaxOSSBindCount"] = boost::any(*datasetMaxOSSBindCount);
    }
    if (datasetMaxFileCount) {
      res["DatasetMaxFileCount"] = boost::any(*datasetMaxFileCount);
    }
    if (datasetMaxEntityCount) {
      res["DatasetMaxEntityCount"] = boost::any(*datasetMaxEntityCount);
    }
    if (datasetMaxRelationCount) {
      res["DatasetMaxRelationCount"] = boost::any(*datasetMaxRelationCount);
    }
    if (datasetMaxTotalFileSize) {
      res["DatasetMaxTotalFileSize"] = boost::any(*datasetMaxTotalFileSize);
    }
    if (resetItemsShrink) {
      res["ResetItems"] = boost::any(*resetItemsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("DatasetMaxOSSBindCount") != m.end() && !m["DatasetMaxOSSBindCount"].empty()) {
      datasetMaxOSSBindCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxOSSBindCount"]));
    }
    if (m.find("DatasetMaxFileCount") != m.end() && !m["DatasetMaxFileCount"].empty()) {
      datasetMaxFileCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxFileCount"]));
    }
    if (m.find("DatasetMaxEntityCount") != m.end() && !m["DatasetMaxEntityCount"].empty()) {
      datasetMaxEntityCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxEntityCount"]));
    }
    if (m.find("DatasetMaxRelationCount") != m.end() && !m["DatasetMaxRelationCount"].empty()) {
      datasetMaxRelationCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxRelationCount"]));
    }
    if (m.find("DatasetMaxTotalFileSize") != m.end() && !m["DatasetMaxTotalFileSize"].empty()) {
      datasetMaxTotalFileSize = make_shared<long>(boost::any_cast<long>(m["DatasetMaxTotalFileSize"]));
    }
    if (m.find("ResetItems") != m.end() && !m["ResetItems"].empty()) {
      resetItemsShrink = make_shared<string>(boost::any_cast<string>(m["ResetItems"]));
    }
  }


  virtual ~UpdateDatasetShrinkRequest() = default;
};
class UpdateDatasetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateDatasetResponseBody() {}

  explicit UpdateDatasetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
class UpdateFileMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> URI{};
  shared_ptr<map<string, boost::any>> customLabels{};

  UpdateFileMetaRequest() {}

  explicit UpdateFileMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    if (customLabels) {
      res["CustomLabels"] = boost::any(*customLabels);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
    if (m.find("CustomLabels") != m.end() && !m["CustomLabels"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["CustomLabels"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      customLabels = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~UpdateFileMetaRequest() = default;
};
class UpdateFileMetaShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> datasetName{};
  shared_ptr<string> URI{};
  shared_ptr<string> customLabelsShrink{};

  UpdateFileMetaShrinkRequest() {}

  explicit UpdateFileMetaShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (datasetName) {
      res["DatasetName"] = boost::any(*datasetName);
    }
    if (URI) {
      res["URI"] = boost::any(*URI);
    }
    if (customLabelsShrink) {
      res["CustomLabels"] = boost::any(*customLabelsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("DatasetName") != m.end() && !m["DatasetName"].empty()) {
      datasetName = make_shared<string>(boost::any_cast<string>(m["DatasetName"]));
    }
    if (m.find("URI") != m.end() && !m["URI"].empty()) {
      URI = make_shared<string>(boost::any_cast<string>(m["URI"]));
    }
    if (m.find("CustomLabels") != m.end() && !m["CustomLabels"].empty()) {
      customLabelsShrink = make_shared<string>(boost::any_cast<string>(m["CustomLabels"]));
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
  shared_ptr<string> projectName{};
  shared_ptr<string> serviceRole{};
  shared_ptr<string> description{};
  shared_ptr<string> templateId{};
  shared_ptr<long> projectQPS{};
  shared_ptr<long> projectTPS{};
  shared_ptr<long> projectMaxDatasetCount{};
  shared_ptr<long> datasetMaxOSSBindCount{};
  shared_ptr<long> datasetMaxFileCount{};
  shared_ptr<long> datasetMaxEntityCount{};
  shared_ptr<long> datasetMaxRelationCount{};
  shared_ptr<vector<string>> resetItems{};

  UpdateProjectRequest() {}

  explicit UpdateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (serviceRole) {
      res["ServiceRole"] = boost::any(*serviceRole);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (projectQPS) {
      res["ProjectQPS"] = boost::any(*projectQPS);
    }
    if (projectTPS) {
      res["ProjectTPS"] = boost::any(*projectTPS);
    }
    if (projectMaxDatasetCount) {
      res["ProjectMaxDatasetCount"] = boost::any(*projectMaxDatasetCount);
    }
    if (datasetMaxOSSBindCount) {
      res["DatasetMaxOSSBindCount"] = boost::any(*datasetMaxOSSBindCount);
    }
    if (datasetMaxFileCount) {
      res["DatasetMaxFileCount"] = boost::any(*datasetMaxFileCount);
    }
    if (datasetMaxEntityCount) {
      res["DatasetMaxEntityCount"] = boost::any(*datasetMaxEntityCount);
    }
    if (datasetMaxRelationCount) {
      res["DatasetMaxRelationCount"] = boost::any(*datasetMaxRelationCount);
    }
    if (resetItems) {
      res["ResetItems"] = boost::any(*resetItems);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("ServiceRole") != m.end() && !m["ServiceRole"].empty()) {
      serviceRole = make_shared<string>(boost::any_cast<string>(m["ServiceRole"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("ProjectQPS") != m.end() && !m["ProjectQPS"].empty()) {
      projectQPS = make_shared<long>(boost::any_cast<long>(m["ProjectQPS"]));
    }
    if (m.find("ProjectTPS") != m.end() && !m["ProjectTPS"].empty()) {
      projectTPS = make_shared<long>(boost::any_cast<long>(m["ProjectTPS"]));
    }
    if (m.find("ProjectMaxDatasetCount") != m.end() && !m["ProjectMaxDatasetCount"].empty()) {
      projectMaxDatasetCount = make_shared<long>(boost::any_cast<long>(m["ProjectMaxDatasetCount"]));
    }
    if (m.find("DatasetMaxOSSBindCount") != m.end() && !m["DatasetMaxOSSBindCount"].empty()) {
      datasetMaxOSSBindCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxOSSBindCount"]));
    }
    if (m.find("DatasetMaxFileCount") != m.end() && !m["DatasetMaxFileCount"].empty()) {
      datasetMaxFileCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxFileCount"]));
    }
    if (m.find("DatasetMaxEntityCount") != m.end() && !m["DatasetMaxEntityCount"].empty()) {
      datasetMaxEntityCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxEntityCount"]));
    }
    if (m.find("DatasetMaxRelationCount") != m.end() && !m["DatasetMaxRelationCount"].empty()) {
      datasetMaxRelationCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxRelationCount"]));
    }
    if (m.find("ResetItems") != m.end() && !m["ResetItems"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResetItems"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResetItems"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resetItems = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateProjectRequest() = default;
};
class UpdateProjectShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> serviceRole{};
  shared_ptr<string> description{};
  shared_ptr<string> templateId{};
  shared_ptr<long> projectQPS{};
  shared_ptr<long> projectTPS{};
  shared_ptr<long> projectMaxDatasetCount{};
  shared_ptr<long> datasetMaxOSSBindCount{};
  shared_ptr<long> datasetMaxFileCount{};
  shared_ptr<long> datasetMaxEntityCount{};
  shared_ptr<long> datasetMaxRelationCount{};
  shared_ptr<string> resetItemsShrink{};

  UpdateProjectShrinkRequest() {}

  explicit UpdateProjectShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (serviceRole) {
      res["ServiceRole"] = boost::any(*serviceRole);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (projectQPS) {
      res["ProjectQPS"] = boost::any(*projectQPS);
    }
    if (projectTPS) {
      res["ProjectTPS"] = boost::any(*projectTPS);
    }
    if (projectMaxDatasetCount) {
      res["ProjectMaxDatasetCount"] = boost::any(*projectMaxDatasetCount);
    }
    if (datasetMaxOSSBindCount) {
      res["DatasetMaxOSSBindCount"] = boost::any(*datasetMaxOSSBindCount);
    }
    if (datasetMaxFileCount) {
      res["DatasetMaxFileCount"] = boost::any(*datasetMaxFileCount);
    }
    if (datasetMaxEntityCount) {
      res["DatasetMaxEntityCount"] = boost::any(*datasetMaxEntityCount);
    }
    if (datasetMaxRelationCount) {
      res["DatasetMaxRelationCount"] = boost::any(*datasetMaxRelationCount);
    }
    if (resetItemsShrink) {
      res["ResetItems"] = boost::any(*resetItemsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("ServiceRole") != m.end() && !m["ServiceRole"].empty()) {
      serviceRole = make_shared<string>(boost::any_cast<string>(m["ServiceRole"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("ProjectQPS") != m.end() && !m["ProjectQPS"].empty()) {
      projectQPS = make_shared<long>(boost::any_cast<long>(m["ProjectQPS"]));
    }
    if (m.find("ProjectTPS") != m.end() && !m["ProjectTPS"].empty()) {
      projectTPS = make_shared<long>(boost::any_cast<long>(m["ProjectTPS"]));
    }
    if (m.find("ProjectMaxDatasetCount") != m.end() && !m["ProjectMaxDatasetCount"].empty()) {
      projectMaxDatasetCount = make_shared<long>(boost::any_cast<long>(m["ProjectMaxDatasetCount"]));
    }
    if (m.find("DatasetMaxOSSBindCount") != m.end() && !m["DatasetMaxOSSBindCount"].empty()) {
      datasetMaxOSSBindCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxOSSBindCount"]));
    }
    if (m.find("DatasetMaxFileCount") != m.end() && !m["DatasetMaxFileCount"].empty()) {
      datasetMaxFileCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxFileCount"]));
    }
    if (m.find("DatasetMaxEntityCount") != m.end() && !m["DatasetMaxEntityCount"].empty()) {
      datasetMaxEntityCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxEntityCount"]));
    }
    if (m.find("DatasetMaxRelationCount") != m.end() && !m["DatasetMaxRelationCount"].empty()) {
      datasetMaxRelationCount = make_shared<long>(boost::any_cast<long>(m["DatasetMaxRelationCount"]));
    }
    if (m.find("ResetItems") != m.end() && !m["ResetItems"].empty()) {
      resetItemsShrink = make_shared<string>(boost::any_cast<string>(m["ResetItems"]));
    }
  }


  virtual ~UpdateProjectShrinkRequest() = default;
};
class UpdateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateProjectResponseBody() {}

  explicit UpdateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  CreateProjectResponse createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProjectResponse createProject(shared_ptr<CreateProjectRequest> request);
  DeleteBindingResponse deleteBindingWithOptions(shared_ptr<DeleteBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBindingResponse deleteBinding(shared_ptr<DeleteBindingRequest> request);
  DeleteDatasetResponse deleteDatasetWithOptions(shared_ptr<DeleteDatasetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDatasetResponse deleteDataset(shared_ptr<DeleteDatasetRequest> request);
  DeleteFileMetaResponse deleteFileMetaWithOptions(shared_ptr<DeleteFileMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFileMetaResponse deleteFileMeta(shared_ptr<DeleteFileMetaRequest> request);
  DeleteProjectResponse deleteProjectWithOptions(shared_ptr<DeleteProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProjectResponse deleteProject(shared_ptr<DeleteProjectRequest> request);
  FuzzyQueryResponse fuzzyQueryWithOptions(shared_ptr<FuzzyQueryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FuzzyQueryResponse fuzzyQuery(shared_ptr<FuzzyQueryRequest> request);
  GetBindingResponse getBindingWithOptions(shared_ptr<GetBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBindingResponse getBinding(shared_ptr<GetBindingRequest> request);
  GetDatasetResponse getDatasetWithOptions(shared_ptr<GetDatasetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDatasetResponse getDataset(shared_ptr<GetDatasetRequest> request);
  GetFileMetaResponse getFileMetaWithOptions(shared_ptr<GetFileMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFileMetaResponse getFileMeta(shared_ptr<GetFileMetaRequest> request);
  GetFileSignedURIResponse getFileSignedURIWithOptions(shared_ptr<GetFileSignedURIRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFileSignedURIResponse getFileSignedURI(shared_ptr<GetFileSignedURIRequest> request);
  GetProjectResponse getProjectWithOptions(shared_ptr<GetProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectResponse getProject(shared_ptr<GetProjectRequest> request);
  IndexFileMetaResponse indexFileMetaWithOptions(shared_ptr<IndexFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IndexFileMetaResponse indexFileMeta(shared_ptr<IndexFileMetaRequest> request);
  ListBindingsResponse listBindingsWithOptions(shared_ptr<ListBindingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBindingsResponse listBindings(shared_ptr<ListBindingsRequest> request);
  ListDatasetsResponse listDatasetsWithOptions(shared_ptr<ListDatasetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDatasetsResponse listDatasets(shared_ptr<ListDatasetsRequest> request);
  ListProjectsResponse listProjectsWithOptions(shared_ptr<ListProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectsResponse listProjects(shared_ptr<ListProjectsRequest> request);
  ResumeBindingResponse resumeBindingWithOptions(shared_ptr<ResumeBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResumeBindingResponse resumeBinding(shared_ptr<ResumeBindingRequest> request);
  SimpleQueryResponse simpleQueryWithOptions(shared_ptr<SimpleQueryRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SimpleQueryResponse simpleQuery(shared_ptr<SimpleQueryRequest> request);
  StopBindingResponse stopBindingWithOptions(shared_ptr<StopBindingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopBindingResponse stopBinding(shared_ptr<StopBindingRequest> request);
  UpdateDatasetResponse updateDatasetWithOptions(shared_ptr<UpdateDatasetRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDatasetResponse updateDataset(shared_ptr<UpdateDatasetRequest> request);
  UpdateFileMetaResponse updateFileMetaWithOptions(shared_ptr<UpdateFileMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFileMetaResponse updateFileMeta(shared_ptr<UpdateFileMetaRequest> request);
  UpdateProjectResponse updateProjectWithOptions(shared_ptr<UpdateProjectRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProjectResponse updateProject(shared_ptr<UpdateProjectRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Imm20200930

#endif
