// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_VIDEOENHAN20200320_H_
#define ALIBABACLOUD_VIDEOENHAN20200320_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Videoenhan20200320 {
class ToneSdrVideoRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoURL{};
  shared_ptr<long> bitrate{};
  shared_ptr<string> recolorModel{};

  ToneSdrVideoRequest() {}

  explicit ToneSdrVideoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoURL) {
      res["VideoURL"] = boost::any(*videoURL);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (recolorModel) {
      res["RecolorModel"] = boost::any(*recolorModel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURL = make_shared<string>(boost::any_cast<string>(m["VideoURL"]));
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
    if (m.find("RecolorModel") != m.end() && !m["RecolorModel"].empty()) {
      recolorModel = make_shared<string>(boost::any_cast<string>(m["RecolorModel"]));
    }
  }


  virtual ~ToneSdrVideoRequest() = default;
};
class ToneSdrVideoAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoURLObject{};
  shared_ptr<long> bitrate{};
  shared_ptr<string> recolorModel{};

  ToneSdrVideoAdvanceRequest() {}

  explicit ToneSdrVideoAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!videoURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("videoURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoURLObject) {
      res["VideoURLObject"] = boost::any(*videoURLObject);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (recolorModel) {
      res["RecolorModel"] = boost::any(*recolorModel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoURLObject") != m.end() && !m["VideoURLObject"].empty()) {
      videoURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoURLObject"]));
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
    if (m.find("RecolorModel") != m.end() && !m["RecolorModel"].empty()) {
      recolorModel = make_shared<string>(boost::any_cast<string>(m["RecolorModel"]));
    }
  }


  virtual ~ToneSdrVideoAdvanceRequest() = default;
};
class ToneSdrVideoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoURL{};

  ToneSdrVideoResponseBodyData() {}

  explicit ToneSdrVideoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ToneSdrVideoResponseBodyData() = default;
};
class ToneSdrVideoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ToneSdrVideoResponseBodyData> data{};

  ToneSdrVideoResponseBody() {}

  explicit ToneSdrVideoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ToneSdrVideoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ToneSdrVideoResponseBodyData>(model1);
      }
    }
  }


  virtual ~ToneSdrVideoResponseBody() = default;
};
class ToneSdrVideoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ToneSdrVideoResponseBody> body{};

  ToneSdrVideoResponse() {}

  explicit ToneSdrVideoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ToneSdrVideoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ToneSdrVideoResponseBody>(model1);
      }
    }
  }


  virtual ~ToneSdrVideoResponse() = default;
};
class EnhanceVideoQualityRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoURL{};
  shared_ptr<long> outPutWidth{};
  shared_ptr<long> outPutHeight{};
  shared_ptr<long> frameRate{};
  shared_ptr<string> HDRFormat{};
  shared_ptr<long> maxIlluminance{};
  shared_ptr<long> bitrate{};

  EnhanceVideoQualityRequest() {}

  explicit EnhanceVideoQualityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoURL) {
      res["VideoURL"] = boost::any(*videoURL);
    }
    if (outPutWidth) {
      res["OutPutWidth"] = boost::any(*outPutWidth);
    }
    if (outPutHeight) {
      res["OutPutHeight"] = boost::any(*outPutHeight);
    }
    if (frameRate) {
      res["FrameRate"] = boost::any(*frameRate);
    }
    if (HDRFormat) {
      res["HDRFormat"] = boost::any(*HDRFormat);
    }
    if (maxIlluminance) {
      res["MaxIlluminance"] = boost::any(*maxIlluminance);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURL = make_shared<string>(boost::any_cast<string>(m["VideoURL"]));
    }
    if (m.find("OutPutWidth") != m.end() && !m["OutPutWidth"].empty()) {
      outPutWidth = make_shared<long>(boost::any_cast<long>(m["OutPutWidth"]));
    }
    if (m.find("OutPutHeight") != m.end() && !m["OutPutHeight"].empty()) {
      outPutHeight = make_shared<long>(boost::any_cast<long>(m["OutPutHeight"]));
    }
    if (m.find("FrameRate") != m.end() && !m["FrameRate"].empty()) {
      frameRate = make_shared<long>(boost::any_cast<long>(m["FrameRate"]));
    }
    if (m.find("HDRFormat") != m.end() && !m["HDRFormat"].empty()) {
      HDRFormat = make_shared<string>(boost::any_cast<string>(m["HDRFormat"]));
    }
    if (m.find("MaxIlluminance") != m.end() && !m["MaxIlluminance"].empty()) {
      maxIlluminance = make_shared<long>(boost::any_cast<long>(m["MaxIlluminance"]));
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
  }


  virtual ~EnhanceVideoQualityRequest() = default;
};
class EnhanceVideoQualityAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoURLObject{};
  shared_ptr<long> outPutWidth{};
  shared_ptr<long> outPutHeight{};
  shared_ptr<long> frameRate{};
  shared_ptr<string> HDRFormat{};
  shared_ptr<long> maxIlluminance{};
  shared_ptr<long> bitrate{};

  EnhanceVideoQualityAdvanceRequest() {}

  explicit EnhanceVideoQualityAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!videoURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("videoURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoURLObject) {
      res["VideoURLObject"] = boost::any(*videoURLObject);
    }
    if (outPutWidth) {
      res["OutPutWidth"] = boost::any(*outPutWidth);
    }
    if (outPutHeight) {
      res["OutPutHeight"] = boost::any(*outPutHeight);
    }
    if (frameRate) {
      res["FrameRate"] = boost::any(*frameRate);
    }
    if (HDRFormat) {
      res["HDRFormat"] = boost::any(*HDRFormat);
    }
    if (maxIlluminance) {
      res["MaxIlluminance"] = boost::any(*maxIlluminance);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoURLObject") != m.end() && !m["VideoURLObject"].empty()) {
      videoURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoURLObject"]));
    }
    if (m.find("OutPutWidth") != m.end() && !m["OutPutWidth"].empty()) {
      outPutWidth = make_shared<long>(boost::any_cast<long>(m["OutPutWidth"]));
    }
    if (m.find("OutPutHeight") != m.end() && !m["OutPutHeight"].empty()) {
      outPutHeight = make_shared<long>(boost::any_cast<long>(m["OutPutHeight"]));
    }
    if (m.find("FrameRate") != m.end() && !m["FrameRate"].empty()) {
      frameRate = make_shared<long>(boost::any_cast<long>(m["FrameRate"]));
    }
    if (m.find("HDRFormat") != m.end() && !m["HDRFormat"].empty()) {
      HDRFormat = make_shared<string>(boost::any_cast<string>(m["HDRFormat"]));
    }
    if (m.find("MaxIlluminance") != m.end() && !m["MaxIlluminance"].empty()) {
      maxIlluminance = make_shared<long>(boost::any_cast<long>(m["MaxIlluminance"]));
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
  }


  virtual ~EnhanceVideoQualityAdvanceRequest() = default;
};
class EnhanceVideoQualityResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoURL{};

  EnhanceVideoQualityResponseBodyData() {}

  explicit EnhanceVideoQualityResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnhanceVideoQualityResponseBodyData() = default;
};
class EnhanceVideoQualityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<EnhanceVideoQualityResponseBodyData> data{};

  EnhanceVideoQualityResponseBody() {}

  explicit EnhanceVideoQualityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        EnhanceVideoQualityResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<EnhanceVideoQualityResponseBodyData>(model1);
      }
    }
  }


  virtual ~EnhanceVideoQualityResponseBody() = default;
};
class EnhanceVideoQualityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnhanceVideoQualityResponseBody> body{};

  EnhanceVideoQualityResponse() {}

  explicit EnhanceVideoQualityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnhanceVideoQualityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnhanceVideoQualityResponseBody>(model1);
      }
    }
  }


  virtual ~EnhanceVideoQualityResponse() = default;
};
class InterpolateVideoFrameRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoURL{};
  shared_ptr<long> frameRate{};
  shared_ptr<long> bitrate{};

  InterpolateVideoFrameRequest() {}

  explicit InterpolateVideoFrameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoURL) {
      res["VideoURL"] = boost::any(*videoURL);
    }
    if (frameRate) {
      res["FrameRate"] = boost::any(*frameRate);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURL = make_shared<string>(boost::any_cast<string>(m["VideoURL"]));
    }
    if (m.find("FrameRate") != m.end() && !m["FrameRate"].empty()) {
      frameRate = make_shared<long>(boost::any_cast<long>(m["FrameRate"]));
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
  }


  virtual ~InterpolateVideoFrameRequest() = default;
};
class InterpolateVideoFrameAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoURLObject{};
  shared_ptr<long> frameRate{};
  shared_ptr<long> bitrate{};

  InterpolateVideoFrameAdvanceRequest() {}

  explicit InterpolateVideoFrameAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!videoURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("videoURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoURLObject) {
      res["VideoURLObject"] = boost::any(*videoURLObject);
    }
    if (frameRate) {
      res["FrameRate"] = boost::any(*frameRate);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoURLObject") != m.end() && !m["VideoURLObject"].empty()) {
      videoURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoURLObject"]));
    }
    if (m.find("FrameRate") != m.end() && !m["FrameRate"].empty()) {
      frameRate = make_shared<long>(boost::any_cast<long>(m["FrameRate"]));
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
  }


  virtual ~InterpolateVideoFrameAdvanceRequest() = default;
};
class InterpolateVideoFrameResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoURL{};

  InterpolateVideoFrameResponseBodyData() {}

  explicit InterpolateVideoFrameResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InterpolateVideoFrameResponseBodyData() = default;
};
class InterpolateVideoFrameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<InterpolateVideoFrameResponseBodyData> data{};

  InterpolateVideoFrameResponseBody() {}

  explicit InterpolateVideoFrameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        InterpolateVideoFrameResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<InterpolateVideoFrameResponseBodyData>(model1);
      }
    }
  }


  virtual ~InterpolateVideoFrameResponseBody() = default;
};
class InterpolateVideoFrameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<InterpolateVideoFrameResponseBody> body{};

  InterpolateVideoFrameResponse() {}

  explicit InterpolateVideoFrameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InterpolateVideoFrameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InterpolateVideoFrameResponseBody>(model1);
      }
    }
  }


  virtual ~InterpolateVideoFrameResponse() = default;
};
class EraseVideoLogoRequestBoxes : public Darabonba::Model {
public:
  shared_ptr<double> w{};
  shared_ptr<double> h{};
  shared_ptr<double> y{};
  shared_ptr<double> x{};

  EraseVideoLogoRequestBoxes() {}

  explicit EraseVideoLogoRequestBoxes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (w) {
      res["W"] = boost::any(*w);
    }
    if (h) {
      res["H"] = boost::any(*h);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("W") != m.end() && !m["W"].empty()) {
      w = make_shared<double>(boost::any_cast<double>(m["W"]));
    }
    if (m.find("H") != m.end() && !m["H"].empty()) {
      h = make_shared<double>(boost::any_cast<double>(m["H"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
  }


  virtual ~EraseVideoLogoRequestBoxes() = default;
};
class EraseVideoLogoRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};
  shared_ptr<vector<EraseVideoLogoRequestBoxes>> boxes{};

  EraseVideoLogoRequest() {}

  explicit EraseVideoLogoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    if (boxes) {
      vector<boost::any> temp1;
      for(auto item1:*boxes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Boxes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
    if (m.find("Boxes") != m.end() && !m["Boxes"].empty()) {
      if (typeid(vector<boost::any>) == m["Boxes"].type()) {
        vector<EraseVideoLogoRequestBoxes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Boxes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EraseVideoLogoRequestBoxes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        boxes = make_shared<vector<EraseVideoLogoRequestBoxes>>(expect1);
      }
    }
  }


  virtual ~EraseVideoLogoRequest() = default;
};
class EraseVideoLogoAdvanceRequestBoxes : public Darabonba::Model {
public:
  shared_ptr<double> w{};
  shared_ptr<double> h{};
  shared_ptr<double> y{};
  shared_ptr<double> x{};

  EraseVideoLogoAdvanceRequestBoxes() {}

  explicit EraseVideoLogoAdvanceRequestBoxes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (w) {
      res["W"] = boost::any(*w);
    }
    if (h) {
      res["H"] = boost::any(*h);
    }
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (x) {
      res["X"] = boost::any(*x);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("W") != m.end() && !m["W"].empty()) {
      w = make_shared<double>(boost::any_cast<double>(m["W"]));
    }
    if (m.find("H") != m.end() && !m["H"].empty()) {
      h = make_shared<double>(boost::any_cast<double>(m["H"]));
    }
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<double>(boost::any_cast<double>(m["Y"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<double>(boost::any_cast<double>(m["X"]));
    }
  }


  virtual ~EraseVideoLogoAdvanceRequestBoxes() = default;
};
class EraseVideoLogoAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoUrlObject{};
  shared_ptr<vector<EraseVideoLogoAdvanceRequestBoxes>> boxes{};

  EraseVideoLogoAdvanceRequest() {}

  explicit EraseVideoLogoAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!videoUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("videoUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrlObject) {
      res["VideoUrlObject"] = boost::any(*videoUrlObject);
    }
    if (boxes) {
      vector<boost::any> temp1;
      for(auto item1:*boxes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Boxes"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrlObject") != m.end() && !m["VideoUrlObject"].empty()) {
      videoUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoUrlObject"]));
    }
    if (m.find("Boxes") != m.end() && !m["Boxes"].empty()) {
      if (typeid(vector<boost::any>) == m["Boxes"].type()) {
        vector<EraseVideoLogoAdvanceRequestBoxes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Boxes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            EraseVideoLogoAdvanceRequestBoxes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        boxes = make_shared<vector<EraseVideoLogoAdvanceRequestBoxes>>(expect1);
      }
    }
  }


  virtual ~EraseVideoLogoAdvanceRequest() = default;
};
class EraseVideoLogoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};

  EraseVideoLogoResponseBodyData() {}

  explicit EraseVideoLogoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~EraseVideoLogoResponseBodyData() = default;
};
class EraseVideoLogoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<EraseVideoLogoResponseBodyData> data{};

  EraseVideoLogoResponseBody() {}

  explicit EraseVideoLogoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        EraseVideoLogoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<EraseVideoLogoResponseBodyData>(model1);
      }
    }
  }


  virtual ~EraseVideoLogoResponseBody() = default;
};
class EraseVideoLogoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EraseVideoLogoResponseBody> body{};

  EraseVideoLogoResponse() {}

  explicit EraseVideoLogoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EraseVideoLogoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EraseVideoLogoResponseBody>(model1);
      }
    }
  }


  virtual ~EraseVideoLogoResponse() = default;
};
class ConvertHdrVideoRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoURL{};
  shared_ptr<string> HDRFormat{};
  shared_ptr<long> maxIlluminance{};
  shared_ptr<long> bitrate{};

  ConvertHdrVideoRequest() {}

  explicit ConvertHdrVideoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoURL) {
      res["VideoURL"] = boost::any(*videoURL);
    }
    if (HDRFormat) {
      res["HDRFormat"] = boost::any(*HDRFormat);
    }
    if (maxIlluminance) {
      res["MaxIlluminance"] = boost::any(*maxIlluminance);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURL = make_shared<string>(boost::any_cast<string>(m["VideoURL"]));
    }
    if (m.find("HDRFormat") != m.end() && !m["HDRFormat"].empty()) {
      HDRFormat = make_shared<string>(boost::any_cast<string>(m["HDRFormat"]));
    }
    if (m.find("MaxIlluminance") != m.end() && !m["MaxIlluminance"].empty()) {
      maxIlluminance = make_shared<long>(boost::any_cast<long>(m["MaxIlluminance"]));
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
  }


  virtual ~ConvertHdrVideoRequest() = default;
};
class ConvertHdrVideoAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoURLObject{};
  shared_ptr<string> HDRFormat{};
  shared_ptr<long> maxIlluminance{};
  shared_ptr<long> bitrate{};

  ConvertHdrVideoAdvanceRequest() {}

  explicit ConvertHdrVideoAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!videoURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("videoURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoURLObject) {
      res["VideoURLObject"] = boost::any(*videoURLObject);
    }
    if (HDRFormat) {
      res["HDRFormat"] = boost::any(*HDRFormat);
    }
    if (maxIlluminance) {
      res["MaxIlluminance"] = boost::any(*maxIlluminance);
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoURLObject") != m.end() && !m["VideoURLObject"].empty()) {
      videoURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoURLObject"]));
    }
    if (m.find("HDRFormat") != m.end() && !m["HDRFormat"].empty()) {
      HDRFormat = make_shared<string>(boost::any_cast<string>(m["HDRFormat"]));
    }
    if (m.find("MaxIlluminance") != m.end() && !m["MaxIlluminance"].empty()) {
      maxIlluminance = make_shared<long>(boost::any_cast<long>(m["MaxIlluminance"]));
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<long>(boost::any_cast<long>(m["Bitrate"]));
    }
  }


  virtual ~ConvertHdrVideoAdvanceRequest() = default;
};
class ConvertHdrVideoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoURL{};

  ConvertHdrVideoResponseBodyData() {}

  explicit ConvertHdrVideoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ConvertHdrVideoResponseBodyData() = default;
};
class ConvertHdrVideoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ConvertHdrVideoResponseBodyData> data{};

  ConvertHdrVideoResponseBody() {}

  explicit ConvertHdrVideoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ConvertHdrVideoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ConvertHdrVideoResponseBodyData>(model1);
      }
    }
  }


  virtual ~ConvertHdrVideoResponseBody() = default;
};
class ConvertHdrVideoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ConvertHdrVideoResponseBody> body{};

  ConvertHdrVideoResponse() {}

  explicit ConvertHdrVideoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConvertHdrVideoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConvertHdrVideoResponseBody>(model1);
      }
    }
  }


  virtual ~ConvertHdrVideoResponse() = default;
};
class AdjustVideoColorRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};
  shared_ptr<long> videoBitrate{};
  shared_ptr<string> videoCodec{};
  shared_ptr<string> videoFormat{};
  shared_ptr<string> mode{};

  AdjustVideoColorRequest() {}

  explicit AdjustVideoColorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    if (videoBitrate) {
      res["VideoBitrate"] = boost::any(*videoBitrate);
    }
    if (videoCodec) {
      res["VideoCodec"] = boost::any(*videoCodec);
    }
    if (videoFormat) {
      res["VideoFormat"] = boost::any(*videoFormat);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
    if (m.find("VideoBitrate") != m.end() && !m["VideoBitrate"].empty()) {
      videoBitrate = make_shared<long>(boost::any_cast<long>(m["VideoBitrate"]));
    }
    if (m.find("VideoCodec") != m.end() && !m["VideoCodec"].empty()) {
      videoCodec = make_shared<string>(boost::any_cast<string>(m["VideoCodec"]));
    }
    if (m.find("VideoFormat") != m.end() && !m["VideoFormat"].empty()) {
      videoFormat = make_shared<string>(boost::any_cast<string>(m["VideoFormat"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
  }


  virtual ~AdjustVideoColorRequest() = default;
};
class AdjustVideoColorAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoUrlObject{};
  shared_ptr<long> videoBitrate{};
  shared_ptr<string> videoCodec{};
  shared_ptr<string> videoFormat{};
  shared_ptr<string> mode{};

  AdjustVideoColorAdvanceRequest() {}

  explicit AdjustVideoColorAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!videoUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("videoUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrlObject) {
      res["VideoUrlObject"] = boost::any(*videoUrlObject);
    }
    if (videoBitrate) {
      res["VideoBitrate"] = boost::any(*videoBitrate);
    }
    if (videoCodec) {
      res["VideoCodec"] = boost::any(*videoCodec);
    }
    if (videoFormat) {
      res["VideoFormat"] = boost::any(*videoFormat);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrlObject") != m.end() && !m["VideoUrlObject"].empty()) {
      videoUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoUrlObject"]));
    }
    if (m.find("VideoBitrate") != m.end() && !m["VideoBitrate"].empty()) {
      videoBitrate = make_shared<long>(boost::any_cast<long>(m["VideoBitrate"]));
    }
    if (m.find("VideoCodec") != m.end() && !m["VideoCodec"].empty()) {
      videoCodec = make_shared<string>(boost::any_cast<string>(m["VideoCodec"]));
    }
    if (m.find("VideoFormat") != m.end() && !m["VideoFormat"].empty()) {
      videoFormat = make_shared<string>(boost::any_cast<string>(m["VideoFormat"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
  }


  virtual ~AdjustVideoColorAdvanceRequest() = default;
};
class AdjustVideoColorResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};

  AdjustVideoColorResponseBodyData() {}

  explicit AdjustVideoColorResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~AdjustVideoColorResponseBodyData() = default;
};
class AdjustVideoColorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<AdjustVideoColorResponseBodyData> data{};

  AdjustVideoColorResponseBody() {}

  explicit AdjustVideoColorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AdjustVideoColorResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AdjustVideoColorResponseBodyData>(model1);
      }
    }
  }


  virtual ~AdjustVideoColorResponseBody() = default;
};
class AdjustVideoColorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AdjustVideoColorResponseBody> body{};

  AdjustVideoColorResponse() {}

  explicit AdjustVideoColorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AdjustVideoColorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AdjustVideoColorResponseBody>(model1);
      }
    }
  }


  virtual ~AdjustVideoColorResponse() = default;
};
class ChangeVideoSizeRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<string> cropType{};
  shared_ptr<string> fillType{};
  shared_ptr<double> tightness{};
  shared_ptr<long> r{};
  shared_ptr<long> g{};
  shared_ptr<long> b{};

  ChangeVideoSizeRequest() {}

  explicit ChangeVideoSizeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (cropType) {
      res["CropType"] = boost::any(*cropType);
    }
    if (fillType) {
      res["FillType"] = boost::any(*fillType);
    }
    if (tightness) {
      res["Tightness"] = boost::any(*tightness);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (b) {
      res["B"] = boost::any(*b);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("CropType") != m.end() && !m["CropType"].empty()) {
      cropType = make_shared<string>(boost::any_cast<string>(m["CropType"]));
    }
    if (m.find("FillType") != m.end() && !m["FillType"].empty()) {
      fillType = make_shared<string>(boost::any_cast<string>(m["FillType"]));
    }
    if (m.find("Tightness") != m.end() && !m["Tightness"].empty()) {
      tightness = make_shared<double>(boost::any_cast<double>(m["Tightness"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
  }


  virtual ~ChangeVideoSizeRequest() = default;
};
class ChangeVideoSizeAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoUrlObject{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<string> cropType{};
  shared_ptr<string> fillType{};
  shared_ptr<double> tightness{};
  shared_ptr<long> r{};
  shared_ptr<long> g{};
  shared_ptr<long> b{};

  ChangeVideoSizeAdvanceRequest() {}

  explicit ChangeVideoSizeAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!videoUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("videoUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrlObject) {
      res["VideoUrlObject"] = boost::any(*videoUrlObject);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (cropType) {
      res["CropType"] = boost::any(*cropType);
    }
    if (fillType) {
      res["FillType"] = boost::any(*fillType);
    }
    if (tightness) {
      res["Tightness"] = boost::any(*tightness);
    }
    if (r) {
      res["R"] = boost::any(*r);
    }
    if (g) {
      res["G"] = boost::any(*g);
    }
    if (b) {
      res["B"] = boost::any(*b);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrlObject") != m.end() && !m["VideoUrlObject"].empty()) {
      videoUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoUrlObject"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("CropType") != m.end() && !m["CropType"].empty()) {
      cropType = make_shared<string>(boost::any_cast<string>(m["CropType"]));
    }
    if (m.find("FillType") != m.end() && !m["FillType"].empty()) {
      fillType = make_shared<string>(boost::any_cast<string>(m["FillType"]));
    }
    if (m.find("Tightness") != m.end() && !m["Tightness"].empty()) {
      tightness = make_shared<double>(boost::any_cast<double>(m["Tightness"]));
    }
    if (m.find("R") != m.end() && !m["R"].empty()) {
      r = make_shared<long>(boost::any_cast<long>(m["R"]));
    }
    if (m.find("G") != m.end() && !m["G"].empty()) {
      g = make_shared<long>(boost::any_cast<long>(m["G"]));
    }
    if (m.find("B") != m.end() && !m["B"].empty()) {
      b = make_shared<long>(boost::any_cast<long>(m["B"]));
    }
  }


  virtual ~ChangeVideoSizeAdvanceRequest() = default;
};
class ChangeVideoSizeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoCoverUrl{};
  shared_ptr<string> videoUrl{};

  ChangeVideoSizeResponseBodyData() {}

  explicit ChangeVideoSizeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoCoverUrl) {
      res["VideoCoverUrl"] = boost::any(*videoCoverUrl);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoCoverUrl") != m.end() && !m["VideoCoverUrl"].empty()) {
      videoCoverUrl = make_shared<string>(boost::any_cast<string>(m["VideoCoverUrl"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~ChangeVideoSizeResponseBodyData() = default;
};
class ChangeVideoSizeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ChangeVideoSizeResponseBodyData> data{};

  ChangeVideoSizeResponseBody() {}

  explicit ChangeVideoSizeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ChangeVideoSizeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ChangeVideoSizeResponseBodyData>(model1);
      }
    }
  }


  virtual ~ChangeVideoSizeResponseBody() = default;
};
class ChangeVideoSizeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ChangeVideoSizeResponseBody> body{};

  ChangeVideoSizeResponse() {}

  explicit ChangeVideoSizeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeVideoSizeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeVideoSizeResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeVideoSizeResponse() = default;
};
class SuperResolveVideoRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};
  shared_ptr<long> bitRate{};

  SuperResolveVideoRequest() {}

  explicit SuperResolveVideoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    if (bitRate) {
      res["BitRate"] = boost::any(*bitRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
    if (m.find("BitRate") != m.end() && !m["BitRate"].empty()) {
      bitRate = make_shared<long>(boost::any_cast<long>(m["BitRate"]));
    }
  }


  virtual ~SuperResolveVideoRequest() = default;
};
class SuperResolveVideoAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoUrlObject{};
  shared_ptr<long> bitRate{};

  SuperResolveVideoAdvanceRequest() {}

  explicit SuperResolveVideoAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!videoUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("videoUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrlObject) {
      res["VideoUrlObject"] = boost::any(*videoUrlObject);
    }
    if (bitRate) {
      res["BitRate"] = boost::any(*bitRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrlObject") != m.end() && !m["VideoUrlObject"].empty()) {
      videoUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoUrlObject"]));
    }
    if (m.find("BitRate") != m.end() && !m["BitRate"].empty()) {
      bitRate = make_shared<long>(boost::any_cast<long>(m["BitRate"]));
    }
  }


  virtual ~SuperResolveVideoAdvanceRequest() = default;
};
class SuperResolveVideoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};

  SuperResolveVideoResponseBodyData() {}

  explicit SuperResolveVideoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~SuperResolveVideoResponseBodyData() = default;
};
class SuperResolveVideoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<SuperResolveVideoResponseBodyData> data{};

  SuperResolveVideoResponseBody() {}

  explicit SuperResolveVideoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SuperResolveVideoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SuperResolveVideoResponseBodyData>(model1);
      }
    }
  }


  virtual ~SuperResolveVideoResponseBody() = default;
};
class SuperResolveVideoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<SuperResolveVideoResponseBody> body{};

  SuperResolveVideoResponse() {}

  explicit SuperResolveVideoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SuperResolveVideoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SuperResolveVideoResponseBody>(model1);
      }
    }
  }


  virtual ~SuperResolveVideoResponse() = default;
};
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
  shared_ptr<string> status{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> result{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> jobId{};

  GetAsyncJobResultResponseBodyData() {}

  explicit GetAsyncJobResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~GetAsyncJobResultResponseBodyData() = default;
};
class GetAsyncJobResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GetAsyncJobResultResponseBodyData> data{};

  GetAsyncJobResultResponseBody() {}

  explicit GetAsyncJobResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAsyncJobResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAsyncJobResultResponseBodyData>(model1);
      }
    }
  }


  virtual ~GetAsyncJobResultResponseBody() = default;
};
class GetAsyncJobResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetAsyncJobResultResponseBody> body{};

  GetAsyncJobResultResponse() {}

  explicit GetAsyncJobResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAsyncJobResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAsyncJobResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetAsyncJobResultResponse() = default;
};
class AddFaceVideoTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> videoURL{};

  AddFaceVideoTemplateRequest() {}

  explicit AddFaceVideoTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (videoURL) {
      res["VideoURL"] = boost::any(*videoURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURL = make_shared<string>(boost::any_cast<string>(m["VideoURL"]));
    }
  }


  virtual ~AddFaceVideoTemplateRequest() = default;
};
class AddFaceVideoTemplateAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoURLObject{};
  shared_ptr<string> userId{};

  AddFaceVideoTemplateAdvanceRequest() {}

  explicit AddFaceVideoTemplateAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!videoURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("videoURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoURLObject) {
      res["VideoURLObject"] = boost::any(*videoURLObject);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoURLObject") != m.end() && !m["VideoURLObject"].empty()) {
      videoURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoURLObject"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~AddFaceVideoTemplateAdvanceRequest() = default;
};
class AddFaceVideoTemplateResponseBodyDate : public Darabonba::Model {
public:
  shared_ptr<string> templateId{};

  AddFaceVideoTemplateResponseBodyDate() {}

  explicit AddFaceVideoTemplateResponseBodyDate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~AddFaceVideoTemplateResponseBodyDate() = default;
};
class AddFaceVideoTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<AddFaceVideoTemplateResponseBodyDate> date{};

  AddFaceVideoTemplateResponseBody() {}

  explicit AddFaceVideoTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (date) {
      res["Date"] = date ? boost::any(date->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Date") != m.end() && !m["Date"].empty()) {
      if (typeid(map<string, boost::any>) == m["Date"].type()) {
        AddFaceVideoTemplateResponseBodyDate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Date"]));
        date = make_shared<AddFaceVideoTemplateResponseBodyDate>(model1);
      }
    }
  }


  virtual ~AddFaceVideoTemplateResponseBody() = default;
};
class AddFaceVideoTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddFaceVideoTemplateResponseBody> body{};

  AddFaceVideoTemplateResponse() {}

  explicit AddFaceVideoTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddFaceVideoTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddFaceVideoTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~AddFaceVideoTemplateResponse() = default;
};
class GenerateVideoRequestFileList : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<string> fileUrl{};
  shared_ptr<string> fileName{};

  GenerateVideoRequestFileList() {}

  explicit GenerateVideoRequestFileList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
  }


  virtual ~GenerateVideoRequestFileList() = default;
};
class GenerateVideoRequest : public Darabonba::Model {
public:
  shared_ptr<string> scene{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<string> style{};
  shared_ptr<double> duration{};
  shared_ptr<bool> durationAdaption{};
  shared_ptr<string> transitionStyle{};
  shared_ptr<bool> smartEffect{};
  shared_ptr<bool> puzzleEffect{};
  shared_ptr<bool> mute{};
  shared_ptr<vector<GenerateVideoRequestFileList>> fileList{};

  GenerateVideoRequest() {}

  explicit GenerateVideoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (style) {
      res["Style"] = boost::any(*style);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (durationAdaption) {
      res["DurationAdaption"] = boost::any(*durationAdaption);
    }
    if (transitionStyle) {
      res["TransitionStyle"] = boost::any(*transitionStyle);
    }
    if (smartEffect) {
      res["SmartEffect"] = boost::any(*smartEffect);
    }
    if (puzzleEffect) {
      res["PuzzleEffect"] = boost::any(*puzzleEffect);
    }
    if (mute) {
      res["Mute"] = boost::any(*mute);
    }
    if (fileList) {
      vector<boost::any> temp1;
      for(auto item1:*fileList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Style") != m.end() && !m["Style"].empty()) {
      style = make_shared<string>(boost::any_cast<string>(m["Style"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("DurationAdaption") != m.end() && !m["DurationAdaption"].empty()) {
      durationAdaption = make_shared<bool>(boost::any_cast<bool>(m["DurationAdaption"]));
    }
    if (m.find("TransitionStyle") != m.end() && !m["TransitionStyle"].empty()) {
      transitionStyle = make_shared<string>(boost::any_cast<string>(m["TransitionStyle"]));
    }
    if (m.find("SmartEffect") != m.end() && !m["SmartEffect"].empty()) {
      smartEffect = make_shared<bool>(boost::any_cast<bool>(m["SmartEffect"]));
    }
    if (m.find("PuzzleEffect") != m.end() && !m["PuzzleEffect"].empty()) {
      puzzleEffect = make_shared<bool>(boost::any_cast<bool>(m["PuzzleEffect"]));
    }
    if (m.find("Mute") != m.end() && !m["Mute"].empty()) {
      mute = make_shared<bool>(boost::any_cast<bool>(m["Mute"]));
    }
    if (m.find("FileList") != m.end() && !m["FileList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileList"].type()) {
        vector<GenerateVideoRequestFileList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GenerateVideoRequestFileList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileList = make_shared<vector<GenerateVideoRequestFileList>>(expect1);
      }
    }
  }


  virtual ~GenerateVideoRequest() = default;
};
class GenerateVideoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoCoverUrl{};
  shared_ptr<string> videoUrl{};

  GenerateVideoResponseBodyData() {}

  explicit GenerateVideoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoCoverUrl) {
      res["VideoCoverUrl"] = boost::any(*videoCoverUrl);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoCoverUrl") != m.end() && !m["VideoCoverUrl"].empty()) {
      videoCoverUrl = make_shared<string>(boost::any_cast<string>(m["VideoCoverUrl"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~GenerateVideoResponseBodyData() = default;
};
class GenerateVideoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GenerateVideoResponseBodyData> data{};

  GenerateVideoResponseBody() {}

  explicit GenerateVideoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GenerateVideoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GenerateVideoResponseBodyData>(model1);
      }
    }
  }


  virtual ~GenerateVideoResponseBody() = default;
};
class GenerateVideoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GenerateVideoResponseBody> body{};

  GenerateVideoResponse() {}

  explicit GenerateVideoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateVideoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateVideoResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateVideoResponse() = default;
};
class QueryFaceVideoTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> templateId{};

  QueryFaceVideoTemplateRequest() {}

  explicit QueryFaceVideoTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~QueryFaceVideoTemplateRequest() = default;
};
class QueryFaceVideoTemplateResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> updateTime{};
  shared_ptr<string> userId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateURL{};

  QueryFaceVideoTemplateResponseBodyDataElements() {}

  explicit QueryFaceVideoTemplateResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateURL) {
      res["TemplateURL"] = boost::any(*templateURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<string>(boost::any_cast<string>(m["UpdateTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateURL") != m.end() && !m["TemplateURL"].empty()) {
      templateURL = make_shared<string>(boost::any_cast<string>(m["TemplateURL"]));
    }
  }


  virtual ~QueryFaceVideoTemplateResponseBodyDataElements() = default;
};
class QueryFaceVideoTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryFaceVideoTemplateResponseBodyDataElements>> elements{};

  QueryFaceVideoTemplateResponseBodyData() {}

  explicit QueryFaceVideoTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<QueryFaceVideoTemplateResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryFaceVideoTemplateResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<QueryFaceVideoTemplateResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~QueryFaceVideoTemplateResponseBodyData() = default;
};
class QueryFaceVideoTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<QueryFaceVideoTemplateResponseBodyData> data{};

  QueryFaceVideoTemplateResponseBody() {}

  explicit QueryFaceVideoTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryFaceVideoTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryFaceVideoTemplateResponseBodyData>(model1);
      }
    }
  }


  virtual ~QueryFaceVideoTemplateResponseBody() = default;
};
class QueryFaceVideoTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryFaceVideoTemplateResponseBody> body{};

  QueryFaceVideoTemplateResponse() {}

  explicit QueryFaceVideoTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryFaceVideoTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryFaceVideoTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~QueryFaceVideoTemplateResponse() = default;
};
class DeleteFaceVideoTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> templateId{};

  DeleteFaceVideoTemplateRequest() {}

  explicit DeleteFaceVideoTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~DeleteFaceVideoTemplateRequest() = default;
};
class DeleteFaceVideoTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteFaceVideoTemplateResponseBody() {}

  explicit DeleteFaceVideoTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteFaceVideoTemplateResponseBody() = default;
};
class DeleteFaceVideoTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteFaceVideoTemplateResponseBody> body{};

  DeleteFaceVideoTemplateResponse() {}

  explicit DeleteFaceVideoTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFaceVideoTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFaceVideoTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFaceVideoTemplateResponse() = default;
};
class AbstractEcommerceVideoRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};
  shared_ptr<double> duration{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};

  AbstractEcommerceVideoRequest() {}

  explicit AbstractEcommerceVideoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
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
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
  }


  virtual ~AbstractEcommerceVideoRequest() = default;
};
class AbstractEcommerceVideoAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoUrlObject{};
  shared_ptr<double> duration{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};

  AbstractEcommerceVideoAdvanceRequest() {}

  explicit AbstractEcommerceVideoAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!videoUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("videoUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrlObject) {
      res["VideoUrlObject"] = boost::any(*videoUrlObject);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
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
    if (m.find("VideoUrlObject") != m.end() && !m["VideoUrlObject"].empty()) {
      videoUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoUrlObject"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<double>(boost::any_cast<double>(m["Duration"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
  }


  virtual ~AbstractEcommerceVideoAdvanceRequest() = default;
};
class AbstractEcommerceVideoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoCoverUrl{};
  shared_ptr<string> videoUrl{};

  AbstractEcommerceVideoResponseBodyData() {}

  explicit AbstractEcommerceVideoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoCoverUrl) {
      res["VideoCoverUrl"] = boost::any(*videoCoverUrl);
    }
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoCoverUrl") != m.end() && !m["VideoCoverUrl"].empty()) {
      videoCoverUrl = make_shared<string>(boost::any_cast<string>(m["VideoCoverUrl"]));
    }
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~AbstractEcommerceVideoResponseBodyData() = default;
};
class AbstractEcommerceVideoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<AbstractEcommerceVideoResponseBodyData> data{};

  AbstractEcommerceVideoResponseBody() {}

  explicit AbstractEcommerceVideoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AbstractEcommerceVideoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AbstractEcommerceVideoResponseBodyData>(model1);
      }
    }
  }


  virtual ~AbstractEcommerceVideoResponseBody() = default;
};
class AbstractEcommerceVideoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AbstractEcommerceVideoResponseBody> body{};

  AbstractEcommerceVideoResponse() {}

  explicit AbstractEcommerceVideoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AbstractEcommerceVideoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AbstractEcommerceVideoResponseBody>(model1);
      }
    }
  }


  virtual ~AbstractEcommerceVideoResponse() = default;
};
class AbstractFilmVideoRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};
  shared_ptr<long> length{};

  AbstractFilmVideoRequest() {}

  explicit AbstractFilmVideoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    if (length) {
      res["Length"] = boost::any(*length);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
    if (m.find("Length") != m.end() && !m["Length"].empty()) {
      length = make_shared<long>(boost::any_cast<long>(m["Length"]));
    }
  }


  virtual ~AbstractFilmVideoRequest() = default;
};
class AbstractFilmVideoAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoUrlObject{};
  shared_ptr<long> length{};

  AbstractFilmVideoAdvanceRequest() {}

  explicit AbstractFilmVideoAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!videoUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("videoUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrlObject) {
      res["VideoUrlObject"] = boost::any(*videoUrlObject);
    }
    if (length) {
      res["Length"] = boost::any(*length);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrlObject") != m.end() && !m["VideoUrlObject"].empty()) {
      videoUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoUrlObject"]));
    }
    if (m.find("Length") != m.end() && !m["Length"].empty()) {
      length = make_shared<long>(boost::any_cast<long>(m["Length"]));
    }
  }


  virtual ~AbstractFilmVideoAdvanceRequest() = default;
};
class AbstractFilmVideoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};

  AbstractFilmVideoResponseBodyData() {}

  explicit AbstractFilmVideoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~AbstractFilmVideoResponseBodyData() = default;
};
class AbstractFilmVideoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<AbstractFilmVideoResponseBodyData> data{};

  AbstractFilmVideoResponseBody() {}

  explicit AbstractFilmVideoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AbstractFilmVideoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AbstractFilmVideoResponseBodyData>(model1);
      }
    }
  }


  virtual ~AbstractFilmVideoResponseBody() = default;
};
class AbstractFilmVideoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AbstractFilmVideoResponseBody> body{};

  AbstractFilmVideoResponse() {}

  explicit AbstractFilmVideoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AbstractFilmVideoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AbstractFilmVideoResponseBody>(model1);
      }
    }
  }


  virtual ~AbstractFilmVideoResponse() = default;
};
class EraseVideoSubtitlesRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};
  shared_ptr<double> BX{};
  shared_ptr<double> BY{};
  shared_ptr<double> BW{};
  shared_ptr<double> BH{};

  EraseVideoSubtitlesRequest() {}

  explicit EraseVideoSubtitlesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    if (BX) {
      res["BX"] = boost::any(*BX);
    }
    if (BY) {
      res["BY"] = boost::any(*BY);
    }
    if (BW) {
      res["BW"] = boost::any(*BW);
    }
    if (BH) {
      res["BH"] = boost::any(*BH);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
    if (m.find("BX") != m.end() && !m["BX"].empty()) {
      BX = make_shared<double>(boost::any_cast<double>(m["BX"]));
    }
    if (m.find("BY") != m.end() && !m["BY"].empty()) {
      BY = make_shared<double>(boost::any_cast<double>(m["BY"]));
    }
    if (m.find("BW") != m.end() && !m["BW"].empty()) {
      BW = make_shared<double>(boost::any_cast<double>(m["BW"]));
    }
    if (m.find("BH") != m.end() && !m["BH"].empty()) {
      BH = make_shared<double>(boost::any_cast<double>(m["BH"]));
    }
  }


  virtual ~EraseVideoSubtitlesRequest() = default;
};
class EraseVideoSubtitlesAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoUrlObject{};
  shared_ptr<double> BX{};
  shared_ptr<double> BY{};
  shared_ptr<double> BW{};
  shared_ptr<double> BH{};

  EraseVideoSubtitlesAdvanceRequest() {}

  explicit EraseVideoSubtitlesAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!videoUrlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("videoUrlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrlObject) {
      res["VideoUrlObject"] = boost::any(*videoUrlObject);
    }
    if (BX) {
      res["BX"] = boost::any(*BX);
    }
    if (BY) {
      res["BY"] = boost::any(*BY);
    }
    if (BW) {
      res["BW"] = boost::any(*BW);
    }
    if (BH) {
      res["BH"] = boost::any(*BH);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrlObject") != m.end() && !m["VideoUrlObject"].empty()) {
      videoUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoUrlObject"]));
    }
    if (m.find("BX") != m.end() && !m["BX"].empty()) {
      BX = make_shared<double>(boost::any_cast<double>(m["BX"]));
    }
    if (m.find("BY") != m.end() && !m["BY"].empty()) {
      BY = make_shared<double>(boost::any_cast<double>(m["BY"]));
    }
    if (m.find("BW") != m.end() && !m["BW"].empty()) {
      BW = make_shared<double>(boost::any_cast<double>(m["BW"]));
    }
    if (m.find("BH") != m.end() && !m["BH"].empty()) {
      BH = make_shared<double>(boost::any_cast<double>(m["BH"]));
    }
  }


  virtual ~EraseVideoSubtitlesAdvanceRequest() = default;
};
class EraseVideoSubtitlesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoUrl{};

  EraseVideoSubtitlesResponseBodyData() {}

  explicit EraseVideoSubtitlesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoUrl) {
      res["VideoUrl"] = boost::any(*videoUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoUrl") != m.end() && !m["VideoUrl"].empty()) {
      videoUrl = make_shared<string>(boost::any_cast<string>(m["VideoUrl"]));
    }
  }


  virtual ~EraseVideoSubtitlesResponseBodyData() = default;
};
class EraseVideoSubtitlesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<EraseVideoSubtitlesResponseBodyData> data{};

  EraseVideoSubtitlesResponseBody() {}

  explicit EraseVideoSubtitlesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        EraseVideoSubtitlesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<EraseVideoSubtitlesResponseBodyData>(model1);
      }
    }
  }


  virtual ~EraseVideoSubtitlesResponseBody() = default;
};
class EraseVideoSubtitlesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EraseVideoSubtitlesResponseBody> body{};

  EraseVideoSubtitlesResponse() {}

  explicit EraseVideoSubtitlesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EraseVideoSubtitlesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EraseVideoSubtitlesResponseBody>(model1);
      }
    }
  }


  virtual ~EraseVideoSubtitlesResponse() = default;
};
class MergeVideoModelFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> faceImageURL{};

  MergeVideoModelFaceRequest() {}

  explicit MergeVideoModelFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (faceImageURL) {
      res["FaceImageURL"] = boost::any(*faceImageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("FaceImageURL") != m.end() && !m["FaceImageURL"].empty()) {
      faceImageURL = make_shared<string>(boost::any_cast<string>(m["FaceImageURL"]));
    }
  }


  virtual ~MergeVideoModelFaceRequest() = default;
};
class MergeVideoModelFaceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> faceImageURLObject{};
  shared_ptr<string> userId{};
  shared_ptr<string> templateId{};

  MergeVideoModelFaceAdvanceRequest() {}

  explicit MergeVideoModelFaceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!faceImageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("faceImageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceImageURLObject) {
      res["FaceImageURLObject"] = boost::any(*faceImageURLObject);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceImageURLObject") != m.end() && !m["FaceImageURLObject"].empty()) {
      faceImageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FaceImageURLObject"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~MergeVideoModelFaceAdvanceRequest() = default;
};
class MergeVideoModelFaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoURL{};

  MergeVideoModelFaceResponseBodyData() {}

  explicit MergeVideoModelFaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MergeVideoModelFaceResponseBodyData() = default;
};
class MergeVideoModelFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<MergeVideoModelFaceResponseBodyData> data{};

  MergeVideoModelFaceResponseBody() {}

  explicit MergeVideoModelFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        MergeVideoModelFaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<MergeVideoModelFaceResponseBodyData>(model1);
      }
    }
  }


  virtual ~MergeVideoModelFaceResponseBody() = default;
};
class MergeVideoModelFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<MergeVideoModelFaceResponseBody> body{};

  MergeVideoModelFaceResponse() {}

  explicit MergeVideoModelFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MergeVideoModelFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MergeVideoModelFaceResponseBody>(model1);
      }
    }
  }


  virtual ~MergeVideoModelFaceResponse() = default;
};
class MergeVideoFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> videoURL{};
  shared_ptr<string> postURL{};
  shared_ptr<string> referenceURL{};

  MergeVideoFaceRequest() {}

  explicit MergeVideoFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoURL) {
      res["VideoURL"] = boost::any(*videoURL);
    }
    if (postURL) {
      res["PostURL"] = boost::any(*postURL);
    }
    if (referenceURL) {
      res["ReferenceURL"] = boost::any(*referenceURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoURL") != m.end() && !m["VideoURL"].empty()) {
      videoURL = make_shared<string>(boost::any_cast<string>(m["VideoURL"]));
    }
    if (m.find("PostURL") != m.end() && !m["PostURL"].empty()) {
      postURL = make_shared<string>(boost::any_cast<string>(m["PostURL"]));
    }
    if (m.find("ReferenceURL") != m.end() && !m["ReferenceURL"].empty()) {
      referenceURL = make_shared<string>(boost::any_cast<string>(m["ReferenceURL"]));
    }
  }


  virtual ~MergeVideoFaceRequest() = default;
};
class MergeVideoFaceAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> videoURLObject{};
  shared_ptr<string> postURL{};
  shared_ptr<string> referenceURL{};

  MergeVideoFaceAdvanceRequest() {}

  explicit MergeVideoFaceAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!videoURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("videoURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (videoURLObject) {
      res["VideoURLObject"] = boost::any(*videoURLObject);
    }
    if (postURL) {
      res["PostURL"] = boost::any(*postURL);
    }
    if (referenceURL) {
      res["ReferenceURL"] = boost::any(*referenceURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VideoURLObject") != m.end() && !m["VideoURLObject"].empty()) {
      videoURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["VideoURLObject"]));
    }
    if (m.find("PostURL") != m.end() && !m["PostURL"].empty()) {
      postURL = make_shared<string>(boost::any_cast<string>(m["PostURL"]));
    }
    if (m.find("ReferenceURL") != m.end() && !m["ReferenceURL"].empty()) {
      referenceURL = make_shared<string>(boost::any_cast<string>(m["ReferenceURL"]));
    }
  }


  virtual ~MergeVideoFaceAdvanceRequest() = default;
};
class MergeVideoFaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> videoURL{};

  MergeVideoFaceResponseBodyData() {}

  explicit MergeVideoFaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MergeVideoFaceResponseBodyData() = default;
};
class MergeVideoFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<MergeVideoFaceResponseBodyData> data{};

  MergeVideoFaceResponseBody() {}

  explicit MergeVideoFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        MergeVideoFaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<MergeVideoFaceResponseBodyData>(model1);
      }
    }
  }


  virtual ~MergeVideoFaceResponseBody() = default;
};
class MergeVideoFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<MergeVideoFaceResponseBody> body{};

  MergeVideoFaceResponse() {}

  explicit MergeVideoFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MergeVideoFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MergeVideoFaceResponseBody>(model1);
      }
    }
  }


  virtual ~MergeVideoFaceResponse() = default;
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
  ToneSdrVideoResponse toneSdrVideoWithOptions(shared_ptr<ToneSdrVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ToneSdrVideoResponse toneSdrVideo(shared_ptr<ToneSdrVideoRequest> request);
  ToneSdrVideoResponse toneSdrVideoAdvance(shared_ptr<ToneSdrVideoAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnhanceVideoQualityResponse enhanceVideoQualityWithOptions(shared_ptr<EnhanceVideoQualityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnhanceVideoQualityResponse enhanceVideoQuality(shared_ptr<EnhanceVideoQualityRequest> request);
  EnhanceVideoQualityResponse enhanceVideoQualityAdvance(shared_ptr<EnhanceVideoQualityAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InterpolateVideoFrameResponse interpolateVideoFrameWithOptions(shared_ptr<InterpolateVideoFrameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InterpolateVideoFrameResponse interpolateVideoFrame(shared_ptr<InterpolateVideoFrameRequest> request);
  InterpolateVideoFrameResponse interpolateVideoFrameAdvance(shared_ptr<InterpolateVideoFrameAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EraseVideoLogoResponse eraseVideoLogoWithOptions(shared_ptr<EraseVideoLogoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EraseVideoLogoResponse eraseVideoLogo(shared_ptr<EraseVideoLogoRequest> request);
  EraseVideoLogoResponse eraseVideoLogoAdvance(shared_ptr<EraseVideoLogoAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConvertHdrVideoResponse convertHdrVideoWithOptions(shared_ptr<ConvertHdrVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConvertHdrVideoResponse convertHdrVideo(shared_ptr<ConvertHdrVideoRequest> request);
  ConvertHdrVideoResponse convertHdrVideoAdvance(shared_ptr<ConvertHdrVideoAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AdjustVideoColorResponse adjustVideoColorWithOptions(shared_ptr<AdjustVideoColorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AdjustVideoColorResponse adjustVideoColor(shared_ptr<AdjustVideoColorRequest> request);
  AdjustVideoColorResponse adjustVideoColorAdvance(shared_ptr<AdjustVideoColorAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeVideoSizeResponse changeVideoSizeWithOptions(shared_ptr<ChangeVideoSizeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeVideoSizeResponse changeVideoSize(shared_ptr<ChangeVideoSizeRequest> request);
  ChangeVideoSizeResponse changeVideoSizeAdvance(shared_ptr<ChangeVideoSizeAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SuperResolveVideoResponse superResolveVideoWithOptions(shared_ptr<SuperResolveVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SuperResolveVideoResponse superResolveVideo(shared_ptr<SuperResolveVideoRequest> request);
  SuperResolveVideoResponse superResolveVideoAdvance(shared_ptr<SuperResolveVideoAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResultWithOptions(shared_ptr<GetAsyncJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResult(shared_ptr<GetAsyncJobResultRequest> request);
  AddFaceVideoTemplateResponse addFaceVideoTemplateWithOptions(shared_ptr<AddFaceVideoTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddFaceVideoTemplateResponse addFaceVideoTemplate(shared_ptr<AddFaceVideoTemplateRequest> request);
  AddFaceVideoTemplateResponse addFaceVideoTemplateAdvance(shared_ptr<AddFaceVideoTemplateAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateVideoResponse generateVideoWithOptions(shared_ptr<GenerateVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateVideoResponse generateVideo(shared_ptr<GenerateVideoRequest> request);
  QueryFaceVideoTemplateResponse queryFaceVideoTemplateWithOptions(shared_ptr<QueryFaceVideoTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFaceVideoTemplateResponse queryFaceVideoTemplate(shared_ptr<QueryFaceVideoTemplateRequest> request);
  DeleteFaceVideoTemplateResponse deleteFaceVideoTemplateWithOptions(shared_ptr<DeleteFaceVideoTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFaceVideoTemplateResponse deleteFaceVideoTemplate(shared_ptr<DeleteFaceVideoTemplateRequest> request);
  AbstractEcommerceVideoResponse abstractEcommerceVideoWithOptions(shared_ptr<AbstractEcommerceVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AbstractEcommerceVideoResponse abstractEcommerceVideo(shared_ptr<AbstractEcommerceVideoRequest> request);
  AbstractEcommerceVideoResponse abstractEcommerceVideoAdvance(shared_ptr<AbstractEcommerceVideoAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AbstractFilmVideoResponse abstractFilmVideoWithOptions(shared_ptr<AbstractFilmVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AbstractFilmVideoResponse abstractFilmVideo(shared_ptr<AbstractFilmVideoRequest> request);
  AbstractFilmVideoResponse abstractFilmVideoAdvance(shared_ptr<AbstractFilmVideoAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EraseVideoSubtitlesResponse eraseVideoSubtitlesWithOptions(shared_ptr<EraseVideoSubtitlesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EraseVideoSubtitlesResponse eraseVideoSubtitles(shared_ptr<EraseVideoSubtitlesRequest> request);
  EraseVideoSubtitlesResponse eraseVideoSubtitlesAdvance(shared_ptr<EraseVideoSubtitlesAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MergeVideoModelFaceResponse mergeVideoModelFaceWithOptions(shared_ptr<MergeVideoModelFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MergeVideoModelFaceResponse mergeVideoModelFace(shared_ptr<MergeVideoModelFaceRequest> request);
  MergeVideoModelFaceResponse mergeVideoModelFaceAdvance(shared_ptr<MergeVideoModelFaceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MergeVideoFaceResponse mergeVideoFaceWithOptions(shared_ptr<MergeVideoFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MergeVideoFaceResponse mergeVideoFace(shared_ptr<MergeVideoFaceRequest> request);
  MergeVideoFaceResponse mergeVideoFaceAdvance(shared_ptr<MergeVideoFaceAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Videoenhan20200320

#endif
