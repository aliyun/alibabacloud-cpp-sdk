// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_AIGEN20240111_H_
#define ALIBABACLOUD_AIGEN20240111_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Aigen20240111 {
class GenerateCosplayImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> faceImageUrl{};
  shared_ptr<long> style{};
  shared_ptr<string> templateImageUrl{};

  GenerateCosplayImageRequest() {}

  explicit GenerateCosplayImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceImageUrl) {
      res["FaceImageUrl"] = boost::any(*faceImageUrl);
    }
    if (style) {
      res["Style"] = boost::any(*style);
    }
    if (templateImageUrl) {
      res["TemplateImageUrl"] = boost::any(*templateImageUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceImageUrl") != m.end() && !m["FaceImageUrl"].empty()) {
      faceImageUrl = make_shared<string>(boost::any_cast<string>(m["FaceImageUrl"]));
    }
    if (m.find("Style") != m.end() && !m["Style"].empty()) {
      style = make_shared<long>(boost::any_cast<long>(m["Style"]));
    }
    if (m.find("TemplateImageUrl") != m.end() && !m["TemplateImageUrl"].empty()) {
      templateImageUrl = make_shared<string>(boost::any_cast<string>(m["TemplateImageUrl"]));
    }
  }


  virtual ~GenerateCosplayImageRequest() = default;
};
class GenerateCosplayImageAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> faceImageUrlObject{};
  shared_ptr<long> style{};
  shared_ptr<Darabonba::Stream> templateImageUrlObject{};

  GenerateCosplayImageAdvanceRequest() {}

  explicit GenerateCosplayImageAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceImageUrlObject) {
      res["FaceImageUrl"] = boost::any(*faceImageUrlObject);
    }
    if (style) {
      res["Style"] = boost::any(*style);
    }
    if (templateImageUrlObject) {
      res["TemplateImageUrl"] = boost::any(*templateImageUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceImageUrl") != m.end() && !m["FaceImageUrl"].empty()) {
      faceImageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["FaceImageUrl"]));
    }
    if (m.find("Style") != m.end() && !m["Style"].empty()) {
      style = make_shared<long>(boost::any_cast<long>(m["Style"]));
    }
    if (m.find("TemplateImageUrl") != m.end() && !m["TemplateImageUrl"].empty()) {
      templateImageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["TemplateImageUrl"]));
    }
  }


  virtual ~GenerateCosplayImageAdvanceRequest() = default;
};
class GenerateCosplayImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> resultUrl{};

  GenerateCosplayImageResponseBodyData() {}

  explicit GenerateCosplayImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultUrl) {
      res["ResultUrl"] = boost::any(*resultUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultUrl") != m.end() && !m["ResultUrl"].empty()) {
      resultUrl = make_shared<string>(boost::any_cast<string>(m["ResultUrl"]));
    }
  }


  virtual ~GenerateCosplayImageResponseBodyData() = default;
};
class GenerateCosplayImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<GenerateCosplayImageResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GenerateCosplayImageResponseBody() {}

  explicit GenerateCosplayImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateCosplayImageResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GenerateCosplayImageResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateCosplayImageResponseBody() = default;
};
class GenerateCosplayImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateCosplayImageResponseBody> body{};

  GenerateCosplayImageResponse() {}

  explicit GenerateCosplayImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateCosplayImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateCosplayImageResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateCosplayImageResponse() = default;
};
class GenerateTextDeformationRequest : public Darabonba::Model {
public:
  shared_ptr<bool> async{};
  shared_ptr<string> fontName{};
  shared_ptr<long> n{};
  shared_ptr<string> outputImageRatio{};
  shared_ptr<string> prompt{};
  shared_ptr<string> textContent{};
  shared_ptr<string> ttfUrl{};

  GenerateTextDeformationRequest() {}

  explicit GenerateTextDeformationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (async) {
      res["Async"] = boost::any(*async);
    }
    if (fontName) {
      res["FontName"] = boost::any(*fontName);
    }
    if (n) {
      res["N"] = boost::any(*n);
    }
    if (outputImageRatio) {
      res["OutputImageRatio"] = boost::any(*outputImageRatio);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (textContent) {
      res["TextContent"] = boost::any(*textContent);
    }
    if (ttfUrl) {
      res["TtfUrl"] = boost::any(*ttfUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Async") != m.end() && !m["Async"].empty()) {
      async = make_shared<bool>(boost::any_cast<bool>(m["Async"]));
    }
    if (m.find("FontName") != m.end() && !m["FontName"].empty()) {
      fontName = make_shared<string>(boost::any_cast<string>(m["FontName"]));
    }
    if (m.find("N") != m.end() && !m["N"].empty()) {
      n = make_shared<long>(boost::any_cast<long>(m["N"]));
    }
    if (m.find("OutputImageRatio") != m.end() && !m["OutputImageRatio"].empty()) {
      outputImageRatio = make_shared<string>(boost::any_cast<string>(m["OutputImageRatio"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("TextContent") != m.end() && !m["TextContent"].empty()) {
      textContent = make_shared<string>(boost::any_cast<string>(m["TextContent"]));
    }
    if (m.find("TtfUrl") != m.end() && !m["TtfUrl"].empty()) {
      ttfUrl = make_shared<string>(boost::any_cast<string>(m["TtfUrl"]));
    }
  }


  virtual ~GenerateTextDeformationRequest() = default;
};
class GenerateTextDeformationAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> async{};
  shared_ptr<string> fontName{};
  shared_ptr<long> n{};
  shared_ptr<string> outputImageRatio{};
  shared_ptr<string> prompt{};
  shared_ptr<string> textContent{};
  shared_ptr<Darabonba::Stream> ttfUrlObject{};

  GenerateTextDeformationAdvanceRequest() {}

  explicit GenerateTextDeformationAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (async) {
      res["Async"] = boost::any(*async);
    }
    if (fontName) {
      res["FontName"] = boost::any(*fontName);
    }
    if (n) {
      res["N"] = boost::any(*n);
    }
    if (outputImageRatio) {
      res["OutputImageRatio"] = boost::any(*outputImageRatio);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (textContent) {
      res["TextContent"] = boost::any(*textContent);
    }
    if (ttfUrlObject) {
      res["TtfUrl"] = boost::any(*ttfUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Async") != m.end() && !m["Async"].empty()) {
      async = make_shared<bool>(boost::any_cast<bool>(m["Async"]));
    }
    if (m.find("FontName") != m.end() && !m["FontName"].empty()) {
      fontName = make_shared<string>(boost::any_cast<string>(m["FontName"]));
    }
    if (m.find("N") != m.end() && !m["N"].empty()) {
      n = make_shared<long>(boost::any_cast<long>(m["N"]));
    }
    if (m.find("OutputImageRatio") != m.end() && !m["OutputImageRatio"].empty()) {
      outputImageRatio = make_shared<string>(boost::any_cast<string>(m["OutputImageRatio"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("TextContent") != m.end() && !m["TextContent"].empty()) {
      textContent = make_shared<string>(boost::any_cast<string>(m["TextContent"]));
    }
    if (m.find("TtfUrl") != m.end() && !m["TtfUrl"].empty()) {
      ttfUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["TtfUrl"]));
    }
  }


  virtual ~GenerateTextDeformationAdvanceRequest() = default;
};
class GenerateTextDeformationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> resultUrl{};

  GenerateTextDeformationResponseBodyData() {}

  explicit GenerateTextDeformationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultUrl) {
      res["ResultUrl"] = boost::any(*resultUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultUrl") != m.end() && !m["ResultUrl"].empty()) {
      resultUrl = make_shared<string>(boost::any_cast<string>(m["ResultUrl"]));
    }
  }


  virtual ~GenerateTextDeformationResponseBodyData() = default;
};
class GenerateTextDeformationResponseBody : public Darabonba::Model {
public:
  shared_ptr<GenerateTextDeformationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GenerateTextDeformationResponseBody() {}

  explicit GenerateTextDeformationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateTextDeformationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GenerateTextDeformationResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateTextDeformationResponseBody() = default;
};
class GenerateTextDeformationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateTextDeformationResponseBody> body{};

  GenerateTextDeformationResponse() {}

  explicit GenerateTextDeformationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateTextDeformationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateTextDeformationResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateTextDeformationResponse() = default;
};
class GenerateTextTextureRequest : public Darabonba::Model {
public:
  shared_ptr<bool> alphaChannel{};
  shared_ptr<string> fontName{};
  shared_ptr<long> imageShortSize{};
  shared_ptr<string> imageUrl{};
  shared_ptr<long> n{};
  shared_ptr<string> outputImageRatio{};
  shared_ptr<string> prompt{};
  shared_ptr<string> textContent{};
  shared_ptr<string> textureStyle{};
  shared_ptr<string> ttfUrl{};

  GenerateTextTextureRequest() {}

  explicit GenerateTextTextureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alphaChannel) {
      res["AlphaChannel"] = boost::any(*alphaChannel);
    }
    if (fontName) {
      res["FontName"] = boost::any(*fontName);
    }
    if (imageShortSize) {
      res["ImageShortSize"] = boost::any(*imageShortSize);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (n) {
      res["N"] = boost::any(*n);
    }
    if (outputImageRatio) {
      res["OutputImageRatio"] = boost::any(*outputImageRatio);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (textContent) {
      res["TextContent"] = boost::any(*textContent);
    }
    if (textureStyle) {
      res["TextureStyle"] = boost::any(*textureStyle);
    }
    if (ttfUrl) {
      res["TtfUrl"] = boost::any(*ttfUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlphaChannel") != m.end() && !m["AlphaChannel"].empty()) {
      alphaChannel = make_shared<bool>(boost::any_cast<bool>(m["AlphaChannel"]));
    }
    if (m.find("FontName") != m.end() && !m["FontName"].empty()) {
      fontName = make_shared<string>(boost::any_cast<string>(m["FontName"]));
    }
    if (m.find("ImageShortSize") != m.end() && !m["ImageShortSize"].empty()) {
      imageShortSize = make_shared<long>(boost::any_cast<long>(m["ImageShortSize"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("N") != m.end() && !m["N"].empty()) {
      n = make_shared<long>(boost::any_cast<long>(m["N"]));
    }
    if (m.find("OutputImageRatio") != m.end() && !m["OutputImageRatio"].empty()) {
      outputImageRatio = make_shared<string>(boost::any_cast<string>(m["OutputImageRatio"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("TextContent") != m.end() && !m["TextContent"].empty()) {
      textContent = make_shared<string>(boost::any_cast<string>(m["TextContent"]));
    }
    if (m.find("TextureStyle") != m.end() && !m["TextureStyle"].empty()) {
      textureStyle = make_shared<string>(boost::any_cast<string>(m["TextureStyle"]));
    }
    if (m.find("TtfUrl") != m.end() && !m["TtfUrl"].empty()) {
      ttfUrl = make_shared<string>(boost::any_cast<string>(m["TtfUrl"]));
    }
  }


  virtual ~GenerateTextTextureRequest() = default;
};
class GenerateTextTextureAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<bool> alphaChannel{};
  shared_ptr<string> fontName{};
  shared_ptr<long> imageShortSize{};
  shared_ptr<Darabonba::Stream> imageUrlObject{};
  shared_ptr<long> n{};
  shared_ptr<string> outputImageRatio{};
  shared_ptr<string> prompt{};
  shared_ptr<string> textContent{};
  shared_ptr<string> textureStyle{};
  shared_ptr<Darabonba::Stream> ttfUrlObject{};

  GenerateTextTextureAdvanceRequest() {}

  explicit GenerateTextTextureAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alphaChannel) {
      res["AlphaChannel"] = boost::any(*alphaChannel);
    }
    if (fontName) {
      res["FontName"] = boost::any(*fontName);
    }
    if (imageShortSize) {
      res["ImageShortSize"] = boost::any(*imageShortSize);
    }
    if (imageUrlObject) {
      res["ImageUrl"] = boost::any(*imageUrlObject);
    }
    if (n) {
      res["N"] = boost::any(*n);
    }
    if (outputImageRatio) {
      res["OutputImageRatio"] = boost::any(*outputImageRatio);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (textContent) {
      res["TextContent"] = boost::any(*textContent);
    }
    if (textureStyle) {
      res["TextureStyle"] = boost::any(*textureStyle);
    }
    if (ttfUrlObject) {
      res["TtfUrl"] = boost::any(*ttfUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlphaChannel") != m.end() && !m["AlphaChannel"].empty()) {
      alphaChannel = make_shared<bool>(boost::any_cast<bool>(m["AlphaChannel"]));
    }
    if (m.find("FontName") != m.end() && !m["FontName"].empty()) {
      fontName = make_shared<string>(boost::any_cast<string>(m["FontName"]));
    }
    if (m.find("ImageShortSize") != m.end() && !m["ImageShortSize"].empty()) {
      imageShortSize = make_shared<long>(boost::any_cast<long>(m["ImageShortSize"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageUrl"]));
    }
    if (m.find("N") != m.end() && !m["N"].empty()) {
      n = make_shared<long>(boost::any_cast<long>(m["N"]));
    }
    if (m.find("OutputImageRatio") != m.end() && !m["OutputImageRatio"].empty()) {
      outputImageRatio = make_shared<string>(boost::any_cast<string>(m["OutputImageRatio"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("TextContent") != m.end() && !m["TextContent"].empty()) {
      textContent = make_shared<string>(boost::any_cast<string>(m["TextContent"]));
    }
    if (m.find("TextureStyle") != m.end() && !m["TextureStyle"].empty()) {
      textureStyle = make_shared<string>(boost::any_cast<string>(m["TextureStyle"]));
    }
    if (m.find("TtfUrl") != m.end() && !m["TtfUrl"].empty()) {
      ttfUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["TtfUrl"]));
    }
  }


  virtual ~GenerateTextTextureAdvanceRequest() = default;
};
class GenerateTextTextureResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> resultUrl{};

  GenerateTextTextureResponseBodyData() {}

  explicit GenerateTextTextureResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultUrl) {
      res["ResultUrl"] = boost::any(*resultUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultUrl") != m.end() && !m["ResultUrl"].empty()) {
      resultUrl = make_shared<string>(boost::any_cast<string>(m["ResultUrl"]));
    }
  }


  virtual ~GenerateTextTextureResponseBodyData() = default;
};
class GenerateTextTextureResponseBody : public Darabonba::Model {
public:
  shared_ptr<GenerateTextTextureResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GenerateTextTextureResponseBody() {}

  explicit GenerateTextTextureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateTextTextureResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GenerateTextTextureResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenerateTextTextureResponseBody() = default;
};
class GenerateTextTextureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateTextTextureResponseBody> body{};

  GenerateTextTextureResponse() {}

  explicit GenerateTextTextureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateTextTextureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateTextTextureResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateTextTextureResponse() = default;
};
class InteractiveFullSegmentationRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUrl{};
  shared_ptr<string> returnFormat{};

  InteractiveFullSegmentationRequest() {}

  explicit InteractiveFullSegmentationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (returnFormat) {
      res["ReturnFormat"] = boost::any(*returnFormat);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("ReturnFormat") != m.end() && !m["ReturnFormat"].empty()) {
      returnFormat = make_shared<string>(boost::any_cast<string>(m["ReturnFormat"]));
    }
  }


  virtual ~InteractiveFullSegmentationRequest() = default;
};
class InteractiveFullSegmentationAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<Darabonba::Stream> imageUrlObject{};
  shared_ptr<string> returnFormat{};

  InteractiveFullSegmentationAdvanceRequest() {}

  explicit InteractiveFullSegmentationAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrlObject) {
      res["ImageUrl"] = boost::any(*imageUrlObject);
    }
    if (returnFormat) {
      res["ReturnFormat"] = boost::any(*returnFormat);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageUrl"]));
    }
    if (m.find("ReturnFormat") != m.end() && !m["ReturnFormat"].empty()) {
      returnFormat = make_shared<string>(boost::any_cast<string>(m["ReturnFormat"]));
    }
  }


  virtual ~InteractiveFullSegmentationAdvanceRequest() = default;
};
class InteractiveFullSegmentationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> resultUrl{};

  InteractiveFullSegmentationResponseBodyData() {}

  explicit InteractiveFullSegmentationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultUrl) {
      res["ResultUrl"] = boost::any(*resultUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultUrl") != m.end() && !m["ResultUrl"].empty()) {
      resultUrl = make_shared<string>(boost::any_cast<string>(m["ResultUrl"]));
    }
  }


  virtual ~InteractiveFullSegmentationResponseBodyData() = default;
};
class InteractiveFullSegmentationResponseBody : public Darabonba::Model {
public:
  shared_ptr<InteractiveFullSegmentationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  InteractiveFullSegmentationResponseBody() {}

  explicit InteractiveFullSegmentationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InteractiveFullSegmentationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<InteractiveFullSegmentationResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~InteractiveFullSegmentationResponseBody() = default;
};
class InteractiveFullSegmentationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InteractiveFullSegmentationResponseBody> body{};

  InteractiveFullSegmentationResponse() {}

  explicit InteractiveFullSegmentationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InteractiveFullSegmentationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InteractiveFullSegmentationResponseBody>(model1);
      }
    }
  }


  virtual ~InteractiveFullSegmentationResponse() = default;
};
class InteractiveScribbleSegmentationRequest : public Darabonba::Model {
public:
  shared_ptr<string> edgeFeathering{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> integratedMaskUrl{};
  shared_ptr<string> maskImageUrl{};
  shared_ptr<string> negScribbleImageUrl{};
  shared_ptr<string> posScribbleImageUrl{};
  shared_ptr<string> postprocessOption{};
  shared_ptr<string> returnForm{};
  shared_ptr<string> returnFormat{};

  InteractiveScribbleSegmentationRequest() {}

  explicit InteractiveScribbleSegmentationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (edgeFeathering) {
      res["EdgeFeathering"] = boost::any(*edgeFeathering);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (integratedMaskUrl) {
      res["IntegratedMaskUrl"] = boost::any(*integratedMaskUrl);
    }
    if (maskImageUrl) {
      res["MaskImageUrl"] = boost::any(*maskImageUrl);
    }
    if (negScribbleImageUrl) {
      res["NegScribbleImageUrl"] = boost::any(*negScribbleImageUrl);
    }
    if (posScribbleImageUrl) {
      res["PosScribbleImageUrl"] = boost::any(*posScribbleImageUrl);
    }
    if (postprocessOption) {
      res["PostprocessOption"] = boost::any(*postprocessOption);
    }
    if (returnForm) {
      res["ReturnForm"] = boost::any(*returnForm);
    }
    if (returnFormat) {
      res["ReturnFormat"] = boost::any(*returnFormat);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EdgeFeathering") != m.end() && !m["EdgeFeathering"].empty()) {
      edgeFeathering = make_shared<string>(boost::any_cast<string>(m["EdgeFeathering"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("IntegratedMaskUrl") != m.end() && !m["IntegratedMaskUrl"].empty()) {
      integratedMaskUrl = make_shared<string>(boost::any_cast<string>(m["IntegratedMaskUrl"]));
    }
    if (m.find("MaskImageUrl") != m.end() && !m["MaskImageUrl"].empty()) {
      maskImageUrl = make_shared<string>(boost::any_cast<string>(m["MaskImageUrl"]));
    }
    if (m.find("NegScribbleImageUrl") != m.end() && !m["NegScribbleImageUrl"].empty()) {
      negScribbleImageUrl = make_shared<string>(boost::any_cast<string>(m["NegScribbleImageUrl"]));
    }
    if (m.find("PosScribbleImageUrl") != m.end() && !m["PosScribbleImageUrl"].empty()) {
      posScribbleImageUrl = make_shared<string>(boost::any_cast<string>(m["PosScribbleImageUrl"]));
    }
    if (m.find("PostprocessOption") != m.end() && !m["PostprocessOption"].empty()) {
      postprocessOption = make_shared<string>(boost::any_cast<string>(m["PostprocessOption"]));
    }
    if (m.find("ReturnForm") != m.end() && !m["ReturnForm"].empty()) {
      returnForm = make_shared<string>(boost::any_cast<string>(m["ReturnForm"]));
    }
    if (m.find("ReturnFormat") != m.end() && !m["ReturnFormat"].empty()) {
      returnFormat = make_shared<string>(boost::any_cast<string>(m["ReturnFormat"]));
    }
  }


  virtual ~InteractiveScribbleSegmentationRequest() = default;
};
class InteractiveScribbleSegmentationAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> edgeFeathering{};
  shared_ptr<Darabonba::Stream> imageUrlObject{};
  shared_ptr<Darabonba::Stream> integratedMaskUrlObject{};
  shared_ptr<Darabonba::Stream> maskImageUrlObject{};
  shared_ptr<Darabonba::Stream> negScribbleImageUrlObject{};
  shared_ptr<Darabonba::Stream> posScribbleImageUrlObject{};
  shared_ptr<string> postprocessOption{};
  shared_ptr<string> returnForm{};
  shared_ptr<string> returnFormat{};

  InteractiveScribbleSegmentationAdvanceRequest() {}

  explicit InteractiveScribbleSegmentationAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (edgeFeathering) {
      res["EdgeFeathering"] = boost::any(*edgeFeathering);
    }
    if (imageUrlObject) {
      res["ImageUrl"] = boost::any(*imageUrlObject);
    }
    if (integratedMaskUrlObject) {
      res["IntegratedMaskUrl"] = boost::any(*integratedMaskUrlObject);
    }
    if (maskImageUrlObject) {
      res["MaskImageUrl"] = boost::any(*maskImageUrlObject);
    }
    if (negScribbleImageUrlObject) {
      res["NegScribbleImageUrl"] = boost::any(*negScribbleImageUrlObject);
    }
    if (posScribbleImageUrlObject) {
      res["PosScribbleImageUrl"] = boost::any(*posScribbleImageUrlObject);
    }
    if (postprocessOption) {
      res["PostprocessOption"] = boost::any(*postprocessOption);
    }
    if (returnForm) {
      res["ReturnForm"] = boost::any(*returnForm);
    }
    if (returnFormat) {
      res["ReturnFormat"] = boost::any(*returnFormat);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EdgeFeathering") != m.end() && !m["EdgeFeathering"].empty()) {
      edgeFeathering = make_shared<string>(boost::any_cast<string>(m["EdgeFeathering"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["ImageUrl"]));
    }
    if (m.find("IntegratedMaskUrl") != m.end() && !m["IntegratedMaskUrl"].empty()) {
      integratedMaskUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["IntegratedMaskUrl"]));
    }
    if (m.find("MaskImageUrl") != m.end() && !m["MaskImageUrl"].empty()) {
      maskImageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["MaskImageUrl"]));
    }
    if (m.find("NegScribbleImageUrl") != m.end() && !m["NegScribbleImageUrl"].empty()) {
      negScribbleImageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["NegScribbleImageUrl"]));
    }
    if (m.find("PosScribbleImageUrl") != m.end() && !m["PosScribbleImageUrl"].empty()) {
      posScribbleImageUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["PosScribbleImageUrl"]));
    }
    if (m.find("PostprocessOption") != m.end() && !m["PostprocessOption"].empty()) {
      postprocessOption = make_shared<string>(boost::any_cast<string>(m["PostprocessOption"]));
    }
    if (m.find("ReturnForm") != m.end() && !m["ReturnForm"].empty()) {
      returnForm = make_shared<string>(boost::any_cast<string>(m["ReturnForm"]));
    }
    if (m.find("ReturnFormat") != m.end() && !m["ReturnFormat"].empty()) {
      returnFormat = make_shared<string>(boost::any_cast<string>(m["ReturnFormat"]));
    }
  }


  virtual ~InteractiveScribbleSegmentationAdvanceRequest() = default;
};
class InteractiveScribbleSegmentationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> resultUrl{};

  InteractiveScribbleSegmentationResponseBodyData() {}

  explicit InteractiveScribbleSegmentationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultUrl) {
      res["ResultUrl"] = boost::any(*resultUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultUrl") != m.end() && !m["ResultUrl"].empty()) {
      resultUrl = make_shared<string>(boost::any_cast<string>(m["ResultUrl"]));
    }
  }


  virtual ~InteractiveScribbleSegmentationResponseBodyData() = default;
};
class InteractiveScribbleSegmentationResponseBody : public Darabonba::Model {
public:
  shared_ptr<InteractiveScribbleSegmentationResponseBodyData> data{};
  shared_ptr<string> requestId{};

  InteractiveScribbleSegmentationResponseBody() {}

  explicit InteractiveScribbleSegmentationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InteractiveScribbleSegmentationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<InteractiveScribbleSegmentationResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~InteractiveScribbleSegmentationResponseBody() = default;
};
class InteractiveScribbleSegmentationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InteractiveScribbleSegmentationResponseBody> body{};

  InteractiveScribbleSegmentationResponse() {}

  explicit InteractiveScribbleSegmentationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InteractiveScribbleSegmentationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InteractiveScribbleSegmentationResponseBody>(model1);
      }
    }
  }


  virtual ~InteractiveScribbleSegmentationResponse() = default;
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
  GenerateCosplayImageResponse generateCosplayImageWithOptions(shared_ptr<GenerateCosplayImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateCosplayImageResponse generateCosplayImage(shared_ptr<GenerateCosplayImageRequest> request);
  GenerateCosplayImageResponse generateCosplayImageAdvance(shared_ptr<GenerateCosplayImageAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateTextDeformationResponse generateTextDeformationWithOptions(shared_ptr<GenerateTextDeformationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateTextDeformationResponse generateTextDeformation(shared_ptr<GenerateTextDeformationRequest> request);
  GenerateTextDeformationResponse generateTextDeformationAdvance(shared_ptr<GenerateTextDeformationAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateTextTextureResponse generateTextTextureWithOptions(shared_ptr<GenerateTextTextureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateTextTextureResponse generateTextTexture(shared_ptr<GenerateTextTextureRequest> request);
  GenerateTextTextureResponse generateTextTextureAdvance(shared_ptr<GenerateTextTextureAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InteractiveFullSegmentationResponse interactiveFullSegmentationWithOptions(shared_ptr<InteractiveFullSegmentationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InteractiveFullSegmentationResponse interactiveFullSegmentation(shared_ptr<InteractiveFullSegmentationRequest> request);
  InteractiveFullSegmentationResponse interactiveFullSegmentationAdvance(shared_ptr<InteractiveFullSegmentationAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InteractiveScribbleSegmentationResponse interactiveScribbleSegmentationWithOptions(shared_ptr<InteractiveScribbleSegmentationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InteractiveScribbleSegmentationResponse interactiveScribbleSegmentation(shared_ptr<InteractiveScribbleSegmentationRequest> request);
  InteractiveScribbleSegmentationResponse interactiveScribbleSegmentationAdvance(shared_ptr<InteractiveScribbleSegmentationAdvanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Aigen20240111

#endif
