// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IMAGEENHAN20190930_H_
#define ALIBABACLOUD_IMAGEENHAN20190930_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Imageenhan20190930 {
class ExtendImageStyleRequest : public Darabonba::Model {
public:
  shared_ptr<string> styleUrl{};
  shared_ptr<string> majorUrl{};

  ExtendImageStyleRequest() {}

  explicit ExtendImageStyleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (styleUrl) {
      res["StyleUrl"] = boost::any(*styleUrl);
    }
    if (majorUrl) {
      res["MajorUrl"] = boost::any(*majorUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StyleUrl") != m.end() && !m["StyleUrl"].empty()) {
      styleUrl = make_shared<string>(boost::any_cast<string>(m["StyleUrl"]));
    }
    if (m.find("MajorUrl") != m.end() && !m["MajorUrl"].empty()) {
      majorUrl = make_shared<string>(boost::any_cast<string>(m["MajorUrl"]));
    }
  }


  virtual ~ExtendImageStyleRequest() = default;
};
class ExtendImageStyleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<string> majorUrl{};

  ExtendImageStyleResponseBodyData() {}

  explicit ExtendImageStyleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (majorUrl) {
      res["MajorUrl"] = boost::any(*majorUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("MajorUrl") != m.end() && !m["MajorUrl"].empty()) {
      majorUrl = make_shared<string>(boost::any_cast<string>(m["MajorUrl"]));
    }
  }


  virtual ~ExtendImageStyleResponseBodyData() = default;
};
class ExtendImageStyleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ExtendImageStyleResponseBodyData> data{};

  ExtendImageStyleResponseBody() {}

  explicit ExtendImageStyleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExtendImageStyleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ExtendImageStyleResponseBodyData>(model1);
      }
    }
  }


  virtual ~ExtendImageStyleResponseBody() = default;
};
class ExtendImageStyleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ExtendImageStyleResponseBody> body{};

  ExtendImageStyleResponse() {}

  explicit ExtendImageStyleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExtendImageStyleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExtendImageStyleResponseBody>(model1);
      }
    }
  }


  virtual ~ExtendImageStyleResponse() = default;
};
class ImageBlindCharacterWatermarkRequest : public Darabonba::Model {
public:
  shared_ptr<string> functionType{};
  shared_ptr<string> text{};
  shared_ptr<string> watermarkImageURL{};
  shared_ptr<string> outputFileType{};
  shared_ptr<long> qualityFactor{};
  shared_ptr<string> originImageURL{};

  ImageBlindCharacterWatermarkRequest() {}

  explicit ImageBlindCharacterWatermarkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (functionType) {
      res["FunctionType"] = boost::any(*functionType);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (watermarkImageURL) {
      res["WatermarkImageURL"] = boost::any(*watermarkImageURL);
    }
    if (outputFileType) {
      res["OutputFileType"] = boost::any(*outputFileType);
    }
    if (qualityFactor) {
      res["QualityFactor"] = boost::any(*qualityFactor);
    }
    if (originImageURL) {
      res["OriginImageURL"] = boost::any(*originImageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FunctionType") != m.end() && !m["FunctionType"].empty()) {
      functionType = make_shared<string>(boost::any_cast<string>(m["FunctionType"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("WatermarkImageURL") != m.end() && !m["WatermarkImageURL"].empty()) {
      watermarkImageURL = make_shared<string>(boost::any_cast<string>(m["WatermarkImageURL"]));
    }
    if (m.find("OutputFileType") != m.end() && !m["OutputFileType"].empty()) {
      outputFileType = make_shared<string>(boost::any_cast<string>(m["OutputFileType"]));
    }
    if (m.find("QualityFactor") != m.end() && !m["QualityFactor"].empty()) {
      qualityFactor = make_shared<long>(boost::any_cast<long>(m["QualityFactor"]));
    }
    if (m.find("OriginImageURL") != m.end() && !m["OriginImageURL"].empty()) {
      originImageURL = make_shared<string>(boost::any_cast<string>(m["OriginImageURL"]));
    }
  }


  virtual ~ImageBlindCharacterWatermarkRequest() = default;
};
class ImageBlindCharacterWatermarkAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> originImageURLObject{};
  shared_ptr<string> functionType{};
  shared_ptr<string> text{};
  shared_ptr<string> watermarkImageURL{};
  shared_ptr<string> outputFileType{};
  shared_ptr<long> qualityFactor{};

  ImageBlindCharacterWatermarkAdvanceRequest() {}

  explicit ImageBlindCharacterWatermarkAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!originImageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("originImageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originImageURLObject) {
      res["OriginImageURLObject"] = boost::any(*originImageURLObject);
    }
    if (functionType) {
      res["FunctionType"] = boost::any(*functionType);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (watermarkImageURL) {
      res["WatermarkImageURL"] = boost::any(*watermarkImageURL);
    }
    if (outputFileType) {
      res["OutputFileType"] = boost::any(*outputFileType);
    }
    if (qualityFactor) {
      res["QualityFactor"] = boost::any(*qualityFactor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OriginImageURLObject") != m.end() && !m["OriginImageURLObject"].empty()) {
      originImageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["OriginImageURLObject"]));
    }
    if (m.find("FunctionType") != m.end() && !m["FunctionType"].empty()) {
      functionType = make_shared<string>(boost::any_cast<string>(m["FunctionType"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("WatermarkImageURL") != m.end() && !m["WatermarkImageURL"].empty()) {
      watermarkImageURL = make_shared<string>(boost::any_cast<string>(m["WatermarkImageURL"]));
    }
    if (m.find("OutputFileType") != m.end() && !m["OutputFileType"].empty()) {
      outputFileType = make_shared<string>(boost::any_cast<string>(m["OutputFileType"]));
    }
    if (m.find("QualityFactor") != m.end() && !m["QualityFactor"].empty()) {
      qualityFactor = make_shared<long>(boost::any_cast<long>(m["QualityFactor"]));
    }
  }


  virtual ~ImageBlindCharacterWatermarkAdvanceRequest() = default;
};
class ImageBlindCharacterWatermarkResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> watermarkImageURL{};
  shared_ptr<string> textImageURL{};

  ImageBlindCharacterWatermarkResponseBodyData() {}

  explicit ImageBlindCharacterWatermarkResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (watermarkImageURL) {
      res["WatermarkImageURL"] = boost::any(*watermarkImageURL);
    }
    if (textImageURL) {
      res["TextImageURL"] = boost::any(*textImageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WatermarkImageURL") != m.end() && !m["WatermarkImageURL"].empty()) {
      watermarkImageURL = make_shared<string>(boost::any_cast<string>(m["WatermarkImageURL"]));
    }
    if (m.find("TextImageURL") != m.end() && !m["TextImageURL"].empty()) {
      textImageURL = make_shared<string>(boost::any_cast<string>(m["TextImageURL"]));
    }
  }


  virtual ~ImageBlindCharacterWatermarkResponseBodyData() = default;
};
class ImageBlindCharacterWatermarkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ImageBlindCharacterWatermarkResponseBodyData> data{};

  ImageBlindCharacterWatermarkResponseBody() {}

  explicit ImageBlindCharacterWatermarkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImageBlindCharacterWatermarkResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ImageBlindCharacterWatermarkResponseBodyData>(model1);
      }
    }
  }


  virtual ~ImageBlindCharacterWatermarkResponseBody() = default;
};
class ImageBlindCharacterWatermarkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ImageBlindCharacterWatermarkResponseBody> body{};

  ImageBlindCharacterWatermarkResponse() {}

  explicit ImageBlindCharacterWatermarkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImageBlindCharacterWatermarkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImageBlindCharacterWatermarkResponseBody>(model1);
      }
    }
  }


  virtual ~ImageBlindCharacterWatermarkResponse() = default;
};
class RemoveImageWatermarkRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RemoveImageWatermarkRequest() {}

  explicit RemoveImageWatermarkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveImageWatermarkRequest() = default;
};
class RemoveImageWatermarkAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  RemoveImageWatermarkAdvanceRequest() {}

  explicit RemoveImageWatermarkAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~RemoveImageWatermarkAdvanceRequest() = default;
};
class RemoveImageWatermarkResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RemoveImageWatermarkResponseBodyData() {}

  explicit RemoveImageWatermarkResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveImageWatermarkResponseBodyData() = default;
};
class RemoveImageWatermarkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RemoveImageWatermarkResponseBodyData> data{};

  RemoveImageWatermarkResponseBody() {}

  explicit RemoveImageWatermarkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveImageWatermarkResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RemoveImageWatermarkResponseBodyData>(model1);
      }
    }
  }


  virtual ~RemoveImageWatermarkResponseBody() = default;
};
class RemoveImageWatermarkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveImageWatermarkResponseBody> body{};

  RemoveImageWatermarkResponse() {}

  explicit RemoveImageWatermarkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveImageWatermarkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveImageWatermarkResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveImageWatermarkResponse() = default;
};
class GenerateDynamicImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<string> operation{};

  GenerateDynamicImageRequest() {}

  explicit GenerateDynamicImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (operation) {
      res["Operation"] = boost::any(*operation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["Operation"]));
    }
  }


  virtual ~GenerateDynamicImageRequest() = default;
};
class GenerateDynamicImageAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> urlObject{};
  shared_ptr<string> operation{};

  GenerateDynamicImageAdvanceRequest() {}

  explicit GenerateDynamicImageAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!urlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("urlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (urlObject) {
      res["UrlObject"] = boost::any(*urlObject);
    }
    if (operation) {
      res["Operation"] = boost::any(*operation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UrlObject") != m.end() && !m["UrlObject"].empty()) {
      urlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["UrlObject"]));
    }
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["Operation"]));
    }
  }


  virtual ~GenerateDynamicImageAdvanceRequest() = default;
};
class GenerateDynamicImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  GenerateDynamicImageResponseBodyData() {}

  explicit GenerateDynamicImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GenerateDynamicImageResponseBodyData() = default;
};
class GenerateDynamicImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<GenerateDynamicImageResponseBodyData> data{};

  GenerateDynamicImageResponseBody() {}

  explicit GenerateDynamicImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateDynamicImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GenerateDynamicImageResponseBodyData>(model1);
      }
    }
  }


  virtual ~GenerateDynamicImageResponseBody() = default;
};
class GenerateDynamicImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GenerateDynamicImageResponseBody> body{};

  GenerateDynamicImageResponse() {}

  explicit GenerateDynamicImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateDynamicImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateDynamicImageResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateDynamicImageResponse() = default;
};
class ImageBlindPicWatermarkRequest : public Darabonba::Model {
public:
  shared_ptr<string> functionType{};
  shared_ptr<string> logoURL{};
  shared_ptr<string> watermarkImageURL{};
  shared_ptr<string> outputFileType{};
  shared_ptr<long> qualityFactor{};
  shared_ptr<string> originImageURL{};

  ImageBlindPicWatermarkRequest() {}

  explicit ImageBlindPicWatermarkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (functionType) {
      res["FunctionType"] = boost::any(*functionType);
    }
    if (logoURL) {
      res["LogoURL"] = boost::any(*logoURL);
    }
    if (watermarkImageURL) {
      res["WatermarkImageURL"] = boost::any(*watermarkImageURL);
    }
    if (outputFileType) {
      res["OutputFileType"] = boost::any(*outputFileType);
    }
    if (qualityFactor) {
      res["QualityFactor"] = boost::any(*qualityFactor);
    }
    if (originImageURL) {
      res["OriginImageURL"] = boost::any(*originImageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FunctionType") != m.end() && !m["FunctionType"].empty()) {
      functionType = make_shared<string>(boost::any_cast<string>(m["FunctionType"]));
    }
    if (m.find("LogoURL") != m.end() && !m["LogoURL"].empty()) {
      logoURL = make_shared<string>(boost::any_cast<string>(m["LogoURL"]));
    }
    if (m.find("WatermarkImageURL") != m.end() && !m["WatermarkImageURL"].empty()) {
      watermarkImageURL = make_shared<string>(boost::any_cast<string>(m["WatermarkImageURL"]));
    }
    if (m.find("OutputFileType") != m.end() && !m["OutputFileType"].empty()) {
      outputFileType = make_shared<string>(boost::any_cast<string>(m["OutputFileType"]));
    }
    if (m.find("QualityFactor") != m.end() && !m["QualityFactor"].empty()) {
      qualityFactor = make_shared<long>(boost::any_cast<long>(m["QualityFactor"]));
    }
    if (m.find("OriginImageURL") != m.end() && !m["OriginImageURL"].empty()) {
      originImageURL = make_shared<string>(boost::any_cast<string>(m["OriginImageURL"]));
    }
  }


  virtual ~ImageBlindPicWatermarkRequest() = default;
};
class ImageBlindPicWatermarkAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> originImageURLObject{};
  shared_ptr<string> functionType{};
  shared_ptr<string> logoURL{};
  shared_ptr<string> watermarkImageURL{};
  shared_ptr<string> outputFileType{};
  shared_ptr<long> qualityFactor{};

  ImageBlindPicWatermarkAdvanceRequest() {}

  explicit ImageBlindPicWatermarkAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!originImageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("originImageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originImageURLObject) {
      res["OriginImageURLObject"] = boost::any(*originImageURLObject);
    }
    if (functionType) {
      res["FunctionType"] = boost::any(*functionType);
    }
    if (logoURL) {
      res["LogoURL"] = boost::any(*logoURL);
    }
    if (watermarkImageURL) {
      res["WatermarkImageURL"] = boost::any(*watermarkImageURL);
    }
    if (outputFileType) {
      res["OutputFileType"] = boost::any(*outputFileType);
    }
    if (qualityFactor) {
      res["QualityFactor"] = boost::any(*qualityFactor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OriginImageURLObject") != m.end() && !m["OriginImageURLObject"].empty()) {
      originImageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["OriginImageURLObject"]));
    }
    if (m.find("FunctionType") != m.end() && !m["FunctionType"].empty()) {
      functionType = make_shared<string>(boost::any_cast<string>(m["FunctionType"]));
    }
    if (m.find("LogoURL") != m.end() && !m["LogoURL"].empty()) {
      logoURL = make_shared<string>(boost::any_cast<string>(m["LogoURL"]));
    }
    if (m.find("WatermarkImageURL") != m.end() && !m["WatermarkImageURL"].empty()) {
      watermarkImageURL = make_shared<string>(boost::any_cast<string>(m["WatermarkImageURL"]));
    }
    if (m.find("OutputFileType") != m.end() && !m["OutputFileType"].empty()) {
      outputFileType = make_shared<string>(boost::any_cast<string>(m["OutputFileType"]));
    }
    if (m.find("QualityFactor") != m.end() && !m["QualityFactor"].empty()) {
      qualityFactor = make_shared<long>(boost::any_cast<long>(m["QualityFactor"]));
    }
  }


  virtual ~ImageBlindPicWatermarkAdvanceRequest() = default;
};
class ImageBlindPicWatermarkResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> watermarkImageURL{};
  shared_ptr<string> logoURL{};

  ImageBlindPicWatermarkResponseBodyData() {}

  explicit ImageBlindPicWatermarkResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (watermarkImageURL) {
      res["WatermarkImageURL"] = boost::any(*watermarkImageURL);
    }
    if (logoURL) {
      res["LogoURL"] = boost::any(*logoURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WatermarkImageURL") != m.end() && !m["WatermarkImageURL"].empty()) {
      watermarkImageURL = make_shared<string>(boost::any_cast<string>(m["WatermarkImageURL"]));
    }
    if (m.find("LogoURL") != m.end() && !m["LogoURL"].empty()) {
      logoURL = make_shared<string>(boost::any_cast<string>(m["LogoURL"]));
    }
  }


  virtual ~ImageBlindPicWatermarkResponseBodyData() = default;
};
class ImageBlindPicWatermarkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ImageBlindPicWatermarkResponseBodyData> data{};

  ImageBlindPicWatermarkResponseBody() {}

  explicit ImageBlindPicWatermarkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImageBlindPicWatermarkResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ImageBlindPicWatermarkResponseBodyData>(model1);
      }
    }
  }


  virtual ~ImageBlindPicWatermarkResponseBody() = default;
};
class ImageBlindPicWatermarkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ImageBlindPicWatermarkResponseBody> body{};

  ImageBlindPicWatermarkResponse() {}

  explicit ImageBlindPicWatermarkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImageBlindPicWatermarkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImageBlindPicWatermarkResponseBody>(model1);
      }
    }
  }


  virtual ~ImageBlindPicWatermarkResponse() = default;
};
class RemoveImageSubtitlesRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<double> BX{};
  shared_ptr<double> BY{};
  shared_ptr<double> BW{};
  shared_ptr<double> BH{};

  RemoveImageSubtitlesRequest() {}

  explicit RemoveImageSubtitlesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
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
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
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


  virtual ~RemoveImageSubtitlesRequest() = default;
};
class RemoveImageSubtitlesAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<double> BX{};
  shared_ptr<double> BY{};
  shared_ptr<double> BW{};
  shared_ptr<double> BH{};

  RemoveImageSubtitlesAdvanceRequest() {}

  explicit RemoveImageSubtitlesAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
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
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
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


  virtual ~RemoveImageSubtitlesAdvanceRequest() = default;
};
class RemoveImageSubtitlesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  RemoveImageSubtitlesResponseBodyData() {}

  explicit RemoveImageSubtitlesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveImageSubtitlesResponseBodyData() = default;
};
class RemoveImageSubtitlesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RemoveImageSubtitlesResponseBodyData> data{};

  RemoveImageSubtitlesResponseBody() {}

  explicit RemoveImageSubtitlesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveImageSubtitlesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RemoveImageSubtitlesResponseBodyData>(model1);
      }
    }
  }


  virtual ~RemoveImageSubtitlesResponseBody() = default;
};
class RemoveImageSubtitlesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveImageSubtitlesResponseBody> body{};

  RemoveImageSubtitlesResponse() {}

  explicit RemoveImageSubtitlesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveImageSubtitlesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveImageSubtitlesResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveImageSubtitlesResponse() = default;
};
class RecolorHDImageRequestColorTemplate : public Darabonba::Model {
public:
  shared_ptr<string> color{};

  RecolorHDImageRequestColorTemplate() {}

  explicit RecolorHDImageRequestColorTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (color) {
      res["Color"] = boost::any(*color);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Color") != m.end() && !m["Color"].empty()) {
      color = make_shared<string>(boost::any_cast<string>(m["Color"]));
    }
  }


  virtual ~RecolorHDImageRequestColorTemplate() = default;
};
class RecolorHDImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<string> mode{};
  shared_ptr<string> refUrl{};
  shared_ptr<long> colorCount{};
  shared_ptr<string> degree{};
  shared_ptr<vector<RecolorHDImageRequestColorTemplate>> colorTemplate{};

  RecolorHDImageRequest() {}

  explicit RecolorHDImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (refUrl) {
      res["RefUrl"] = boost::any(*refUrl);
    }
    if (colorCount) {
      res["ColorCount"] = boost::any(*colorCount);
    }
    if (degree) {
      res["Degree"] = boost::any(*degree);
    }
    if (colorTemplate) {
      vector<boost::any> temp1;
      for(auto item1:*colorTemplate){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ColorTemplate"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("RefUrl") != m.end() && !m["RefUrl"].empty()) {
      refUrl = make_shared<string>(boost::any_cast<string>(m["RefUrl"]));
    }
    if (m.find("ColorCount") != m.end() && !m["ColorCount"].empty()) {
      colorCount = make_shared<long>(boost::any_cast<long>(m["ColorCount"]));
    }
    if (m.find("Degree") != m.end() && !m["Degree"].empty()) {
      degree = make_shared<string>(boost::any_cast<string>(m["Degree"]));
    }
    if (m.find("ColorTemplate") != m.end() && !m["ColorTemplate"].empty()) {
      if (typeid(vector<boost::any>) == m["ColorTemplate"].type()) {
        vector<RecolorHDImageRequestColorTemplate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ColorTemplate"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecolorHDImageRequestColorTemplate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        colorTemplate = make_shared<vector<RecolorHDImageRequestColorTemplate>>(expect1);
      }
    }
  }


  virtual ~RecolorHDImageRequest() = default;
};
class RecolorHDImageAdvanceRequestColorTemplate : public Darabonba::Model {
public:
  shared_ptr<string> color{};

  RecolorHDImageAdvanceRequestColorTemplate() {}

  explicit RecolorHDImageAdvanceRequestColorTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (color) {
      res["Color"] = boost::any(*color);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Color") != m.end() && !m["Color"].empty()) {
      color = make_shared<string>(boost::any_cast<string>(m["Color"]));
    }
  }


  virtual ~RecolorHDImageAdvanceRequestColorTemplate() = default;
};
class RecolorHDImageAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> urlObject{};
  shared_ptr<string> mode{};
  shared_ptr<string> refUrl{};
  shared_ptr<long> colorCount{};
  shared_ptr<string> degree{};
  shared_ptr<vector<RecolorHDImageAdvanceRequestColorTemplate>> colorTemplate{};

  RecolorHDImageAdvanceRequest() {}

  explicit RecolorHDImageAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!urlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("urlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (urlObject) {
      res["UrlObject"] = boost::any(*urlObject);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (refUrl) {
      res["RefUrl"] = boost::any(*refUrl);
    }
    if (colorCount) {
      res["ColorCount"] = boost::any(*colorCount);
    }
    if (degree) {
      res["Degree"] = boost::any(*degree);
    }
    if (colorTemplate) {
      vector<boost::any> temp1;
      for(auto item1:*colorTemplate){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ColorTemplate"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UrlObject") != m.end() && !m["UrlObject"].empty()) {
      urlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["UrlObject"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("RefUrl") != m.end() && !m["RefUrl"].empty()) {
      refUrl = make_shared<string>(boost::any_cast<string>(m["RefUrl"]));
    }
    if (m.find("ColorCount") != m.end() && !m["ColorCount"].empty()) {
      colorCount = make_shared<long>(boost::any_cast<long>(m["ColorCount"]));
    }
    if (m.find("Degree") != m.end() && !m["Degree"].empty()) {
      degree = make_shared<string>(boost::any_cast<string>(m["Degree"]));
    }
    if (m.find("ColorTemplate") != m.end() && !m["ColorTemplate"].empty()) {
      if (typeid(vector<boost::any>) == m["ColorTemplate"].type()) {
        vector<RecolorHDImageAdvanceRequestColorTemplate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ColorTemplate"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecolorHDImageAdvanceRequestColorTemplate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        colorTemplate = make_shared<vector<RecolorHDImageAdvanceRequestColorTemplate>>(expect1);
      }
    }
  }


  virtual ~RecolorHDImageAdvanceRequest() = default;
};
class RecolorHDImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> imageList{};

  RecolorHDImageResponseBodyData() {}

  explicit RecolorHDImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageList) {
      res["ImageList"] = boost::any(*imageList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageList") != m.end() && !m["ImageList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ImageList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RecolorHDImageResponseBodyData() = default;
};
class RecolorHDImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecolorHDImageResponseBodyData> data{};

  RecolorHDImageResponseBody() {}

  explicit RecolorHDImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecolorHDImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecolorHDImageResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecolorHDImageResponseBody() = default;
};
class RecolorHDImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecolorHDImageResponseBody> body{};

  RecolorHDImageResponse() {}

  explicit RecolorHDImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecolorHDImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecolorHDImageResponseBody>(model1);
      }
    }
  }


  virtual ~RecolorHDImageResponse() = default;
};
class ColorizeImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  ColorizeImageRequest() {}

  explicit ColorizeImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ColorizeImageRequest() = default;
};
class ColorizeImageAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  ColorizeImageAdvanceRequest() {}

  explicit ColorizeImageAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~ColorizeImageAdvanceRequest() = default;
};
class ColorizeImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  ColorizeImageResponseBodyData() {}

  explicit ColorizeImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ColorizeImageResponseBodyData() = default;
};
class ColorizeImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ColorizeImageResponseBodyData> data{};

  ColorizeImageResponseBody() {}

  explicit ColorizeImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ColorizeImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ColorizeImageResponseBodyData>(model1);
      }
    }
  }


  virtual ~ColorizeImageResponseBody() = default;
};
class ColorizeImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ColorizeImageResponseBody> body{};

  ColorizeImageResponse() {}

  explicit ColorizeImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ColorizeImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ColorizeImageResponseBody>(model1);
      }
    }
  }


  virtual ~ColorizeImageResponse() = default;
};
class RecolorImageRequestColorTemplate : public Darabonba::Model {
public:
  shared_ptr<string> color{};

  RecolorImageRequestColorTemplate() {}

  explicit RecolorImageRequestColorTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (color) {
      res["Color"] = boost::any(*color);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Color") != m.end() && !m["Color"].empty()) {
      color = make_shared<string>(boost::any_cast<string>(m["Color"]));
    }
  }


  virtual ~RecolorImageRequestColorTemplate() = default;
};
class RecolorImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<string> mode{};
  shared_ptr<string> refUrl{};
  shared_ptr<long> colorCount{};
  shared_ptr<vector<RecolorImageRequestColorTemplate>> colorTemplate{};

  RecolorImageRequest() {}

  explicit RecolorImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (refUrl) {
      res["RefUrl"] = boost::any(*refUrl);
    }
    if (colorCount) {
      res["ColorCount"] = boost::any(*colorCount);
    }
    if (colorTemplate) {
      vector<boost::any> temp1;
      for(auto item1:*colorTemplate){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ColorTemplate"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("RefUrl") != m.end() && !m["RefUrl"].empty()) {
      refUrl = make_shared<string>(boost::any_cast<string>(m["RefUrl"]));
    }
    if (m.find("ColorCount") != m.end() && !m["ColorCount"].empty()) {
      colorCount = make_shared<long>(boost::any_cast<long>(m["ColorCount"]));
    }
    if (m.find("ColorTemplate") != m.end() && !m["ColorTemplate"].empty()) {
      if (typeid(vector<boost::any>) == m["ColorTemplate"].type()) {
        vector<RecolorImageRequestColorTemplate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ColorTemplate"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RecolorImageRequestColorTemplate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        colorTemplate = make_shared<vector<RecolorImageRequestColorTemplate>>(expect1);
      }
    }
  }


  virtual ~RecolorImageRequest() = default;
};
class RecolorImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> imageList{};

  RecolorImageResponseBodyData() {}

  explicit RecolorImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageList) {
      res["ImageList"] = boost::any(*imageList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageList") != m.end() && !m["ImageList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ImageList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~RecolorImageResponseBodyData() = default;
};
class RecolorImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<RecolorImageResponseBodyData> data{};

  RecolorImageResponseBody() {}

  explicit RecolorImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecolorImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<RecolorImageResponseBodyData>(model1);
      }
    }
  }


  virtual ~RecolorImageResponseBody() = default;
};
class RecolorImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RecolorImageResponseBody> body{};

  RecolorImageResponse() {}

  explicit RecolorImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RecolorImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecolorImageResponseBody>(model1);
      }
    }
  }


  virtual ~RecolorImageResponse() = default;
};
class AssessCompositionRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  AssessCompositionRequest() {}

  explicit AssessCompositionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AssessCompositionRequest() = default;
};
class AssessCompositionAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  AssessCompositionAdvanceRequest() {}

  explicit AssessCompositionAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~AssessCompositionAdvanceRequest() = default;
};
class AssessCompositionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> score{};

  AssessCompositionResponseBodyData() {}

  explicit AssessCompositionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
  }


  virtual ~AssessCompositionResponseBodyData() = default;
};
class AssessCompositionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<AssessCompositionResponseBodyData> data{};

  AssessCompositionResponseBody() {}

  explicit AssessCompositionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssessCompositionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AssessCompositionResponseBodyData>(model1);
      }
    }
  }


  virtual ~AssessCompositionResponseBody() = default;
};
class AssessCompositionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AssessCompositionResponseBody> body{};

  AssessCompositionResponse() {}

  explicit AssessCompositionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssessCompositionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssessCompositionResponseBody>(model1);
      }
    }
  }


  virtual ~AssessCompositionResponse() = default;
};
class AssessSharpnessRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  AssessSharpnessRequest() {}

  explicit AssessSharpnessRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AssessSharpnessRequest() = default;
};
class AssessSharpnessAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  AssessSharpnessAdvanceRequest() {}

  explicit AssessSharpnessAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~AssessSharpnessAdvanceRequest() = default;
};
class AssessSharpnessResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> sharpness{};

  AssessSharpnessResponseBodyData() {}

  explicit AssessSharpnessResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sharpness) {
      res["Sharpness"] = boost::any(*sharpness);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Sharpness") != m.end() && !m["Sharpness"].empty()) {
      sharpness = make_shared<double>(boost::any_cast<double>(m["Sharpness"]));
    }
  }


  virtual ~AssessSharpnessResponseBodyData() = default;
};
class AssessSharpnessResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<AssessSharpnessResponseBodyData> data{};

  AssessSharpnessResponseBody() {}

  explicit AssessSharpnessResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssessSharpnessResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AssessSharpnessResponseBodyData>(model1);
      }
    }
  }


  virtual ~AssessSharpnessResponseBody() = default;
};
class AssessSharpnessResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AssessSharpnessResponseBody> body{};

  AssessSharpnessResponse() {}

  explicit AssessSharpnessResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssessSharpnessResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssessSharpnessResponseBody>(model1);
      }
    }
  }


  virtual ~AssessSharpnessResponse() = default;
};
class ErasePersonRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> userMask{};

  ErasePersonRequest() {}

  explicit ErasePersonRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (userMask) {
      res["UserMask"] = boost::any(*userMask);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("UserMask") != m.end() && !m["UserMask"].empty()) {
      userMask = make_shared<string>(boost::any_cast<string>(m["UserMask"]));
    }
  }


  virtual ~ErasePersonRequest() = default;
};
class ErasePersonAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> userMask{};

  ErasePersonAdvanceRequest() {}

  explicit ErasePersonAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    if (userMask) {
      res["UserMask"] = boost::any(*userMask);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("UserMask") != m.end() && !m["UserMask"].empty()) {
      userMask = make_shared<string>(boost::any_cast<string>(m["UserMask"]));
    }
  }


  virtual ~ErasePersonAdvanceRequest() = default;
};
class ErasePersonResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};

  ErasePersonResponseBodyData() {}

  explicit ErasePersonResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
  }


  virtual ~ErasePersonResponseBodyData() = default;
};
class ErasePersonResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ErasePersonResponseBodyData> data{};

  ErasePersonResponseBody() {}

  explicit ErasePersonResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ErasePersonResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ErasePersonResponseBodyData>(model1);
      }
    }
  }


  virtual ~ErasePersonResponseBody() = default;
};
class ErasePersonResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ErasePersonResponseBody> body{};

  ErasePersonResponse() {}

  explicit ErasePersonResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ErasePersonResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ErasePersonResponseBody>(model1);
      }
    }
  }


  virtual ~ErasePersonResponse() = default;
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
class ImitatePhotoStyleRequest : public Darabonba::Model {
public:
  shared_ptr<string> styleUrl{};
  shared_ptr<string> imageURL{};

  ImitatePhotoStyleRequest() {}

  explicit ImitatePhotoStyleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (styleUrl) {
      res["StyleUrl"] = boost::any(*styleUrl);
    }
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StyleUrl") != m.end() && !m["StyleUrl"].empty()) {
      styleUrl = make_shared<string>(boost::any_cast<string>(m["StyleUrl"]));
    }
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~ImitatePhotoStyleRequest() = default;
};
class ImitatePhotoStyleAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> styleUrl{};

  ImitatePhotoStyleAdvanceRequest() {}

  explicit ImitatePhotoStyleAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    if (styleUrl) {
      res["StyleUrl"] = boost::any(*styleUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("StyleUrl") != m.end() && !m["StyleUrl"].empty()) {
      styleUrl = make_shared<string>(boost::any_cast<string>(m["StyleUrl"]));
    }
  }


  virtual ~ImitatePhotoStyleAdvanceRequest() = default;
};
class ImitatePhotoStyleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  ImitatePhotoStyleResponseBodyData() {}

  explicit ImitatePhotoStyleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ImitatePhotoStyleResponseBodyData() = default;
};
class ImitatePhotoStyleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ImitatePhotoStyleResponseBodyData> data{};

  ImitatePhotoStyleResponseBody() {}

  explicit ImitatePhotoStyleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImitatePhotoStyleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ImitatePhotoStyleResponseBodyData>(model1);
      }
    }
  }


  virtual ~ImitatePhotoStyleResponseBody() = default;
};
class ImitatePhotoStyleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ImitatePhotoStyleResponseBody> body{};

  ImitatePhotoStyleResponse() {}

  explicit ImitatePhotoStyleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImitatePhotoStyleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImitatePhotoStyleResponseBody>(model1);
      }
    }
  }


  virtual ~ImitatePhotoStyleResponse() = default;
};
class ChangeImageSizeRequest : public Darabonba::Model {
public:
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<string> url{};

  ChangeImageSizeRequest() {}

  explicit ChangeImageSizeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (url) {
      res["Url"] = boost::any(*url);
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
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ChangeImageSizeRequest() = default;
};
class ChangeImageSizeAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> urlObject{};
  shared_ptr<long> width{};
  shared_ptr<long> height{};

  ChangeImageSizeAdvanceRequest() {}

  explicit ChangeImageSizeAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!urlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("urlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (urlObject) {
      res["UrlObject"] = boost::any(*urlObject);
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
    if (m.find("UrlObject") != m.end() && !m["UrlObject"].empty()) {
      urlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["UrlObject"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
  }


  virtual ~ChangeImageSizeAdvanceRequest() = default;
};
class ChangeImageSizeResponseBodyDataRetainLocation : public Darabonba::Model {
public:
  shared_ptr<long> width{};
  shared_ptr<long> height{};
  shared_ptr<long> y{};
  shared_ptr<long> x{};

  ChangeImageSizeResponseBodyDataRetainLocation() {}

  explicit ChangeImageSizeResponseBodyDataRetainLocation(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (y) {
      res["Y"] = boost::any(*y);
    }
    if (x) {
      res["X"] = boost::any(*x);
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
    if (m.find("Y") != m.end() && !m["Y"].empty()) {
      y = make_shared<long>(boost::any_cast<long>(m["Y"]));
    }
    if (m.find("X") != m.end() && !m["X"].empty()) {
      x = make_shared<long>(boost::any_cast<long>(m["X"]));
    }
  }


  virtual ~ChangeImageSizeResponseBodyDataRetainLocation() = default;
};
class ChangeImageSizeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<ChangeImageSizeResponseBodyDataRetainLocation> retainLocation{};

  ChangeImageSizeResponseBodyData() {}

  explicit ChangeImageSizeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (retainLocation) {
      res["RetainLocation"] = retainLocation ? boost::any(retainLocation->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("RetainLocation") != m.end() && !m["RetainLocation"].empty()) {
      if (typeid(map<string, boost::any>) == m["RetainLocation"].type()) {
        ChangeImageSizeResponseBodyDataRetainLocation model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RetainLocation"]));
        retainLocation = make_shared<ChangeImageSizeResponseBodyDataRetainLocation>(model1);
      }
    }
  }


  virtual ~ChangeImageSizeResponseBodyData() = default;
};
class ChangeImageSizeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<ChangeImageSizeResponseBodyData> data{};

  ChangeImageSizeResponseBody() {}

  explicit ChangeImageSizeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeImageSizeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ChangeImageSizeResponseBodyData>(model1);
      }
    }
  }


  virtual ~ChangeImageSizeResponseBody() = default;
};
class ChangeImageSizeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ChangeImageSizeResponseBody> body{};

  ChangeImageSizeResponse() {}

  explicit ChangeImageSizeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChangeImageSizeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChangeImageSizeResponseBody>(model1);
      }
    }
  }


  virtual ~ChangeImageSizeResponse() = default;
};
class EnhanceImageColorRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};
  shared_ptr<string> outputFormat{};
  shared_ptr<string> mode{};

  EnhanceImageColorRequest() {}

  explicit EnhanceImageColorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    if (outputFormat) {
      res["OutputFormat"] = boost::any(*outputFormat);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
    if (m.find("OutputFormat") != m.end() && !m["OutputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["OutputFormat"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
  }


  virtual ~EnhanceImageColorRequest() = default;
};
class EnhanceImageColorAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<string> outputFormat{};
  shared_ptr<string> mode{};

  EnhanceImageColorAdvanceRequest() {}

  explicit EnhanceImageColorAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    if (outputFormat) {
      res["OutputFormat"] = boost::any(*outputFormat);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("OutputFormat") != m.end() && !m["OutputFormat"].empty()) {
      outputFormat = make_shared<string>(boost::any_cast<string>(m["OutputFormat"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
  }


  virtual ~EnhanceImageColorAdvanceRequest() = default;
};
class EnhanceImageColorResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  EnhanceImageColorResponseBodyData() {}

  explicit EnhanceImageColorResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnhanceImageColorResponseBodyData() = default;
};
class EnhanceImageColorResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<EnhanceImageColorResponseBodyData> data{};

  EnhanceImageColorResponseBody() {}

  explicit EnhanceImageColorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnhanceImageColorResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<EnhanceImageColorResponseBodyData>(model1);
      }
    }
  }


  virtual ~EnhanceImageColorResponseBody() = default;
};
class EnhanceImageColorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EnhanceImageColorResponseBody> body{};

  EnhanceImageColorResponse() {}

  explicit EnhanceImageColorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnhanceImageColorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnhanceImageColorResponseBody>(model1);
      }
    }
  }


  virtual ~EnhanceImageColorResponse() = default;
};
class AssessExposureRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageURL{};

  AssessExposureRequest() {}

  explicit AssessExposureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AssessExposureRequest() = default;
};
class AssessExposureAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};

  AssessExposureAdvanceRequest() {}

  explicit AssessExposureAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
  }


  virtual ~AssessExposureAdvanceRequest() = default;
};
class AssessExposureResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> exposure{};

  AssessExposureResponseBodyData() {}

  explicit AssessExposureResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exposure) {
      res["Exposure"] = boost::any(*exposure);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Exposure") != m.end() && !m["Exposure"].empty()) {
      exposure = make_shared<double>(boost::any_cast<double>(m["Exposure"]));
    }
  }


  virtual ~AssessExposureResponseBodyData() = default;
};
class AssessExposureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<AssessExposureResponseBodyData> data{};

  AssessExposureResponseBody() {}

  explicit AssessExposureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssessExposureResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AssessExposureResponseBodyData>(model1);
      }
    }
  }


  virtual ~AssessExposureResponseBody() = default;
};
class AssessExposureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AssessExposureResponseBody> body{};

  AssessExposureResponse() {}

  explicit AssessExposureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssessExposureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssessExposureResponseBody>(model1);
      }
    }
  }


  virtual ~AssessExposureResponse() = default;
};
class MakeSuperResolutionImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> url{};
  shared_ptr<string> mode{};
  shared_ptr<long> upscaleFactor{};

  MakeSuperResolutionImageRequest() {}

  explicit MakeSuperResolutionImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (upscaleFactor) {
      res["UpscaleFactor"] = boost::any(*upscaleFactor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("UpscaleFactor") != m.end() && !m["UpscaleFactor"].empty()) {
      upscaleFactor = make_shared<long>(boost::any_cast<long>(m["UpscaleFactor"]));
    }
  }


  virtual ~MakeSuperResolutionImageRequest() = default;
};
class MakeSuperResolutionImageAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> urlObject{};
  shared_ptr<string> mode{};
  shared_ptr<long> upscaleFactor{};

  MakeSuperResolutionImageAdvanceRequest() {}

  explicit MakeSuperResolutionImageAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!urlObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("urlObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (urlObject) {
      res["UrlObject"] = boost::any(*urlObject);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (upscaleFactor) {
      res["UpscaleFactor"] = boost::any(*upscaleFactor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UrlObject") != m.end() && !m["UrlObject"].empty()) {
      urlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["UrlObject"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("UpscaleFactor") != m.end() && !m["UpscaleFactor"].empty()) {
      upscaleFactor = make_shared<long>(boost::any_cast<long>(m["UpscaleFactor"]));
    }
  }


  virtual ~MakeSuperResolutionImageAdvanceRequest() = default;
};
class MakeSuperResolutionImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> url{};

  MakeSuperResolutionImageResponseBodyData() {}

  explicit MakeSuperResolutionImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~MakeSuperResolutionImageResponseBodyData() = default;
};
class MakeSuperResolutionImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<MakeSuperResolutionImageResponseBodyData> data{};

  MakeSuperResolutionImageResponseBody() {}

  explicit MakeSuperResolutionImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MakeSuperResolutionImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<MakeSuperResolutionImageResponseBodyData>(model1);
      }
    }
  }


  virtual ~MakeSuperResolutionImageResponseBody() = default;
};
class MakeSuperResolutionImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<MakeSuperResolutionImageResponseBody> body{};

  MakeSuperResolutionImageResponse() {}

  explicit MakeSuperResolutionImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MakeSuperResolutionImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MakeSuperResolutionImageResponseBody>(model1);
      }
    }
  }


  virtual ~MakeSuperResolutionImageResponse() = default;
};
class IntelligentCompositionRequest : public Darabonba::Model {
public:
  shared_ptr<long> numBoxes{};
  shared_ptr<string> imageURL{};

  IntelligentCompositionRequest() {}

  explicit IntelligentCompositionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (numBoxes) {
      res["NumBoxes"] = boost::any(*numBoxes);
    }
    if (imageURL) {
      res["ImageURL"] = boost::any(*imageURL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NumBoxes") != m.end() && !m["NumBoxes"].empty()) {
      numBoxes = make_shared<long>(boost::any_cast<long>(m["NumBoxes"]));
    }
    if (m.find("ImageURL") != m.end() && !m["ImageURL"].empty()) {
      imageURL = make_shared<string>(boost::any_cast<string>(m["ImageURL"]));
    }
  }


  virtual ~IntelligentCompositionRequest() = default;
};
class IntelligentCompositionAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageURLObject{};
  shared_ptr<long> numBoxes{};

  IntelligentCompositionAdvanceRequest() {}

  explicit IntelligentCompositionAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!imageURLObject) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("imageURLObject is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageURLObject) {
      res["ImageURLObject"] = boost::any(*imageURLObject);
    }
    if (numBoxes) {
      res["NumBoxes"] = boost::any(*numBoxes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageURLObject") != m.end() && !m["ImageURLObject"].empty()) {
      imageURLObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageURLObject"]));
    }
    if (m.find("NumBoxes") != m.end() && !m["NumBoxes"].empty()) {
      numBoxes = make_shared<long>(boost::any_cast<long>(m["NumBoxes"]));
    }
  }


  virtual ~IntelligentCompositionAdvanceRequest() = default;
};
class IntelligentCompositionResponseBodyDataElements : public Darabonba::Model {
public:
  shared_ptr<long> minX{};
  shared_ptr<double> score{};
  shared_ptr<long> maxY{};
  shared_ptr<long> maxX{};
  shared_ptr<long> minY{};

  IntelligentCompositionResponseBodyDataElements() {}

  explicit IntelligentCompositionResponseBodyDataElements(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (minX) {
      res["MinX"] = boost::any(*minX);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (maxY) {
      res["MaxY"] = boost::any(*maxY);
    }
    if (maxX) {
      res["MaxX"] = boost::any(*maxX);
    }
    if (minY) {
      res["MinY"] = boost::any(*minY);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MinX") != m.end() && !m["MinX"].empty()) {
      minX = make_shared<long>(boost::any_cast<long>(m["MinX"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("MaxY") != m.end() && !m["MaxY"].empty()) {
      maxY = make_shared<long>(boost::any_cast<long>(m["MaxY"]));
    }
    if (m.find("MaxX") != m.end() && !m["MaxX"].empty()) {
      maxX = make_shared<long>(boost::any_cast<long>(m["MaxX"]));
    }
    if (m.find("MinY") != m.end() && !m["MinY"].empty()) {
      minY = make_shared<long>(boost::any_cast<long>(m["MinY"]));
    }
  }


  virtual ~IntelligentCompositionResponseBodyDataElements() = default;
};
class IntelligentCompositionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<IntelligentCompositionResponseBodyDataElements>> elements{};

  IntelligentCompositionResponseBodyData() {}

  explicit IntelligentCompositionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<IntelligentCompositionResponseBodyDataElements> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Elements"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            IntelligentCompositionResponseBodyDataElements model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        elements = make_shared<vector<IntelligentCompositionResponseBodyDataElements>>(expect1);
      }
    }
  }


  virtual ~IntelligentCompositionResponseBodyData() = default;
};
class IntelligentCompositionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<IntelligentCompositionResponseBodyData> data{};

  IntelligentCompositionResponseBody() {}

  explicit IntelligentCompositionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IntelligentCompositionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<IntelligentCompositionResponseBodyData>(model1);
      }
    }
  }


  virtual ~IntelligentCompositionResponseBody() = default;
};
class IntelligentCompositionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<IntelligentCompositionResponseBody> body{};

  IntelligentCompositionResponse() {}

  explicit IntelligentCompositionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IntelligentCompositionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IntelligentCompositionResponseBody>(model1);
      }
    }
  }


  virtual ~IntelligentCompositionResponse() = default;
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
  ExtendImageStyleResponse extendImageStyleWithOptions(shared_ptr<ExtendImageStyleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExtendImageStyleResponse extendImageStyle(shared_ptr<ExtendImageStyleRequest> request);
  ImageBlindCharacterWatermarkResponse imageBlindCharacterWatermarkWithOptions(shared_ptr<ImageBlindCharacterWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImageBlindCharacterWatermarkResponse imageBlindCharacterWatermark(shared_ptr<ImageBlindCharacterWatermarkRequest> request);
  ImageBlindCharacterWatermarkResponse imageBlindCharacterWatermarkAdvance(shared_ptr<ImageBlindCharacterWatermarkAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveImageWatermarkResponse removeImageWatermarkWithOptions(shared_ptr<RemoveImageWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveImageWatermarkResponse removeImageWatermark(shared_ptr<RemoveImageWatermarkRequest> request);
  RemoveImageWatermarkResponse removeImageWatermarkAdvance(shared_ptr<RemoveImageWatermarkAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateDynamicImageResponse generateDynamicImageWithOptions(shared_ptr<GenerateDynamicImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateDynamicImageResponse generateDynamicImage(shared_ptr<GenerateDynamicImageRequest> request);
  GenerateDynamicImageResponse generateDynamicImageAdvance(shared_ptr<GenerateDynamicImageAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImageBlindPicWatermarkResponse imageBlindPicWatermarkWithOptions(shared_ptr<ImageBlindPicWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImageBlindPicWatermarkResponse imageBlindPicWatermark(shared_ptr<ImageBlindPicWatermarkRequest> request);
  ImageBlindPicWatermarkResponse imageBlindPicWatermarkAdvance(shared_ptr<ImageBlindPicWatermarkAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveImageSubtitlesResponse removeImageSubtitlesWithOptions(shared_ptr<RemoveImageSubtitlesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveImageSubtitlesResponse removeImageSubtitles(shared_ptr<RemoveImageSubtitlesRequest> request);
  RemoveImageSubtitlesResponse removeImageSubtitlesAdvance(shared_ptr<RemoveImageSubtitlesAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecolorHDImageResponse recolorHDImageWithOptions(shared_ptr<RecolorHDImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecolorHDImageResponse recolorHDImage(shared_ptr<RecolorHDImageRequest> request);
  RecolorHDImageResponse recolorHDImageAdvance(shared_ptr<RecolorHDImageAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ColorizeImageResponse colorizeImageWithOptions(shared_ptr<ColorizeImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ColorizeImageResponse colorizeImage(shared_ptr<ColorizeImageRequest> request);
  ColorizeImageResponse colorizeImageAdvance(shared_ptr<ColorizeImageAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecolorImageResponse recolorImageWithOptions(shared_ptr<RecolorImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecolorImageResponse recolorImage(shared_ptr<RecolorImageRequest> request);
  AssessCompositionResponse assessCompositionWithOptions(shared_ptr<AssessCompositionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssessCompositionResponse assessComposition(shared_ptr<AssessCompositionRequest> request);
  AssessCompositionResponse assessCompositionAdvance(shared_ptr<AssessCompositionAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssessSharpnessResponse assessSharpnessWithOptions(shared_ptr<AssessSharpnessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssessSharpnessResponse assessSharpness(shared_ptr<AssessSharpnessRequest> request);
  AssessSharpnessResponse assessSharpnessAdvance(shared_ptr<AssessSharpnessAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ErasePersonResponse erasePersonWithOptions(shared_ptr<ErasePersonRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ErasePersonResponse erasePerson(shared_ptr<ErasePersonRequest> request);
  ErasePersonResponse erasePersonAdvance(shared_ptr<ErasePersonAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResultWithOptions(shared_ptr<GetAsyncJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncJobResultResponse getAsyncJobResult(shared_ptr<GetAsyncJobResultRequest> request);
  ImitatePhotoStyleResponse imitatePhotoStyleWithOptions(shared_ptr<ImitatePhotoStyleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImitatePhotoStyleResponse imitatePhotoStyle(shared_ptr<ImitatePhotoStyleRequest> request);
  ImitatePhotoStyleResponse imitatePhotoStyleAdvance(shared_ptr<ImitatePhotoStyleAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeImageSizeResponse changeImageSizeWithOptions(shared_ptr<ChangeImageSizeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChangeImageSizeResponse changeImageSize(shared_ptr<ChangeImageSizeRequest> request);
  ChangeImageSizeResponse changeImageSizeAdvance(shared_ptr<ChangeImageSizeAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnhanceImageColorResponse enhanceImageColorWithOptions(shared_ptr<EnhanceImageColorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnhanceImageColorResponse enhanceImageColor(shared_ptr<EnhanceImageColorRequest> request);
  EnhanceImageColorResponse enhanceImageColorAdvance(shared_ptr<EnhanceImageColorAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssessExposureResponse assessExposureWithOptions(shared_ptr<AssessExposureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssessExposureResponse assessExposure(shared_ptr<AssessExposureRequest> request);
  AssessExposureResponse assessExposureAdvance(shared_ptr<AssessExposureAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MakeSuperResolutionImageResponse makeSuperResolutionImageWithOptions(shared_ptr<MakeSuperResolutionImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MakeSuperResolutionImageResponse makeSuperResolutionImage(shared_ptr<MakeSuperResolutionImageRequest> request);
  MakeSuperResolutionImageResponse makeSuperResolutionImageAdvance(shared_ptr<MakeSuperResolutionImageAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IntelligentCompositionResponse intelligentCompositionWithOptions(shared_ptr<IntelligentCompositionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IntelligentCompositionResponse intelligentComposition(shared_ptr<IntelligentCompositionRequest> request);
  IntelligentCompositionResponse intelligentCompositionAdvance(shared_ptr<IntelligentCompositionAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Imageenhan20190930

#endif
