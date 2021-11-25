// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_IMM20170906_H_
#define ALIBABACLOUD_IMM20170906_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Imm20170906 {
class CompareImageFacesRequest : public Darabonba::Model {
public:
  shared_ptr<string> faceIdA{};
  shared_ptr<string> faceIdB{};
  shared_ptr<string> imageUriA{};
  shared_ptr<string> imageUriB{};
  shared_ptr<string> project{};
  shared_ptr<string> setId{};

  CompareImageFacesRequest() {}

  explicit CompareImageFacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceIdA) {
      res["FaceIdA"] = boost::any(*faceIdA);
    }
    if (faceIdB) {
      res["FaceIdB"] = boost::any(*faceIdB);
    }
    if (imageUriA) {
      res["ImageUriA"] = boost::any(*imageUriA);
    }
    if (imageUriB) {
      res["ImageUriB"] = boost::any(*imageUriB);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceIdA") != m.end() && !m["FaceIdA"].empty()) {
      faceIdA = make_shared<string>(boost::any_cast<string>(m["FaceIdA"]));
    }
    if (m.find("FaceIdB") != m.end() && !m["FaceIdB"].empty()) {
      faceIdB = make_shared<string>(boost::any_cast<string>(m["FaceIdB"]));
    }
    if (m.find("ImageUriA") != m.end() && !m["ImageUriA"].empty()) {
      imageUriA = make_shared<string>(boost::any_cast<string>(m["ImageUriA"]));
    }
    if (m.find("ImageUriB") != m.end() && !m["ImageUriB"].empty()) {
      imageUriB = make_shared<string>(boost::any_cast<string>(m["ImageUriB"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
  }


  virtual ~CompareImageFacesRequest() = default;
};
class CompareImageFacesResponseBodyFaceAFaceAttributesFaceBoundary : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  CompareImageFacesResponseBodyFaceAFaceAttributesFaceBoundary() {}

  explicit CompareImageFacesResponseBodyFaceAFaceAttributesFaceBoundary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CompareImageFacesResponseBodyFaceAFaceAttributesFaceBoundary() = default;
};
class CompareImageFacesResponseBodyFaceAFaceAttributes : public Darabonba::Model {
public:
  shared_ptr<CompareImageFacesResponseBodyFaceAFaceAttributesFaceBoundary> faceBoundary{};

  CompareImageFacesResponseBodyFaceAFaceAttributes() {}

  explicit CompareImageFacesResponseBodyFaceAFaceAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceBoundary) {
      res["FaceBoundary"] = faceBoundary ? boost::any(faceBoundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceBoundary") != m.end() && !m["FaceBoundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceBoundary"].type()) {
        CompareImageFacesResponseBodyFaceAFaceAttributesFaceBoundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceBoundary"]));
        faceBoundary = make_shared<CompareImageFacesResponseBodyFaceAFaceAttributesFaceBoundary>(model1);
      }
    }
  }


  virtual ~CompareImageFacesResponseBodyFaceAFaceAttributes() = default;
};
class CompareImageFacesResponseBodyFaceA : public Darabonba::Model {
public:
  shared_ptr<CompareImageFacesResponseBodyFaceAFaceAttributes> faceAttributes{};
  shared_ptr<string> faceId{};

  CompareImageFacesResponseBodyFaceA() {}

  explicit CompareImageFacesResponseBodyFaceA(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceAttributes) {
      res["FaceAttributes"] = faceAttributes ? boost::any(faceAttributes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceId) {
      res["FaceId"] = boost::any(*faceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceAttributes") != m.end() && !m["FaceAttributes"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceAttributes"].type()) {
        CompareImageFacesResponseBodyFaceAFaceAttributes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceAttributes"]));
        faceAttributes = make_shared<CompareImageFacesResponseBodyFaceAFaceAttributes>(model1);
      }
    }
    if (m.find("FaceId") != m.end() && !m["FaceId"].empty()) {
      faceId = make_shared<string>(boost::any_cast<string>(m["FaceId"]));
    }
  }


  virtual ~CompareImageFacesResponseBodyFaceA() = default;
};
class CompareImageFacesResponseBodyFaceBFaceAttributesFaceBoundary : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  CompareImageFacesResponseBodyFaceBFaceAttributesFaceBoundary() {}

  explicit CompareImageFacesResponseBodyFaceBFaceAttributesFaceBoundary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CompareImageFacesResponseBodyFaceBFaceAttributesFaceBoundary() = default;
};
class CompareImageFacesResponseBodyFaceBFaceAttributes : public Darabonba::Model {
public:
  shared_ptr<CompareImageFacesResponseBodyFaceBFaceAttributesFaceBoundary> faceBoundary{};

  CompareImageFacesResponseBodyFaceBFaceAttributes() {}

  explicit CompareImageFacesResponseBodyFaceBFaceAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceBoundary) {
      res["FaceBoundary"] = faceBoundary ? boost::any(faceBoundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceBoundary") != m.end() && !m["FaceBoundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceBoundary"].type()) {
        CompareImageFacesResponseBodyFaceBFaceAttributesFaceBoundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceBoundary"]));
        faceBoundary = make_shared<CompareImageFacesResponseBodyFaceBFaceAttributesFaceBoundary>(model1);
      }
    }
  }


  virtual ~CompareImageFacesResponseBodyFaceBFaceAttributes() = default;
};
class CompareImageFacesResponseBodyFaceB : public Darabonba::Model {
public:
  shared_ptr<CompareImageFacesResponseBodyFaceBFaceAttributes> faceAttributes{};
  shared_ptr<string> faceId{};

  CompareImageFacesResponseBodyFaceB() {}

  explicit CompareImageFacesResponseBodyFaceB(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceAttributes) {
      res["FaceAttributes"] = faceAttributes ? boost::any(faceAttributes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceId) {
      res["FaceId"] = boost::any(*faceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceAttributes") != m.end() && !m["FaceAttributes"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceAttributes"].type()) {
        CompareImageFacesResponseBodyFaceBFaceAttributes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceAttributes"]));
        faceAttributes = make_shared<CompareImageFacesResponseBodyFaceBFaceAttributes>(model1);
      }
    }
    if (m.find("FaceId") != m.end() && !m["FaceId"].empty()) {
      faceId = make_shared<string>(boost::any_cast<string>(m["FaceId"]));
    }
  }


  virtual ~CompareImageFacesResponseBodyFaceB() = default;
};
class CompareImageFacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<CompareImageFacesResponseBodyFaceA> faceA{};
  shared_ptr<CompareImageFacesResponseBodyFaceB> faceB{};
  shared_ptr<string> requestId{};
  shared_ptr<string> setId{};
  shared_ptr<double> similarity{};

  CompareImageFacesResponseBody() {}

  explicit CompareImageFacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceA) {
      res["FaceA"] = faceA ? boost::any(faceA->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceB) {
      res["FaceB"] = faceB ? boost::any(faceB->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (similarity) {
      res["Similarity"] = boost::any(*similarity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceA") != m.end() && !m["FaceA"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceA"].type()) {
        CompareImageFacesResponseBodyFaceA model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceA"]));
        faceA = make_shared<CompareImageFacesResponseBodyFaceA>(model1);
      }
    }
    if (m.find("FaceB") != m.end() && !m["FaceB"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceB"].type()) {
        CompareImageFacesResponseBodyFaceB model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceB"]));
        faceB = make_shared<CompareImageFacesResponseBodyFaceB>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("Similarity") != m.end() && !m["Similarity"].empty()) {
      similarity = make_shared<double>(boost::any_cast<double>(m["Similarity"]));
    }
  }


  virtual ~CompareImageFacesResponseBody() = default;
};
class CompareImageFacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CompareImageFacesResponseBody> body{};

  CompareImageFacesResponse() {}

  explicit CompareImageFacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CompareImageFacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CompareImageFacesResponseBody>(model1);
      }
    }
  }


  virtual ~CompareImageFacesResponse() = default;
};
class ConvertOfficeFormatRequest : public Darabonba::Model {
public:
  shared_ptr<long> endPage{};
  shared_ptr<bool> fitToPagesTall{};
  shared_ptr<bool> fitToPagesWide{};
  shared_ptr<bool> hidecomments{};
  shared_ptr<long> maxSheetCol{};
  shared_ptr<long> maxSheetCount{};
  shared_ptr<long> maxSheetRow{};
  shared_ptr<string> modelId{};
  shared_ptr<string> password{};
  shared_ptr<bool> pdfVector{};
  shared_ptr<string> project{};
  shared_ptr<bool> sheetOnePage{};
  shared_ptr<string> srcType{};
  shared_ptr<string> srcUri{};
  shared_ptr<long> startPage{};
  shared_ptr<string> tgtFilePages{};
  shared_ptr<string> tgtFilePrefix{};
  shared_ptr<string> tgtFileSuffix{};
  shared_ptr<string> tgtType{};
  shared_ptr<string> tgtUri{};

  ConvertOfficeFormatRequest() {}

  explicit ConvertOfficeFormatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endPage) {
      res["EndPage"] = boost::any(*endPage);
    }
    if (fitToPagesTall) {
      res["FitToPagesTall"] = boost::any(*fitToPagesTall);
    }
    if (fitToPagesWide) {
      res["FitToPagesWide"] = boost::any(*fitToPagesWide);
    }
    if (hidecomments) {
      res["Hidecomments"] = boost::any(*hidecomments);
    }
    if (maxSheetCol) {
      res["MaxSheetCol"] = boost::any(*maxSheetCol);
    }
    if (maxSheetCount) {
      res["MaxSheetCount"] = boost::any(*maxSheetCount);
    }
    if (maxSheetRow) {
      res["MaxSheetRow"] = boost::any(*maxSheetRow);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (pdfVector) {
      res["PdfVector"] = boost::any(*pdfVector);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (sheetOnePage) {
      res["SheetOnePage"] = boost::any(*sheetOnePage);
    }
    if (srcType) {
      res["SrcType"] = boost::any(*srcType);
    }
    if (srcUri) {
      res["SrcUri"] = boost::any(*srcUri);
    }
    if (startPage) {
      res["StartPage"] = boost::any(*startPage);
    }
    if (tgtFilePages) {
      res["TgtFilePages"] = boost::any(*tgtFilePages);
    }
    if (tgtFilePrefix) {
      res["TgtFilePrefix"] = boost::any(*tgtFilePrefix);
    }
    if (tgtFileSuffix) {
      res["TgtFileSuffix"] = boost::any(*tgtFileSuffix);
    }
    if (tgtType) {
      res["TgtType"] = boost::any(*tgtType);
    }
    if (tgtUri) {
      res["TgtUri"] = boost::any(*tgtUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndPage") != m.end() && !m["EndPage"].empty()) {
      endPage = make_shared<long>(boost::any_cast<long>(m["EndPage"]));
    }
    if (m.find("FitToPagesTall") != m.end() && !m["FitToPagesTall"].empty()) {
      fitToPagesTall = make_shared<bool>(boost::any_cast<bool>(m["FitToPagesTall"]));
    }
    if (m.find("FitToPagesWide") != m.end() && !m["FitToPagesWide"].empty()) {
      fitToPagesWide = make_shared<bool>(boost::any_cast<bool>(m["FitToPagesWide"]));
    }
    if (m.find("Hidecomments") != m.end() && !m["Hidecomments"].empty()) {
      hidecomments = make_shared<bool>(boost::any_cast<bool>(m["Hidecomments"]));
    }
    if (m.find("MaxSheetCol") != m.end() && !m["MaxSheetCol"].empty()) {
      maxSheetCol = make_shared<long>(boost::any_cast<long>(m["MaxSheetCol"]));
    }
    if (m.find("MaxSheetCount") != m.end() && !m["MaxSheetCount"].empty()) {
      maxSheetCount = make_shared<long>(boost::any_cast<long>(m["MaxSheetCount"]));
    }
    if (m.find("MaxSheetRow") != m.end() && !m["MaxSheetRow"].empty()) {
      maxSheetRow = make_shared<long>(boost::any_cast<long>(m["MaxSheetRow"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("PdfVector") != m.end() && !m["PdfVector"].empty()) {
      pdfVector = make_shared<bool>(boost::any_cast<bool>(m["PdfVector"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("SheetOnePage") != m.end() && !m["SheetOnePage"].empty()) {
      sheetOnePage = make_shared<bool>(boost::any_cast<bool>(m["SheetOnePage"]));
    }
    if (m.find("SrcType") != m.end() && !m["SrcType"].empty()) {
      srcType = make_shared<string>(boost::any_cast<string>(m["SrcType"]));
    }
    if (m.find("SrcUri") != m.end() && !m["SrcUri"].empty()) {
      srcUri = make_shared<string>(boost::any_cast<string>(m["SrcUri"]));
    }
    if (m.find("StartPage") != m.end() && !m["StartPage"].empty()) {
      startPage = make_shared<long>(boost::any_cast<long>(m["StartPage"]));
    }
    if (m.find("TgtFilePages") != m.end() && !m["TgtFilePages"].empty()) {
      tgtFilePages = make_shared<string>(boost::any_cast<string>(m["TgtFilePages"]));
    }
    if (m.find("TgtFilePrefix") != m.end() && !m["TgtFilePrefix"].empty()) {
      tgtFilePrefix = make_shared<string>(boost::any_cast<string>(m["TgtFilePrefix"]));
    }
    if (m.find("TgtFileSuffix") != m.end() && !m["TgtFileSuffix"].empty()) {
      tgtFileSuffix = make_shared<string>(boost::any_cast<string>(m["TgtFileSuffix"]));
    }
    if (m.find("TgtType") != m.end() && !m["TgtType"].empty()) {
      tgtType = make_shared<string>(boost::any_cast<string>(m["TgtType"]));
    }
    if (m.find("TgtUri") != m.end() && !m["TgtUri"].empty()) {
      tgtUri = make_shared<string>(boost::any_cast<string>(m["TgtUri"]));
    }
  }


  virtual ~ConvertOfficeFormatRequest() = default;
};
class ConvertOfficeFormatResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageCount{};
  shared_ptr<string> requestId{};

  ConvertOfficeFormatResponseBody() {}

  explicit ConvertOfficeFormatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ConvertOfficeFormatResponseBody() = default;
};
class ConvertOfficeFormatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ConvertOfficeFormatResponseBody> body{};

  ConvertOfficeFormatResponse() {}

  explicit ConvertOfficeFormatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConvertOfficeFormatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConvertOfficeFormatResponseBody>(model1);
      }
    }
  }


  virtual ~ConvertOfficeFormatResponse() = default;
};
class CreateGrabFrameTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> customMessage{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> project{};
  shared_ptr<string> targetList{};
  shared_ptr<string> videoUri{};

  CreateGrabFrameTaskRequest() {}

  explicit CreateGrabFrameTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customMessage) {
      res["CustomMessage"] = boost::any(*customMessage);
    }
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (targetList) {
      res["TargetList"] = boost::any(*targetList);
    }
    if (videoUri) {
      res["VideoUri"] = boost::any(*videoUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomMessage") != m.end() && !m["CustomMessage"].empty()) {
      customMessage = make_shared<string>(boost::any_cast<string>(m["CustomMessage"]));
    }
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("TargetList") != m.end() && !m["TargetList"].empty()) {
      targetList = make_shared<string>(boost::any_cast<string>(m["TargetList"]));
    }
    if (m.find("VideoUri") != m.end() && !m["VideoUri"].empty()) {
      videoUri = make_shared<string>(boost::any_cast<string>(m["VideoUri"]));
    }
  }


  virtual ~CreateGrabFrameTaskRequest() = default;
};
class CreateGrabFrameTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};

  CreateGrabFrameTaskResponseBody() {}

  explicit CreateGrabFrameTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
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
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~CreateGrabFrameTaskResponseBody() = default;
};
class CreateGrabFrameTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateGrabFrameTaskResponseBody> body{};

  CreateGrabFrameTaskResponse() {}

  explicit CreateGrabFrameTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGrabFrameTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGrabFrameTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGrabFrameTaskResponse() = default;
};
class CreateGroupFacesJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> project{};
  shared_ptr<string> setId{};

  CreateGroupFacesJobRequest() {}

  explicit CreateGroupFacesJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
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
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
  }


  virtual ~CreateGroupFacesJobRequest() = default;
};
class CreateGroupFacesJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> jobType{};
  shared_ptr<string> requestId{};
  shared_ptr<string> setId{};

  CreateGroupFacesJobResponseBody() {}

  explicit CreateGroupFacesJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
  }


  virtual ~CreateGroupFacesJobResponseBody() = default;
};
class CreateGroupFacesJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateGroupFacesJobResponseBody> body{};

  CreateGroupFacesJobResponse() {}

  explicit CreateGroupFacesJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGroupFacesJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGroupFacesJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGroupFacesJobResponse() = default;
};
class CreateImageProcessTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUri{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> project{};
  shared_ptr<string> targetList{};

  CreateImageProcessTaskRequest() {}

  explicit CreateImageProcessTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (targetList) {
      res["TargetList"] = boost::any(*targetList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("TargetList") != m.end() && !m["TargetList"].empty()) {
      targetList = make_shared<string>(boost::any_cast<string>(m["TargetList"]));
    }
  }


  virtual ~CreateImageProcessTaskRequest() = default;
};
class CreateImageProcessTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};

  CreateImageProcessTaskResponseBody() {}

  explicit CreateImageProcessTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
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
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~CreateImageProcessTaskResponseBody() = default;
};
class CreateImageProcessTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateImageProcessTaskResponseBody> body{};

  CreateImageProcessTaskResponse() {}

  explicit CreateImageProcessTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateImageProcessTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateImageProcessTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateImageProcessTaskResponse() = default;
};
class CreateMediaComplexTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> parameters{};
  shared_ptr<string> project{};

  CreateMediaComplexTaskRequest() {}

  explicit CreateMediaComplexTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (project) {
      res["Project"] = boost::any(*project);
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
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
  }


  virtual ~CreateMediaComplexTaskRequest() = default;
};
class CreateMediaComplexTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};

  CreateMediaComplexTaskResponseBody() {}

  explicit CreateMediaComplexTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
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
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~CreateMediaComplexTaskResponseBody() = default;
};
class CreateMediaComplexTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateMediaComplexTaskResponseBody> body{};

  CreateMediaComplexTaskResponse() {}

  explicit CreateMediaComplexTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMediaComplexTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMediaComplexTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMediaComplexTaskResponse() = default;
};
class CreateMergeFaceGroupsJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> customMessage{};
  shared_ptr<string> groupIdFrom{};
  shared_ptr<string> groupIdTo{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> project{};
  shared_ptr<string> setId{};

  CreateMergeFaceGroupsJobRequest() {}

  explicit CreateMergeFaceGroupsJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customMessage) {
      res["CustomMessage"] = boost::any(*customMessage);
    }
    if (groupIdFrom) {
      res["GroupIdFrom"] = boost::any(*groupIdFrom);
    }
    if (groupIdTo) {
      res["GroupIdTo"] = boost::any(*groupIdTo);
    }
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomMessage") != m.end() && !m["CustomMessage"].empty()) {
      customMessage = make_shared<string>(boost::any_cast<string>(m["CustomMessage"]));
    }
    if (m.find("GroupIdFrom") != m.end() && !m["GroupIdFrom"].empty()) {
      groupIdFrom = make_shared<string>(boost::any_cast<string>(m["GroupIdFrom"]));
    }
    if (m.find("GroupIdTo") != m.end() && !m["GroupIdTo"].empty()) {
      groupIdTo = make_shared<string>(boost::any_cast<string>(m["GroupIdTo"]));
    }
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
  }


  virtual ~CreateMergeFaceGroupsJobRequest() = default;
};
class CreateMergeFaceGroupsJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> groupIdFrom{};
  shared_ptr<string> groupIdTo{};
  shared_ptr<string> jobId{};
  shared_ptr<string> jobType{};
  shared_ptr<string> requestId{};
  shared_ptr<string> setId{};

  CreateMergeFaceGroupsJobResponseBody() {}

  explicit CreateMergeFaceGroupsJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupIdFrom) {
      res["GroupIdFrom"] = boost::any(*groupIdFrom);
    }
    if (groupIdTo) {
      res["GroupIdTo"] = boost::any(*groupIdTo);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupIdFrom") != m.end() && !m["GroupIdFrom"].empty()) {
      groupIdFrom = make_shared<string>(boost::any_cast<string>(m["GroupIdFrom"]));
    }
    if (m.find("GroupIdTo") != m.end() && !m["GroupIdTo"].empty()) {
      groupIdTo = make_shared<string>(boost::any_cast<string>(m["GroupIdTo"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
  }


  virtual ~CreateMergeFaceGroupsJobResponseBody() = default;
};
class CreateMergeFaceGroupsJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateMergeFaceGroupsJobResponseBody> body{};

  CreateMergeFaceGroupsJobResponse() {}

  explicit CreateMergeFaceGroupsJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateMergeFaceGroupsJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateMergeFaceGroupsJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateMergeFaceGroupsJobResponse() = default;
};
class CreateOfficeConversionTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> displayDpi{};
  shared_ptr<long> endPage{};
  shared_ptr<bool> fitToPagesTall{};
  shared_ptr<bool> fitToPagesWide{};
  shared_ptr<bool> hidecomments{};
  shared_ptr<string> idempotentToken{};
  shared_ptr<long> maxSheetCol{};
  shared_ptr<long> maxSheetCount{};
  shared_ptr<long> maxSheetRow{};
  shared_ptr<string> modelId{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> password{};
  shared_ptr<bool> pdfVector{};
  shared_ptr<string> project{};
  shared_ptr<bool> sheetOnePage{};
  shared_ptr<string> srcType{};
  shared_ptr<string> srcUri{};
  shared_ptr<long> startPage{};
  shared_ptr<string> tgtFilePages{};
  shared_ptr<string> tgtFilePrefix{};
  shared_ptr<string> tgtFileSuffix{};
  shared_ptr<string> tgtType{};
  shared_ptr<string> tgtUri{};
  shared_ptr<string> userData{};

  CreateOfficeConversionTaskRequest() {}

  explicit CreateOfficeConversionTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (displayDpi) {
      res["DisplayDpi"] = boost::any(*displayDpi);
    }
    if (endPage) {
      res["EndPage"] = boost::any(*endPage);
    }
    if (fitToPagesTall) {
      res["FitToPagesTall"] = boost::any(*fitToPagesTall);
    }
    if (fitToPagesWide) {
      res["FitToPagesWide"] = boost::any(*fitToPagesWide);
    }
    if (hidecomments) {
      res["Hidecomments"] = boost::any(*hidecomments);
    }
    if (idempotentToken) {
      res["IdempotentToken"] = boost::any(*idempotentToken);
    }
    if (maxSheetCol) {
      res["MaxSheetCol"] = boost::any(*maxSheetCol);
    }
    if (maxSheetCount) {
      res["MaxSheetCount"] = boost::any(*maxSheetCount);
    }
    if (maxSheetRow) {
      res["MaxSheetRow"] = boost::any(*maxSheetRow);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
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
    if (pdfVector) {
      res["PdfVector"] = boost::any(*pdfVector);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (sheetOnePage) {
      res["SheetOnePage"] = boost::any(*sheetOnePage);
    }
    if (srcType) {
      res["SrcType"] = boost::any(*srcType);
    }
    if (srcUri) {
      res["SrcUri"] = boost::any(*srcUri);
    }
    if (startPage) {
      res["StartPage"] = boost::any(*startPage);
    }
    if (tgtFilePages) {
      res["TgtFilePages"] = boost::any(*tgtFilePages);
    }
    if (tgtFilePrefix) {
      res["TgtFilePrefix"] = boost::any(*tgtFilePrefix);
    }
    if (tgtFileSuffix) {
      res["TgtFileSuffix"] = boost::any(*tgtFileSuffix);
    }
    if (tgtType) {
      res["TgtType"] = boost::any(*tgtType);
    }
    if (tgtUri) {
      res["TgtUri"] = boost::any(*tgtUri);
    }
    if (userData) {
      res["UserData"] = boost::any(*userData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DisplayDpi") != m.end() && !m["DisplayDpi"].empty()) {
      displayDpi = make_shared<long>(boost::any_cast<long>(m["DisplayDpi"]));
    }
    if (m.find("EndPage") != m.end() && !m["EndPage"].empty()) {
      endPage = make_shared<long>(boost::any_cast<long>(m["EndPage"]));
    }
    if (m.find("FitToPagesTall") != m.end() && !m["FitToPagesTall"].empty()) {
      fitToPagesTall = make_shared<bool>(boost::any_cast<bool>(m["FitToPagesTall"]));
    }
    if (m.find("FitToPagesWide") != m.end() && !m["FitToPagesWide"].empty()) {
      fitToPagesWide = make_shared<bool>(boost::any_cast<bool>(m["FitToPagesWide"]));
    }
    if (m.find("Hidecomments") != m.end() && !m["Hidecomments"].empty()) {
      hidecomments = make_shared<bool>(boost::any_cast<bool>(m["Hidecomments"]));
    }
    if (m.find("IdempotentToken") != m.end() && !m["IdempotentToken"].empty()) {
      idempotentToken = make_shared<string>(boost::any_cast<string>(m["IdempotentToken"]));
    }
    if (m.find("MaxSheetCol") != m.end() && !m["MaxSheetCol"].empty()) {
      maxSheetCol = make_shared<long>(boost::any_cast<long>(m["MaxSheetCol"]));
    }
    if (m.find("MaxSheetCount") != m.end() && !m["MaxSheetCount"].empty()) {
      maxSheetCount = make_shared<long>(boost::any_cast<long>(m["MaxSheetCount"]));
    }
    if (m.find("MaxSheetRow") != m.end() && !m["MaxSheetRow"].empty()) {
      maxSheetRow = make_shared<long>(boost::any_cast<long>(m["MaxSheetRow"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
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
    if (m.find("PdfVector") != m.end() && !m["PdfVector"].empty()) {
      pdfVector = make_shared<bool>(boost::any_cast<bool>(m["PdfVector"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("SheetOnePage") != m.end() && !m["SheetOnePage"].empty()) {
      sheetOnePage = make_shared<bool>(boost::any_cast<bool>(m["SheetOnePage"]));
    }
    if (m.find("SrcType") != m.end() && !m["SrcType"].empty()) {
      srcType = make_shared<string>(boost::any_cast<string>(m["SrcType"]));
    }
    if (m.find("SrcUri") != m.end() && !m["SrcUri"].empty()) {
      srcUri = make_shared<string>(boost::any_cast<string>(m["SrcUri"]));
    }
    if (m.find("StartPage") != m.end() && !m["StartPage"].empty()) {
      startPage = make_shared<long>(boost::any_cast<long>(m["StartPage"]));
    }
    if (m.find("TgtFilePages") != m.end() && !m["TgtFilePages"].empty()) {
      tgtFilePages = make_shared<string>(boost::any_cast<string>(m["TgtFilePages"]));
    }
    if (m.find("TgtFilePrefix") != m.end() && !m["TgtFilePrefix"].empty()) {
      tgtFilePrefix = make_shared<string>(boost::any_cast<string>(m["TgtFilePrefix"]));
    }
    if (m.find("TgtFileSuffix") != m.end() && !m["TgtFileSuffix"].empty()) {
      tgtFileSuffix = make_shared<string>(boost::any_cast<string>(m["TgtFileSuffix"]));
    }
    if (m.find("TgtType") != m.end() && !m["TgtType"].empty()) {
      tgtType = make_shared<string>(boost::any_cast<string>(m["TgtType"]));
    }
    if (m.find("TgtUri") != m.end() && !m["TgtUri"].empty()) {
      tgtUri = make_shared<string>(boost::any_cast<string>(m["TgtUri"]));
    }
    if (m.find("UserData") != m.end() && !m["UserData"].empty()) {
      userData = make_shared<string>(boost::any_cast<string>(m["UserData"]));
    }
  }


  virtual ~CreateOfficeConversionTaskRequest() = default;
};
class CreateOfficeConversionTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> percent{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> tgtLoc{};

  CreateOfficeConversionTaskResponseBody() {}

  explicit CreateOfficeConversionTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (tgtLoc) {
      res["TgtLoc"] = boost::any(*tgtLoc);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<long>(boost::any_cast<long>(m["Percent"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TgtLoc") != m.end() && !m["TgtLoc"].empty()) {
      tgtLoc = make_shared<string>(boost::any_cast<string>(m["TgtLoc"]));
    }
  }


  virtual ~CreateOfficeConversionTaskResponseBody() = default;
};
class CreateOfficeConversionTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateOfficeConversionTaskResponseBody> body{};

  CreateOfficeConversionTaskResponse() {}

  explicit CreateOfficeConversionTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateOfficeConversionTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateOfficeConversionTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateOfficeConversionTaskResponse() = default;
};
class CreateSetRequest : public Darabonba::Model {
public:
  shared_ptr<string> project{};
  shared_ptr<string> setId{};
  shared_ptr<string> setName{};

  CreateSetRequest() {}

  explicit CreateSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (setName) {
      res["SetName"] = boost::any(*setName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("SetName") != m.end() && !m["SetName"].empty()) {
      setName = make_shared<string>(boost::any_cast<string>(m["SetName"]));
    }
  }


  virtual ~CreateSetRequest() = default;
};
class CreateSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> faceCount{};
  shared_ptr<long> imageCount{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> setId{};
  shared_ptr<string> setName{};
  shared_ptr<long> videoCount{};
  shared_ptr<long> videoLength{};

  CreateSetResponseBody() {}

  explicit CreateSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (faceCount) {
      res["FaceCount"] = boost::any(*faceCount);
    }
    if (imageCount) {
      res["ImageCount"] = boost::any(*imageCount);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (setName) {
      res["SetName"] = boost::any(*setName);
    }
    if (videoCount) {
      res["VideoCount"] = boost::any(*videoCount);
    }
    if (videoLength) {
      res["VideoLength"] = boost::any(*videoLength);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FaceCount") != m.end() && !m["FaceCount"].empty()) {
      faceCount = make_shared<long>(boost::any_cast<long>(m["FaceCount"]));
    }
    if (m.find("ImageCount") != m.end() && !m["ImageCount"].empty()) {
      imageCount = make_shared<long>(boost::any_cast<long>(m["ImageCount"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("SetName") != m.end() && !m["SetName"].empty()) {
      setName = make_shared<string>(boost::any_cast<string>(m["SetName"]));
    }
    if (m.find("VideoCount") != m.end() && !m["VideoCount"].empty()) {
      videoCount = make_shared<long>(boost::any_cast<long>(m["VideoCount"]));
    }
    if (m.find("VideoLength") != m.end() && !m["VideoLength"].empty()) {
      videoLength = make_shared<long>(boost::any_cast<long>(m["VideoLength"]));
    }
  }


  virtual ~CreateSetResponseBody() = default;
};
class CreateSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateSetResponseBody> body{};

  CreateSetResponse() {}

  explicit CreateSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSetResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSetResponse() = default;
};
class CreateVideoAbstractTaskRequest : public Darabonba::Model {
public:
  shared_ptr<long> abstractLength{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> project{};
  shared_ptr<string> targetClipsUri{};
  shared_ptr<string> targetVideoUri{};
  shared_ptr<string> videoUri{};

  CreateVideoAbstractTaskRequest() {}

  explicit CreateVideoAbstractTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (abstractLength) {
      res["AbstractLength"] = boost::any(*abstractLength);
    }
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (targetClipsUri) {
      res["TargetClipsUri"] = boost::any(*targetClipsUri);
    }
    if (targetVideoUri) {
      res["TargetVideoUri"] = boost::any(*targetVideoUri);
    }
    if (videoUri) {
      res["VideoUri"] = boost::any(*videoUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AbstractLength") != m.end() && !m["AbstractLength"].empty()) {
      abstractLength = make_shared<long>(boost::any_cast<long>(m["AbstractLength"]));
    }
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("TargetClipsUri") != m.end() && !m["TargetClipsUri"].empty()) {
      targetClipsUri = make_shared<string>(boost::any_cast<string>(m["TargetClipsUri"]));
    }
    if (m.find("TargetVideoUri") != m.end() && !m["TargetVideoUri"].empty()) {
      targetVideoUri = make_shared<string>(boost::any_cast<string>(m["TargetVideoUri"]));
    }
    if (m.find("VideoUri") != m.end() && !m["VideoUri"].empty()) {
      videoUri = make_shared<string>(boost::any_cast<string>(m["VideoUri"]));
    }
  }


  virtual ~CreateVideoAbstractTaskRequest() = default;
};
class CreateVideoAbstractTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};

  CreateVideoAbstractTaskResponseBody() {}

  explicit CreateVideoAbstractTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
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
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~CreateVideoAbstractTaskResponseBody() = default;
};
class CreateVideoAbstractTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateVideoAbstractTaskResponseBody> body{};

  CreateVideoAbstractTaskResponse() {}

  explicit CreateVideoAbstractTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVideoAbstractTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVideoAbstractTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVideoAbstractTaskResponse() = default;
};
class CreateVideoAnalyseTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> project{};
  shared_ptr<string> tgtUri{};
  shared_ptr<string> videoUri{};

  CreateVideoAnalyseTaskRequest() {}

  explicit CreateVideoAnalyseTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (tgtUri) {
      res["TgtUri"] = boost::any(*tgtUri);
    }
    if (videoUri) {
      res["VideoUri"] = boost::any(*videoUri);
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
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("TgtUri") != m.end() && !m["TgtUri"].empty()) {
      tgtUri = make_shared<string>(boost::any_cast<string>(m["TgtUri"]));
    }
    if (m.find("VideoUri") != m.end() && !m["VideoUri"].empty()) {
      videoUri = make_shared<string>(boost::any_cast<string>(m["VideoUri"]));
    }
  }


  virtual ~CreateVideoAnalyseTaskRequest() = default;
};
class CreateVideoAnalyseTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};

  CreateVideoAnalyseTaskResponseBody() {}

  explicit CreateVideoAnalyseTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
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
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~CreateVideoAnalyseTaskResponseBody() = default;
};
class CreateVideoAnalyseTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateVideoAnalyseTaskResponseBody> body{};

  CreateVideoAnalyseTaskResponse() {}

  explicit CreateVideoAnalyseTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVideoAnalyseTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVideoAnalyseTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVideoAnalyseTaskResponse() = default;
};
class CreateVideoCompressTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> customMessage{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> project{};
  shared_ptr<string> targetList{};
  shared_ptr<string> targetSegment{};
  shared_ptr<string> targetSubtitle{};
  shared_ptr<string> videoUri{};

  CreateVideoCompressTaskRequest() {}

  explicit CreateVideoCompressTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customMessage) {
      res["CustomMessage"] = boost::any(*customMessage);
    }
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (targetList) {
      res["TargetList"] = boost::any(*targetList);
    }
    if (targetSegment) {
      res["TargetSegment"] = boost::any(*targetSegment);
    }
    if (targetSubtitle) {
      res["TargetSubtitle"] = boost::any(*targetSubtitle);
    }
    if (videoUri) {
      res["VideoUri"] = boost::any(*videoUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomMessage") != m.end() && !m["CustomMessage"].empty()) {
      customMessage = make_shared<string>(boost::any_cast<string>(m["CustomMessage"]));
    }
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("TargetList") != m.end() && !m["TargetList"].empty()) {
      targetList = make_shared<string>(boost::any_cast<string>(m["TargetList"]));
    }
    if (m.find("TargetSegment") != m.end() && !m["TargetSegment"].empty()) {
      targetSegment = make_shared<string>(boost::any_cast<string>(m["TargetSegment"]));
    }
    if (m.find("TargetSubtitle") != m.end() && !m["TargetSubtitle"].empty()) {
      targetSubtitle = make_shared<string>(boost::any_cast<string>(m["TargetSubtitle"]));
    }
    if (m.find("VideoUri") != m.end() && !m["VideoUri"].empty()) {
      videoUri = make_shared<string>(boost::any_cast<string>(m["VideoUri"]));
    }
  }


  virtual ~CreateVideoCompressTaskRequest() = default;
};
class CreateVideoCompressTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};

  CreateVideoCompressTaskResponseBody() {}

  explicit CreateVideoCompressTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
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
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~CreateVideoCompressTaskResponseBody() = default;
};
class CreateVideoCompressTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateVideoCompressTaskResponseBody> body{};

  CreateVideoCompressTaskResponse() {}

  explicit CreateVideoCompressTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVideoCompressTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVideoCompressTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVideoCompressTaskResponse() = default;
};
class CreateVideoProduceTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> customMessage{};
  shared_ptr<long> height{};
  shared_ptr<string> images{};
  shared_ptr<string> music{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> project{};
  shared_ptr<string> targetUri{};
  shared_ptr<string> templateName{};
  shared_ptr<long> width{};

  CreateVideoProduceTaskRequest() {}

  explicit CreateVideoProduceTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customMessage) {
      res["CustomMessage"] = boost::any(*customMessage);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (images) {
      res["Images"] = boost::any(*images);
    }
    if (music) {
      res["Music"] = boost::any(*music);
    }
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (targetUri) {
      res["TargetUri"] = boost::any(*targetUri);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomMessage") != m.end() && !m["CustomMessage"].empty()) {
      customMessage = make_shared<string>(boost::any_cast<string>(m["CustomMessage"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      images = make_shared<string>(boost::any_cast<string>(m["Images"]));
    }
    if (m.find("Music") != m.end() && !m["Music"].empty()) {
      music = make_shared<string>(boost::any_cast<string>(m["Music"]));
    }
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("TargetUri") != m.end() && !m["TargetUri"].empty()) {
      targetUri = make_shared<string>(boost::any_cast<string>(m["TargetUri"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~CreateVideoProduceTaskRequest() = default;
};
class CreateVideoProduceTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};

  CreateVideoProduceTaskResponseBody() {}

  explicit CreateVideoProduceTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
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
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~CreateVideoProduceTaskResponseBody() = default;
};
class CreateVideoProduceTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateVideoProduceTaskResponseBody> body{};

  CreateVideoProduceTaskResponse() {}

  explicit CreateVideoProduceTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVideoProduceTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVideoProduceTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVideoProduceTaskResponse() = default;
};
class DecodeBlindWatermarkRequest : public Darabonba::Model {
public:
  shared_ptr<long> imageQuality{};
  shared_ptr<string> imageUri{};
  shared_ptr<string> model{};
  shared_ptr<string> originalImageUri{};
  shared_ptr<string> project{};
  shared_ptr<string> targetUri{};

  DecodeBlindWatermarkRequest() {}

  explicit DecodeBlindWatermarkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageQuality) {
      res["ImageQuality"] = boost::any(*imageQuality);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (originalImageUri) {
      res["OriginalImageUri"] = boost::any(*originalImageUri);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (targetUri) {
      res["TargetUri"] = boost::any(*targetUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageQuality") != m.end() && !m["ImageQuality"].empty()) {
      imageQuality = make_shared<long>(boost::any_cast<long>(m["ImageQuality"]));
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("OriginalImageUri") != m.end() && !m["OriginalImageUri"].empty()) {
      originalImageUri = make_shared<string>(boost::any_cast<string>(m["OriginalImageUri"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("TargetUri") != m.end() && !m["TargetUri"].empty()) {
      targetUri = make_shared<string>(boost::any_cast<string>(m["TargetUri"]));
    }
  }


  virtual ~DecodeBlindWatermarkRequest() = default;
};
class DecodeBlindWatermarkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> requestId{};
  shared_ptr<string> targetUri{};

  DecodeBlindWatermarkResponseBody() {}

  explicit DecodeBlindWatermarkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (targetUri) {
      res["TargetUri"] = boost::any(*targetUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TargetUri") != m.end() && !m["TargetUri"].empty()) {
      targetUri = make_shared<string>(boost::any_cast<string>(m["TargetUri"]));
    }
  }


  virtual ~DecodeBlindWatermarkResponseBody() = default;
};
class DecodeBlindWatermarkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DecodeBlindWatermarkResponseBody> body{};

  DecodeBlindWatermarkResponse() {}

  explicit DecodeBlindWatermarkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DecodeBlindWatermarkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DecodeBlindWatermarkResponseBody>(model1);
      }
    }
  }


  virtual ~DecodeBlindWatermarkResponse() = default;
};
class DeleteImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUri{};
  shared_ptr<string> project{};
  shared_ptr<string> setId{};

  DeleteImageRequest() {}

  explicit DeleteImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
  }


  virtual ~DeleteImageRequest() = default;
};
class DeleteImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> imageUri{};
  shared_ptr<string> requestId{};
  shared_ptr<string> setId{};

  DeleteImageResponseBody() {}

  explicit DeleteImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
  }


  virtual ~DeleteImageResponseBody() = default;
};
class DeleteImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteImageResponseBody> body{};

  DeleteImageResponse() {}

  explicit DeleteImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteImageResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteImageResponse() = default;
};
class DeleteImageJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> jobType{};
  shared_ptr<string> project{};

  DeleteImageJobRequest() {}

  explicit DeleteImageJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobType) {
      res["JobType"] = boost::any(*jobType);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobType") != m.end() && !m["JobType"].empty()) {
      jobType = make_shared<string>(boost::any_cast<string>(m["JobType"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
  }


  virtual ~DeleteImageJobRequest() = default;
};
class DeleteImageJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteImageJobResponseBody() {}

  explicit DeleteImageJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteImageJobResponseBody() = default;
};
class DeleteImageJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteImageJobResponseBody> body{};

  DeleteImageJobResponse() {}

  explicit DeleteImageJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteImageJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteImageJobResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteImageJobResponse() = default;
};
class DeleteOfficeConversionTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> project{};
  shared_ptr<string> taskId{};

  DeleteOfficeConversionTaskRequest() {}

  explicit DeleteOfficeConversionTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DeleteOfficeConversionTaskRequest() = default;
};
class DeleteOfficeConversionTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteOfficeConversionTaskResponseBody() {}

  explicit DeleteOfficeConversionTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteOfficeConversionTaskResponseBody() = default;
};
class DeleteOfficeConversionTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteOfficeConversionTaskResponseBody> body{};

  DeleteOfficeConversionTaskResponse() {}

  explicit DeleteOfficeConversionTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteOfficeConversionTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteOfficeConversionTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteOfficeConversionTaskResponse() = default;
};
class DeleteProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> project{};

  DeleteProjectRequest() {}

  explicit DeleteProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
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
class DeleteSetRequest : public Darabonba::Model {
public:
  shared_ptr<string> project{};
  shared_ptr<string> setId{};

  DeleteSetRequest() {}

  explicit DeleteSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
  }


  virtual ~DeleteSetRequest() = default;
};
class DeleteSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> setId{};

  DeleteSetResponseBody() {}

  explicit DeleteSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
  }


  virtual ~DeleteSetResponseBody() = default;
};
class DeleteSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteSetResponseBody> body{};

  DeleteSetResponse() {}

  explicit DeleteSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSetResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSetResponse() = default;
};
class DeleteVideoRequest : public Darabonba::Model {
public:
  shared_ptr<string> project{};
  shared_ptr<bool> resources{};
  shared_ptr<string> setId{};
  shared_ptr<string> videoUri{};

  DeleteVideoRequest() {}

  explicit DeleteVideoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (videoUri) {
      res["VideoUri"] = boost::any(*videoUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resources = make_shared<bool>(boost::any_cast<bool>(m["Resources"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("VideoUri") != m.end() && !m["VideoUri"].empty()) {
      videoUri = make_shared<string>(boost::any_cast<string>(m["VideoUri"]));
    }
  }


  virtual ~DeleteVideoRequest() = default;
};
class DeleteVideoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> setId{};
  shared_ptr<string> videoUri{};

  DeleteVideoResponseBody() {}

  explicit DeleteVideoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (videoUri) {
      res["VideoUri"] = boost::any(*videoUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("VideoUri") != m.end() && !m["VideoUri"].empty()) {
      videoUri = make_shared<string>(boost::any_cast<string>(m["VideoUri"]));
    }
  }


  virtual ~DeleteVideoResponseBody() = default;
};
class DeleteVideoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteVideoResponseBody> body{};

  DeleteVideoResponse() {}

  explicit DeleteVideoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVideoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVideoResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVideoResponse() = default;
};
class DeleteVideoTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> project{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};

  DeleteVideoTaskRequest() {}

  explicit DeleteVideoTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = boost::any(*project);
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
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~DeleteVideoTaskRequest() = default;
};
class DeleteVideoTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteVideoTaskResponseBody() {}

  explicit DeleteVideoTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteVideoTaskResponseBody() = default;
};
class DeleteVideoTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteVideoTaskResponseBody> body{};

  DeleteVideoTaskResponse() {}

  explicit DeleteVideoTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVideoTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVideoTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVideoTaskResponse() = default;
};
class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
public:
  shared_ptr<vector<string>> projectTypes{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegionsRegion() {}

  explicit DescribeRegionsResponseBodyRegionsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectTypes) {
      res["ProjectTypes"] = boost::any(*projectTypes);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectTypes") != m.end() && !m["ProjectTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ProjectTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ProjectTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      projectTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegion() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionsRegion>> region{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      vector<boost::any> temp1;
      for(auto item1:*region){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Region"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      if (typeid(vector<boost::any>) == m["Region"].type()) {
        vector<DescribeRegionsResponseBodyRegionsRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Region"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionsRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        region = make_shared<vector<DescribeRegionsResponseBodyRegionsRegion>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Regions"].type()) {
        DescribeRegionsResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeRegionsResponseBodyRegions>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DetectImageBodiesRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUri{};
  shared_ptr<string> project{};

  DetectImageBodiesRequest() {}

  explicit DetectImageBodiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
  }


  virtual ~DetectImageBodiesRequest() = default;
};
class DetectImageBodiesResponseBodyBodiesBodyBoundary : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  DetectImageBodiesResponseBodyBodiesBodyBoundary() {}

  explicit DetectImageBodiesResponseBodyBodiesBodyBoundary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectImageBodiesResponseBodyBodiesBodyBoundary() = default;
};
class DetectImageBodiesResponseBodyBodies : public Darabonba::Model {
public:
  shared_ptr<DetectImageBodiesResponseBodyBodiesBodyBoundary> bodyBoundary{};
  shared_ptr<double> bodyConfidence{};

  DetectImageBodiesResponseBodyBodies() {}

  explicit DetectImageBodiesResponseBodyBodies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyBoundary) {
      res["BodyBoundary"] = bodyBoundary ? boost::any(bodyBoundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (bodyConfidence) {
      res["BodyConfidence"] = boost::any(*bodyConfidence);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyBoundary") != m.end() && !m["BodyBoundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["BodyBoundary"].type()) {
        DetectImageBodiesResponseBodyBodiesBodyBoundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BodyBoundary"]));
        bodyBoundary = make_shared<DetectImageBodiesResponseBodyBodiesBodyBoundary>(model1);
      }
    }
    if (m.find("BodyConfidence") != m.end() && !m["BodyConfidence"].empty()) {
      bodyConfidence = make_shared<double>(boost::any_cast<double>(m["BodyConfidence"]));
    }
  }


  virtual ~DetectImageBodiesResponseBodyBodies() = default;
};
class DetectImageBodiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DetectImageBodiesResponseBodyBodies>> bodies{};
  shared_ptr<string> imageUri{};
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
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bodies") != m.end() && !m["Bodies"].empty()) {
      if (typeid(vector<boost::any>) == m["Bodies"].type()) {
        vector<DetectImageBodiesResponseBodyBodies> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bodies"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectImageBodiesResponseBodyBodies model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bodies = make_shared<vector<DetectImageBodiesResponseBodyBodies>>(expect1);
      }
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
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
  shared_ptr<DetectImageBodiesResponseBody> body{};

  DetectImageBodiesResponse() {}

  explicit DetectImageBodiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectImageBodiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectImageBodiesResponseBody>(model1);
      }
    }
  }


  virtual ~DetectImageBodiesResponse() = default;
};
class DetectImageFacesRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUri{};
  shared_ptr<string> project{};

  DetectImageFacesRequest() {}

  explicit DetectImageFacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
  }


  virtual ~DetectImageFacesRequest() = default;
};
class DetectImageFacesResponseBodyFacesEmotionDetails : public Darabonba::Model {
public:
  shared_ptr<double> ANGRY{};
  shared_ptr<double> CALM{};
  shared_ptr<double> DISGUSTED{};
  shared_ptr<double> HAPPY{};
  shared_ptr<double> SAD{};
  shared_ptr<double> SCARED{};
  shared_ptr<double> SURPRISED{};

  DetectImageFacesResponseBodyFacesEmotionDetails() {}

  explicit DetectImageFacesResponseBodyFacesEmotionDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ANGRY) {
      res["ANGRY"] = boost::any(*ANGRY);
    }
    if (CALM) {
      res["CALM"] = boost::any(*CALM);
    }
    if (DISGUSTED) {
      res["DISGUSTED"] = boost::any(*DISGUSTED);
    }
    if (HAPPY) {
      res["HAPPY"] = boost::any(*HAPPY);
    }
    if (SAD) {
      res["SAD"] = boost::any(*SAD);
    }
    if (SCARED) {
      res["SCARED"] = boost::any(*SCARED);
    }
    if (SURPRISED) {
      res["SURPRISED"] = boost::any(*SURPRISED);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ANGRY") != m.end() && !m["ANGRY"].empty()) {
      ANGRY = make_shared<double>(boost::any_cast<double>(m["ANGRY"]));
    }
    if (m.find("CALM") != m.end() && !m["CALM"].empty()) {
      CALM = make_shared<double>(boost::any_cast<double>(m["CALM"]));
    }
    if (m.find("DISGUSTED") != m.end() && !m["DISGUSTED"].empty()) {
      DISGUSTED = make_shared<double>(boost::any_cast<double>(m["DISGUSTED"]));
    }
    if (m.find("HAPPY") != m.end() && !m["HAPPY"].empty()) {
      HAPPY = make_shared<double>(boost::any_cast<double>(m["HAPPY"]));
    }
    if (m.find("SAD") != m.end() && !m["SAD"].empty()) {
      SAD = make_shared<double>(boost::any_cast<double>(m["SAD"]));
    }
    if (m.find("SCARED") != m.end() && !m["SCARED"].empty()) {
      SCARED = make_shared<double>(boost::any_cast<double>(m["SCARED"]));
    }
    if (m.find("SURPRISED") != m.end() && !m["SURPRISED"].empty()) {
      SURPRISED = make_shared<double>(boost::any_cast<double>(m["SURPRISED"]));
    }
  }


  virtual ~DetectImageFacesResponseBodyFacesEmotionDetails() = default;
};
class DetectImageFacesResponseBodyFacesFaceAttributesFaceBoundary : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  DetectImageFacesResponseBodyFacesFaceAttributesFaceBoundary() {}

  explicit DetectImageFacesResponseBodyFacesFaceAttributesFaceBoundary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectImageFacesResponseBodyFacesFaceAttributesFaceBoundary() = default;
};
class DetectImageFacesResponseBodyFacesFaceAttributesHeadPose : public Darabonba::Model {
public:
  shared_ptr<double> pitch{};
  shared_ptr<double> roll{};
  shared_ptr<double> yaw{};

  DetectImageFacesResponseBodyFacesFaceAttributesHeadPose() {}

  explicit DetectImageFacesResponseBodyFacesFaceAttributesHeadPose(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectImageFacesResponseBodyFacesFaceAttributesHeadPose() = default;
};
class DetectImageFacesResponseBodyFacesFaceAttributes : public Darabonba::Model {
public:
  shared_ptr<string> beard{};
  shared_ptr<double> beardConfidence{};
  shared_ptr<DetectImageFacesResponseBodyFacesFaceAttributesFaceBoundary> faceBoundary{};
  shared_ptr<string> glasses{};
  shared_ptr<double> glassesConfidence{};
  shared_ptr<DetectImageFacesResponseBodyFacesFaceAttributesHeadPose> headPose{};
  shared_ptr<string> mask{};
  shared_ptr<double> maskConfidence{};

  DetectImageFacesResponseBodyFacesFaceAttributes() {}

  explicit DetectImageFacesResponseBodyFacesFaceAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beard) {
      res["Beard"] = boost::any(*beard);
    }
    if (beardConfidence) {
      res["BeardConfidence"] = boost::any(*beardConfidence);
    }
    if (faceBoundary) {
      res["FaceBoundary"] = faceBoundary ? boost::any(faceBoundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (glasses) {
      res["Glasses"] = boost::any(*glasses);
    }
    if (glassesConfidence) {
      res["GlassesConfidence"] = boost::any(*glassesConfidence);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Beard") != m.end() && !m["Beard"].empty()) {
      beard = make_shared<string>(boost::any_cast<string>(m["Beard"]));
    }
    if (m.find("BeardConfidence") != m.end() && !m["BeardConfidence"].empty()) {
      beardConfidence = make_shared<double>(boost::any_cast<double>(m["BeardConfidence"]));
    }
    if (m.find("FaceBoundary") != m.end() && !m["FaceBoundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceBoundary"].type()) {
        DetectImageFacesResponseBodyFacesFaceAttributesFaceBoundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceBoundary"]));
        faceBoundary = make_shared<DetectImageFacesResponseBodyFacesFaceAttributesFaceBoundary>(model1);
      }
    }
    if (m.find("Glasses") != m.end() && !m["Glasses"].empty()) {
      glasses = make_shared<string>(boost::any_cast<string>(m["Glasses"]));
    }
    if (m.find("GlassesConfidence") != m.end() && !m["GlassesConfidence"].empty()) {
      glassesConfidence = make_shared<double>(boost::any_cast<double>(m["GlassesConfidence"]));
    }
    if (m.find("HeadPose") != m.end() && !m["HeadPose"].empty()) {
      if (typeid(map<string, boost::any>) == m["HeadPose"].type()) {
        DetectImageFacesResponseBodyFacesFaceAttributesHeadPose model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HeadPose"]));
        headPose = make_shared<DetectImageFacesResponseBodyFacesFaceAttributesHeadPose>(model1);
      }
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("MaskConfidence") != m.end() && !m["MaskConfidence"].empty()) {
      maskConfidence = make_shared<double>(boost::any_cast<double>(m["MaskConfidence"]));
    }
  }


  virtual ~DetectImageFacesResponseBodyFacesFaceAttributes() = default;
};
class DetectImageFacesResponseBodyFaces : public Darabonba::Model {
public:
  shared_ptr<long> age{};
  shared_ptr<double> ageConfidence{};
  shared_ptr<double> attractive{};
  shared_ptr<double> attractiveConfidence{};
  shared_ptr<string> emotion{};
  shared_ptr<double> emotionConfidence{};
  shared_ptr<DetectImageFacesResponseBodyFacesEmotionDetails> emotionDetails{};
  shared_ptr<DetectImageFacesResponseBodyFacesFaceAttributes> faceAttributes{};
  shared_ptr<double> faceConfidence{};
  shared_ptr<string> faceId{};
  shared_ptr<double> faceQuality{};
  shared_ptr<string> gender{};
  shared_ptr<double> genderConfidence{};

  DetectImageFacesResponseBodyFaces() {}

  explicit DetectImageFacesResponseBodyFaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (age) {
      res["Age"] = boost::any(*age);
    }
    if (ageConfidence) {
      res["AgeConfidence"] = boost::any(*ageConfidence);
    }
    if (attractive) {
      res["Attractive"] = boost::any(*attractive);
    }
    if (attractiveConfidence) {
      res["AttractiveConfidence"] = boost::any(*attractiveConfidence);
    }
    if (emotion) {
      res["Emotion"] = boost::any(*emotion);
    }
    if (emotionConfidence) {
      res["EmotionConfidence"] = boost::any(*emotionConfidence);
    }
    if (emotionDetails) {
      res["EmotionDetails"] = emotionDetails ? boost::any(emotionDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceAttributes) {
      res["FaceAttributes"] = faceAttributes ? boost::any(faceAttributes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceConfidence) {
      res["FaceConfidence"] = boost::any(*faceConfidence);
    }
    if (faceId) {
      res["FaceId"] = boost::any(*faceId);
    }
    if (faceQuality) {
      res["FaceQuality"] = boost::any(*faceQuality);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (genderConfidence) {
      res["GenderConfidence"] = boost::any(*genderConfidence);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Age") != m.end() && !m["Age"].empty()) {
      age = make_shared<long>(boost::any_cast<long>(m["Age"]));
    }
    if (m.find("AgeConfidence") != m.end() && !m["AgeConfidence"].empty()) {
      ageConfidence = make_shared<double>(boost::any_cast<double>(m["AgeConfidence"]));
    }
    if (m.find("Attractive") != m.end() && !m["Attractive"].empty()) {
      attractive = make_shared<double>(boost::any_cast<double>(m["Attractive"]));
    }
    if (m.find("AttractiveConfidence") != m.end() && !m["AttractiveConfidence"].empty()) {
      attractiveConfidence = make_shared<double>(boost::any_cast<double>(m["AttractiveConfidence"]));
    }
    if (m.find("Emotion") != m.end() && !m["Emotion"].empty()) {
      emotion = make_shared<string>(boost::any_cast<string>(m["Emotion"]));
    }
    if (m.find("EmotionConfidence") != m.end() && !m["EmotionConfidence"].empty()) {
      emotionConfidence = make_shared<double>(boost::any_cast<double>(m["EmotionConfidence"]));
    }
    if (m.find("EmotionDetails") != m.end() && !m["EmotionDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["EmotionDetails"].type()) {
        DetectImageFacesResponseBodyFacesEmotionDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EmotionDetails"]));
        emotionDetails = make_shared<DetectImageFacesResponseBodyFacesEmotionDetails>(model1);
      }
    }
    if (m.find("FaceAttributes") != m.end() && !m["FaceAttributes"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceAttributes"].type()) {
        DetectImageFacesResponseBodyFacesFaceAttributes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceAttributes"]));
        faceAttributes = make_shared<DetectImageFacesResponseBodyFacesFaceAttributes>(model1);
      }
    }
    if (m.find("FaceConfidence") != m.end() && !m["FaceConfidence"].empty()) {
      faceConfidence = make_shared<double>(boost::any_cast<double>(m["FaceConfidence"]));
    }
    if (m.find("FaceId") != m.end() && !m["FaceId"].empty()) {
      faceId = make_shared<string>(boost::any_cast<string>(m["FaceId"]));
    }
    if (m.find("FaceQuality") != m.end() && !m["FaceQuality"].empty()) {
      faceQuality = make_shared<double>(boost::any_cast<double>(m["FaceQuality"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("GenderConfidence") != m.end() && !m["GenderConfidence"].empty()) {
      genderConfidence = make_shared<double>(boost::any_cast<double>(m["GenderConfidence"]));
    }
  }


  virtual ~DetectImageFacesResponseBodyFaces() = default;
};
class DetectImageFacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DetectImageFacesResponseBodyFaces>> faces{};
  shared_ptr<string> imageUri{};
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
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Faces") != m.end() && !m["Faces"].empty()) {
      if (typeid(vector<boost::any>) == m["Faces"].type()) {
        vector<DetectImageFacesResponseBodyFaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Faces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectImageFacesResponseBodyFaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faces = make_shared<vector<DetectImageFacesResponseBodyFaces>>(expect1);
      }
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
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
class DetectImageQRCodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUri{};
  shared_ptr<string> project{};

  DetectImageQRCodesRequest() {}

  explicit DetectImageQRCodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
  }


  virtual ~DetectImageQRCodesRequest() = default;
};
class DetectImageQRCodesResponseBodyQRCodesQRCodeBoundary : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  DetectImageQRCodesResponseBodyQRCodesQRCodeBoundary() {}

  explicit DetectImageQRCodesResponseBodyQRCodesQRCodeBoundary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DetectImageQRCodesResponseBodyQRCodesQRCodeBoundary() = default;
};
class DetectImageQRCodesResponseBodyQRCodes : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<DetectImageQRCodesResponseBodyQRCodesQRCodeBoundary> QRCodeBoundary{};

  DetectImageQRCodesResponseBodyQRCodes() {}

  explicit DetectImageQRCodesResponseBodyQRCodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (QRCodeBoundary) {
      res["QRCodeBoundary"] = QRCodeBoundary ? boost::any(QRCodeBoundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("QRCodeBoundary") != m.end() && !m["QRCodeBoundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["QRCodeBoundary"].type()) {
        DetectImageQRCodesResponseBodyQRCodesQRCodeBoundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QRCodeBoundary"]));
        QRCodeBoundary = make_shared<DetectImageQRCodesResponseBodyQRCodesQRCodeBoundary>(model1);
      }
    }
  }


  virtual ~DetectImageQRCodesResponseBodyQRCodes() = default;
};
class DetectImageQRCodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> imageUri{};
  shared_ptr<vector<DetectImageQRCodesResponseBodyQRCodes>> QRCodes{};
  shared_ptr<string> requestId{};

  DetectImageQRCodesResponseBody() {}

  explicit DetectImageQRCodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (QRCodes) {
      vector<boost::any> temp1;
      for(auto item1:*QRCodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QRCodes"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("QRCodes") != m.end() && !m["QRCodes"].empty()) {
      if (typeid(vector<boost::any>) == m["QRCodes"].type()) {
        vector<DetectImageQRCodesResponseBodyQRCodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QRCodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectImageQRCodesResponseBodyQRCodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        QRCodes = make_shared<vector<DetectImageQRCodesResponseBodyQRCodes>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DetectImageQRCodesResponseBody() = default;
};
class DetectImageQRCodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectImageQRCodesResponseBody> body{};

  DetectImageQRCodesResponse() {}

  explicit DetectImageQRCodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectImageQRCodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectImageQRCodesResponseBody>(model1);
      }
    }
  }


  virtual ~DetectImageQRCodesResponse() = default;
};
class DetectImageTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUri{};
  shared_ptr<string> project{};

  DetectImageTagsRequest() {}

  explicit DetectImageTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
  }


  virtual ~DetectImageTagsRequest() = default;
};
class DetectImageTagsResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<double> centricScore{};
  shared_ptr<string> parentTagEnName{};
  shared_ptr<string> parentTagName{};
  shared_ptr<double> tagConfidence{};
  shared_ptr<string> tagEnName{};
  shared_ptr<long> tagLevel{};
  shared_ptr<string> tagName{};

  DetectImageTagsResponseBodyTags() {}

  explicit DetectImageTagsResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (centricScore) {
      res["CentricScore"] = boost::any(*centricScore);
    }
    if (parentTagEnName) {
      res["ParentTagEnName"] = boost::any(*parentTagEnName);
    }
    if (parentTagName) {
      res["ParentTagName"] = boost::any(*parentTagName);
    }
    if (tagConfidence) {
      res["TagConfidence"] = boost::any(*tagConfidence);
    }
    if (tagEnName) {
      res["TagEnName"] = boost::any(*tagEnName);
    }
    if (tagLevel) {
      res["TagLevel"] = boost::any(*tagLevel);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CentricScore") != m.end() && !m["CentricScore"].empty()) {
      centricScore = make_shared<double>(boost::any_cast<double>(m["CentricScore"]));
    }
    if (m.find("ParentTagEnName") != m.end() && !m["ParentTagEnName"].empty()) {
      parentTagEnName = make_shared<string>(boost::any_cast<string>(m["ParentTagEnName"]));
    }
    if (m.find("ParentTagName") != m.end() && !m["ParentTagName"].empty()) {
      parentTagName = make_shared<string>(boost::any_cast<string>(m["ParentTagName"]));
    }
    if (m.find("TagConfidence") != m.end() && !m["TagConfidence"].empty()) {
      tagConfidence = make_shared<double>(boost::any_cast<double>(m["TagConfidence"]));
    }
    if (m.find("TagEnName") != m.end() && !m["TagEnName"].empty()) {
      tagEnName = make_shared<string>(boost::any_cast<string>(m["TagEnName"]));
    }
    if (m.find("TagLevel") != m.end() && !m["TagLevel"].empty()) {
      tagLevel = make_shared<long>(boost::any_cast<long>(m["TagLevel"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~DetectImageTagsResponseBodyTags() = default;
};
class DetectImageTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> imageUri{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DetectImageTagsResponseBodyTags>> tags{};

  DetectImageTagsResponseBody() {}

  explicit DetectImageTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DetectImageTagsResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectImageTagsResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DetectImageTagsResponseBodyTags>>(expect1);
      }
    }
  }


  virtual ~DetectImageTagsResponseBody() = default;
};
class DetectImageTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectImageTagsResponseBody> body{};

  DetectImageTagsResponse() {}

  explicit DetectImageTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectImageTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectImageTagsResponseBody>(model1);
      }
    }
  }


  virtual ~DetectImageTagsResponse() = default;
};
class DetectQRCodesRequest : public Darabonba::Model {
public:
  shared_ptr<string> project{};
  shared_ptr<string> srcUris{};

  DetectQRCodesRequest() {}

  explicit DetectQRCodesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (srcUris) {
      res["SrcUris"] = boost::any(*srcUris);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("SrcUris") != m.end() && !m["SrcUris"].empty()) {
      srcUris = make_shared<string>(boost::any_cast<string>(m["SrcUris"]));
    }
  }


  virtual ~DetectQRCodesRequest() = default;
};
class DetectQRCodesResponseBodyFailDetails : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> srcUri{};

  DetectQRCodesResponseBodyFailDetails() {}

  explicit DetectQRCodesResponseBodyFailDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (srcUri) {
      res["SrcUri"] = boost::any(*srcUri);
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
    if (m.find("SrcUri") != m.end() && !m["SrcUri"].empty()) {
      srcUri = make_shared<string>(boost::any_cast<string>(m["SrcUri"]));
    }
  }


  virtual ~DetectQRCodesResponseBodyFailDetails() = default;
};
class DetectQRCodesResponseBodySuccessDetailsQRCodesQRCodesRectangle : public Darabonba::Model {
public:
  shared_ptr<string> height{};
  shared_ptr<string> left{};
  shared_ptr<string> top{};
  shared_ptr<string> width{};

  DetectQRCodesResponseBodySuccessDetailsQRCodesQRCodesRectangle() {}

  explicit DetectQRCodesResponseBodySuccessDetailsQRCodesQRCodesRectangle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      height = make_shared<string>(boost::any_cast<string>(m["Height"]));
    }
    if (m.find("Left") != m.end() && !m["Left"].empty()) {
      left = make_shared<string>(boost::any_cast<string>(m["Left"]));
    }
    if (m.find("Top") != m.end() && !m["Top"].empty()) {
      top = make_shared<string>(boost::any_cast<string>(m["Top"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<string>(boost::any_cast<string>(m["Width"]));
    }
  }


  virtual ~DetectQRCodesResponseBodySuccessDetailsQRCodesQRCodesRectangle() = default;
};
class DetectQRCodesResponseBodySuccessDetailsQRCodes : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<DetectQRCodesResponseBodySuccessDetailsQRCodesQRCodesRectangle> QRCodesRectangle{};

  DetectQRCodesResponseBodySuccessDetailsQRCodes() {}

  explicit DetectQRCodesResponseBodySuccessDetailsQRCodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (QRCodesRectangle) {
      res["QRCodesRectangle"] = QRCodesRectangle ? boost::any(QRCodesRectangle->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("QRCodesRectangle") != m.end() && !m["QRCodesRectangle"].empty()) {
      if (typeid(map<string, boost::any>) == m["QRCodesRectangle"].type()) {
        DetectQRCodesResponseBodySuccessDetailsQRCodesQRCodesRectangle model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["QRCodesRectangle"]));
        QRCodesRectangle = make_shared<DetectQRCodesResponseBodySuccessDetailsQRCodesQRCodesRectangle>(model1);
      }
    }
  }


  virtual ~DetectQRCodesResponseBodySuccessDetailsQRCodes() = default;
};
class DetectQRCodesResponseBodySuccessDetails : public Darabonba::Model {
public:
  shared_ptr<vector<DetectQRCodesResponseBodySuccessDetailsQRCodes>> QRCodes{};
  shared_ptr<string> srcUri{};

  DetectQRCodesResponseBodySuccessDetails() {}

  explicit DetectQRCodesResponseBodySuccessDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (QRCodes) {
      vector<boost::any> temp1;
      for(auto item1:*QRCodes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["QRCodes"] = boost::any(temp1);
    }
    if (srcUri) {
      res["SrcUri"] = boost::any(*srcUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QRCodes") != m.end() && !m["QRCodes"].empty()) {
      if (typeid(vector<boost::any>) == m["QRCodes"].type()) {
        vector<DetectQRCodesResponseBodySuccessDetailsQRCodes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["QRCodes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectQRCodesResponseBodySuccessDetailsQRCodes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        QRCodes = make_shared<vector<DetectQRCodesResponseBodySuccessDetailsQRCodes>>(expect1);
      }
    }
    if (m.find("SrcUri") != m.end() && !m["SrcUri"].empty()) {
      srcUri = make_shared<string>(boost::any_cast<string>(m["SrcUri"]));
    }
  }


  virtual ~DetectQRCodesResponseBodySuccessDetails() = default;
};
class DetectQRCodesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DetectQRCodesResponseBodyFailDetails>> failDetails{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DetectQRCodesResponseBodySuccessDetails>> successDetails{};

  DetectQRCodesResponseBody() {}

  explicit DetectQRCodesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failDetails) {
      vector<boost::any> temp1;
      for(auto item1:*failDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailDetails"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successDetails) {
      vector<boost::any> temp1;
      for(auto item1:*successDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SuccessDetails"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailDetails") != m.end() && !m["FailDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["FailDetails"].type()) {
        vector<DetectQRCodesResponseBodyFailDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectQRCodesResponseBodyFailDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failDetails = make_shared<vector<DetectQRCodesResponseBodyFailDetails>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SuccessDetails") != m.end() && !m["SuccessDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["SuccessDetails"].type()) {
        vector<DetectQRCodesResponseBodySuccessDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SuccessDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectQRCodesResponseBodySuccessDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        successDetails = make_shared<vector<DetectQRCodesResponseBodySuccessDetails>>(expect1);
      }
    }
  }


  virtual ~DetectQRCodesResponseBody() = default;
};
class DetectQRCodesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DetectQRCodesResponseBody> body{};

  DetectQRCodesResponse() {}

  explicit DetectQRCodesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DetectQRCodesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectQRCodesResponseBody>(model1);
      }
    }
  }


  virtual ~DetectQRCodesResponse() = default;
};
class EncodeBlindWatermarkRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> imageQuality{};
  shared_ptr<string> imageUri{};
  shared_ptr<string> model{};
  shared_ptr<string> project{};
  shared_ptr<string> targetImageType{};
  shared_ptr<string> targetUri{};
  shared_ptr<string> watermarkUri{};

  EncodeBlindWatermarkRequest() {}

  explicit EncodeBlindWatermarkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (imageQuality) {
      res["ImageQuality"] = boost::any(*imageQuality);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (targetImageType) {
      res["TargetImageType"] = boost::any(*targetImageType);
    }
    if (targetUri) {
      res["TargetUri"] = boost::any(*targetUri);
    }
    if (watermarkUri) {
      res["WatermarkUri"] = boost::any(*watermarkUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ImageQuality") != m.end() && !m["ImageQuality"].empty()) {
      imageQuality = make_shared<string>(boost::any_cast<string>(m["ImageQuality"]));
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("TargetImageType") != m.end() && !m["TargetImageType"].empty()) {
      targetImageType = make_shared<string>(boost::any_cast<string>(m["TargetImageType"]));
    }
    if (m.find("TargetUri") != m.end() && !m["TargetUri"].empty()) {
      targetUri = make_shared<string>(boost::any_cast<string>(m["TargetUri"]));
    }
    if (m.find("WatermarkUri") != m.end() && !m["WatermarkUri"].empty()) {
      watermarkUri = make_shared<string>(boost::any_cast<string>(m["WatermarkUri"]));
    }
  }


  virtual ~EncodeBlindWatermarkRequest() = default;
};
class EncodeBlindWatermarkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> requestId{};
  shared_ptr<string> targetUri{};

  EncodeBlindWatermarkResponseBody() {}

  explicit EncodeBlindWatermarkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (targetUri) {
      res["TargetUri"] = boost::any(*targetUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TargetUri") != m.end() && !m["TargetUri"].empty()) {
      targetUri = make_shared<string>(boost::any_cast<string>(m["TargetUri"]));
    }
  }


  virtual ~EncodeBlindWatermarkResponseBody() = default;
};
class EncodeBlindWatermarkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<EncodeBlindWatermarkResponseBody> body{};

  EncodeBlindWatermarkResponse() {}

  explicit EncodeBlindWatermarkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EncodeBlindWatermarkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EncodeBlindWatermarkResponseBody>(model1);
      }
    }
  }


  virtual ~EncodeBlindWatermarkResponse() = default;
};
class FindImagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> addressLineContentsMatch{};
  shared_ptr<string> ageRange{};
  shared_ptr<string> createTimeRange{};
  shared_ptr<string> emotion{};
  shared_ptr<string> externalId{};
  shared_ptr<string> facesModifyTimeRange{};
  shared_ptr<string> gender{};
  shared_ptr<string> groupId{};
  shared_ptr<string> imageSizeRange{};
  shared_ptr<string> imageTimeRange{};
  shared_ptr<long> limit{};
  shared_ptr<string> locationBoundary{};
  shared_ptr<string> marker{};
  shared_ptr<string> modifyTimeRange{};
  shared_ptr<string> OCRContentsMatch{};
  shared_ptr<string> order{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> project{};
  shared_ptr<string> remarksAPrefix{};
  shared_ptr<string> remarksArrayAIn{};
  shared_ptr<string> remarksArrayBIn{};
  shared_ptr<string> remarksBPrefix{};
  shared_ptr<string> remarksCPrefix{};
  shared_ptr<string> remarksDPrefix{};
  shared_ptr<string> setId{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> sourceUriPrefix{};
  shared_ptr<string> tagNames{};
  shared_ptr<string> tagsModifyTimeRange{};

  FindImagesRequest() {}

  explicit FindImagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressLineContentsMatch) {
      res["AddressLineContentsMatch"] = boost::any(*addressLineContentsMatch);
    }
    if (ageRange) {
      res["AgeRange"] = boost::any(*ageRange);
    }
    if (createTimeRange) {
      res["CreateTimeRange"] = boost::any(*createTimeRange);
    }
    if (emotion) {
      res["Emotion"] = boost::any(*emotion);
    }
    if (externalId) {
      res["ExternalId"] = boost::any(*externalId);
    }
    if (facesModifyTimeRange) {
      res["FacesModifyTimeRange"] = boost::any(*facesModifyTimeRange);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (imageSizeRange) {
      res["ImageSizeRange"] = boost::any(*imageSizeRange);
    }
    if (imageTimeRange) {
      res["ImageTimeRange"] = boost::any(*imageTimeRange);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (locationBoundary) {
      res["LocationBoundary"] = boost::any(*locationBoundary);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (modifyTimeRange) {
      res["ModifyTimeRange"] = boost::any(*modifyTimeRange);
    }
    if (OCRContentsMatch) {
      res["OCRContentsMatch"] = boost::any(*OCRContentsMatch);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (remarksAPrefix) {
      res["RemarksAPrefix"] = boost::any(*remarksAPrefix);
    }
    if (remarksArrayAIn) {
      res["RemarksArrayAIn"] = boost::any(*remarksArrayAIn);
    }
    if (remarksArrayBIn) {
      res["RemarksArrayBIn"] = boost::any(*remarksArrayBIn);
    }
    if (remarksBPrefix) {
      res["RemarksBPrefix"] = boost::any(*remarksBPrefix);
    }
    if (remarksCPrefix) {
      res["RemarksCPrefix"] = boost::any(*remarksCPrefix);
    }
    if (remarksDPrefix) {
      res["RemarksDPrefix"] = boost::any(*remarksDPrefix);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (sourceUriPrefix) {
      res["SourceUriPrefix"] = boost::any(*sourceUriPrefix);
    }
    if (tagNames) {
      res["TagNames"] = boost::any(*tagNames);
    }
    if (tagsModifyTimeRange) {
      res["TagsModifyTimeRange"] = boost::any(*tagsModifyTimeRange);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressLineContentsMatch") != m.end() && !m["AddressLineContentsMatch"].empty()) {
      addressLineContentsMatch = make_shared<string>(boost::any_cast<string>(m["AddressLineContentsMatch"]));
    }
    if (m.find("AgeRange") != m.end() && !m["AgeRange"].empty()) {
      ageRange = make_shared<string>(boost::any_cast<string>(m["AgeRange"]));
    }
    if (m.find("CreateTimeRange") != m.end() && !m["CreateTimeRange"].empty()) {
      createTimeRange = make_shared<string>(boost::any_cast<string>(m["CreateTimeRange"]));
    }
    if (m.find("Emotion") != m.end() && !m["Emotion"].empty()) {
      emotion = make_shared<string>(boost::any_cast<string>(m["Emotion"]));
    }
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      externalId = make_shared<string>(boost::any_cast<string>(m["ExternalId"]));
    }
    if (m.find("FacesModifyTimeRange") != m.end() && !m["FacesModifyTimeRange"].empty()) {
      facesModifyTimeRange = make_shared<string>(boost::any_cast<string>(m["FacesModifyTimeRange"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("ImageSizeRange") != m.end() && !m["ImageSizeRange"].empty()) {
      imageSizeRange = make_shared<string>(boost::any_cast<string>(m["ImageSizeRange"]));
    }
    if (m.find("ImageTimeRange") != m.end() && !m["ImageTimeRange"].empty()) {
      imageTimeRange = make_shared<string>(boost::any_cast<string>(m["ImageTimeRange"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("LocationBoundary") != m.end() && !m["LocationBoundary"].empty()) {
      locationBoundary = make_shared<string>(boost::any_cast<string>(m["LocationBoundary"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("ModifyTimeRange") != m.end() && !m["ModifyTimeRange"].empty()) {
      modifyTimeRange = make_shared<string>(boost::any_cast<string>(m["ModifyTimeRange"]));
    }
    if (m.find("OCRContentsMatch") != m.end() && !m["OCRContentsMatch"].empty()) {
      OCRContentsMatch = make_shared<string>(boost::any_cast<string>(m["OCRContentsMatch"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("RemarksAPrefix") != m.end() && !m["RemarksAPrefix"].empty()) {
      remarksAPrefix = make_shared<string>(boost::any_cast<string>(m["RemarksAPrefix"]));
    }
    if (m.find("RemarksArrayAIn") != m.end() && !m["RemarksArrayAIn"].empty()) {
      remarksArrayAIn = make_shared<string>(boost::any_cast<string>(m["RemarksArrayAIn"]));
    }
    if (m.find("RemarksArrayBIn") != m.end() && !m["RemarksArrayBIn"].empty()) {
      remarksArrayBIn = make_shared<string>(boost::any_cast<string>(m["RemarksArrayBIn"]));
    }
    if (m.find("RemarksBPrefix") != m.end() && !m["RemarksBPrefix"].empty()) {
      remarksBPrefix = make_shared<string>(boost::any_cast<string>(m["RemarksBPrefix"]));
    }
    if (m.find("RemarksCPrefix") != m.end() && !m["RemarksCPrefix"].empty()) {
      remarksCPrefix = make_shared<string>(boost::any_cast<string>(m["RemarksCPrefix"]));
    }
    if (m.find("RemarksDPrefix") != m.end() && !m["RemarksDPrefix"].empty()) {
      remarksDPrefix = make_shared<string>(boost::any_cast<string>(m["RemarksDPrefix"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SourceUriPrefix") != m.end() && !m["SourceUriPrefix"].empty()) {
      sourceUriPrefix = make_shared<string>(boost::any_cast<string>(m["SourceUriPrefix"]));
    }
    if (m.find("TagNames") != m.end() && !m["TagNames"].empty()) {
      tagNames = make_shared<string>(boost::any_cast<string>(m["TagNames"]));
    }
    if (m.find("TagsModifyTimeRange") != m.end() && !m["TagsModifyTimeRange"].empty()) {
      tagsModifyTimeRange = make_shared<string>(boost::any_cast<string>(m["TagsModifyTimeRange"]));
    }
  }


  virtual ~FindImagesRequest() = default;
};
class FindImagesResponseBodyImagesAddress : public Darabonba::Model {
public:
  shared_ptr<string> addressLine{};
  shared_ptr<string> city{};
  shared_ptr<string> country{};
  shared_ptr<string> district{};
  shared_ptr<string> province{};
  shared_ptr<string> township{};

  FindImagesResponseBodyImagesAddress() {}

  explicit FindImagesResponseBodyImagesAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("Township") != m.end() && !m["Township"].empty()) {
      township = make_shared<string>(boost::any_cast<string>(m["Township"]));
    }
  }


  virtual ~FindImagesResponseBodyImagesAddress() = default;
};
class FindImagesResponseBodyImagesCroppingSuggestionCroppingBoundary : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  FindImagesResponseBodyImagesCroppingSuggestionCroppingBoundary() {}

  explicit FindImagesResponseBodyImagesCroppingSuggestionCroppingBoundary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~FindImagesResponseBodyImagesCroppingSuggestionCroppingBoundary() = default;
};
class FindImagesResponseBodyImagesCroppingSuggestion : public Darabonba::Model {
public:
  shared_ptr<string> aspectRatio{};
  shared_ptr<FindImagesResponseBodyImagesCroppingSuggestionCroppingBoundary> croppingBoundary{};
  shared_ptr<double> score{};

  FindImagesResponseBodyImagesCroppingSuggestion() {}

  explicit FindImagesResponseBodyImagesCroppingSuggestion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aspectRatio) {
      res["AspectRatio"] = boost::any(*aspectRatio);
    }
    if (croppingBoundary) {
      res["CroppingBoundary"] = croppingBoundary ? boost::any(croppingBoundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AspectRatio") != m.end() && !m["AspectRatio"].empty()) {
      aspectRatio = make_shared<string>(boost::any_cast<string>(m["AspectRatio"]));
    }
    if (m.find("CroppingBoundary") != m.end() && !m["CroppingBoundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["CroppingBoundary"].type()) {
        FindImagesResponseBodyImagesCroppingSuggestionCroppingBoundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CroppingBoundary"]));
        croppingBoundary = make_shared<FindImagesResponseBodyImagesCroppingSuggestionCroppingBoundary>(model1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
  }


  virtual ~FindImagesResponseBodyImagesCroppingSuggestion() = default;
};
class FindImagesResponseBodyImagesFacesEmotionDetails : public Darabonba::Model {
public:
  shared_ptr<double> ANGRY{};
  shared_ptr<double> CALM{};
  shared_ptr<double> DISGUSTED{};
  shared_ptr<double> HAPPY{};
  shared_ptr<double> SAD{};
  shared_ptr<double> SCARED{};
  shared_ptr<double> SURPRISED{};

  FindImagesResponseBodyImagesFacesEmotionDetails() {}

  explicit FindImagesResponseBodyImagesFacesEmotionDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ANGRY) {
      res["ANGRY"] = boost::any(*ANGRY);
    }
    if (CALM) {
      res["CALM"] = boost::any(*CALM);
    }
    if (DISGUSTED) {
      res["DISGUSTED"] = boost::any(*DISGUSTED);
    }
    if (HAPPY) {
      res["HAPPY"] = boost::any(*HAPPY);
    }
    if (SAD) {
      res["SAD"] = boost::any(*SAD);
    }
    if (SCARED) {
      res["SCARED"] = boost::any(*SCARED);
    }
    if (SURPRISED) {
      res["SURPRISED"] = boost::any(*SURPRISED);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ANGRY") != m.end() && !m["ANGRY"].empty()) {
      ANGRY = make_shared<double>(boost::any_cast<double>(m["ANGRY"]));
    }
    if (m.find("CALM") != m.end() && !m["CALM"].empty()) {
      CALM = make_shared<double>(boost::any_cast<double>(m["CALM"]));
    }
    if (m.find("DISGUSTED") != m.end() && !m["DISGUSTED"].empty()) {
      DISGUSTED = make_shared<double>(boost::any_cast<double>(m["DISGUSTED"]));
    }
    if (m.find("HAPPY") != m.end() && !m["HAPPY"].empty()) {
      HAPPY = make_shared<double>(boost::any_cast<double>(m["HAPPY"]));
    }
    if (m.find("SAD") != m.end() && !m["SAD"].empty()) {
      SAD = make_shared<double>(boost::any_cast<double>(m["SAD"]));
    }
    if (m.find("SCARED") != m.end() && !m["SCARED"].empty()) {
      SCARED = make_shared<double>(boost::any_cast<double>(m["SCARED"]));
    }
    if (m.find("SURPRISED") != m.end() && !m["SURPRISED"].empty()) {
      SURPRISED = make_shared<double>(boost::any_cast<double>(m["SURPRISED"]));
    }
  }


  virtual ~FindImagesResponseBodyImagesFacesEmotionDetails() = default;
};
class FindImagesResponseBodyImagesFacesFaceAttributesFaceBoundary : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  FindImagesResponseBodyImagesFacesFaceAttributesFaceBoundary() {}

  explicit FindImagesResponseBodyImagesFacesFaceAttributesFaceBoundary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~FindImagesResponseBodyImagesFacesFaceAttributesFaceBoundary() = default;
};
class FindImagesResponseBodyImagesFacesFaceAttributesHeadPose : public Darabonba::Model {
public:
  shared_ptr<double> pitch{};
  shared_ptr<double> roll{};
  shared_ptr<double> yaw{};

  FindImagesResponseBodyImagesFacesFaceAttributesHeadPose() {}

  explicit FindImagesResponseBodyImagesFacesFaceAttributesHeadPose(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~FindImagesResponseBodyImagesFacesFaceAttributesHeadPose() = default;
};
class FindImagesResponseBodyImagesFacesFaceAttributes : public Darabonba::Model {
public:
  shared_ptr<string> beard{};
  shared_ptr<double> beardConfidence{};
  shared_ptr<FindImagesResponseBodyImagesFacesFaceAttributesFaceBoundary> faceBoundary{};
  shared_ptr<string> glasses{};
  shared_ptr<double> glassesConfidence{};
  shared_ptr<FindImagesResponseBodyImagesFacesFaceAttributesHeadPose> headPose{};
  shared_ptr<string> mask{};
  shared_ptr<double> maskConfidence{};

  FindImagesResponseBodyImagesFacesFaceAttributes() {}

  explicit FindImagesResponseBodyImagesFacesFaceAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beard) {
      res["Beard"] = boost::any(*beard);
    }
    if (beardConfidence) {
      res["BeardConfidence"] = boost::any(*beardConfidence);
    }
    if (faceBoundary) {
      res["FaceBoundary"] = faceBoundary ? boost::any(faceBoundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (glasses) {
      res["Glasses"] = boost::any(*glasses);
    }
    if (glassesConfidence) {
      res["GlassesConfidence"] = boost::any(*glassesConfidence);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Beard") != m.end() && !m["Beard"].empty()) {
      beard = make_shared<string>(boost::any_cast<string>(m["Beard"]));
    }
    if (m.find("BeardConfidence") != m.end() && !m["BeardConfidence"].empty()) {
      beardConfidence = make_shared<double>(boost::any_cast<double>(m["BeardConfidence"]));
    }
    if (m.find("FaceBoundary") != m.end() && !m["FaceBoundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceBoundary"].type()) {
        FindImagesResponseBodyImagesFacesFaceAttributesFaceBoundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceBoundary"]));
        faceBoundary = make_shared<FindImagesResponseBodyImagesFacesFaceAttributesFaceBoundary>(model1);
      }
    }
    if (m.find("Glasses") != m.end() && !m["Glasses"].empty()) {
      glasses = make_shared<string>(boost::any_cast<string>(m["Glasses"]));
    }
    if (m.find("GlassesConfidence") != m.end() && !m["GlassesConfidence"].empty()) {
      glassesConfidence = make_shared<double>(boost::any_cast<double>(m["GlassesConfidence"]));
    }
    if (m.find("HeadPose") != m.end() && !m["HeadPose"].empty()) {
      if (typeid(map<string, boost::any>) == m["HeadPose"].type()) {
        FindImagesResponseBodyImagesFacesFaceAttributesHeadPose model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HeadPose"]));
        headPose = make_shared<FindImagesResponseBodyImagesFacesFaceAttributesHeadPose>(model1);
      }
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("MaskConfidence") != m.end() && !m["MaskConfidence"].empty()) {
      maskConfidence = make_shared<double>(boost::any_cast<double>(m["MaskConfidence"]));
    }
  }


  virtual ~FindImagesResponseBodyImagesFacesFaceAttributes() = default;
};
class FindImagesResponseBodyImagesFaces : public Darabonba::Model {
public:
  shared_ptr<long> age{};
  shared_ptr<double> attractive{};
  shared_ptr<string> emotion{};
  shared_ptr<double> emotionConfidence{};
  shared_ptr<FindImagesResponseBodyImagesFacesEmotionDetails> emotionDetails{};
  shared_ptr<FindImagesResponseBodyImagesFacesFaceAttributes> faceAttributes{};
  shared_ptr<double> faceConfidence{};
  shared_ptr<string> faceId{};
  shared_ptr<double> faceQuality{};
  shared_ptr<string> gender{};
  shared_ptr<double> genderConfidence{};
  shared_ptr<string> groupId{};

  FindImagesResponseBodyImagesFaces() {}

  explicit FindImagesResponseBodyImagesFaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (age) {
      res["Age"] = boost::any(*age);
    }
    if (attractive) {
      res["Attractive"] = boost::any(*attractive);
    }
    if (emotion) {
      res["Emotion"] = boost::any(*emotion);
    }
    if (emotionConfidence) {
      res["EmotionConfidence"] = boost::any(*emotionConfidence);
    }
    if (emotionDetails) {
      res["EmotionDetails"] = emotionDetails ? boost::any(emotionDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceAttributes) {
      res["FaceAttributes"] = faceAttributes ? boost::any(faceAttributes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceConfidence) {
      res["FaceConfidence"] = boost::any(*faceConfidence);
    }
    if (faceId) {
      res["FaceId"] = boost::any(*faceId);
    }
    if (faceQuality) {
      res["FaceQuality"] = boost::any(*faceQuality);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (genderConfidence) {
      res["GenderConfidence"] = boost::any(*genderConfidence);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Age") != m.end() && !m["Age"].empty()) {
      age = make_shared<long>(boost::any_cast<long>(m["Age"]));
    }
    if (m.find("Attractive") != m.end() && !m["Attractive"].empty()) {
      attractive = make_shared<double>(boost::any_cast<double>(m["Attractive"]));
    }
    if (m.find("Emotion") != m.end() && !m["Emotion"].empty()) {
      emotion = make_shared<string>(boost::any_cast<string>(m["Emotion"]));
    }
    if (m.find("EmotionConfidence") != m.end() && !m["EmotionConfidence"].empty()) {
      emotionConfidence = make_shared<double>(boost::any_cast<double>(m["EmotionConfidence"]));
    }
    if (m.find("EmotionDetails") != m.end() && !m["EmotionDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["EmotionDetails"].type()) {
        FindImagesResponseBodyImagesFacesEmotionDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EmotionDetails"]));
        emotionDetails = make_shared<FindImagesResponseBodyImagesFacesEmotionDetails>(model1);
      }
    }
    if (m.find("FaceAttributes") != m.end() && !m["FaceAttributes"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceAttributes"].type()) {
        FindImagesResponseBodyImagesFacesFaceAttributes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceAttributes"]));
        faceAttributes = make_shared<FindImagesResponseBodyImagesFacesFaceAttributes>(model1);
      }
    }
    if (m.find("FaceConfidence") != m.end() && !m["FaceConfidence"].empty()) {
      faceConfidence = make_shared<double>(boost::any_cast<double>(m["FaceConfidence"]));
    }
    if (m.find("FaceId") != m.end() && !m["FaceId"].empty()) {
      faceId = make_shared<string>(boost::any_cast<string>(m["FaceId"]));
    }
    if (m.find("FaceQuality") != m.end() && !m["FaceQuality"].empty()) {
      faceQuality = make_shared<double>(boost::any_cast<double>(m["FaceQuality"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("GenderConfidence") != m.end() && !m["GenderConfidence"].empty()) {
      genderConfidence = make_shared<double>(boost::any_cast<double>(m["GenderConfidence"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~FindImagesResponseBodyImagesFaces() = default;
};
class FindImagesResponseBodyImagesImageQuality : public Darabonba::Model {
public:
  shared_ptr<double> clarity{};
  shared_ptr<double> clarityScore{};
  shared_ptr<double> color{};
  shared_ptr<double> colorScore{};
  shared_ptr<double> compositionScore{};
  shared_ptr<double> contrast{};
  shared_ptr<double> contrastScore{};
  shared_ptr<double> exposure{};
  shared_ptr<double> exposureScore{};
  shared_ptr<double> overallScore{};

  FindImagesResponseBodyImagesImageQuality() {}

  explicit FindImagesResponseBodyImagesImageQuality(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clarity) {
      res["Clarity"] = boost::any(*clarity);
    }
    if (clarityScore) {
      res["ClarityScore"] = boost::any(*clarityScore);
    }
    if (color) {
      res["Color"] = boost::any(*color);
    }
    if (colorScore) {
      res["ColorScore"] = boost::any(*colorScore);
    }
    if (compositionScore) {
      res["CompositionScore"] = boost::any(*compositionScore);
    }
    if (contrast) {
      res["Contrast"] = boost::any(*contrast);
    }
    if (contrastScore) {
      res["ContrastScore"] = boost::any(*contrastScore);
    }
    if (exposure) {
      res["Exposure"] = boost::any(*exposure);
    }
    if (exposureScore) {
      res["ExposureScore"] = boost::any(*exposureScore);
    }
    if (overallScore) {
      res["OverallScore"] = boost::any(*overallScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clarity") != m.end() && !m["Clarity"].empty()) {
      clarity = make_shared<double>(boost::any_cast<double>(m["Clarity"]));
    }
    if (m.find("ClarityScore") != m.end() && !m["ClarityScore"].empty()) {
      clarityScore = make_shared<double>(boost::any_cast<double>(m["ClarityScore"]));
    }
    if (m.find("Color") != m.end() && !m["Color"].empty()) {
      color = make_shared<double>(boost::any_cast<double>(m["Color"]));
    }
    if (m.find("ColorScore") != m.end() && !m["ColorScore"].empty()) {
      colorScore = make_shared<double>(boost::any_cast<double>(m["ColorScore"]));
    }
    if (m.find("CompositionScore") != m.end() && !m["CompositionScore"].empty()) {
      compositionScore = make_shared<double>(boost::any_cast<double>(m["CompositionScore"]));
    }
    if (m.find("Contrast") != m.end() && !m["Contrast"].empty()) {
      contrast = make_shared<double>(boost::any_cast<double>(m["Contrast"]));
    }
    if (m.find("ContrastScore") != m.end() && !m["ContrastScore"].empty()) {
      contrastScore = make_shared<double>(boost::any_cast<double>(m["ContrastScore"]));
    }
    if (m.find("Exposure") != m.end() && !m["Exposure"].empty()) {
      exposure = make_shared<double>(boost::any_cast<double>(m["Exposure"]));
    }
    if (m.find("ExposureScore") != m.end() && !m["ExposureScore"].empty()) {
      exposureScore = make_shared<double>(boost::any_cast<double>(m["ExposureScore"]));
    }
    if (m.find("OverallScore") != m.end() && !m["OverallScore"].empty()) {
      overallScore = make_shared<double>(boost::any_cast<double>(m["OverallScore"]));
    }
  }


  virtual ~FindImagesResponseBodyImagesImageQuality() = default;
};
class FindImagesResponseBodyImagesOCROCRBoundary : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  FindImagesResponseBodyImagesOCROCRBoundary() {}

  explicit FindImagesResponseBodyImagesOCROCRBoundary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~FindImagesResponseBodyImagesOCROCRBoundary() = default;
};
class FindImagesResponseBodyImagesOCR : public Darabonba::Model {
public:
  shared_ptr<FindImagesResponseBodyImagesOCROCRBoundary> OCRBoundary{};
  shared_ptr<double> OCRConfidence{};
  shared_ptr<string> OCRContents{};

  FindImagesResponseBodyImagesOCR() {}

  explicit FindImagesResponseBodyImagesOCR(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (OCRBoundary) {
      res["OCRBoundary"] = OCRBoundary ? boost::any(OCRBoundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (OCRConfidence) {
      res["OCRConfidence"] = boost::any(*OCRConfidence);
    }
    if (OCRContents) {
      res["OCRContents"] = boost::any(*OCRContents);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OCRBoundary") != m.end() && !m["OCRBoundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["OCRBoundary"].type()) {
        FindImagesResponseBodyImagesOCROCRBoundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OCRBoundary"]));
        OCRBoundary = make_shared<FindImagesResponseBodyImagesOCROCRBoundary>(model1);
      }
    }
    if (m.find("OCRConfidence") != m.end() && !m["OCRConfidence"].empty()) {
      OCRConfidence = make_shared<double>(boost::any_cast<double>(m["OCRConfidence"]));
    }
    if (m.find("OCRContents") != m.end() && !m["OCRContents"].empty()) {
      OCRContents = make_shared<string>(boost::any_cast<string>(m["OCRContents"]));
    }
  }


  virtual ~FindImagesResponseBodyImagesOCR() = default;
};
class FindImagesResponseBodyImagesTags : public Darabonba::Model {
public:
  shared_ptr<double> centricScore{};
  shared_ptr<string> parentTagName{};
  shared_ptr<double> tagConfidence{};
  shared_ptr<long> tagLevel{};
  shared_ptr<string> tagName{};

  FindImagesResponseBodyImagesTags() {}

  explicit FindImagesResponseBodyImagesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (centricScore) {
      res["CentricScore"] = boost::any(*centricScore);
    }
    if (parentTagName) {
      res["ParentTagName"] = boost::any(*parentTagName);
    }
    if (tagConfidence) {
      res["TagConfidence"] = boost::any(*tagConfidence);
    }
    if (tagLevel) {
      res["TagLevel"] = boost::any(*tagLevel);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CentricScore") != m.end() && !m["CentricScore"].empty()) {
      centricScore = make_shared<double>(boost::any_cast<double>(m["CentricScore"]));
    }
    if (m.find("ParentTagName") != m.end() && !m["ParentTagName"].empty()) {
      parentTagName = make_shared<string>(boost::any_cast<string>(m["ParentTagName"]));
    }
    if (m.find("TagConfidence") != m.end() && !m["TagConfidence"].empty()) {
      tagConfidence = make_shared<double>(boost::any_cast<double>(m["TagConfidence"]));
    }
    if (m.find("TagLevel") != m.end() && !m["TagLevel"].empty()) {
      tagLevel = make_shared<long>(boost::any_cast<long>(m["TagLevel"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~FindImagesResponseBodyImagesTags() = default;
};
class FindImagesResponseBodyImages : public Darabonba::Model {
public:
  shared_ptr<FindImagesResponseBodyImagesAddress> address{};
  shared_ptr<string> addressFailReason{};
  shared_ptr<string> addressModifyTime{};
  shared_ptr<string> addressStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<vector<FindImagesResponseBodyImagesCroppingSuggestion>> croppingSuggestion{};
  shared_ptr<string> croppingSuggestionFailReason{};
  shared_ptr<string> croppingSuggestionModifyTime{};
  shared_ptr<string> croppingSuggestionStatus{};
  shared_ptr<string> exif{};
  shared_ptr<string> externalId{};
  shared_ptr<vector<FindImagesResponseBodyImagesFaces>> faces{};
  shared_ptr<string> facesFailReason{};
  shared_ptr<string> facesModifyTime{};
  shared_ptr<string> facesStatus{};
  shared_ptr<long> fileSize{};
  shared_ptr<string> imageFormat{};
  shared_ptr<long> imageHeight{};
  shared_ptr<FindImagesResponseBodyImagesImageQuality> imageQuality{};
  shared_ptr<string> imageQualityFailReason{};
  shared_ptr<string> imageQualityModifyTime{};
  shared_ptr<string> imageQualityStatus{};
  shared_ptr<string> imageTime{};
  shared_ptr<string> imageUri{};
  shared_ptr<long> imageWidth{};
  shared_ptr<string> location{};
  shared_ptr<string> modifyTime{};
  shared_ptr<vector<FindImagesResponseBodyImagesOCR>> OCR{};
  shared_ptr<string> OCRFailReason{};
  shared_ptr<string> OCRModifyTime{};
  shared_ptr<string> OCRStatus{};
  shared_ptr<string> orientation{};
  shared_ptr<string> remarksA{};
  shared_ptr<string> remarksArrayA{};
  shared_ptr<string> remarksArrayB{};
  shared_ptr<string> remarksB{};
  shared_ptr<string> remarksC{};
  shared_ptr<string> remarksD{};
  shared_ptr<string> sourcePosition{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> sourceUri{};
  shared_ptr<vector<FindImagesResponseBodyImagesTags>> tags{};
  shared_ptr<string> tagsFailReason{};
  shared_ptr<string> tagsModifyTime{};
  shared_ptr<string> tagsStatus{};

  FindImagesResponseBodyImages() {}

  explicit FindImagesResponseBodyImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = address ? boost::any(address->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (addressFailReason) {
      res["AddressFailReason"] = boost::any(*addressFailReason);
    }
    if (addressModifyTime) {
      res["AddressModifyTime"] = boost::any(*addressModifyTime);
    }
    if (addressStatus) {
      res["AddressStatus"] = boost::any(*addressStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (croppingSuggestion) {
      vector<boost::any> temp1;
      for(auto item1:*croppingSuggestion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CroppingSuggestion"] = boost::any(temp1);
    }
    if (croppingSuggestionFailReason) {
      res["CroppingSuggestionFailReason"] = boost::any(*croppingSuggestionFailReason);
    }
    if (croppingSuggestionModifyTime) {
      res["CroppingSuggestionModifyTime"] = boost::any(*croppingSuggestionModifyTime);
    }
    if (croppingSuggestionStatus) {
      res["CroppingSuggestionStatus"] = boost::any(*croppingSuggestionStatus);
    }
    if (exif) {
      res["Exif"] = boost::any(*exif);
    }
    if (externalId) {
      res["ExternalId"] = boost::any(*externalId);
    }
    if (faces) {
      vector<boost::any> temp1;
      for(auto item1:*faces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Faces"] = boost::any(temp1);
    }
    if (facesFailReason) {
      res["FacesFailReason"] = boost::any(*facesFailReason);
    }
    if (facesModifyTime) {
      res["FacesModifyTime"] = boost::any(*facesModifyTime);
    }
    if (facesStatus) {
      res["FacesStatus"] = boost::any(*facesStatus);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (imageFormat) {
      res["ImageFormat"] = boost::any(*imageFormat);
    }
    if (imageHeight) {
      res["ImageHeight"] = boost::any(*imageHeight);
    }
    if (imageQuality) {
      res["ImageQuality"] = imageQuality ? boost::any(imageQuality->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imageQualityFailReason) {
      res["ImageQualityFailReason"] = boost::any(*imageQualityFailReason);
    }
    if (imageQualityModifyTime) {
      res["ImageQualityModifyTime"] = boost::any(*imageQualityModifyTime);
    }
    if (imageQualityStatus) {
      res["ImageQualityStatus"] = boost::any(*imageQualityStatus);
    }
    if (imageTime) {
      res["ImageTime"] = boost::any(*imageTime);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (imageWidth) {
      res["ImageWidth"] = boost::any(*imageWidth);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (OCR) {
      vector<boost::any> temp1;
      for(auto item1:*OCR){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OCR"] = boost::any(temp1);
    }
    if (OCRFailReason) {
      res["OCRFailReason"] = boost::any(*OCRFailReason);
    }
    if (OCRModifyTime) {
      res["OCRModifyTime"] = boost::any(*OCRModifyTime);
    }
    if (OCRStatus) {
      res["OCRStatus"] = boost::any(*OCRStatus);
    }
    if (orientation) {
      res["Orientation"] = boost::any(*orientation);
    }
    if (remarksA) {
      res["RemarksA"] = boost::any(*remarksA);
    }
    if (remarksArrayA) {
      res["RemarksArrayA"] = boost::any(*remarksArrayA);
    }
    if (remarksArrayB) {
      res["RemarksArrayB"] = boost::any(*remarksArrayB);
    }
    if (remarksB) {
      res["RemarksB"] = boost::any(*remarksB);
    }
    if (remarksC) {
      res["RemarksC"] = boost::any(*remarksC);
    }
    if (remarksD) {
      res["RemarksD"] = boost::any(*remarksD);
    }
    if (sourcePosition) {
      res["SourcePosition"] = boost::any(*sourcePosition);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (sourceUri) {
      res["SourceUri"] = boost::any(*sourceUri);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (tagsFailReason) {
      res["TagsFailReason"] = boost::any(*tagsFailReason);
    }
    if (tagsModifyTime) {
      res["TagsModifyTime"] = boost::any(*tagsModifyTime);
    }
    if (tagsStatus) {
      res["TagsStatus"] = boost::any(*tagsStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      if (typeid(map<string, boost::any>) == m["Address"].type()) {
        FindImagesResponseBodyImagesAddress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Address"]));
        address = make_shared<FindImagesResponseBodyImagesAddress>(model1);
      }
    }
    if (m.find("AddressFailReason") != m.end() && !m["AddressFailReason"].empty()) {
      addressFailReason = make_shared<string>(boost::any_cast<string>(m["AddressFailReason"]));
    }
    if (m.find("AddressModifyTime") != m.end() && !m["AddressModifyTime"].empty()) {
      addressModifyTime = make_shared<string>(boost::any_cast<string>(m["AddressModifyTime"]));
    }
    if (m.find("AddressStatus") != m.end() && !m["AddressStatus"].empty()) {
      addressStatus = make_shared<string>(boost::any_cast<string>(m["AddressStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CroppingSuggestion") != m.end() && !m["CroppingSuggestion"].empty()) {
      if (typeid(vector<boost::any>) == m["CroppingSuggestion"].type()) {
        vector<FindImagesResponseBodyImagesCroppingSuggestion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CroppingSuggestion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FindImagesResponseBodyImagesCroppingSuggestion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        croppingSuggestion = make_shared<vector<FindImagesResponseBodyImagesCroppingSuggestion>>(expect1);
      }
    }
    if (m.find("CroppingSuggestionFailReason") != m.end() && !m["CroppingSuggestionFailReason"].empty()) {
      croppingSuggestionFailReason = make_shared<string>(boost::any_cast<string>(m["CroppingSuggestionFailReason"]));
    }
    if (m.find("CroppingSuggestionModifyTime") != m.end() && !m["CroppingSuggestionModifyTime"].empty()) {
      croppingSuggestionModifyTime = make_shared<string>(boost::any_cast<string>(m["CroppingSuggestionModifyTime"]));
    }
    if (m.find("CroppingSuggestionStatus") != m.end() && !m["CroppingSuggestionStatus"].empty()) {
      croppingSuggestionStatus = make_shared<string>(boost::any_cast<string>(m["CroppingSuggestionStatus"]));
    }
    if (m.find("Exif") != m.end() && !m["Exif"].empty()) {
      exif = make_shared<string>(boost::any_cast<string>(m["Exif"]));
    }
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      externalId = make_shared<string>(boost::any_cast<string>(m["ExternalId"]));
    }
    if (m.find("Faces") != m.end() && !m["Faces"].empty()) {
      if (typeid(vector<boost::any>) == m["Faces"].type()) {
        vector<FindImagesResponseBodyImagesFaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Faces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FindImagesResponseBodyImagesFaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faces = make_shared<vector<FindImagesResponseBodyImagesFaces>>(expect1);
      }
    }
    if (m.find("FacesFailReason") != m.end() && !m["FacesFailReason"].empty()) {
      facesFailReason = make_shared<string>(boost::any_cast<string>(m["FacesFailReason"]));
    }
    if (m.find("FacesModifyTime") != m.end() && !m["FacesModifyTime"].empty()) {
      facesModifyTime = make_shared<string>(boost::any_cast<string>(m["FacesModifyTime"]));
    }
    if (m.find("FacesStatus") != m.end() && !m["FacesStatus"].empty()) {
      facesStatus = make_shared<string>(boost::any_cast<string>(m["FacesStatus"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
    if (m.find("ImageFormat") != m.end() && !m["ImageFormat"].empty()) {
      imageFormat = make_shared<string>(boost::any_cast<string>(m["ImageFormat"]));
    }
    if (m.find("ImageHeight") != m.end() && !m["ImageHeight"].empty()) {
      imageHeight = make_shared<long>(boost::any_cast<long>(m["ImageHeight"]));
    }
    if (m.find("ImageQuality") != m.end() && !m["ImageQuality"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImageQuality"].type()) {
        FindImagesResponseBodyImagesImageQuality model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImageQuality"]));
        imageQuality = make_shared<FindImagesResponseBodyImagesImageQuality>(model1);
      }
    }
    if (m.find("ImageQualityFailReason") != m.end() && !m["ImageQualityFailReason"].empty()) {
      imageQualityFailReason = make_shared<string>(boost::any_cast<string>(m["ImageQualityFailReason"]));
    }
    if (m.find("ImageQualityModifyTime") != m.end() && !m["ImageQualityModifyTime"].empty()) {
      imageQualityModifyTime = make_shared<string>(boost::any_cast<string>(m["ImageQualityModifyTime"]));
    }
    if (m.find("ImageQualityStatus") != m.end() && !m["ImageQualityStatus"].empty()) {
      imageQualityStatus = make_shared<string>(boost::any_cast<string>(m["ImageQualityStatus"]));
    }
    if (m.find("ImageTime") != m.end() && !m["ImageTime"].empty()) {
      imageTime = make_shared<string>(boost::any_cast<string>(m["ImageTime"]));
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("ImageWidth") != m.end() && !m["ImageWidth"].empty()) {
      imageWidth = make_shared<long>(boost::any_cast<long>(m["ImageWidth"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("OCR") != m.end() && !m["OCR"].empty()) {
      if (typeid(vector<boost::any>) == m["OCR"].type()) {
        vector<FindImagesResponseBodyImagesOCR> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OCR"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FindImagesResponseBodyImagesOCR model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        OCR = make_shared<vector<FindImagesResponseBodyImagesOCR>>(expect1);
      }
    }
    if (m.find("OCRFailReason") != m.end() && !m["OCRFailReason"].empty()) {
      OCRFailReason = make_shared<string>(boost::any_cast<string>(m["OCRFailReason"]));
    }
    if (m.find("OCRModifyTime") != m.end() && !m["OCRModifyTime"].empty()) {
      OCRModifyTime = make_shared<string>(boost::any_cast<string>(m["OCRModifyTime"]));
    }
    if (m.find("OCRStatus") != m.end() && !m["OCRStatus"].empty()) {
      OCRStatus = make_shared<string>(boost::any_cast<string>(m["OCRStatus"]));
    }
    if (m.find("Orientation") != m.end() && !m["Orientation"].empty()) {
      orientation = make_shared<string>(boost::any_cast<string>(m["Orientation"]));
    }
    if (m.find("RemarksA") != m.end() && !m["RemarksA"].empty()) {
      remarksA = make_shared<string>(boost::any_cast<string>(m["RemarksA"]));
    }
    if (m.find("RemarksArrayA") != m.end() && !m["RemarksArrayA"].empty()) {
      remarksArrayA = make_shared<string>(boost::any_cast<string>(m["RemarksArrayA"]));
    }
    if (m.find("RemarksArrayB") != m.end() && !m["RemarksArrayB"].empty()) {
      remarksArrayB = make_shared<string>(boost::any_cast<string>(m["RemarksArrayB"]));
    }
    if (m.find("RemarksB") != m.end() && !m["RemarksB"].empty()) {
      remarksB = make_shared<string>(boost::any_cast<string>(m["RemarksB"]));
    }
    if (m.find("RemarksC") != m.end() && !m["RemarksC"].empty()) {
      remarksC = make_shared<string>(boost::any_cast<string>(m["RemarksC"]));
    }
    if (m.find("RemarksD") != m.end() && !m["RemarksD"].empty()) {
      remarksD = make_shared<string>(boost::any_cast<string>(m["RemarksD"]));
    }
    if (m.find("SourcePosition") != m.end() && !m["SourcePosition"].empty()) {
      sourcePosition = make_shared<string>(boost::any_cast<string>(m["SourcePosition"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SourceUri") != m.end() && !m["SourceUri"].empty()) {
      sourceUri = make_shared<string>(boost::any_cast<string>(m["SourceUri"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<FindImagesResponseBodyImagesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FindImagesResponseBodyImagesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<FindImagesResponseBodyImagesTags>>(expect1);
      }
    }
    if (m.find("TagsFailReason") != m.end() && !m["TagsFailReason"].empty()) {
      tagsFailReason = make_shared<string>(boost::any_cast<string>(m["TagsFailReason"]));
    }
    if (m.find("TagsModifyTime") != m.end() && !m["TagsModifyTime"].empty()) {
      tagsModifyTime = make_shared<string>(boost::any_cast<string>(m["TagsModifyTime"]));
    }
    if (m.find("TagsStatus") != m.end() && !m["TagsStatus"].empty()) {
      tagsStatus = make_shared<string>(boost::any_cast<string>(m["TagsStatus"]));
    }
  }


  virtual ~FindImagesResponseBodyImages() = default;
};
class FindImagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<FindImagesResponseBodyImages>> images{};
  shared_ptr<string> nextMarker{};
  shared_ptr<string> requestId{};
  shared_ptr<string> setId{};

  FindImagesResponseBody() {}

  explicit FindImagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (nextMarker) {
      res["NextMarker"] = boost::any(*nextMarker);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<FindImagesResponseBodyImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FindImagesResponseBodyImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<FindImagesResponseBodyImages>>(expect1);
      }
    }
    if (m.find("NextMarker") != m.end() && !m["NextMarker"].empty()) {
      nextMarker = make_shared<string>(boost::any_cast<string>(m["NextMarker"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
  }


  virtual ~FindImagesResponseBody() = default;
};
class FindImagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FindImagesResponseBody> body{};

  FindImagesResponse() {}

  explicit FindImagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FindImagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FindImagesResponseBody>(model1);
      }
    }
  }


  virtual ~FindImagesResponse() = default;
};
class FindSimilarFacesRequest : public Darabonba::Model {
public:
  shared_ptr<string> faceId{};
  shared_ptr<string> imageUri{};
  shared_ptr<long> limit{};
  shared_ptr<double> minSimilarity{};
  shared_ptr<string> project{};
  shared_ptr<string> responseFormat{};
  shared_ptr<string> setId{};

  FindSimilarFacesRequest() {}

  explicit FindSimilarFacesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceId) {
      res["FaceId"] = boost::any(*faceId);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (minSimilarity) {
      res["MinSimilarity"] = boost::any(*minSimilarity);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (responseFormat) {
      res["ResponseFormat"] = boost::any(*responseFormat);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceId") != m.end() && !m["FaceId"].empty()) {
      faceId = make_shared<string>(boost::any_cast<string>(m["FaceId"]));
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("MinSimilarity") != m.end() && !m["MinSimilarity"].empty()) {
      minSimilarity = make_shared<double>(boost::any_cast<double>(m["MinSimilarity"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("ResponseFormat") != m.end() && !m["ResponseFormat"].empty()) {
      responseFormat = make_shared<string>(boost::any_cast<string>(m["ResponseFormat"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
  }


  virtual ~FindSimilarFacesRequest() = default;
};
class FindSimilarFacesResponseBodyFacesFaceAttributesFaceBoundary : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  FindSimilarFacesResponseBodyFacesFaceAttributesFaceBoundary() {}

  explicit FindSimilarFacesResponseBodyFacesFaceAttributesFaceBoundary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~FindSimilarFacesResponseBodyFacesFaceAttributesFaceBoundary() = default;
};
class FindSimilarFacesResponseBodyFacesFaceAttributes : public Darabonba::Model {
public:
  shared_ptr<FindSimilarFacesResponseBodyFacesFaceAttributesFaceBoundary> faceBoundary{};

  FindSimilarFacesResponseBodyFacesFaceAttributes() {}

  explicit FindSimilarFacesResponseBodyFacesFaceAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceBoundary) {
      res["FaceBoundary"] = faceBoundary ? boost::any(faceBoundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceBoundary") != m.end() && !m["FaceBoundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceBoundary"].type()) {
        FindSimilarFacesResponseBodyFacesFaceAttributesFaceBoundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceBoundary"]));
        faceBoundary = make_shared<FindSimilarFacesResponseBodyFacesFaceAttributesFaceBoundary>(model1);
      }
    }
  }


  virtual ~FindSimilarFacesResponseBodyFacesFaceAttributes() = default;
};
class FindSimilarFacesResponseBodyFacesSimilarFacesFaceAttributesFaceBoundary : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  FindSimilarFacesResponseBodyFacesSimilarFacesFaceAttributesFaceBoundary() {}

  explicit FindSimilarFacesResponseBodyFacesSimilarFacesFaceAttributesFaceBoundary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~FindSimilarFacesResponseBodyFacesSimilarFacesFaceAttributesFaceBoundary() = default;
};
class FindSimilarFacesResponseBodyFacesSimilarFacesFaceAttributes : public Darabonba::Model {
public:
  shared_ptr<FindSimilarFacesResponseBodyFacesSimilarFacesFaceAttributesFaceBoundary> faceBoundary{};

  FindSimilarFacesResponseBodyFacesSimilarFacesFaceAttributes() {}

  explicit FindSimilarFacesResponseBodyFacesSimilarFacesFaceAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceBoundary) {
      res["FaceBoundary"] = faceBoundary ? boost::any(faceBoundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceBoundary") != m.end() && !m["FaceBoundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceBoundary"].type()) {
        FindSimilarFacesResponseBodyFacesSimilarFacesFaceAttributesFaceBoundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceBoundary"]));
        faceBoundary = make_shared<FindSimilarFacesResponseBodyFacesSimilarFacesFaceAttributesFaceBoundary>(model1);
      }
    }
  }


  virtual ~FindSimilarFacesResponseBodyFacesSimilarFacesFaceAttributes() = default;
};
class FindSimilarFacesResponseBodyFacesSimilarFaces : public Darabonba::Model {
public:
  shared_ptr<string> externalId{};
  shared_ptr<FindSimilarFacesResponseBodyFacesSimilarFacesFaceAttributes> faceAttributes{};
  shared_ptr<string> faceId{};
  shared_ptr<string> imageUri{};
  shared_ptr<double> similarity{};

  FindSimilarFacesResponseBodyFacesSimilarFaces() {}

  explicit FindSimilarFacesResponseBodyFacesSimilarFaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalId) {
      res["ExternalId"] = boost::any(*externalId);
    }
    if (faceAttributes) {
      res["FaceAttributes"] = faceAttributes ? boost::any(faceAttributes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceId) {
      res["FaceId"] = boost::any(*faceId);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (similarity) {
      res["Similarity"] = boost::any(*similarity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      externalId = make_shared<string>(boost::any_cast<string>(m["ExternalId"]));
    }
    if (m.find("FaceAttributes") != m.end() && !m["FaceAttributes"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceAttributes"].type()) {
        FindSimilarFacesResponseBodyFacesSimilarFacesFaceAttributes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceAttributes"]));
        faceAttributes = make_shared<FindSimilarFacesResponseBodyFacesSimilarFacesFaceAttributes>(model1);
      }
    }
    if (m.find("FaceId") != m.end() && !m["FaceId"].empty()) {
      faceId = make_shared<string>(boost::any_cast<string>(m["FaceId"]));
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("Similarity") != m.end() && !m["Similarity"].empty()) {
      similarity = make_shared<double>(boost::any_cast<double>(m["Similarity"]));
    }
  }


  virtual ~FindSimilarFacesResponseBodyFacesSimilarFaces() = default;
};
class FindSimilarFacesResponseBodyFaces : public Darabonba::Model {
public:
  shared_ptr<string> externalId{};
  shared_ptr<FindSimilarFacesResponseBodyFacesFaceAttributes> faceAttributes{};
  shared_ptr<string> faceId{};
  shared_ptr<string> imageUri{};
  shared_ptr<vector<FindSimilarFacesResponseBodyFacesSimilarFaces>> similarFaces{};
  shared_ptr<double> similarity{};

  FindSimilarFacesResponseBodyFaces() {}

  explicit FindSimilarFacesResponseBodyFaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalId) {
      res["ExternalId"] = boost::any(*externalId);
    }
    if (faceAttributes) {
      res["FaceAttributes"] = faceAttributes ? boost::any(faceAttributes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceId) {
      res["FaceId"] = boost::any(*faceId);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (similarFaces) {
      vector<boost::any> temp1;
      for(auto item1:*similarFaces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SimilarFaces"] = boost::any(temp1);
    }
    if (similarity) {
      res["Similarity"] = boost::any(*similarity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      externalId = make_shared<string>(boost::any_cast<string>(m["ExternalId"]));
    }
    if (m.find("FaceAttributes") != m.end() && !m["FaceAttributes"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceAttributes"].type()) {
        FindSimilarFacesResponseBodyFacesFaceAttributes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceAttributes"]));
        faceAttributes = make_shared<FindSimilarFacesResponseBodyFacesFaceAttributes>(model1);
      }
    }
    if (m.find("FaceId") != m.end() && !m["FaceId"].empty()) {
      faceId = make_shared<string>(boost::any_cast<string>(m["FaceId"]));
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("SimilarFaces") != m.end() && !m["SimilarFaces"].empty()) {
      if (typeid(vector<boost::any>) == m["SimilarFaces"].type()) {
        vector<FindSimilarFacesResponseBodyFacesSimilarFaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SimilarFaces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FindSimilarFacesResponseBodyFacesSimilarFaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        similarFaces = make_shared<vector<FindSimilarFacesResponseBodyFacesSimilarFaces>>(expect1);
      }
    }
    if (m.find("Similarity") != m.end() && !m["Similarity"].empty()) {
      similarity = make_shared<double>(boost::any_cast<double>(m["Similarity"]));
    }
  }


  virtual ~FindSimilarFacesResponseBodyFaces() = default;
};
class FindSimilarFacesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<FindSimilarFacesResponseBodyFaces>> faces{};
  shared_ptr<string> requestId{};

  FindSimilarFacesResponseBody() {}

  explicit FindSimilarFacesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<FindSimilarFacesResponseBodyFaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Faces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FindSimilarFacesResponseBodyFaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faces = make_shared<vector<FindSimilarFacesResponseBodyFaces>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~FindSimilarFacesResponseBody() = default;
};
class FindSimilarFacesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FindSimilarFacesResponseBody> body{};

  FindSimilarFacesResponse() {}

  explicit FindSimilarFacesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FindSimilarFacesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FindSimilarFacesResponseBody>(model1);
      }
    }
  }


  virtual ~FindSimilarFacesResponse() = default;
};
class GetContentKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> DRMServerId{};
  shared_ptr<string> keyIds{};
  shared_ptr<string> project{};
  shared_ptr<string> versionId{};

  GetContentKeyRequest() {}

  explicit GetContentKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DRMServerId) {
      res["DRMServerId"] = boost::any(*DRMServerId);
    }
    if (keyIds) {
      res["KeyIds"] = boost::any(*keyIds);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DRMServerId") != m.end() && !m["DRMServerId"].empty()) {
      DRMServerId = make_shared<string>(boost::any_cast<string>(m["DRMServerId"]));
    }
    if (m.find("KeyIds") != m.end() && !m["KeyIds"].empty()) {
      keyIds = make_shared<string>(boost::any_cast<string>(m["KeyIds"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~GetContentKeyRequest() = default;
};
class GetContentKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> keyInfos{};
  shared_ptr<string> requestId{};
  shared_ptr<string> versionId{};

  GetContentKeyResponseBody() {}

  explicit GetContentKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (keyInfos) {
      res["KeyInfos"] = boost::any(*keyInfos);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (versionId) {
      res["VersionId"] = boost::any(*versionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KeyInfos") != m.end() && !m["KeyInfos"].empty()) {
      keyInfos = make_shared<string>(boost::any_cast<string>(m["KeyInfos"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VersionId") != m.end() && !m["VersionId"].empty()) {
      versionId = make_shared<string>(boost::any_cast<string>(m["VersionId"]));
    }
  }


  virtual ~GetContentKeyResponseBody() = default;
};
class GetContentKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetContentKeyResponseBody> body{};

  GetContentKeyResponse() {}

  explicit GetContentKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetContentKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetContentKeyResponseBody>(model1);
      }
    }
  }


  virtual ~GetContentKeyResponse() = default;
};
class GetDRMLicenseRequest : public Darabonba::Model {
public:
  shared_ptr<string> DRMLicense{};
  shared_ptr<string> DRMType{};
  shared_ptr<string> project{};

  GetDRMLicenseRequest() {}

  explicit GetDRMLicenseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DRMLicense) {
      res["DRMLicense"] = boost::any(*DRMLicense);
    }
    if (DRMType) {
      res["DRMType"] = boost::any(*DRMType);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DRMLicense") != m.end() && !m["DRMLicense"].empty()) {
      DRMLicense = make_shared<string>(boost::any_cast<string>(m["DRMLicense"]));
    }
    if (m.find("DRMType") != m.end() && !m["DRMType"].empty()) {
      DRMType = make_shared<string>(boost::any_cast<string>(m["DRMType"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
  }


  virtual ~GetDRMLicenseRequest() = default;
};
class GetDRMLicenseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> DRMData{};
  shared_ptr<string> deviceInfo{};
  shared_ptr<string> requestId{};

  GetDRMLicenseResponseBody() {}

  explicit GetDRMLicenseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (DRMData) {
      res["DRMData"] = boost::any(*DRMData);
    }
    if (deviceInfo) {
      res["DeviceInfo"] = boost::any(*deviceInfo);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DRMData") != m.end() && !m["DRMData"].empty()) {
      DRMData = make_shared<string>(boost::any_cast<string>(m["DRMData"]));
    }
    if (m.find("DeviceInfo") != m.end() && !m["DeviceInfo"].empty()) {
      deviceInfo = make_shared<string>(boost::any_cast<string>(m["DeviceInfo"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDRMLicenseResponseBody() = default;
};
class GetDRMLicenseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetDRMLicenseResponseBody> body{};

  GetDRMLicenseResponse() {}

  explicit GetDRMLicenseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDRMLicenseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDRMLicenseResponseBody>(model1);
      }
    }
  }


  virtual ~GetDRMLicenseResponse() = default;
};
class GetImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUri{};
  shared_ptr<string> project{};
  shared_ptr<string> setId{};

  GetImageRequest() {}

  explicit GetImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
  }


  virtual ~GetImageRequest() = default;
};
class GetImageResponseBodyAddress : public Darabonba::Model {
public:
  shared_ptr<string> addressLine{};
  shared_ptr<string> city{};
  shared_ptr<string> country{};
  shared_ptr<string> district{};
  shared_ptr<string> province{};
  shared_ptr<string> township{};

  GetImageResponseBodyAddress() {}

  explicit GetImageResponseBodyAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("Township") != m.end() && !m["Township"].empty()) {
      township = make_shared<string>(boost::any_cast<string>(m["Township"]));
    }
  }


  virtual ~GetImageResponseBodyAddress() = default;
};
class GetImageResponseBodyCroppingSuggestionCroppingBoundary : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  GetImageResponseBodyCroppingSuggestionCroppingBoundary() {}

  explicit GetImageResponseBodyCroppingSuggestionCroppingBoundary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetImageResponseBodyCroppingSuggestionCroppingBoundary() = default;
};
class GetImageResponseBodyCroppingSuggestion : public Darabonba::Model {
public:
  shared_ptr<string> aspectRatio{};
  shared_ptr<GetImageResponseBodyCroppingSuggestionCroppingBoundary> croppingBoundary{};
  shared_ptr<double> score{};

  GetImageResponseBodyCroppingSuggestion() {}

  explicit GetImageResponseBodyCroppingSuggestion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aspectRatio) {
      res["AspectRatio"] = boost::any(*aspectRatio);
    }
    if (croppingBoundary) {
      res["CroppingBoundary"] = croppingBoundary ? boost::any(croppingBoundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AspectRatio") != m.end() && !m["AspectRatio"].empty()) {
      aspectRatio = make_shared<string>(boost::any_cast<string>(m["AspectRatio"]));
    }
    if (m.find("CroppingBoundary") != m.end() && !m["CroppingBoundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["CroppingBoundary"].type()) {
        GetImageResponseBodyCroppingSuggestionCroppingBoundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CroppingBoundary"]));
        croppingBoundary = make_shared<GetImageResponseBodyCroppingSuggestionCroppingBoundary>(model1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
  }


  virtual ~GetImageResponseBodyCroppingSuggestion() = default;
};
class GetImageResponseBodyFacesEmotionDetails : public Darabonba::Model {
public:
  shared_ptr<double> ANGRY{};
  shared_ptr<double> CALM{};
  shared_ptr<double> DISGUSTED{};
  shared_ptr<double> HAPPY{};
  shared_ptr<double> SAD{};
  shared_ptr<double> SCARED{};
  shared_ptr<double> SURPRISED{};

  GetImageResponseBodyFacesEmotionDetails() {}

  explicit GetImageResponseBodyFacesEmotionDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ANGRY) {
      res["ANGRY"] = boost::any(*ANGRY);
    }
    if (CALM) {
      res["CALM"] = boost::any(*CALM);
    }
    if (DISGUSTED) {
      res["DISGUSTED"] = boost::any(*DISGUSTED);
    }
    if (HAPPY) {
      res["HAPPY"] = boost::any(*HAPPY);
    }
    if (SAD) {
      res["SAD"] = boost::any(*SAD);
    }
    if (SCARED) {
      res["SCARED"] = boost::any(*SCARED);
    }
    if (SURPRISED) {
      res["SURPRISED"] = boost::any(*SURPRISED);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ANGRY") != m.end() && !m["ANGRY"].empty()) {
      ANGRY = make_shared<double>(boost::any_cast<double>(m["ANGRY"]));
    }
    if (m.find("CALM") != m.end() && !m["CALM"].empty()) {
      CALM = make_shared<double>(boost::any_cast<double>(m["CALM"]));
    }
    if (m.find("DISGUSTED") != m.end() && !m["DISGUSTED"].empty()) {
      DISGUSTED = make_shared<double>(boost::any_cast<double>(m["DISGUSTED"]));
    }
    if (m.find("HAPPY") != m.end() && !m["HAPPY"].empty()) {
      HAPPY = make_shared<double>(boost::any_cast<double>(m["HAPPY"]));
    }
    if (m.find("SAD") != m.end() && !m["SAD"].empty()) {
      SAD = make_shared<double>(boost::any_cast<double>(m["SAD"]));
    }
    if (m.find("SCARED") != m.end() && !m["SCARED"].empty()) {
      SCARED = make_shared<double>(boost::any_cast<double>(m["SCARED"]));
    }
    if (m.find("SURPRISED") != m.end() && !m["SURPRISED"].empty()) {
      SURPRISED = make_shared<double>(boost::any_cast<double>(m["SURPRISED"]));
    }
  }


  virtual ~GetImageResponseBodyFacesEmotionDetails() = default;
};
class GetImageResponseBodyFacesFaceAttributesFaceBoundary : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  GetImageResponseBodyFacesFaceAttributesFaceBoundary() {}

  explicit GetImageResponseBodyFacesFaceAttributesFaceBoundary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetImageResponseBodyFacesFaceAttributesFaceBoundary() = default;
};
class GetImageResponseBodyFacesFaceAttributesHeadPose : public Darabonba::Model {
public:
  shared_ptr<double> pitch{};
  shared_ptr<double> roll{};
  shared_ptr<double> yaw{};

  GetImageResponseBodyFacesFaceAttributesHeadPose() {}

  explicit GetImageResponseBodyFacesFaceAttributesHeadPose(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetImageResponseBodyFacesFaceAttributesHeadPose() = default;
};
class GetImageResponseBodyFacesFaceAttributes : public Darabonba::Model {
public:
  shared_ptr<string> beard{};
  shared_ptr<double> beardConfidence{};
  shared_ptr<GetImageResponseBodyFacesFaceAttributesFaceBoundary> faceBoundary{};
  shared_ptr<string> glasses{};
  shared_ptr<double> glassesConfidence{};
  shared_ptr<GetImageResponseBodyFacesFaceAttributesHeadPose> headPose{};
  shared_ptr<string> mask{};
  shared_ptr<double> maskConfidence{};

  GetImageResponseBodyFacesFaceAttributes() {}

  explicit GetImageResponseBodyFacesFaceAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beard) {
      res["Beard"] = boost::any(*beard);
    }
    if (beardConfidence) {
      res["BeardConfidence"] = boost::any(*beardConfidence);
    }
    if (faceBoundary) {
      res["FaceBoundary"] = faceBoundary ? boost::any(faceBoundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (glasses) {
      res["Glasses"] = boost::any(*glasses);
    }
    if (glassesConfidence) {
      res["GlassesConfidence"] = boost::any(*glassesConfidence);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Beard") != m.end() && !m["Beard"].empty()) {
      beard = make_shared<string>(boost::any_cast<string>(m["Beard"]));
    }
    if (m.find("BeardConfidence") != m.end() && !m["BeardConfidence"].empty()) {
      beardConfidence = make_shared<double>(boost::any_cast<double>(m["BeardConfidence"]));
    }
    if (m.find("FaceBoundary") != m.end() && !m["FaceBoundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceBoundary"].type()) {
        GetImageResponseBodyFacesFaceAttributesFaceBoundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceBoundary"]));
        faceBoundary = make_shared<GetImageResponseBodyFacesFaceAttributesFaceBoundary>(model1);
      }
    }
    if (m.find("Glasses") != m.end() && !m["Glasses"].empty()) {
      glasses = make_shared<string>(boost::any_cast<string>(m["Glasses"]));
    }
    if (m.find("GlassesConfidence") != m.end() && !m["GlassesConfidence"].empty()) {
      glassesConfidence = make_shared<double>(boost::any_cast<double>(m["GlassesConfidence"]));
    }
    if (m.find("HeadPose") != m.end() && !m["HeadPose"].empty()) {
      if (typeid(map<string, boost::any>) == m["HeadPose"].type()) {
        GetImageResponseBodyFacesFaceAttributesHeadPose model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HeadPose"]));
        headPose = make_shared<GetImageResponseBodyFacesFaceAttributesHeadPose>(model1);
      }
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("MaskConfidence") != m.end() && !m["MaskConfidence"].empty()) {
      maskConfidence = make_shared<double>(boost::any_cast<double>(m["MaskConfidence"]));
    }
  }


  virtual ~GetImageResponseBodyFacesFaceAttributes() = default;
};
class GetImageResponseBodyFaces : public Darabonba::Model {
public:
  shared_ptr<string> age{};
  shared_ptr<double> attractive{};
  shared_ptr<string> emotion{};
  shared_ptr<double> emotionConfidence{};
  shared_ptr<GetImageResponseBodyFacesEmotionDetails> emotionDetails{};
  shared_ptr<GetImageResponseBodyFacesFaceAttributes> faceAttributes{};
  shared_ptr<double> faceConfidence{};
  shared_ptr<string> faceId{};
  shared_ptr<double> faceQuality{};
  shared_ptr<string> gender{};
  shared_ptr<double> genderConfidence{};
  shared_ptr<string> groupId{};

  GetImageResponseBodyFaces() {}

  explicit GetImageResponseBodyFaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (age) {
      res["Age"] = boost::any(*age);
    }
    if (attractive) {
      res["Attractive"] = boost::any(*attractive);
    }
    if (emotion) {
      res["Emotion"] = boost::any(*emotion);
    }
    if (emotionConfidence) {
      res["EmotionConfidence"] = boost::any(*emotionConfidence);
    }
    if (emotionDetails) {
      res["EmotionDetails"] = emotionDetails ? boost::any(emotionDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceAttributes) {
      res["FaceAttributes"] = faceAttributes ? boost::any(faceAttributes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceConfidence) {
      res["FaceConfidence"] = boost::any(*faceConfidence);
    }
    if (faceId) {
      res["FaceId"] = boost::any(*faceId);
    }
    if (faceQuality) {
      res["FaceQuality"] = boost::any(*faceQuality);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (genderConfidence) {
      res["GenderConfidence"] = boost::any(*genderConfidence);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Age") != m.end() && !m["Age"].empty()) {
      age = make_shared<string>(boost::any_cast<string>(m["Age"]));
    }
    if (m.find("Attractive") != m.end() && !m["Attractive"].empty()) {
      attractive = make_shared<double>(boost::any_cast<double>(m["Attractive"]));
    }
    if (m.find("Emotion") != m.end() && !m["Emotion"].empty()) {
      emotion = make_shared<string>(boost::any_cast<string>(m["Emotion"]));
    }
    if (m.find("EmotionConfidence") != m.end() && !m["EmotionConfidence"].empty()) {
      emotionConfidence = make_shared<double>(boost::any_cast<double>(m["EmotionConfidence"]));
    }
    if (m.find("EmotionDetails") != m.end() && !m["EmotionDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["EmotionDetails"].type()) {
        GetImageResponseBodyFacesEmotionDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EmotionDetails"]));
        emotionDetails = make_shared<GetImageResponseBodyFacesEmotionDetails>(model1);
      }
    }
    if (m.find("FaceAttributes") != m.end() && !m["FaceAttributes"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceAttributes"].type()) {
        GetImageResponseBodyFacesFaceAttributes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceAttributes"]));
        faceAttributes = make_shared<GetImageResponseBodyFacesFaceAttributes>(model1);
      }
    }
    if (m.find("FaceConfidence") != m.end() && !m["FaceConfidence"].empty()) {
      faceConfidence = make_shared<double>(boost::any_cast<double>(m["FaceConfidence"]));
    }
    if (m.find("FaceId") != m.end() && !m["FaceId"].empty()) {
      faceId = make_shared<string>(boost::any_cast<string>(m["FaceId"]));
    }
    if (m.find("FaceQuality") != m.end() && !m["FaceQuality"].empty()) {
      faceQuality = make_shared<double>(boost::any_cast<double>(m["FaceQuality"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("GenderConfidence") != m.end() && !m["GenderConfidence"].empty()) {
      genderConfidence = make_shared<double>(boost::any_cast<double>(m["GenderConfidence"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~GetImageResponseBodyFaces() = default;
};
class GetImageResponseBodyImageQuality : public Darabonba::Model {
public:
  shared_ptr<double> clarity{};
  shared_ptr<double> clarityScore{};
  shared_ptr<double> color{};
  shared_ptr<double> colorScore{};
  shared_ptr<double> compositionScore{};
  shared_ptr<double> contrast{};
  shared_ptr<double> contrastScore{};
  shared_ptr<double> exposure{};
  shared_ptr<double> exposureScore{};
  shared_ptr<double> overallScore{};

  GetImageResponseBodyImageQuality() {}

  explicit GetImageResponseBodyImageQuality(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clarity) {
      res["Clarity"] = boost::any(*clarity);
    }
    if (clarityScore) {
      res["ClarityScore"] = boost::any(*clarityScore);
    }
    if (color) {
      res["Color"] = boost::any(*color);
    }
    if (colorScore) {
      res["ColorScore"] = boost::any(*colorScore);
    }
    if (compositionScore) {
      res["CompositionScore"] = boost::any(*compositionScore);
    }
    if (contrast) {
      res["Contrast"] = boost::any(*contrast);
    }
    if (contrastScore) {
      res["ContrastScore"] = boost::any(*contrastScore);
    }
    if (exposure) {
      res["Exposure"] = boost::any(*exposure);
    }
    if (exposureScore) {
      res["ExposureScore"] = boost::any(*exposureScore);
    }
    if (overallScore) {
      res["OverallScore"] = boost::any(*overallScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clarity") != m.end() && !m["Clarity"].empty()) {
      clarity = make_shared<double>(boost::any_cast<double>(m["Clarity"]));
    }
    if (m.find("ClarityScore") != m.end() && !m["ClarityScore"].empty()) {
      clarityScore = make_shared<double>(boost::any_cast<double>(m["ClarityScore"]));
    }
    if (m.find("Color") != m.end() && !m["Color"].empty()) {
      color = make_shared<double>(boost::any_cast<double>(m["Color"]));
    }
    if (m.find("ColorScore") != m.end() && !m["ColorScore"].empty()) {
      colorScore = make_shared<double>(boost::any_cast<double>(m["ColorScore"]));
    }
    if (m.find("CompositionScore") != m.end() && !m["CompositionScore"].empty()) {
      compositionScore = make_shared<double>(boost::any_cast<double>(m["CompositionScore"]));
    }
    if (m.find("Contrast") != m.end() && !m["Contrast"].empty()) {
      contrast = make_shared<double>(boost::any_cast<double>(m["Contrast"]));
    }
    if (m.find("ContrastScore") != m.end() && !m["ContrastScore"].empty()) {
      contrastScore = make_shared<double>(boost::any_cast<double>(m["ContrastScore"]));
    }
    if (m.find("Exposure") != m.end() && !m["Exposure"].empty()) {
      exposure = make_shared<double>(boost::any_cast<double>(m["Exposure"]));
    }
    if (m.find("ExposureScore") != m.end() && !m["ExposureScore"].empty()) {
      exposureScore = make_shared<double>(boost::any_cast<double>(m["ExposureScore"]));
    }
    if (m.find("OverallScore") != m.end() && !m["OverallScore"].empty()) {
      overallScore = make_shared<double>(boost::any_cast<double>(m["OverallScore"]));
    }
  }


  virtual ~GetImageResponseBodyImageQuality() = default;
};
class GetImageResponseBodyOCROCRBoundary : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  GetImageResponseBodyOCROCRBoundary() {}

  explicit GetImageResponseBodyOCROCRBoundary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetImageResponseBodyOCROCRBoundary() = default;
};
class GetImageResponseBodyOCR : public Darabonba::Model {
public:
  shared_ptr<GetImageResponseBodyOCROCRBoundary> OCRBoundary{};
  shared_ptr<double> OCRConfidence{};
  shared_ptr<string> OCRContents{};

  GetImageResponseBodyOCR() {}

  explicit GetImageResponseBodyOCR(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (OCRBoundary) {
      res["OCRBoundary"] = OCRBoundary ? boost::any(OCRBoundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (OCRConfidence) {
      res["OCRConfidence"] = boost::any(*OCRConfidence);
    }
    if (OCRContents) {
      res["OCRContents"] = boost::any(*OCRContents);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OCRBoundary") != m.end() && !m["OCRBoundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["OCRBoundary"].type()) {
        GetImageResponseBodyOCROCRBoundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OCRBoundary"]));
        OCRBoundary = make_shared<GetImageResponseBodyOCROCRBoundary>(model1);
      }
    }
    if (m.find("OCRConfidence") != m.end() && !m["OCRConfidence"].empty()) {
      OCRConfidence = make_shared<double>(boost::any_cast<double>(m["OCRConfidence"]));
    }
    if (m.find("OCRContents") != m.end() && !m["OCRContents"].empty()) {
      OCRContents = make_shared<string>(boost::any_cast<string>(m["OCRContents"]));
    }
  }


  virtual ~GetImageResponseBodyOCR() = default;
};
class GetImageResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<double> centricScore{};
  shared_ptr<string> parentTagName{};
  shared_ptr<double> tagConfidence{};
  shared_ptr<long> tagLevel{};
  shared_ptr<string> tagName{};

  GetImageResponseBodyTags() {}

  explicit GetImageResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (centricScore) {
      res["CentricScore"] = boost::any(*centricScore);
    }
    if (parentTagName) {
      res["ParentTagName"] = boost::any(*parentTagName);
    }
    if (tagConfidence) {
      res["TagConfidence"] = boost::any(*tagConfidence);
    }
    if (tagLevel) {
      res["TagLevel"] = boost::any(*tagLevel);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CentricScore") != m.end() && !m["CentricScore"].empty()) {
      centricScore = make_shared<double>(boost::any_cast<double>(m["CentricScore"]));
    }
    if (m.find("ParentTagName") != m.end() && !m["ParentTagName"].empty()) {
      parentTagName = make_shared<string>(boost::any_cast<string>(m["ParentTagName"]));
    }
    if (m.find("TagConfidence") != m.end() && !m["TagConfidence"].empty()) {
      tagConfidence = make_shared<double>(boost::any_cast<double>(m["TagConfidence"]));
    }
    if (m.find("TagLevel") != m.end() && !m["TagLevel"].empty()) {
      tagLevel = make_shared<long>(boost::any_cast<long>(m["TagLevel"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~GetImageResponseBodyTags() = default;
};
class GetImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetImageResponseBodyAddress> address{};
  shared_ptr<string> addressFailReason{};
  shared_ptr<string> addressModifyTime{};
  shared_ptr<string> addressStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<vector<GetImageResponseBodyCroppingSuggestion>> croppingSuggestion{};
  shared_ptr<string> croppingSuggestionFailReason{};
  shared_ptr<string> croppingSuggestionModifyTime{};
  shared_ptr<string> croppingSuggestionStatus{};
  shared_ptr<string> exif{};
  shared_ptr<string> externalId{};
  shared_ptr<vector<GetImageResponseBodyFaces>> faces{};
  shared_ptr<string> facesFailReason{};
  shared_ptr<string> facesModifyTime{};
  shared_ptr<string> facesStatus{};
  shared_ptr<long> fileSize{};
  shared_ptr<string> imageFormat{};
  shared_ptr<long> imageHeight{};
  shared_ptr<GetImageResponseBodyImageQuality> imageQuality{};
  shared_ptr<string> imageQualityFailReason{};
  shared_ptr<string> imageQualityModifyTime{};
  shared_ptr<string> imageQualityStatus{};
  shared_ptr<string> imageTime{};
  shared_ptr<string> imageUri{};
  shared_ptr<long> imageWidth{};
  shared_ptr<string> location{};
  shared_ptr<string> modifyTime{};
  shared_ptr<vector<GetImageResponseBodyOCR>> OCR{};
  shared_ptr<string> OCRFailReason{};
  shared_ptr<string> OCRModifyTime{};
  shared_ptr<string> OCRStatus{};
  shared_ptr<string> orientation{};
  shared_ptr<string> remarksA{};
  shared_ptr<string> remarksArrayA{};
  shared_ptr<string> remarksArrayB{};
  shared_ptr<string> remarksB{};
  shared_ptr<string> remarksC{};
  shared_ptr<string> remarksD{};
  shared_ptr<string> requestId{};
  shared_ptr<string> setId{};
  shared_ptr<string> sourcePosition{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> sourceUri{};
  shared_ptr<vector<GetImageResponseBodyTags>> tags{};
  shared_ptr<string> tagsFailReason{};
  shared_ptr<string> tagsModifyTime{};
  shared_ptr<string> tagsStatus{};

  GetImageResponseBody() {}

  explicit GetImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = address ? boost::any(address->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (addressFailReason) {
      res["AddressFailReason"] = boost::any(*addressFailReason);
    }
    if (addressModifyTime) {
      res["AddressModifyTime"] = boost::any(*addressModifyTime);
    }
    if (addressStatus) {
      res["AddressStatus"] = boost::any(*addressStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (croppingSuggestion) {
      vector<boost::any> temp1;
      for(auto item1:*croppingSuggestion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CroppingSuggestion"] = boost::any(temp1);
    }
    if (croppingSuggestionFailReason) {
      res["CroppingSuggestionFailReason"] = boost::any(*croppingSuggestionFailReason);
    }
    if (croppingSuggestionModifyTime) {
      res["CroppingSuggestionModifyTime"] = boost::any(*croppingSuggestionModifyTime);
    }
    if (croppingSuggestionStatus) {
      res["CroppingSuggestionStatus"] = boost::any(*croppingSuggestionStatus);
    }
    if (exif) {
      res["Exif"] = boost::any(*exif);
    }
    if (externalId) {
      res["ExternalId"] = boost::any(*externalId);
    }
    if (faces) {
      vector<boost::any> temp1;
      for(auto item1:*faces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Faces"] = boost::any(temp1);
    }
    if (facesFailReason) {
      res["FacesFailReason"] = boost::any(*facesFailReason);
    }
    if (facesModifyTime) {
      res["FacesModifyTime"] = boost::any(*facesModifyTime);
    }
    if (facesStatus) {
      res["FacesStatus"] = boost::any(*facesStatus);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (imageFormat) {
      res["ImageFormat"] = boost::any(*imageFormat);
    }
    if (imageHeight) {
      res["ImageHeight"] = boost::any(*imageHeight);
    }
    if (imageQuality) {
      res["ImageQuality"] = imageQuality ? boost::any(imageQuality->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imageQualityFailReason) {
      res["ImageQualityFailReason"] = boost::any(*imageQualityFailReason);
    }
    if (imageQualityModifyTime) {
      res["ImageQualityModifyTime"] = boost::any(*imageQualityModifyTime);
    }
    if (imageQualityStatus) {
      res["ImageQualityStatus"] = boost::any(*imageQualityStatus);
    }
    if (imageTime) {
      res["ImageTime"] = boost::any(*imageTime);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (imageWidth) {
      res["ImageWidth"] = boost::any(*imageWidth);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (OCR) {
      vector<boost::any> temp1;
      for(auto item1:*OCR){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OCR"] = boost::any(temp1);
    }
    if (OCRFailReason) {
      res["OCRFailReason"] = boost::any(*OCRFailReason);
    }
    if (OCRModifyTime) {
      res["OCRModifyTime"] = boost::any(*OCRModifyTime);
    }
    if (OCRStatus) {
      res["OCRStatus"] = boost::any(*OCRStatus);
    }
    if (orientation) {
      res["Orientation"] = boost::any(*orientation);
    }
    if (remarksA) {
      res["RemarksA"] = boost::any(*remarksA);
    }
    if (remarksArrayA) {
      res["RemarksArrayA"] = boost::any(*remarksArrayA);
    }
    if (remarksArrayB) {
      res["RemarksArrayB"] = boost::any(*remarksArrayB);
    }
    if (remarksB) {
      res["RemarksB"] = boost::any(*remarksB);
    }
    if (remarksC) {
      res["RemarksC"] = boost::any(*remarksC);
    }
    if (remarksD) {
      res["RemarksD"] = boost::any(*remarksD);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (sourcePosition) {
      res["SourcePosition"] = boost::any(*sourcePosition);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (sourceUri) {
      res["SourceUri"] = boost::any(*sourceUri);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (tagsFailReason) {
      res["TagsFailReason"] = boost::any(*tagsFailReason);
    }
    if (tagsModifyTime) {
      res["TagsModifyTime"] = boost::any(*tagsModifyTime);
    }
    if (tagsStatus) {
      res["TagsStatus"] = boost::any(*tagsStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      if (typeid(map<string, boost::any>) == m["Address"].type()) {
        GetImageResponseBodyAddress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Address"]));
        address = make_shared<GetImageResponseBodyAddress>(model1);
      }
    }
    if (m.find("AddressFailReason") != m.end() && !m["AddressFailReason"].empty()) {
      addressFailReason = make_shared<string>(boost::any_cast<string>(m["AddressFailReason"]));
    }
    if (m.find("AddressModifyTime") != m.end() && !m["AddressModifyTime"].empty()) {
      addressModifyTime = make_shared<string>(boost::any_cast<string>(m["AddressModifyTime"]));
    }
    if (m.find("AddressStatus") != m.end() && !m["AddressStatus"].empty()) {
      addressStatus = make_shared<string>(boost::any_cast<string>(m["AddressStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CroppingSuggestion") != m.end() && !m["CroppingSuggestion"].empty()) {
      if (typeid(vector<boost::any>) == m["CroppingSuggestion"].type()) {
        vector<GetImageResponseBodyCroppingSuggestion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CroppingSuggestion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetImageResponseBodyCroppingSuggestion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        croppingSuggestion = make_shared<vector<GetImageResponseBodyCroppingSuggestion>>(expect1);
      }
    }
    if (m.find("CroppingSuggestionFailReason") != m.end() && !m["CroppingSuggestionFailReason"].empty()) {
      croppingSuggestionFailReason = make_shared<string>(boost::any_cast<string>(m["CroppingSuggestionFailReason"]));
    }
    if (m.find("CroppingSuggestionModifyTime") != m.end() && !m["CroppingSuggestionModifyTime"].empty()) {
      croppingSuggestionModifyTime = make_shared<string>(boost::any_cast<string>(m["CroppingSuggestionModifyTime"]));
    }
    if (m.find("CroppingSuggestionStatus") != m.end() && !m["CroppingSuggestionStatus"].empty()) {
      croppingSuggestionStatus = make_shared<string>(boost::any_cast<string>(m["CroppingSuggestionStatus"]));
    }
    if (m.find("Exif") != m.end() && !m["Exif"].empty()) {
      exif = make_shared<string>(boost::any_cast<string>(m["Exif"]));
    }
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      externalId = make_shared<string>(boost::any_cast<string>(m["ExternalId"]));
    }
    if (m.find("Faces") != m.end() && !m["Faces"].empty()) {
      if (typeid(vector<boost::any>) == m["Faces"].type()) {
        vector<GetImageResponseBodyFaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Faces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetImageResponseBodyFaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faces = make_shared<vector<GetImageResponseBodyFaces>>(expect1);
      }
    }
    if (m.find("FacesFailReason") != m.end() && !m["FacesFailReason"].empty()) {
      facesFailReason = make_shared<string>(boost::any_cast<string>(m["FacesFailReason"]));
    }
    if (m.find("FacesModifyTime") != m.end() && !m["FacesModifyTime"].empty()) {
      facesModifyTime = make_shared<string>(boost::any_cast<string>(m["FacesModifyTime"]));
    }
    if (m.find("FacesStatus") != m.end() && !m["FacesStatus"].empty()) {
      facesStatus = make_shared<string>(boost::any_cast<string>(m["FacesStatus"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
    if (m.find("ImageFormat") != m.end() && !m["ImageFormat"].empty()) {
      imageFormat = make_shared<string>(boost::any_cast<string>(m["ImageFormat"]));
    }
    if (m.find("ImageHeight") != m.end() && !m["ImageHeight"].empty()) {
      imageHeight = make_shared<long>(boost::any_cast<long>(m["ImageHeight"]));
    }
    if (m.find("ImageQuality") != m.end() && !m["ImageQuality"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImageQuality"].type()) {
        GetImageResponseBodyImageQuality model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImageQuality"]));
        imageQuality = make_shared<GetImageResponseBodyImageQuality>(model1);
      }
    }
    if (m.find("ImageQualityFailReason") != m.end() && !m["ImageQualityFailReason"].empty()) {
      imageQualityFailReason = make_shared<string>(boost::any_cast<string>(m["ImageQualityFailReason"]));
    }
    if (m.find("ImageQualityModifyTime") != m.end() && !m["ImageQualityModifyTime"].empty()) {
      imageQualityModifyTime = make_shared<string>(boost::any_cast<string>(m["ImageQualityModifyTime"]));
    }
    if (m.find("ImageQualityStatus") != m.end() && !m["ImageQualityStatus"].empty()) {
      imageQualityStatus = make_shared<string>(boost::any_cast<string>(m["ImageQualityStatus"]));
    }
    if (m.find("ImageTime") != m.end() && !m["ImageTime"].empty()) {
      imageTime = make_shared<string>(boost::any_cast<string>(m["ImageTime"]));
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("ImageWidth") != m.end() && !m["ImageWidth"].empty()) {
      imageWidth = make_shared<long>(boost::any_cast<long>(m["ImageWidth"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("OCR") != m.end() && !m["OCR"].empty()) {
      if (typeid(vector<boost::any>) == m["OCR"].type()) {
        vector<GetImageResponseBodyOCR> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OCR"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetImageResponseBodyOCR model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        OCR = make_shared<vector<GetImageResponseBodyOCR>>(expect1);
      }
    }
    if (m.find("OCRFailReason") != m.end() && !m["OCRFailReason"].empty()) {
      OCRFailReason = make_shared<string>(boost::any_cast<string>(m["OCRFailReason"]));
    }
    if (m.find("OCRModifyTime") != m.end() && !m["OCRModifyTime"].empty()) {
      OCRModifyTime = make_shared<string>(boost::any_cast<string>(m["OCRModifyTime"]));
    }
    if (m.find("OCRStatus") != m.end() && !m["OCRStatus"].empty()) {
      OCRStatus = make_shared<string>(boost::any_cast<string>(m["OCRStatus"]));
    }
    if (m.find("Orientation") != m.end() && !m["Orientation"].empty()) {
      orientation = make_shared<string>(boost::any_cast<string>(m["Orientation"]));
    }
    if (m.find("RemarksA") != m.end() && !m["RemarksA"].empty()) {
      remarksA = make_shared<string>(boost::any_cast<string>(m["RemarksA"]));
    }
    if (m.find("RemarksArrayA") != m.end() && !m["RemarksArrayA"].empty()) {
      remarksArrayA = make_shared<string>(boost::any_cast<string>(m["RemarksArrayA"]));
    }
    if (m.find("RemarksArrayB") != m.end() && !m["RemarksArrayB"].empty()) {
      remarksArrayB = make_shared<string>(boost::any_cast<string>(m["RemarksArrayB"]));
    }
    if (m.find("RemarksB") != m.end() && !m["RemarksB"].empty()) {
      remarksB = make_shared<string>(boost::any_cast<string>(m["RemarksB"]));
    }
    if (m.find("RemarksC") != m.end() && !m["RemarksC"].empty()) {
      remarksC = make_shared<string>(boost::any_cast<string>(m["RemarksC"]));
    }
    if (m.find("RemarksD") != m.end() && !m["RemarksD"].empty()) {
      remarksD = make_shared<string>(boost::any_cast<string>(m["RemarksD"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("SourcePosition") != m.end() && !m["SourcePosition"].empty()) {
      sourcePosition = make_shared<string>(boost::any_cast<string>(m["SourcePosition"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SourceUri") != m.end() && !m["SourceUri"].empty()) {
      sourceUri = make_shared<string>(boost::any_cast<string>(m["SourceUri"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<GetImageResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetImageResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<GetImageResponseBodyTags>>(expect1);
      }
    }
    if (m.find("TagsFailReason") != m.end() && !m["TagsFailReason"].empty()) {
      tagsFailReason = make_shared<string>(boost::any_cast<string>(m["TagsFailReason"]));
    }
    if (m.find("TagsModifyTime") != m.end() && !m["TagsModifyTime"].empty()) {
      tagsModifyTime = make_shared<string>(boost::any_cast<string>(m["TagsModifyTime"]));
    }
    if (m.find("TagsStatus") != m.end() && !m["TagsStatus"].empty()) {
      tagsStatus = make_shared<string>(boost::any_cast<string>(m["TagsStatus"]));
    }
  }


  virtual ~GetImageResponseBody() = default;
};
class GetImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetImageResponseBody> body{};

  GetImageResponse() {}

  explicit GetImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetImageResponseBody>(model1);
      }
    }
  }


  virtual ~GetImageResponse() = default;
};
class GetImageCroppingSuggestionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> aspectRatios{};
  shared_ptr<string> imageUri{};
  shared_ptr<string> project{};

  GetImageCroppingSuggestionsRequest() {}

  explicit GetImageCroppingSuggestionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aspectRatios) {
      res["AspectRatios"] = boost::any(*aspectRatios);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AspectRatios") != m.end() && !m["AspectRatios"].empty()) {
      aspectRatios = make_shared<string>(boost::any_cast<string>(m["AspectRatios"]));
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
  }


  virtual ~GetImageCroppingSuggestionsRequest() = default;
};
class GetImageCroppingSuggestionsResponseBodyCroppingSuggestionsCroppingBoundary : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  GetImageCroppingSuggestionsResponseBodyCroppingSuggestionsCroppingBoundary() {}

  explicit GetImageCroppingSuggestionsResponseBodyCroppingSuggestionsCroppingBoundary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetImageCroppingSuggestionsResponseBodyCroppingSuggestionsCroppingBoundary() = default;
};
class GetImageCroppingSuggestionsResponseBodyCroppingSuggestions : public Darabonba::Model {
public:
  shared_ptr<string> aspectRatio{};
  shared_ptr<GetImageCroppingSuggestionsResponseBodyCroppingSuggestionsCroppingBoundary> croppingBoundary{};
  shared_ptr<double> score{};

  GetImageCroppingSuggestionsResponseBodyCroppingSuggestions() {}

  explicit GetImageCroppingSuggestionsResponseBodyCroppingSuggestions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aspectRatio) {
      res["AspectRatio"] = boost::any(*aspectRatio);
    }
    if (croppingBoundary) {
      res["CroppingBoundary"] = croppingBoundary ? boost::any(croppingBoundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AspectRatio") != m.end() && !m["AspectRatio"].empty()) {
      aspectRatio = make_shared<string>(boost::any_cast<string>(m["AspectRatio"]));
    }
    if (m.find("CroppingBoundary") != m.end() && !m["CroppingBoundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["CroppingBoundary"].type()) {
        GetImageCroppingSuggestionsResponseBodyCroppingSuggestionsCroppingBoundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CroppingBoundary"]));
        croppingBoundary = make_shared<GetImageCroppingSuggestionsResponseBodyCroppingSuggestionsCroppingBoundary>(model1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
  }


  virtual ~GetImageCroppingSuggestionsResponseBodyCroppingSuggestions() = default;
};
class GetImageCroppingSuggestionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetImageCroppingSuggestionsResponseBodyCroppingSuggestions>> croppingSuggestions{};
  shared_ptr<string> imageUri{};
  shared_ptr<string> requestId{};

  GetImageCroppingSuggestionsResponseBody() {}

  explicit GetImageCroppingSuggestionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CroppingSuggestions") != m.end() && !m["CroppingSuggestions"].empty()) {
      if (typeid(vector<boost::any>) == m["CroppingSuggestions"].type()) {
        vector<GetImageCroppingSuggestionsResponseBodyCroppingSuggestions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CroppingSuggestions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetImageCroppingSuggestionsResponseBodyCroppingSuggestions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        croppingSuggestions = make_shared<vector<GetImageCroppingSuggestionsResponseBodyCroppingSuggestions>>(expect1);
      }
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetImageCroppingSuggestionsResponseBody() = default;
};
class GetImageCroppingSuggestionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetImageCroppingSuggestionsResponseBody> body{};

  GetImageCroppingSuggestionsResponse() {}

  explicit GetImageCroppingSuggestionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetImageCroppingSuggestionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetImageCroppingSuggestionsResponseBody>(model1);
      }
    }
  }


  virtual ~GetImageCroppingSuggestionsResponse() = default;
};
class GetImageQualityRequest : public Darabonba::Model {
public:
  shared_ptr<string> imageUri{};
  shared_ptr<string> project{};

  GetImageQualityRequest() {}

  explicit GetImageQualityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
  }


  virtual ~GetImageQualityRequest() = default;
};
class GetImageQualityResponseBodyImageQuality : public Darabonba::Model {
public:
  shared_ptr<double> clarity{};
  shared_ptr<double> clarityScore{};
  shared_ptr<double> color{};
  shared_ptr<double> colorScore{};
  shared_ptr<double> compositionScore{};
  shared_ptr<double> contrast{};
  shared_ptr<double> contrastScore{};
  shared_ptr<double> exposure{};
  shared_ptr<double> exposureScore{};
  shared_ptr<double> overallScore{};

  GetImageQualityResponseBodyImageQuality() {}

  explicit GetImageQualityResponseBodyImageQuality(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clarity) {
      res["Clarity"] = boost::any(*clarity);
    }
    if (clarityScore) {
      res["ClarityScore"] = boost::any(*clarityScore);
    }
    if (color) {
      res["Color"] = boost::any(*color);
    }
    if (colorScore) {
      res["ColorScore"] = boost::any(*colorScore);
    }
    if (compositionScore) {
      res["CompositionScore"] = boost::any(*compositionScore);
    }
    if (contrast) {
      res["Contrast"] = boost::any(*contrast);
    }
    if (contrastScore) {
      res["ContrastScore"] = boost::any(*contrastScore);
    }
    if (exposure) {
      res["Exposure"] = boost::any(*exposure);
    }
    if (exposureScore) {
      res["ExposureScore"] = boost::any(*exposureScore);
    }
    if (overallScore) {
      res["OverallScore"] = boost::any(*overallScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clarity") != m.end() && !m["Clarity"].empty()) {
      clarity = make_shared<double>(boost::any_cast<double>(m["Clarity"]));
    }
    if (m.find("ClarityScore") != m.end() && !m["ClarityScore"].empty()) {
      clarityScore = make_shared<double>(boost::any_cast<double>(m["ClarityScore"]));
    }
    if (m.find("Color") != m.end() && !m["Color"].empty()) {
      color = make_shared<double>(boost::any_cast<double>(m["Color"]));
    }
    if (m.find("ColorScore") != m.end() && !m["ColorScore"].empty()) {
      colorScore = make_shared<double>(boost::any_cast<double>(m["ColorScore"]));
    }
    if (m.find("CompositionScore") != m.end() && !m["CompositionScore"].empty()) {
      compositionScore = make_shared<double>(boost::any_cast<double>(m["CompositionScore"]));
    }
    if (m.find("Contrast") != m.end() && !m["Contrast"].empty()) {
      contrast = make_shared<double>(boost::any_cast<double>(m["Contrast"]));
    }
    if (m.find("ContrastScore") != m.end() && !m["ContrastScore"].empty()) {
      contrastScore = make_shared<double>(boost::any_cast<double>(m["ContrastScore"]));
    }
    if (m.find("Exposure") != m.end() && !m["Exposure"].empty()) {
      exposure = make_shared<double>(boost::any_cast<double>(m["Exposure"]));
    }
    if (m.find("ExposureScore") != m.end() && !m["ExposureScore"].empty()) {
      exposureScore = make_shared<double>(boost::any_cast<double>(m["ExposureScore"]));
    }
    if (m.find("OverallScore") != m.end() && !m["OverallScore"].empty()) {
      overallScore = make_shared<double>(boost::any_cast<double>(m["OverallScore"]));
    }
  }


  virtual ~GetImageQualityResponseBodyImageQuality() = default;
};
class GetImageQualityResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetImageQualityResponseBodyImageQuality> imageQuality{};
  shared_ptr<string> imageUri{};
  shared_ptr<string> requestId{};

  GetImageQualityResponseBody() {}

  explicit GetImageQualityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageQuality) {
      res["ImageQuality"] = imageQuality ? boost::any(imageQuality->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageQuality") != m.end() && !m["ImageQuality"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImageQuality"].type()) {
        GetImageQualityResponseBodyImageQuality model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImageQuality"]));
        imageQuality = make_shared<GetImageQualityResponseBodyImageQuality>(model1);
      }
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetImageQualityResponseBody() = default;
};
class GetImageQualityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetImageQualityResponseBody> body{};

  GetImageQualityResponse() {}

  explicit GetImageQualityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetImageQualityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetImageQualityResponseBody>(model1);
      }
    }
  }


  virtual ~GetImageQualityResponse() = default;
};
class GetMediaMetaRequest : public Darabonba::Model {
public:
  shared_ptr<string> mediaUri{};
  shared_ptr<string> project{};

  GetMediaMetaRequest() {}

  explicit GetMediaMetaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaUri) {
      res["MediaUri"] = boost::any(*mediaUri);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaUri") != m.end() && !m["MediaUri"].empty()) {
      mediaUri = make_shared<string>(boost::any_cast<string>(m["MediaUri"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
  }


  virtual ~GetMediaMetaRequest() = default;
};
class GetMediaMetaResponseBodyMediaMetaMediaFormatAddress : public Darabonba::Model {
public:
  shared_ptr<string> addressLine{};
  shared_ptr<string> city{};
  shared_ptr<string> country{};
  shared_ptr<string> district{};
  shared_ptr<string> province{};
  shared_ptr<string> township{};

  GetMediaMetaResponseBodyMediaMetaMediaFormatAddress() {}

  explicit GetMediaMetaResponseBodyMediaMetaMediaFormatAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("Township") != m.end() && !m["Township"].empty()) {
      township = make_shared<string>(boost::any_cast<string>(m["Township"]));
    }
  }


  virtual ~GetMediaMetaResponseBodyMediaMetaMediaFormatAddress() = default;
};
class GetMediaMetaResponseBodyMediaMetaMediaFormatTag : public Darabonba::Model {
public:
  shared_ptr<string> album{};
  shared_ptr<string> albumArtist{};
  shared_ptr<string> artist{};
  shared_ptr<string> composer{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> language{};
  shared_ptr<string> performer{};
  shared_ptr<string> title{};

  GetMediaMetaResponseBodyMediaMetaMediaFormatTag() {}

  explicit GetMediaMetaResponseBodyMediaMetaMediaFormatTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (album) {
      res["Album"] = boost::any(*album);
    }
    if (albumArtist) {
      res["AlbumArtist"] = boost::any(*albumArtist);
    }
    if (artist) {
      res["Artist"] = boost::any(*artist);
    }
    if (composer) {
      res["Composer"] = boost::any(*composer);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (performer) {
      res["Performer"] = boost::any(*performer);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Album") != m.end() && !m["Album"].empty()) {
      album = make_shared<string>(boost::any_cast<string>(m["Album"]));
    }
    if (m.find("AlbumArtist") != m.end() && !m["AlbumArtist"].empty()) {
      albumArtist = make_shared<string>(boost::any_cast<string>(m["AlbumArtist"]));
    }
    if (m.find("Artist") != m.end() && !m["Artist"].empty()) {
      artist = make_shared<string>(boost::any_cast<string>(m["Artist"]));
    }
    if (m.find("Composer") != m.end() && !m["Composer"].empty()) {
      composer = make_shared<string>(boost::any_cast<string>(m["Composer"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Performer") != m.end() && !m["Performer"].empty()) {
      performer = make_shared<string>(boost::any_cast<string>(m["Performer"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~GetMediaMetaResponseBodyMediaMetaMediaFormatTag() = default;
};
class GetMediaMetaResponseBodyMediaMetaMediaFormat : public Darabonba::Model {
public:
  shared_ptr<GetMediaMetaResponseBodyMediaMetaMediaFormatAddress> address{};
  shared_ptr<string> bitrate{};
  shared_ptr<string> creationTime{};
  shared_ptr<string> duration{};
  shared_ptr<string> formatLongName{};
  shared_ptr<string> formatName{};
  shared_ptr<string> location{};
  shared_ptr<long> numberPrograms{};
  shared_ptr<long> numberStreams{};
  shared_ptr<string> size{};
  shared_ptr<string> startTime{};
  shared_ptr<GetMediaMetaResponseBodyMediaMetaMediaFormatTag> tag{};

  GetMediaMetaResponseBodyMediaMetaMediaFormat() {}

  explicit GetMediaMetaResponseBodyMediaMetaMediaFormat(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = address ? boost::any(address->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (bitrate) {
      res["Bitrate"] = boost::any(*bitrate);
    }
    if (creationTime) {
      res["CreationTime"] = boost::any(*creationTime);
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
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (numberPrograms) {
      res["NumberPrograms"] = boost::any(*numberPrograms);
    }
    if (numberStreams) {
      res["NumberStreams"] = boost::any(*numberStreams);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (tag) {
      res["Tag"] = tag ? boost::any(tag->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      if (typeid(map<string, boost::any>) == m["Address"].type()) {
        GetMediaMetaResponseBodyMediaMetaMediaFormatAddress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Address"]));
        address = make_shared<GetMediaMetaResponseBodyMediaMetaMediaFormatAddress>(model1);
      }
    }
    if (m.find("Bitrate") != m.end() && !m["Bitrate"].empty()) {
      bitrate = make_shared<string>(boost::any_cast<string>(m["Bitrate"]));
    }
    if (m.find("CreationTime") != m.end() && !m["CreationTime"].empty()) {
      creationTime = make_shared<string>(boost::any_cast<string>(m["CreationTime"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("FormatLongName") != m.end() && !m["FormatLongName"].empty()) {
      formatLongName = make_shared<string>(boost::any_cast<string>(m["FormatLongName"]));
    }
    if (m.find("FormatName") != m.end() && !m["FormatName"].empty()) {
      formatName = make_shared<string>(boost::any_cast<string>(m["FormatName"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("NumberPrograms") != m.end() && !m["NumberPrograms"].empty()) {
      numberPrograms = make_shared<long>(boost::any_cast<long>(m["NumberPrograms"]));
    }
    if (m.find("NumberStreams") != m.end() && !m["NumberStreams"].empty()) {
      numberStreams = make_shared<long>(boost::any_cast<long>(m["NumberStreams"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tag"].type()) {
        GetMediaMetaResponseBodyMediaMetaMediaFormatTag model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tag"]));
        tag = make_shared<GetMediaMetaResponseBodyMediaMetaMediaFormatTag>(model1);
      }
    }
  }


  virtual ~GetMediaMetaResponseBodyMediaMetaMediaFormat() = default;
};
class GetMediaMetaResponseBodyMediaMetaMediaStreamsAudioStreams : public Darabonba::Model {
public:
  shared_ptr<string> bitrate{};
  shared_ptr<string> channelLayout{};
  shared_ptr<long> channels{};
  shared_ptr<string> codecLongName{};
  shared_ptr<string> codecName{};
  shared_ptr<string> codecTag{};
  shared_ptr<string> codecTagString{};
  shared_ptr<string> codecTimeBase{};
  shared_ptr<string> duration{};
  shared_ptr<string> frames{};
  shared_ptr<long> index{};
  shared_ptr<string> language{};
  shared_ptr<string> sampleFormat{};
  shared_ptr<string> sampleRate{};
  shared_ptr<string> startTime{};
  shared_ptr<string> timeBase{};

  GetMediaMetaResponseBodyMediaMetaMediaStreamsAudioStreams() {}

  explicit GetMediaMetaResponseBodyMediaMetaMediaStreamsAudioStreams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (frames) {
      res["Frames"] = boost::any(*frames);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (language) {
      res["Language"] = boost::any(*language);
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
      bitrate = make_shared<string>(boost::any_cast<string>(m["Bitrate"]));
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
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("Frames") != m.end() && !m["Frames"].empty()) {
      frames = make_shared<string>(boost::any_cast<string>(m["Frames"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("SampleFormat") != m.end() && !m["SampleFormat"].empty()) {
      sampleFormat = make_shared<string>(boost::any_cast<string>(m["SampleFormat"]));
    }
    if (m.find("SampleRate") != m.end() && !m["SampleRate"].empty()) {
      sampleRate = make_shared<string>(boost::any_cast<string>(m["SampleRate"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TimeBase") != m.end() && !m["TimeBase"].empty()) {
      timeBase = make_shared<string>(boost::any_cast<string>(m["TimeBase"]));
    }
  }


  virtual ~GetMediaMetaResponseBodyMediaMetaMediaStreamsAudioStreams() = default;
};
class GetMediaMetaResponseBodyMediaMetaMediaStreamsSubtitleStreams : public Darabonba::Model {
public:
  shared_ptr<long> index{};
  shared_ptr<string> language{};

  GetMediaMetaResponseBodyMediaMetaMediaStreamsSubtitleStreams() {}

  explicit GetMediaMetaResponseBodyMediaMetaMediaStreamsSubtitleStreams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
  }


  virtual ~GetMediaMetaResponseBodyMediaMetaMediaStreamsSubtitleStreams() = default;
};
class GetMediaMetaResponseBodyMediaMetaMediaStreamsVideoStreams : public Darabonba::Model {
public:
  shared_ptr<string> averageFrameRate{};
  shared_ptr<string> bitrate{};
  shared_ptr<string> codecLongName{};
  shared_ptr<string> codecName{};
  shared_ptr<string> codecTag{};
  shared_ptr<string> codecTagString{};
  shared_ptr<string> codecTimeBase{};
  shared_ptr<string> displayAspectRatio{};
  shared_ptr<string> duration{};
  shared_ptr<string> frameRrate{};
  shared_ptr<string> frames{};
  shared_ptr<long> hasBFrames{};
  shared_ptr<long> height{};
  shared_ptr<long> index{};
  shared_ptr<string> language{};
  shared_ptr<long> level{};
  shared_ptr<string> pixelFormat{};
  shared_ptr<string> profile{};
  shared_ptr<string> rotate{};
  shared_ptr<string> sampleAspectRatio{};
  shared_ptr<string> startTime{};
  shared_ptr<string> timeBase{};
  shared_ptr<long> width{};

  GetMediaMetaResponseBodyMediaMetaMediaStreamsVideoStreams() {}

  explicit GetMediaMetaResponseBodyMediaMetaMediaStreamsVideoStreams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (frameRrate) {
      res["FrameRrate"] = boost::any(*frameRrate);
    }
    if (frames) {
      res["Frames"] = boost::any(*frames);
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
      bitrate = make_shared<string>(boost::any_cast<string>(m["Bitrate"]));
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
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("FrameRrate") != m.end() && !m["FrameRrate"].empty()) {
      frameRrate = make_shared<string>(boost::any_cast<string>(m["FrameRrate"]));
    }
    if (m.find("Frames") != m.end() && !m["Frames"].empty()) {
      frames = make_shared<string>(boost::any_cast<string>(m["Frames"]));
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
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TimeBase") != m.end() && !m["TimeBase"].empty()) {
      timeBase = make_shared<string>(boost::any_cast<string>(m["TimeBase"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~GetMediaMetaResponseBodyMediaMetaMediaStreamsVideoStreams() = default;
};
class GetMediaMetaResponseBodyMediaMetaMediaStreams : public Darabonba::Model {
public:
  shared_ptr<vector<GetMediaMetaResponseBodyMediaMetaMediaStreamsAudioStreams>> audioStreams{};
  shared_ptr<vector<GetMediaMetaResponseBodyMediaMetaMediaStreamsSubtitleStreams>> subtitleStreams{};
  shared_ptr<vector<GetMediaMetaResponseBodyMediaMetaMediaStreamsVideoStreams>> videoStreams{};

  GetMediaMetaResponseBodyMediaMetaMediaStreams() {}

  explicit GetMediaMetaResponseBodyMediaMetaMediaStreams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioStreams) {
      vector<boost::any> temp1;
      for(auto item1:*audioStreams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AudioStreams"] = boost::any(temp1);
    }
    if (subtitleStreams) {
      vector<boost::any> temp1;
      for(auto item1:*subtitleStreams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubtitleStreams"] = boost::any(temp1);
    }
    if (videoStreams) {
      vector<boost::any> temp1;
      for(auto item1:*videoStreams){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VideoStreams"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioStreams") != m.end() && !m["AudioStreams"].empty()) {
      if (typeid(vector<boost::any>) == m["AudioStreams"].type()) {
        vector<GetMediaMetaResponseBodyMediaMetaMediaStreamsAudioStreams> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AudioStreams"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMediaMetaResponseBodyMediaMetaMediaStreamsAudioStreams model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        audioStreams = make_shared<vector<GetMediaMetaResponseBodyMediaMetaMediaStreamsAudioStreams>>(expect1);
      }
    }
    if (m.find("SubtitleStreams") != m.end() && !m["SubtitleStreams"].empty()) {
      if (typeid(vector<boost::any>) == m["SubtitleStreams"].type()) {
        vector<GetMediaMetaResponseBodyMediaMetaMediaStreamsSubtitleStreams> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubtitleStreams"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMediaMetaResponseBodyMediaMetaMediaStreamsSubtitleStreams model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subtitleStreams = make_shared<vector<GetMediaMetaResponseBodyMediaMetaMediaStreamsSubtitleStreams>>(expect1);
      }
    }
    if (m.find("VideoStreams") != m.end() && !m["VideoStreams"].empty()) {
      if (typeid(vector<boost::any>) == m["VideoStreams"].type()) {
        vector<GetMediaMetaResponseBodyMediaMetaMediaStreamsVideoStreams> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VideoStreams"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetMediaMetaResponseBodyMediaMetaMediaStreamsVideoStreams model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoStreams = make_shared<vector<GetMediaMetaResponseBodyMediaMetaMediaStreamsVideoStreams>>(expect1);
      }
    }
  }


  virtual ~GetMediaMetaResponseBodyMediaMetaMediaStreams() = default;
};
class GetMediaMetaResponseBodyMediaMeta : public Darabonba::Model {
public:
  shared_ptr<GetMediaMetaResponseBodyMediaMetaMediaFormat> mediaFormat{};
  shared_ptr<GetMediaMetaResponseBodyMediaMetaMediaStreams> mediaStreams{};

  GetMediaMetaResponseBodyMediaMeta() {}

  explicit GetMediaMetaResponseBodyMediaMeta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaFormat) {
      res["MediaFormat"] = mediaFormat ? boost::any(mediaFormat->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mediaStreams) {
      res["MediaStreams"] = mediaStreams ? boost::any(mediaStreams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaFormat") != m.end() && !m["MediaFormat"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaFormat"].type()) {
        GetMediaMetaResponseBodyMediaMetaMediaFormat model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaFormat"]));
        mediaFormat = make_shared<GetMediaMetaResponseBodyMediaMetaMediaFormat>(model1);
      }
    }
    if (m.find("MediaStreams") != m.end() && !m["MediaStreams"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaStreams"].type()) {
        GetMediaMetaResponseBodyMediaMetaMediaStreams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaStreams"]));
        mediaStreams = make_shared<GetMediaMetaResponseBodyMediaMetaMediaStreams>(model1);
      }
    }
  }


  virtual ~GetMediaMetaResponseBodyMediaMeta() = default;
};
class GetMediaMetaResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetMediaMetaResponseBodyMediaMeta> mediaMeta{};
  shared_ptr<string> mediaUri{};
  shared_ptr<string> requestId{};

  GetMediaMetaResponseBody() {}

  explicit GetMediaMetaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mediaMeta) {
      res["MediaMeta"] = mediaMeta ? boost::any(mediaMeta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mediaUri) {
      res["MediaUri"] = boost::any(*mediaUri);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MediaMeta") != m.end() && !m["MediaMeta"].empty()) {
      if (typeid(map<string, boost::any>) == m["MediaMeta"].type()) {
        GetMediaMetaResponseBodyMediaMeta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["MediaMeta"]));
        mediaMeta = make_shared<GetMediaMetaResponseBodyMediaMeta>(model1);
      }
    }
    if (m.find("MediaUri") != m.end() && !m["MediaUri"].empty()) {
      mediaUri = make_shared<string>(boost::any_cast<string>(m["MediaUri"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetMediaMetaResponseBody() = default;
};
class GetMediaMetaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetMediaMetaResponseBody> body{};

  GetMediaMetaResponse() {}

  explicit GetMediaMetaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMediaMetaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMediaMetaResponseBody>(model1);
      }
    }
  }


  virtual ~GetMediaMetaResponse() = default;
};
class GetOfficeConversionTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> project{};
  shared_ptr<string> taskId{};

  GetOfficeConversionTaskRequest() {}

  explicit GetOfficeConversionTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetOfficeConversionTaskRequest() = default;
};
class GetOfficeConversionTaskResponseBodyFailDetail : public Darabonba::Model {
public:
  shared_ptr<string> code{};

  GetOfficeConversionTaskResponseBodyFailDetail() {}

  explicit GetOfficeConversionTaskResponseBodyFailDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
  }


  virtual ~GetOfficeConversionTaskResponseBodyFailDetail() = default;
};
class GetOfficeConversionTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> externalID{};
  shared_ptr<GetOfficeConversionTaskResponseBodyFailDetail> failDetail{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> imageSpec{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<long> pageCount{};
  shared_ptr<long> percent{};
  shared_ptr<string> requestId{};
  shared_ptr<string> srcUri{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> tgtType{};
  shared_ptr<string> tgtUri{};

  GetOfficeConversionTaskResponseBody() {}

  explicit GetOfficeConversionTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (externalID) {
      res["ExternalID"] = boost::any(*externalID);
    }
    if (failDetail) {
      res["FailDetail"] = failDetail ? boost::any(failDetail->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (imageSpec) {
      res["ImageSpec"] = boost::any(*imageSpec);
    }
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (srcUri) {
      res["SrcUri"] = boost::any(*srcUri);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (tgtType) {
      res["TgtType"] = boost::any(*tgtType);
    }
    if (tgtUri) {
      res["TgtUri"] = boost::any(*tgtUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExternalID") != m.end() && !m["ExternalID"].empty()) {
      externalID = make_shared<string>(boost::any_cast<string>(m["ExternalID"]));
    }
    if (m.find("FailDetail") != m.end() && !m["FailDetail"].empty()) {
      if (typeid(map<string, boost::any>) == m["FailDetail"].type()) {
        GetOfficeConversionTaskResponseBodyFailDetail model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FailDetail"]));
        failDetail = make_shared<GetOfficeConversionTaskResponseBodyFailDetail>(model1);
      }
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("ImageSpec") != m.end() && !m["ImageSpec"].empty()) {
      imageSpec = make_shared<string>(boost::any_cast<string>(m["ImageSpec"]));
    }
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<long>(boost::any_cast<long>(m["Percent"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SrcUri") != m.end() && !m["SrcUri"].empty()) {
      srcUri = make_shared<string>(boost::any_cast<string>(m["SrcUri"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TgtType") != m.end() && !m["TgtType"].empty()) {
      tgtType = make_shared<string>(boost::any_cast<string>(m["TgtType"]));
    }
    if (m.find("TgtUri") != m.end() && !m["TgtUri"].empty()) {
      tgtUri = make_shared<string>(boost::any_cast<string>(m["TgtUri"]));
    }
  }


  virtual ~GetOfficeConversionTaskResponseBody() = default;
};
class GetOfficeConversionTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetOfficeConversionTaskResponseBody> body{};

  GetOfficeConversionTaskResponse() {}

  explicit GetOfficeConversionTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOfficeConversionTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOfficeConversionTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetOfficeConversionTaskResponse() = default;
};
class GetOfficeEditURLRequest : public Darabonba::Model {
public:
  shared_ptr<string> fileID{};
  shared_ptr<string> fileName{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> project{};
  shared_ptr<string> srcType{};
  shared_ptr<string> srcUri{};
  shared_ptr<string> tgtUri{};
  shared_ptr<string> userID{};
  shared_ptr<string> userName{};

  GetOfficeEditURLRequest() {}

  explicit GetOfficeEditURLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileID) {
      res["FileID"] = boost::any(*fileID);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (srcType) {
      res["SrcType"] = boost::any(*srcType);
    }
    if (srcUri) {
      res["SrcUri"] = boost::any(*srcUri);
    }
    if (tgtUri) {
      res["TgtUri"] = boost::any(*tgtUri);
    }
    if (userID) {
      res["UserID"] = boost::any(*userID);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileID") != m.end() && !m["FileID"].empty()) {
      fileID = make_shared<string>(boost::any_cast<string>(m["FileID"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("SrcType") != m.end() && !m["SrcType"].empty()) {
      srcType = make_shared<string>(boost::any_cast<string>(m["SrcType"]));
    }
    if (m.find("SrcUri") != m.end() && !m["SrcUri"].empty()) {
      srcUri = make_shared<string>(boost::any_cast<string>(m["SrcUri"]));
    }
    if (m.find("TgtUri") != m.end() && !m["TgtUri"].empty()) {
      tgtUri = make_shared<string>(boost::any_cast<string>(m["TgtUri"]));
    }
    if (m.find("UserID") != m.end() && !m["UserID"].empty()) {
      userID = make_shared<string>(boost::any_cast<string>(m["UserID"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
  }


  virtual ~GetOfficeEditURLRequest() = default;
};
class GetOfficeEditURLResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> accessTokenExpiredTime{};
  shared_ptr<string> editURL{};
  shared_ptr<string> refreshToken{};
  shared_ptr<string> refreshTokenExpiredTime{};
  shared_ptr<string> requestId{};

  GetOfficeEditURLResponseBody() {}

  explicit GetOfficeEditURLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (editURL) {
      res["EditURL"] = boost::any(*editURL);
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
    if (m.find("EditURL") != m.end() && !m["EditURL"].empty()) {
      editURL = make_shared<string>(boost::any_cast<string>(m["EditURL"]));
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


  virtual ~GetOfficeEditURLResponseBody() = default;
};
class GetOfficeEditURLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetOfficeEditURLResponseBody> body{};

  GetOfficeEditURLResponse() {}

  explicit GetOfficeEditURLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOfficeEditURLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOfficeEditURLResponseBody>(model1);
      }
    }
  }


  virtual ~GetOfficeEditURLResponse() = default;
};
class GetOfficePreviewURLRequest : public Darabonba::Model {
public:
  shared_ptr<string> project{};
  shared_ptr<string> srcType{};
  shared_ptr<string> srcUri{};
  shared_ptr<string> watermarkFillStyle{};
  shared_ptr<string> watermarkFont{};
  shared_ptr<long> watermarkHorizontal{};
  shared_ptr<double> watermarkRotate{};
  shared_ptr<long> watermarkType{};
  shared_ptr<string> watermarkValue{};
  shared_ptr<long> watermarkVertical{};

  GetOfficePreviewURLRequest() {}

  explicit GetOfficePreviewURLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (srcType) {
      res["SrcType"] = boost::any(*srcType);
    }
    if (srcUri) {
      res["SrcUri"] = boost::any(*srcUri);
    }
    if (watermarkFillStyle) {
      res["WatermarkFillStyle"] = boost::any(*watermarkFillStyle);
    }
    if (watermarkFont) {
      res["WatermarkFont"] = boost::any(*watermarkFont);
    }
    if (watermarkHorizontal) {
      res["WatermarkHorizontal"] = boost::any(*watermarkHorizontal);
    }
    if (watermarkRotate) {
      res["WatermarkRotate"] = boost::any(*watermarkRotate);
    }
    if (watermarkType) {
      res["WatermarkType"] = boost::any(*watermarkType);
    }
    if (watermarkValue) {
      res["WatermarkValue"] = boost::any(*watermarkValue);
    }
    if (watermarkVertical) {
      res["WatermarkVertical"] = boost::any(*watermarkVertical);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("SrcType") != m.end() && !m["SrcType"].empty()) {
      srcType = make_shared<string>(boost::any_cast<string>(m["SrcType"]));
    }
    if (m.find("SrcUri") != m.end() && !m["SrcUri"].empty()) {
      srcUri = make_shared<string>(boost::any_cast<string>(m["SrcUri"]));
    }
    if (m.find("WatermarkFillStyle") != m.end() && !m["WatermarkFillStyle"].empty()) {
      watermarkFillStyle = make_shared<string>(boost::any_cast<string>(m["WatermarkFillStyle"]));
    }
    if (m.find("WatermarkFont") != m.end() && !m["WatermarkFont"].empty()) {
      watermarkFont = make_shared<string>(boost::any_cast<string>(m["WatermarkFont"]));
    }
    if (m.find("WatermarkHorizontal") != m.end() && !m["WatermarkHorizontal"].empty()) {
      watermarkHorizontal = make_shared<long>(boost::any_cast<long>(m["WatermarkHorizontal"]));
    }
    if (m.find("WatermarkRotate") != m.end() && !m["WatermarkRotate"].empty()) {
      watermarkRotate = make_shared<double>(boost::any_cast<double>(m["WatermarkRotate"]));
    }
    if (m.find("WatermarkType") != m.end() && !m["WatermarkType"].empty()) {
      watermarkType = make_shared<long>(boost::any_cast<long>(m["WatermarkType"]));
    }
    if (m.find("WatermarkValue") != m.end() && !m["WatermarkValue"].empty()) {
      watermarkValue = make_shared<string>(boost::any_cast<string>(m["WatermarkValue"]));
    }
    if (m.find("WatermarkVertical") != m.end() && !m["WatermarkVertical"].empty()) {
      watermarkVertical = make_shared<long>(boost::any_cast<long>(m["WatermarkVertical"]));
    }
  }


  virtual ~GetOfficePreviewURLRequest() = default;
};
class GetOfficePreviewURLResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> accessTokenExpiredTime{};
  shared_ptr<string> previewURL{};
  shared_ptr<string> refreshToken{};
  shared_ptr<string> refreshTokenExpiredTime{};
  shared_ptr<string> requestId{};

  GetOfficePreviewURLResponseBody() {}

  explicit GetOfficePreviewURLResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (previewURL) {
      res["PreviewURL"] = boost::any(*previewURL);
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
    if (m.find("PreviewURL") != m.end() && !m["PreviewURL"].empty()) {
      previewURL = make_shared<string>(boost::any_cast<string>(m["PreviewURL"]));
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


  virtual ~GetOfficePreviewURLResponseBody() = default;
};
class GetOfficePreviewURLResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetOfficePreviewURLResponseBody> body{};

  GetOfficePreviewURLResponse() {}

  explicit GetOfficePreviewURLResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOfficePreviewURLResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOfficePreviewURLResponseBody>(model1);
      }
    }
  }


  virtual ~GetOfficePreviewURLResponse() = default;
};
class GetProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> project{};

  GetProjectRequest() {}

  explicit GetProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
  }


  virtual ~GetProjectRequest() = default;
};
class GetProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> billingType{};
  shared_ptr<long> CU{};
  shared_ptr<string> createTime{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> project{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceRole{};
  shared_ptr<string> type{};

  GetProjectResponseBody() {}

  explicit GetProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingType) {
      res["BillingType"] = boost::any(*billingType);
    }
    if (CU) {
      res["CU"] = boost::any(*CU);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceRole) {
      res["ServiceRole"] = boost::any(*serviceRole);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingType") != m.end() && !m["BillingType"].empty()) {
      billingType = make_shared<string>(boost::any_cast<string>(m["BillingType"]));
    }
    if (m.find("CU") != m.end() && !m["CU"].empty()) {
      CU = make_shared<long>(boost::any_cast<long>(m["CU"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceRole") != m.end() && !m["ServiceRole"].empty()) {
      serviceRole = make_shared<string>(boost::any_cast<string>(m["ServiceRole"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
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
class GetSetRequest : public Darabonba::Model {
public:
  shared_ptr<string> project{};
  shared_ptr<string> setId{};

  GetSetRequest() {}

  explicit GetSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
  }


  virtual ~GetSetRequest() = default;
};
class GetSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> faceCount{};
  shared_ptr<long> imageCount{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> setId{};
  shared_ptr<string> setName{};
  shared_ptr<long> videoCount{};
  shared_ptr<long> videoLength{};

  GetSetResponseBody() {}

  explicit GetSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (faceCount) {
      res["FaceCount"] = boost::any(*faceCount);
    }
    if (imageCount) {
      res["ImageCount"] = boost::any(*imageCount);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (setName) {
      res["SetName"] = boost::any(*setName);
    }
    if (videoCount) {
      res["VideoCount"] = boost::any(*videoCount);
    }
    if (videoLength) {
      res["VideoLength"] = boost::any(*videoLength);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FaceCount") != m.end() && !m["FaceCount"].empty()) {
      faceCount = make_shared<long>(boost::any_cast<long>(m["FaceCount"]));
    }
    if (m.find("ImageCount") != m.end() && !m["ImageCount"].empty()) {
      imageCount = make_shared<long>(boost::any_cast<long>(m["ImageCount"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("SetName") != m.end() && !m["SetName"].empty()) {
      setName = make_shared<string>(boost::any_cast<string>(m["SetName"]));
    }
    if (m.find("VideoCount") != m.end() && !m["VideoCount"].empty()) {
      videoCount = make_shared<long>(boost::any_cast<long>(m["VideoCount"]));
    }
    if (m.find("VideoLength") != m.end() && !m["VideoLength"].empty()) {
      videoLength = make_shared<long>(boost::any_cast<long>(m["VideoLength"]));
    }
  }


  virtual ~GetSetResponseBody() = default;
};
class GetSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetSetResponseBody> body{};

  GetSetResponse() {}

  explicit GetSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetSetResponseBody>(model1);
      }
    }
  }


  virtual ~GetSetResponse() = default;
};
class GetVideoRequest : public Darabonba::Model {
public:
  shared_ptr<string> project{};
  shared_ptr<string> setId{};
  shared_ptr<string> videoUri{};

  GetVideoRequest() {}

  explicit GetVideoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (videoUri) {
      res["VideoUri"] = boost::any(*videoUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("VideoUri") != m.end() && !m["VideoUri"].empty()) {
      videoUri = make_shared<string>(boost::any_cast<string>(m["VideoUri"]));
    }
  }


  virtual ~GetVideoRequest() = default;
};
class GetVideoResponseBodyVideoTags : public Darabonba::Model {
public:
  shared_ptr<string> parentTagName{};
  shared_ptr<double> tagConfidence{};
  shared_ptr<long> tagLevel{};
  shared_ptr<string> tagName{};

  GetVideoResponseBodyVideoTags() {}

  explicit GetVideoResponseBodyVideoTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parentTagName) {
      res["ParentTagName"] = boost::any(*parentTagName);
    }
    if (tagConfidence) {
      res["TagConfidence"] = boost::any(*tagConfidence);
    }
    if (tagLevel) {
      res["TagLevel"] = boost::any(*tagLevel);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParentTagName") != m.end() && !m["ParentTagName"].empty()) {
      parentTagName = make_shared<string>(boost::any_cast<string>(m["ParentTagName"]));
    }
    if (m.find("TagConfidence") != m.end() && !m["TagConfidence"].empty()) {
      tagConfidence = make_shared<double>(boost::any_cast<double>(m["TagConfidence"]));
    }
    if (m.find("TagLevel") != m.end() && !m["TagLevel"].empty()) {
      tagLevel = make_shared<long>(boost::any_cast<long>(m["TagLevel"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~GetVideoResponseBodyVideoTags() = default;
};
class GetVideoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> externalId{};
  shared_ptr<long> fileSize{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> processFailReason{};
  shared_ptr<string> processModifyTime{};
  shared_ptr<string> processStatus{};
  shared_ptr<string> remarksA{};
  shared_ptr<string> remarksB{};
  shared_ptr<string> remarksC{};
  shared_ptr<string> remarksD{};
  shared_ptr<string> requestId{};
  shared_ptr<string> setId{};
  shared_ptr<string> sourcePosition{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> sourceUri{};
  shared_ptr<double> videoDuration{};
  shared_ptr<string> videoFacesFailReason{};
  shared_ptr<string> videoFacesModifyTime{};
  shared_ptr<string> videoFacesStatus{};
  shared_ptr<string> videoFormat{};
  shared_ptr<string> videoFrameTagsFailReason{};
  shared_ptr<string> videoFrameTagsModifyTime{};
  shared_ptr<string> videoFrameTagsStatus{};
  shared_ptr<long> videoFrames{};
  shared_ptr<long> videoHeight{};
  shared_ptr<string> videoInfo{};
  shared_ptr<string> videoOCRFailReason{};
  shared_ptr<string> videoOCRModifyTime{};
  shared_ptr<string> videoOCRStatus{};
  shared_ptr<string> videoSTTFailReason{};
  shared_ptr<string> videoSTTModifyTime{};
  shared_ptr<string> videoSTTStatus{};
  shared_ptr<vector<GetVideoResponseBodyVideoTags>> videoTags{};
  shared_ptr<string> videoTagsFailReason{};
  shared_ptr<string> videoTagsModifyTime{};
  shared_ptr<string> videoTagsStatus{};
  shared_ptr<string> videoUri{};
  shared_ptr<long> videoWidth{};

  GetVideoResponseBody() {}

  explicit GetVideoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (externalId) {
      res["ExternalId"] = boost::any(*externalId);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (processFailReason) {
      res["ProcessFailReason"] = boost::any(*processFailReason);
    }
    if (processModifyTime) {
      res["ProcessModifyTime"] = boost::any(*processModifyTime);
    }
    if (processStatus) {
      res["ProcessStatus"] = boost::any(*processStatus);
    }
    if (remarksA) {
      res["RemarksA"] = boost::any(*remarksA);
    }
    if (remarksB) {
      res["RemarksB"] = boost::any(*remarksB);
    }
    if (remarksC) {
      res["RemarksC"] = boost::any(*remarksC);
    }
    if (remarksD) {
      res["RemarksD"] = boost::any(*remarksD);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (sourcePosition) {
      res["SourcePosition"] = boost::any(*sourcePosition);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (sourceUri) {
      res["SourceUri"] = boost::any(*sourceUri);
    }
    if (videoDuration) {
      res["VideoDuration"] = boost::any(*videoDuration);
    }
    if (videoFacesFailReason) {
      res["VideoFacesFailReason"] = boost::any(*videoFacesFailReason);
    }
    if (videoFacesModifyTime) {
      res["VideoFacesModifyTime"] = boost::any(*videoFacesModifyTime);
    }
    if (videoFacesStatus) {
      res["VideoFacesStatus"] = boost::any(*videoFacesStatus);
    }
    if (videoFormat) {
      res["VideoFormat"] = boost::any(*videoFormat);
    }
    if (videoFrameTagsFailReason) {
      res["VideoFrameTagsFailReason"] = boost::any(*videoFrameTagsFailReason);
    }
    if (videoFrameTagsModifyTime) {
      res["VideoFrameTagsModifyTime"] = boost::any(*videoFrameTagsModifyTime);
    }
    if (videoFrameTagsStatus) {
      res["VideoFrameTagsStatus"] = boost::any(*videoFrameTagsStatus);
    }
    if (videoFrames) {
      res["VideoFrames"] = boost::any(*videoFrames);
    }
    if (videoHeight) {
      res["VideoHeight"] = boost::any(*videoHeight);
    }
    if (videoInfo) {
      res["VideoInfo"] = boost::any(*videoInfo);
    }
    if (videoOCRFailReason) {
      res["VideoOCRFailReason"] = boost::any(*videoOCRFailReason);
    }
    if (videoOCRModifyTime) {
      res["VideoOCRModifyTime"] = boost::any(*videoOCRModifyTime);
    }
    if (videoOCRStatus) {
      res["VideoOCRStatus"] = boost::any(*videoOCRStatus);
    }
    if (videoSTTFailReason) {
      res["VideoSTTFailReason"] = boost::any(*videoSTTFailReason);
    }
    if (videoSTTModifyTime) {
      res["VideoSTTModifyTime"] = boost::any(*videoSTTModifyTime);
    }
    if (videoSTTStatus) {
      res["VideoSTTStatus"] = boost::any(*videoSTTStatus);
    }
    if (videoTags) {
      vector<boost::any> temp1;
      for(auto item1:*videoTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VideoTags"] = boost::any(temp1);
    }
    if (videoTagsFailReason) {
      res["VideoTagsFailReason"] = boost::any(*videoTagsFailReason);
    }
    if (videoTagsModifyTime) {
      res["VideoTagsModifyTime"] = boost::any(*videoTagsModifyTime);
    }
    if (videoTagsStatus) {
      res["VideoTagsStatus"] = boost::any(*videoTagsStatus);
    }
    if (videoUri) {
      res["VideoUri"] = boost::any(*videoUri);
    }
    if (videoWidth) {
      res["VideoWidth"] = boost::any(*videoWidth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      externalId = make_shared<string>(boost::any_cast<string>(m["ExternalId"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ProcessFailReason") != m.end() && !m["ProcessFailReason"].empty()) {
      processFailReason = make_shared<string>(boost::any_cast<string>(m["ProcessFailReason"]));
    }
    if (m.find("ProcessModifyTime") != m.end() && !m["ProcessModifyTime"].empty()) {
      processModifyTime = make_shared<string>(boost::any_cast<string>(m["ProcessModifyTime"]));
    }
    if (m.find("ProcessStatus") != m.end() && !m["ProcessStatus"].empty()) {
      processStatus = make_shared<string>(boost::any_cast<string>(m["ProcessStatus"]));
    }
    if (m.find("RemarksA") != m.end() && !m["RemarksA"].empty()) {
      remarksA = make_shared<string>(boost::any_cast<string>(m["RemarksA"]));
    }
    if (m.find("RemarksB") != m.end() && !m["RemarksB"].empty()) {
      remarksB = make_shared<string>(boost::any_cast<string>(m["RemarksB"]));
    }
    if (m.find("RemarksC") != m.end() && !m["RemarksC"].empty()) {
      remarksC = make_shared<string>(boost::any_cast<string>(m["RemarksC"]));
    }
    if (m.find("RemarksD") != m.end() && !m["RemarksD"].empty()) {
      remarksD = make_shared<string>(boost::any_cast<string>(m["RemarksD"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("SourcePosition") != m.end() && !m["SourcePosition"].empty()) {
      sourcePosition = make_shared<string>(boost::any_cast<string>(m["SourcePosition"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SourceUri") != m.end() && !m["SourceUri"].empty()) {
      sourceUri = make_shared<string>(boost::any_cast<string>(m["SourceUri"]));
    }
    if (m.find("VideoDuration") != m.end() && !m["VideoDuration"].empty()) {
      videoDuration = make_shared<double>(boost::any_cast<double>(m["VideoDuration"]));
    }
    if (m.find("VideoFacesFailReason") != m.end() && !m["VideoFacesFailReason"].empty()) {
      videoFacesFailReason = make_shared<string>(boost::any_cast<string>(m["VideoFacesFailReason"]));
    }
    if (m.find("VideoFacesModifyTime") != m.end() && !m["VideoFacesModifyTime"].empty()) {
      videoFacesModifyTime = make_shared<string>(boost::any_cast<string>(m["VideoFacesModifyTime"]));
    }
    if (m.find("VideoFacesStatus") != m.end() && !m["VideoFacesStatus"].empty()) {
      videoFacesStatus = make_shared<string>(boost::any_cast<string>(m["VideoFacesStatus"]));
    }
    if (m.find("VideoFormat") != m.end() && !m["VideoFormat"].empty()) {
      videoFormat = make_shared<string>(boost::any_cast<string>(m["VideoFormat"]));
    }
    if (m.find("VideoFrameTagsFailReason") != m.end() && !m["VideoFrameTagsFailReason"].empty()) {
      videoFrameTagsFailReason = make_shared<string>(boost::any_cast<string>(m["VideoFrameTagsFailReason"]));
    }
    if (m.find("VideoFrameTagsModifyTime") != m.end() && !m["VideoFrameTagsModifyTime"].empty()) {
      videoFrameTagsModifyTime = make_shared<string>(boost::any_cast<string>(m["VideoFrameTagsModifyTime"]));
    }
    if (m.find("VideoFrameTagsStatus") != m.end() && !m["VideoFrameTagsStatus"].empty()) {
      videoFrameTagsStatus = make_shared<string>(boost::any_cast<string>(m["VideoFrameTagsStatus"]));
    }
    if (m.find("VideoFrames") != m.end() && !m["VideoFrames"].empty()) {
      videoFrames = make_shared<long>(boost::any_cast<long>(m["VideoFrames"]));
    }
    if (m.find("VideoHeight") != m.end() && !m["VideoHeight"].empty()) {
      videoHeight = make_shared<long>(boost::any_cast<long>(m["VideoHeight"]));
    }
    if (m.find("VideoInfo") != m.end() && !m["VideoInfo"].empty()) {
      videoInfo = make_shared<string>(boost::any_cast<string>(m["VideoInfo"]));
    }
    if (m.find("VideoOCRFailReason") != m.end() && !m["VideoOCRFailReason"].empty()) {
      videoOCRFailReason = make_shared<string>(boost::any_cast<string>(m["VideoOCRFailReason"]));
    }
    if (m.find("VideoOCRModifyTime") != m.end() && !m["VideoOCRModifyTime"].empty()) {
      videoOCRModifyTime = make_shared<string>(boost::any_cast<string>(m["VideoOCRModifyTime"]));
    }
    if (m.find("VideoOCRStatus") != m.end() && !m["VideoOCRStatus"].empty()) {
      videoOCRStatus = make_shared<string>(boost::any_cast<string>(m["VideoOCRStatus"]));
    }
    if (m.find("VideoSTTFailReason") != m.end() && !m["VideoSTTFailReason"].empty()) {
      videoSTTFailReason = make_shared<string>(boost::any_cast<string>(m["VideoSTTFailReason"]));
    }
    if (m.find("VideoSTTModifyTime") != m.end() && !m["VideoSTTModifyTime"].empty()) {
      videoSTTModifyTime = make_shared<string>(boost::any_cast<string>(m["VideoSTTModifyTime"]));
    }
    if (m.find("VideoSTTStatus") != m.end() && !m["VideoSTTStatus"].empty()) {
      videoSTTStatus = make_shared<string>(boost::any_cast<string>(m["VideoSTTStatus"]));
    }
    if (m.find("VideoTags") != m.end() && !m["VideoTags"].empty()) {
      if (typeid(vector<boost::any>) == m["VideoTags"].type()) {
        vector<GetVideoResponseBodyVideoTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VideoTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVideoResponseBodyVideoTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoTags = make_shared<vector<GetVideoResponseBodyVideoTags>>(expect1);
      }
    }
    if (m.find("VideoTagsFailReason") != m.end() && !m["VideoTagsFailReason"].empty()) {
      videoTagsFailReason = make_shared<string>(boost::any_cast<string>(m["VideoTagsFailReason"]));
    }
    if (m.find("VideoTagsModifyTime") != m.end() && !m["VideoTagsModifyTime"].empty()) {
      videoTagsModifyTime = make_shared<string>(boost::any_cast<string>(m["VideoTagsModifyTime"]));
    }
    if (m.find("VideoTagsStatus") != m.end() && !m["VideoTagsStatus"].empty()) {
      videoTagsStatus = make_shared<string>(boost::any_cast<string>(m["VideoTagsStatus"]));
    }
    if (m.find("VideoUri") != m.end() && !m["VideoUri"].empty()) {
      videoUri = make_shared<string>(boost::any_cast<string>(m["VideoUri"]));
    }
    if (m.find("VideoWidth") != m.end() && !m["VideoWidth"].empty()) {
      videoWidth = make_shared<long>(boost::any_cast<long>(m["VideoWidth"]));
    }
  }


  virtual ~GetVideoResponseBody() = default;
};
class GetVideoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetVideoResponseBody> body{};

  GetVideoResponse() {}

  explicit GetVideoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVideoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVideoResponseBody>(model1);
      }
    }
  }


  virtual ~GetVideoResponse() = default;
};
class GetVideoTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> project{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};

  GetVideoTaskRequest() {}

  explicit GetVideoTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = boost::any(*project);
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
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~GetVideoTaskRequest() = default;
};
class GetVideoTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> parameters{};
  shared_ptr<long> progress{};
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};

  GetVideoTaskResponseBody() {}

  explicit GetVideoTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
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
  }


  virtual ~GetVideoTaskResponseBody() = default;
};
class GetVideoTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetVideoTaskResponseBody> body{};

  GetVideoTaskResponse() {}

  explicit GetVideoTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVideoTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVideoTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetVideoTaskResponse() = default;
};
class GetWebofficeURLRequest : public Darabonba::Model {
public:
  shared_ptr<string> file{};
  shared_ptr<string> fileID{};
  shared_ptr<bool> hidecmb{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> permission{};
  shared_ptr<string> project{};
  shared_ptr<string> srcType{};
  shared_ptr<string> user{};
  shared_ptr<string> watermark{};

  GetWebofficeURLRequest() {}

  explicit GetWebofficeURLRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (file) {
      res["File"] = boost::any(*file);
    }
    if (fileID) {
      res["FileID"] = boost::any(*fileID);
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
    if (permission) {
      res["Permission"] = boost::any(*permission);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (srcType) {
      res["SrcType"] = boost::any(*srcType);
    }
    if (user) {
      res["User"] = boost::any(*user);
    }
    if (watermark) {
      res["Watermark"] = boost::any(*watermark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("File") != m.end() && !m["File"].empty()) {
      file = make_shared<string>(boost::any_cast<string>(m["File"]));
    }
    if (m.find("FileID") != m.end() && !m["FileID"].empty()) {
      fileID = make_shared<string>(boost::any_cast<string>(m["FileID"]));
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
    if (m.find("Permission") != m.end() && !m["Permission"].empty()) {
      permission = make_shared<string>(boost::any_cast<string>(m["Permission"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("SrcType") != m.end() && !m["SrcType"].empty()) {
      srcType = make_shared<string>(boost::any_cast<string>(m["SrcType"]));
    }
    if (m.find("User") != m.end() && !m["User"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["User"]));
    }
    if (m.find("Watermark") != m.end() && !m["Watermark"].empty()) {
      watermark = make_shared<string>(boost::any_cast<string>(m["Watermark"]));
    }
  }


  virtual ~GetWebofficeURLRequest() = default;
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
class IndexImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> externalId{};
  shared_ptr<string> imageUri{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> project{};
  shared_ptr<string> remarksA{};
  shared_ptr<string> remarksArrayA{};
  shared_ptr<string> remarksArrayB{};
  shared_ptr<string> remarksB{};
  shared_ptr<string> remarksC{};
  shared_ptr<string> remarksD{};
  shared_ptr<string> setId{};
  shared_ptr<string> sourcePosition{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> sourceUri{};

  IndexImageRequest() {}

  explicit IndexImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalId) {
      res["ExternalId"] = boost::any(*externalId);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (remarksA) {
      res["RemarksA"] = boost::any(*remarksA);
    }
    if (remarksArrayA) {
      res["RemarksArrayA"] = boost::any(*remarksArrayA);
    }
    if (remarksArrayB) {
      res["RemarksArrayB"] = boost::any(*remarksArrayB);
    }
    if (remarksB) {
      res["RemarksB"] = boost::any(*remarksB);
    }
    if (remarksC) {
      res["RemarksC"] = boost::any(*remarksC);
    }
    if (remarksD) {
      res["RemarksD"] = boost::any(*remarksD);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (sourcePosition) {
      res["SourcePosition"] = boost::any(*sourcePosition);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (sourceUri) {
      res["SourceUri"] = boost::any(*sourceUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      externalId = make_shared<string>(boost::any_cast<string>(m["ExternalId"]));
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("RemarksA") != m.end() && !m["RemarksA"].empty()) {
      remarksA = make_shared<string>(boost::any_cast<string>(m["RemarksA"]));
    }
    if (m.find("RemarksArrayA") != m.end() && !m["RemarksArrayA"].empty()) {
      remarksArrayA = make_shared<string>(boost::any_cast<string>(m["RemarksArrayA"]));
    }
    if (m.find("RemarksArrayB") != m.end() && !m["RemarksArrayB"].empty()) {
      remarksArrayB = make_shared<string>(boost::any_cast<string>(m["RemarksArrayB"]));
    }
    if (m.find("RemarksB") != m.end() && !m["RemarksB"].empty()) {
      remarksB = make_shared<string>(boost::any_cast<string>(m["RemarksB"]));
    }
    if (m.find("RemarksC") != m.end() && !m["RemarksC"].empty()) {
      remarksC = make_shared<string>(boost::any_cast<string>(m["RemarksC"]));
    }
    if (m.find("RemarksD") != m.end() && !m["RemarksD"].empty()) {
      remarksD = make_shared<string>(boost::any_cast<string>(m["RemarksD"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("SourcePosition") != m.end() && !m["SourcePosition"].empty()) {
      sourcePosition = make_shared<string>(boost::any_cast<string>(m["SourcePosition"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SourceUri") != m.end() && !m["SourceUri"].empty()) {
      sourceUri = make_shared<string>(boost::any_cast<string>(m["SourceUri"]));
    }
  }


  virtual ~IndexImageRequest() = default;
};
class IndexImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> externalId{};
  shared_ptr<string> imageUri{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> remarksA{};
  shared_ptr<string> remarksArrayA{};
  shared_ptr<string> remarksArrayB{};
  shared_ptr<string> remarksB{};
  shared_ptr<string> remarksC{};
  shared_ptr<string> remarksD{};
  shared_ptr<string> requestId{};
  shared_ptr<string> setId{};

  IndexImageResponseBody() {}

  explicit IndexImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (externalId) {
      res["ExternalId"] = boost::any(*externalId);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (remarksA) {
      res["RemarksA"] = boost::any(*remarksA);
    }
    if (remarksArrayA) {
      res["RemarksArrayA"] = boost::any(*remarksArrayA);
    }
    if (remarksArrayB) {
      res["RemarksArrayB"] = boost::any(*remarksArrayB);
    }
    if (remarksB) {
      res["RemarksB"] = boost::any(*remarksB);
    }
    if (remarksC) {
      res["RemarksC"] = boost::any(*remarksC);
    }
    if (remarksD) {
      res["RemarksD"] = boost::any(*remarksD);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      externalId = make_shared<string>(boost::any_cast<string>(m["ExternalId"]));
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RemarksA") != m.end() && !m["RemarksA"].empty()) {
      remarksA = make_shared<string>(boost::any_cast<string>(m["RemarksA"]));
    }
    if (m.find("RemarksArrayA") != m.end() && !m["RemarksArrayA"].empty()) {
      remarksArrayA = make_shared<string>(boost::any_cast<string>(m["RemarksArrayA"]));
    }
    if (m.find("RemarksArrayB") != m.end() && !m["RemarksArrayB"].empty()) {
      remarksArrayB = make_shared<string>(boost::any_cast<string>(m["RemarksArrayB"]));
    }
    if (m.find("RemarksB") != m.end() && !m["RemarksB"].empty()) {
      remarksB = make_shared<string>(boost::any_cast<string>(m["RemarksB"]));
    }
    if (m.find("RemarksC") != m.end() && !m["RemarksC"].empty()) {
      remarksC = make_shared<string>(boost::any_cast<string>(m["RemarksC"]));
    }
    if (m.find("RemarksD") != m.end() && !m["RemarksD"].empty()) {
      remarksD = make_shared<string>(boost::any_cast<string>(m["RemarksD"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
  }


  virtual ~IndexImageResponseBody() = default;
};
class IndexImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<IndexImageResponseBody> body{};

  IndexImageResponse() {}

  explicit IndexImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IndexImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IndexImageResponseBody>(model1);
      }
    }
  }


  virtual ~IndexImageResponse() = default;
};
class IndexVideoRequest : public Darabonba::Model {
public:
  shared_ptr<string> externalId{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> project{};
  shared_ptr<string> remarksA{};
  shared_ptr<string> remarksB{};
  shared_ptr<string> remarksC{};
  shared_ptr<string> remarksD{};
  shared_ptr<string> setId{};
  shared_ptr<string> tgtUri{};
  shared_ptr<string> videoUri{};

  IndexVideoRequest() {}

  explicit IndexVideoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalId) {
      res["ExternalId"] = boost::any(*externalId);
    }
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (remarksA) {
      res["RemarksA"] = boost::any(*remarksA);
    }
    if (remarksB) {
      res["RemarksB"] = boost::any(*remarksB);
    }
    if (remarksC) {
      res["RemarksC"] = boost::any(*remarksC);
    }
    if (remarksD) {
      res["RemarksD"] = boost::any(*remarksD);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (tgtUri) {
      res["TgtUri"] = boost::any(*tgtUri);
    }
    if (videoUri) {
      res["VideoUri"] = boost::any(*videoUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      externalId = make_shared<string>(boost::any_cast<string>(m["ExternalId"]));
    }
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("RemarksA") != m.end() && !m["RemarksA"].empty()) {
      remarksA = make_shared<string>(boost::any_cast<string>(m["RemarksA"]));
    }
    if (m.find("RemarksB") != m.end() && !m["RemarksB"].empty()) {
      remarksB = make_shared<string>(boost::any_cast<string>(m["RemarksB"]));
    }
    if (m.find("RemarksC") != m.end() && !m["RemarksC"].empty()) {
      remarksC = make_shared<string>(boost::any_cast<string>(m["RemarksC"]));
    }
    if (m.find("RemarksD") != m.end() && !m["RemarksD"].empty()) {
      remarksD = make_shared<string>(boost::any_cast<string>(m["RemarksD"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("TgtUri") != m.end() && !m["TgtUri"].empty()) {
      tgtUri = make_shared<string>(boost::any_cast<string>(m["TgtUri"]));
    }
    if (m.find("VideoUri") != m.end() && !m["VideoUri"].empty()) {
      videoUri = make_shared<string>(boost::any_cast<string>(m["VideoUri"]));
    }
  }


  virtual ~IndexVideoRequest() = default;
};
class IndexVideoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> externalId{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> remarksA{};
  shared_ptr<string> remarksB{};
  shared_ptr<string> remarksC{};
  shared_ptr<string> remarksD{};
  shared_ptr<string> requestId{};
  shared_ptr<string> setId{};
  shared_ptr<string> videoUri{};

  IndexVideoResponseBody() {}

  explicit IndexVideoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (externalId) {
      res["ExternalId"] = boost::any(*externalId);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (remarksA) {
      res["RemarksA"] = boost::any(*remarksA);
    }
    if (remarksB) {
      res["RemarksB"] = boost::any(*remarksB);
    }
    if (remarksC) {
      res["RemarksC"] = boost::any(*remarksC);
    }
    if (remarksD) {
      res["RemarksD"] = boost::any(*remarksD);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (videoUri) {
      res["VideoUri"] = boost::any(*videoUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      externalId = make_shared<string>(boost::any_cast<string>(m["ExternalId"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RemarksA") != m.end() && !m["RemarksA"].empty()) {
      remarksA = make_shared<string>(boost::any_cast<string>(m["RemarksA"]));
    }
    if (m.find("RemarksB") != m.end() && !m["RemarksB"].empty()) {
      remarksB = make_shared<string>(boost::any_cast<string>(m["RemarksB"]));
    }
    if (m.find("RemarksC") != m.end() && !m["RemarksC"].empty()) {
      remarksC = make_shared<string>(boost::any_cast<string>(m["RemarksC"]));
    }
    if (m.find("RemarksD") != m.end() && !m["RemarksD"].empty()) {
      remarksD = make_shared<string>(boost::any_cast<string>(m["RemarksD"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("VideoUri") != m.end() && !m["VideoUri"].empty()) {
      videoUri = make_shared<string>(boost::any_cast<string>(m["VideoUri"]));
    }
  }


  virtual ~IndexVideoResponseBody() = default;
};
class IndexVideoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<IndexVideoResponseBody> body{};

  IndexVideoResponse() {}

  explicit IndexVideoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IndexVideoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IndexVideoResponseBody>(model1);
      }
    }
  }


  virtual ~IndexVideoResponse() = default;
};
class ListFaceGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> externalId{};
  shared_ptr<long> limit{};
  shared_ptr<string> marker{};
  shared_ptr<string> order{};
  shared_ptr<string> orderBy{};
  shared_ptr<string> project{};
  shared_ptr<string> remarksAQuery{};
  shared_ptr<string> remarksArrayAQuery{};
  shared_ptr<string> remarksArrayBQuery{};
  shared_ptr<string> remarksBQuery{};
  shared_ptr<string> remarksCQuery{};
  shared_ptr<string> remarksDQuery{};
  shared_ptr<string> setId{};

  ListFaceGroupsRequest() {}

  explicit ListFaceGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalId) {
      res["ExternalId"] = boost::any(*externalId);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (order) {
      res["Order"] = boost::any(*order);
    }
    if (orderBy) {
      res["OrderBy"] = boost::any(*orderBy);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (remarksAQuery) {
      res["RemarksAQuery"] = boost::any(*remarksAQuery);
    }
    if (remarksArrayAQuery) {
      res["RemarksArrayAQuery"] = boost::any(*remarksArrayAQuery);
    }
    if (remarksArrayBQuery) {
      res["RemarksArrayBQuery"] = boost::any(*remarksArrayBQuery);
    }
    if (remarksBQuery) {
      res["RemarksBQuery"] = boost::any(*remarksBQuery);
    }
    if (remarksCQuery) {
      res["RemarksCQuery"] = boost::any(*remarksCQuery);
    }
    if (remarksDQuery) {
      res["RemarksDQuery"] = boost::any(*remarksDQuery);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      externalId = make_shared<string>(boost::any_cast<string>(m["ExternalId"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("Order") != m.end() && !m["Order"].empty()) {
      order = make_shared<string>(boost::any_cast<string>(m["Order"]));
    }
    if (m.find("OrderBy") != m.end() && !m["OrderBy"].empty()) {
      orderBy = make_shared<string>(boost::any_cast<string>(m["OrderBy"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("RemarksAQuery") != m.end() && !m["RemarksAQuery"].empty()) {
      remarksAQuery = make_shared<string>(boost::any_cast<string>(m["RemarksAQuery"]));
    }
    if (m.find("RemarksArrayAQuery") != m.end() && !m["RemarksArrayAQuery"].empty()) {
      remarksArrayAQuery = make_shared<string>(boost::any_cast<string>(m["RemarksArrayAQuery"]));
    }
    if (m.find("RemarksArrayBQuery") != m.end() && !m["RemarksArrayBQuery"].empty()) {
      remarksArrayBQuery = make_shared<string>(boost::any_cast<string>(m["RemarksArrayBQuery"]));
    }
    if (m.find("RemarksBQuery") != m.end() && !m["RemarksBQuery"].empty()) {
      remarksBQuery = make_shared<string>(boost::any_cast<string>(m["RemarksBQuery"]));
    }
    if (m.find("RemarksCQuery") != m.end() && !m["RemarksCQuery"].empty()) {
      remarksCQuery = make_shared<string>(boost::any_cast<string>(m["RemarksCQuery"]));
    }
    if (m.find("RemarksDQuery") != m.end() && !m["RemarksDQuery"].empty()) {
      remarksDQuery = make_shared<string>(boost::any_cast<string>(m["RemarksDQuery"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
  }


  virtual ~ListFaceGroupsRequest() = default;
};
class ListFaceGroupsResponseBodyFaceGroupsGroupCoverFaceFaceBoundary : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  ListFaceGroupsResponseBodyFaceGroupsGroupCoverFaceFaceBoundary() {}

  explicit ListFaceGroupsResponseBodyFaceGroupsGroupCoverFaceFaceBoundary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListFaceGroupsResponseBodyFaceGroupsGroupCoverFaceFaceBoundary() = default;
};
class ListFaceGroupsResponseBodyFaceGroupsGroupCoverFace : public Darabonba::Model {
public:
  shared_ptr<string> externalId{};
  shared_ptr<ListFaceGroupsResponseBodyFaceGroupsGroupCoverFaceFaceBoundary> faceBoundary{};
  shared_ptr<string> faceId{};
  shared_ptr<long> imageHeight{};
  shared_ptr<string> imageUri{};
  shared_ptr<long> imageWidth{};

  ListFaceGroupsResponseBodyFaceGroupsGroupCoverFace() {}

  explicit ListFaceGroupsResponseBodyFaceGroupsGroupCoverFace(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalId) {
      res["ExternalId"] = boost::any(*externalId);
    }
    if (faceBoundary) {
      res["FaceBoundary"] = faceBoundary ? boost::any(faceBoundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceId) {
      res["FaceId"] = boost::any(*faceId);
    }
    if (imageHeight) {
      res["ImageHeight"] = boost::any(*imageHeight);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (imageWidth) {
      res["ImageWidth"] = boost::any(*imageWidth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      externalId = make_shared<string>(boost::any_cast<string>(m["ExternalId"]));
    }
    if (m.find("FaceBoundary") != m.end() && !m["FaceBoundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceBoundary"].type()) {
        ListFaceGroupsResponseBodyFaceGroupsGroupCoverFaceFaceBoundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceBoundary"]));
        faceBoundary = make_shared<ListFaceGroupsResponseBodyFaceGroupsGroupCoverFaceFaceBoundary>(model1);
      }
    }
    if (m.find("FaceId") != m.end() && !m["FaceId"].empty()) {
      faceId = make_shared<string>(boost::any_cast<string>(m["FaceId"]));
    }
    if (m.find("ImageHeight") != m.end() && !m["ImageHeight"].empty()) {
      imageHeight = make_shared<long>(boost::any_cast<long>(m["ImageHeight"]));
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("ImageWidth") != m.end() && !m["ImageWidth"].empty()) {
      imageWidth = make_shared<long>(boost::any_cast<long>(m["ImageWidth"]));
    }
  }


  virtual ~ListFaceGroupsResponseBodyFaceGroupsGroupCoverFace() = default;
};
class ListFaceGroupsResponseBodyFaceGroups : public Darabonba::Model {
public:
  shared_ptr<double> averageAge{};
  shared_ptr<string> createTime{};
  shared_ptr<string> externalId{};
  shared_ptr<long> faceCount{};
  shared_ptr<string> gender{};
  shared_ptr<ListFaceGroupsResponseBodyFaceGroupsGroupCoverFace> groupCoverFace{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<long> imageCount{};
  shared_ptr<double> maxAge{};
  shared_ptr<double> minAge{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> remarksA{};
  shared_ptr<string> remarksArrayA{};
  shared_ptr<string> remarksArrayB{};
  shared_ptr<string> remarksB{};
  shared_ptr<string> remarksC{};
  shared_ptr<string> remarksD{};

  ListFaceGroupsResponseBodyFaceGroups() {}

  explicit ListFaceGroupsResponseBodyFaceGroups(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (averageAge) {
      res["AverageAge"] = boost::any(*averageAge);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (externalId) {
      res["ExternalId"] = boost::any(*externalId);
    }
    if (faceCount) {
      res["FaceCount"] = boost::any(*faceCount);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (groupCoverFace) {
      res["GroupCoverFace"] = groupCoverFace ? boost::any(groupCoverFace->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
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
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (remarksA) {
      res["RemarksA"] = boost::any(*remarksA);
    }
    if (remarksArrayA) {
      res["RemarksArrayA"] = boost::any(*remarksArrayA);
    }
    if (remarksArrayB) {
      res["RemarksArrayB"] = boost::any(*remarksArrayB);
    }
    if (remarksB) {
      res["RemarksB"] = boost::any(*remarksB);
    }
    if (remarksC) {
      res["RemarksC"] = boost::any(*remarksC);
    }
    if (remarksD) {
      res["RemarksD"] = boost::any(*remarksD);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AverageAge") != m.end() && !m["AverageAge"].empty()) {
      averageAge = make_shared<double>(boost::any_cast<double>(m["AverageAge"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      externalId = make_shared<string>(boost::any_cast<string>(m["ExternalId"]));
    }
    if (m.find("FaceCount") != m.end() && !m["FaceCount"].empty()) {
      faceCount = make_shared<long>(boost::any_cast<long>(m["FaceCount"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("GroupCoverFace") != m.end() && !m["GroupCoverFace"].empty()) {
      if (typeid(map<string, boost::any>) == m["GroupCoverFace"].type()) {
        ListFaceGroupsResponseBodyFaceGroupsGroupCoverFace model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GroupCoverFace"]));
        groupCoverFace = make_shared<ListFaceGroupsResponseBodyFaceGroupsGroupCoverFace>(model1);
      }
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
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
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RemarksA") != m.end() && !m["RemarksA"].empty()) {
      remarksA = make_shared<string>(boost::any_cast<string>(m["RemarksA"]));
    }
    if (m.find("RemarksArrayA") != m.end() && !m["RemarksArrayA"].empty()) {
      remarksArrayA = make_shared<string>(boost::any_cast<string>(m["RemarksArrayA"]));
    }
    if (m.find("RemarksArrayB") != m.end() && !m["RemarksArrayB"].empty()) {
      remarksArrayB = make_shared<string>(boost::any_cast<string>(m["RemarksArrayB"]));
    }
    if (m.find("RemarksB") != m.end() && !m["RemarksB"].empty()) {
      remarksB = make_shared<string>(boost::any_cast<string>(m["RemarksB"]));
    }
    if (m.find("RemarksC") != m.end() && !m["RemarksC"].empty()) {
      remarksC = make_shared<string>(boost::any_cast<string>(m["RemarksC"]));
    }
    if (m.find("RemarksD") != m.end() && !m["RemarksD"].empty()) {
      remarksD = make_shared<string>(boost::any_cast<string>(m["RemarksD"]));
    }
  }


  virtual ~ListFaceGroupsResponseBodyFaceGroups() = default;
};
class ListFaceGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListFaceGroupsResponseBodyFaceGroups>> faceGroups{};
  shared_ptr<string> nextMarker{};
  shared_ptr<string> requestId{};

  ListFaceGroupsResponseBody() {}

  explicit ListFaceGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceGroups) {
      vector<boost::any> temp1;
      for(auto item1:*faceGroups){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FaceGroups"] = boost::any(temp1);
    }
    if (nextMarker) {
      res["NextMarker"] = boost::any(*nextMarker);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceGroups") != m.end() && !m["FaceGroups"].empty()) {
      if (typeid(vector<boost::any>) == m["FaceGroups"].type()) {
        vector<ListFaceGroupsResponseBodyFaceGroups> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FaceGroups"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFaceGroupsResponseBodyFaceGroups model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faceGroups = make_shared<vector<ListFaceGroupsResponseBodyFaceGroups>>(expect1);
      }
    }
    if (m.find("NextMarker") != m.end() && !m["NextMarker"].empty()) {
      nextMarker = make_shared<string>(boost::any_cast<string>(m["NextMarker"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListFaceGroupsResponseBody() = default;
};
class ListFaceGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListFaceGroupsResponseBody> body{};

  ListFaceGroupsResponse() {}

  explicit ListFaceGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFaceGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFaceGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFaceGroupsResponse() = default;
};
class ListImagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> createTimeStart{};
  shared_ptr<long> limit{};
  shared_ptr<string> marker{};
  shared_ptr<string> project{};
  shared_ptr<string> setId{};

  ListImagesRequest() {}

  explicit ListImagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTimeStart) {
      res["CreateTimeStart"] = boost::any(*createTimeStart);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTimeStart") != m.end() && !m["CreateTimeStart"].empty()) {
      createTimeStart = make_shared<string>(boost::any_cast<string>(m["CreateTimeStart"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
  }


  virtual ~ListImagesRequest() = default;
};
class ListImagesResponseBodyImagesAddress : public Darabonba::Model {
public:
  shared_ptr<string> addressLine{};
  shared_ptr<string> city{};
  shared_ptr<string> country{};
  shared_ptr<string> district{};
  shared_ptr<string> province{};
  shared_ptr<string> township{};

  ListImagesResponseBodyImagesAddress() {}

  explicit ListImagesResponseBodyImagesAddress(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Province") != m.end() && !m["Province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["Province"]));
    }
    if (m.find("Township") != m.end() && !m["Township"].empty()) {
      township = make_shared<string>(boost::any_cast<string>(m["Township"]));
    }
  }


  virtual ~ListImagesResponseBodyImagesAddress() = default;
};
class ListImagesResponseBodyImagesCroppingSuggestionCroppingBoundary : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  ListImagesResponseBodyImagesCroppingSuggestionCroppingBoundary() {}

  explicit ListImagesResponseBodyImagesCroppingSuggestionCroppingBoundary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListImagesResponseBodyImagesCroppingSuggestionCroppingBoundary() = default;
};
class ListImagesResponseBodyImagesCroppingSuggestion : public Darabonba::Model {
public:
  shared_ptr<string> aspectRatio{};
  shared_ptr<ListImagesResponseBodyImagesCroppingSuggestionCroppingBoundary> croppingBoundary{};
  shared_ptr<double> score{};

  ListImagesResponseBodyImagesCroppingSuggestion() {}

  explicit ListImagesResponseBodyImagesCroppingSuggestion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aspectRatio) {
      res["AspectRatio"] = boost::any(*aspectRatio);
    }
    if (croppingBoundary) {
      res["CroppingBoundary"] = croppingBoundary ? boost::any(croppingBoundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AspectRatio") != m.end() && !m["AspectRatio"].empty()) {
      aspectRatio = make_shared<string>(boost::any_cast<string>(m["AspectRatio"]));
    }
    if (m.find("CroppingBoundary") != m.end() && !m["CroppingBoundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["CroppingBoundary"].type()) {
        ListImagesResponseBodyImagesCroppingSuggestionCroppingBoundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CroppingBoundary"]));
        croppingBoundary = make_shared<ListImagesResponseBodyImagesCroppingSuggestionCroppingBoundary>(model1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
  }


  virtual ~ListImagesResponseBodyImagesCroppingSuggestion() = default;
};
class ListImagesResponseBodyImagesFacesEmotionDetails : public Darabonba::Model {
public:
  shared_ptr<double> ANGRY{};
  shared_ptr<double> CALM{};
  shared_ptr<double> DISGUSTED{};
  shared_ptr<double> HAPPY{};
  shared_ptr<double> SAD{};
  shared_ptr<double> SCARED{};
  shared_ptr<double> SURPRISED{};

  ListImagesResponseBodyImagesFacesEmotionDetails() {}

  explicit ListImagesResponseBodyImagesFacesEmotionDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ANGRY) {
      res["ANGRY"] = boost::any(*ANGRY);
    }
    if (CALM) {
      res["CALM"] = boost::any(*CALM);
    }
    if (DISGUSTED) {
      res["DISGUSTED"] = boost::any(*DISGUSTED);
    }
    if (HAPPY) {
      res["HAPPY"] = boost::any(*HAPPY);
    }
    if (SAD) {
      res["SAD"] = boost::any(*SAD);
    }
    if (SCARED) {
      res["SCARED"] = boost::any(*SCARED);
    }
    if (SURPRISED) {
      res["SURPRISED"] = boost::any(*SURPRISED);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ANGRY") != m.end() && !m["ANGRY"].empty()) {
      ANGRY = make_shared<double>(boost::any_cast<double>(m["ANGRY"]));
    }
    if (m.find("CALM") != m.end() && !m["CALM"].empty()) {
      CALM = make_shared<double>(boost::any_cast<double>(m["CALM"]));
    }
    if (m.find("DISGUSTED") != m.end() && !m["DISGUSTED"].empty()) {
      DISGUSTED = make_shared<double>(boost::any_cast<double>(m["DISGUSTED"]));
    }
    if (m.find("HAPPY") != m.end() && !m["HAPPY"].empty()) {
      HAPPY = make_shared<double>(boost::any_cast<double>(m["HAPPY"]));
    }
    if (m.find("SAD") != m.end() && !m["SAD"].empty()) {
      SAD = make_shared<double>(boost::any_cast<double>(m["SAD"]));
    }
    if (m.find("SCARED") != m.end() && !m["SCARED"].empty()) {
      SCARED = make_shared<double>(boost::any_cast<double>(m["SCARED"]));
    }
    if (m.find("SURPRISED") != m.end() && !m["SURPRISED"].empty()) {
      SURPRISED = make_shared<double>(boost::any_cast<double>(m["SURPRISED"]));
    }
  }


  virtual ~ListImagesResponseBodyImagesFacesEmotionDetails() = default;
};
class ListImagesResponseBodyImagesFacesFaceAttributesFaceBoundary : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  ListImagesResponseBodyImagesFacesFaceAttributesFaceBoundary() {}

  explicit ListImagesResponseBodyImagesFacesFaceAttributesFaceBoundary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListImagesResponseBodyImagesFacesFaceAttributesFaceBoundary() = default;
};
class ListImagesResponseBodyImagesFacesFaceAttributesHeadPose : public Darabonba::Model {
public:
  shared_ptr<double> pitch{};
  shared_ptr<double> roll{};
  shared_ptr<double> yaw{};

  ListImagesResponseBodyImagesFacesFaceAttributesHeadPose() {}

  explicit ListImagesResponseBodyImagesFacesFaceAttributesHeadPose(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListImagesResponseBodyImagesFacesFaceAttributesHeadPose() = default;
};
class ListImagesResponseBodyImagesFacesFaceAttributes : public Darabonba::Model {
public:
  shared_ptr<string> beard{};
  shared_ptr<double> beardConfidence{};
  shared_ptr<ListImagesResponseBodyImagesFacesFaceAttributesFaceBoundary> faceBoundary{};
  shared_ptr<string> glasses{};
  shared_ptr<double> glassesConfidence{};
  shared_ptr<ListImagesResponseBodyImagesFacesFaceAttributesHeadPose> headPose{};
  shared_ptr<string> mask{};
  shared_ptr<double> maskConfidence{};

  ListImagesResponseBodyImagesFacesFaceAttributes() {}

  explicit ListImagesResponseBodyImagesFacesFaceAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beard) {
      res["Beard"] = boost::any(*beard);
    }
    if (beardConfidence) {
      res["BeardConfidence"] = boost::any(*beardConfidence);
    }
    if (faceBoundary) {
      res["FaceBoundary"] = faceBoundary ? boost::any(faceBoundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (glasses) {
      res["Glasses"] = boost::any(*glasses);
    }
    if (glassesConfidence) {
      res["GlassesConfidence"] = boost::any(*glassesConfidence);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Beard") != m.end() && !m["Beard"].empty()) {
      beard = make_shared<string>(boost::any_cast<string>(m["Beard"]));
    }
    if (m.find("BeardConfidence") != m.end() && !m["BeardConfidence"].empty()) {
      beardConfidence = make_shared<double>(boost::any_cast<double>(m["BeardConfidence"]));
    }
    if (m.find("FaceBoundary") != m.end() && !m["FaceBoundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceBoundary"].type()) {
        ListImagesResponseBodyImagesFacesFaceAttributesFaceBoundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceBoundary"]));
        faceBoundary = make_shared<ListImagesResponseBodyImagesFacesFaceAttributesFaceBoundary>(model1);
      }
    }
    if (m.find("Glasses") != m.end() && !m["Glasses"].empty()) {
      glasses = make_shared<string>(boost::any_cast<string>(m["Glasses"]));
    }
    if (m.find("GlassesConfidence") != m.end() && !m["GlassesConfidence"].empty()) {
      glassesConfidence = make_shared<double>(boost::any_cast<double>(m["GlassesConfidence"]));
    }
    if (m.find("HeadPose") != m.end() && !m["HeadPose"].empty()) {
      if (typeid(map<string, boost::any>) == m["HeadPose"].type()) {
        ListImagesResponseBodyImagesFacesFaceAttributesHeadPose model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HeadPose"]));
        headPose = make_shared<ListImagesResponseBodyImagesFacesFaceAttributesHeadPose>(model1);
      }
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("MaskConfidence") != m.end() && !m["MaskConfidence"].empty()) {
      maskConfidence = make_shared<double>(boost::any_cast<double>(m["MaskConfidence"]));
    }
  }


  virtual ~ListImagesResponseBodyImagesFacesFaceAttributes() = default;
};
class ListImagesResponseBodyImagesFaces : public Darabonba::Model {
public:
  shared_ptr<long> age{};
  shared_ptr<double> attractive{};
  shared_ptr<string> emotion{};
  shared_ptr<double> emotionConfidence{};
  shared_ptr<ListImagesResponseBodyImagesFacesEmotionDetails> emotionDetails{};
  shared_ptr<ListImagesResponseBodyImagesFacesFaceAttributes> faceAttributes{};
  shared_ptr<double> faceConfidence{};
  shared_ptr<string> faceId{};
  shared_ptr<double> faceQuality{};
  shared_ptr<string> gender{};
  shared_ptr<double> genderConfidence{};
  shared_ptr<string> groupId{};

  ListImagesResponseBodyImagesFaces() {}

  explicit ListImagesResponseBodyImagesFaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (age) {
      res["Age"] = boost::any(*age);
    }
    if (attractive) {
      res["Attractive"] = boost::any(*attractive);
    }
    if (emotion) {
      res["Emotion"] = boost::any(*emotion);
    }
    if (emotionConfidence) {
      res["EmotionConfidence"] = boost::any(*emotionConfidence);
    }
    if (emotionDetails) {
      res["EmotionDetails"] = emotionDetails ? boost::any(emotionDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceAttributes) {
      res["FaceAttributes"] = faceAttributes ? boost::any(faceAttributes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceConfidence) {
      res["FaceConfidence"] = boost::any(*faceConfidence);
    }
    if (faceId) {
      res["FaceId"] = boost::any(*faceId);
    }
    if (faceQuality) {
      res["FaceQuality"] = boost::any(*faceQuality);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (genderConfidence) {
      res["GenderConfidence"] = boost::any(*genderConfidence);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Age") != m.end() && !m["Age"].empty()) {
      age = make_shared<long>(boost::any_cast<long>(m["Age"]));
    }
    if (m.find("Attractive") != m.end() && !m["Attractive"].empty()) {
      attractive = make_shared<double>(boost::any_cast<double>(m["Attractive"]));
    }
    if (m.find("Emotion") != m.end() && !m["Emotion"].empty()) {
      emotion = make_shared<string>(boost::any_cast<string>(m["Emotion"]));
    }
    if (m.find("EmotionConfidence") != m.end() && !m["EmotionConfidence"].empty()) {
      emotionConfidence = make_shared<double>(boost::any_cast<double>(m["EmotionConfidence"]));
    }
    if (m.find("EmotionDetails") != m.end() && !m["EmotionDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["EmotionDetails"].type()) {
        ListImagesResponseBodyImagesFacesEmotionDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EmotionDetails"]));
        emotionDetails = make_shared<ListImagesResponseBodyImagesFacesEmotionDetails>(model1);
      }
    }
    if (m.find("FaceAttributes") != m.end() && !m["FaceAttributes"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceAttributes"].type()) {
        ListImagesResponseBodyImagesFacesFaceAttributes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceAttributes"]));
        faceAttributes = make_shared<ListImagesResponseBodyImagesFacesFaceAttributes>(model1);
      }
    }
    if (m.find("FaceConfidence") != m.end() && !m["FaceConfidence"].empty()) {
      faceConfidence = make_shared<double>(boost::any_cast<double>(m["FaceConfidence"]));
    }
    if (m.find("FaceId") != m.end() && !m["FaceId"].empty()) {
      faceId = make_shared<string>(boost::any_cast<string>(m["FaceId"]));
    }
    if (m.find("FaceQuality") != m.end() && !m["FaceQuality"].empty()) {
      faceQuality = make_shared<double>(boost::any_cast<double>(m["FaceQuality"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("GenderConfidence") != m.end() && !m["GenderConfidence"].empty()) {
      genderConfidence = make_shared<double>(boost::any_cast<double>(m["GenderConfidence"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~ListImagesResponseBodyImagesFaces() = default;
};
class ListImagesResponseBodyImagesImageQuality : public Darabonba::Model {
public:
  shared_ptr<double> clarity{};
  shared_ptr<double> clarityScore{};
  shared_ptr<double> color{};
  shared_ptr<double> colorScore{};
  shared_ptr<double> compositionScore{};
  shared_ptr<double> contrast{};
  shared_ptr<double> contrastScore{};
  shared_ptr<double> exposure{};
  shared_ptr<double> exposureScore{};
  shared_ptr<double> overallScore{};

  ListImagesResponseBodyImagesImageQuality() {}

  explicit ListImagesResponseBodyImagesImageQuality(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clarity) {
      res["Clarity"] = boost::any(*clarity);
    }
    if (clarityScore) {
      res["ClarityScore"] = boost::any(*clarityScore);
    }
    if (color) {
      res["Color"] = boost::any(*color);
    }
    if (colorScore) {
      res["ColorScore"] = boost::any(*colorScore);
    }
    if (compositionScore) {
      res["CompositionScore"] = boost::any(*compositionScore);
    }
    if (contrast) {
      res["Contrast"] = boost::any(*contrast);
    }
    if (contrastScore) {
      res["ContrastScore"] = boost::any(*contrastScore);
    }
    if (exposure) {
      res["Exposure"] = boost::any(*exposure);
    }
    if (exposureScore) {
      res["ExposureScore"] = boost::any(*exposureScore);
    }
    if (overallScore) {
      res["OverallScore"] = boost::any(*overallScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Clarity") != m.end() && !m["Clarity"].empty()) {
      clarity = make_shared<double>(boost::any_cast<double>(m["Clarity"]));
    }
    if (m.find("ClarityScore") != m.end() && !m["ClarityScore"].empty()) {
      clarityScore = make_shared<double>(boost::any_cast<double>(m["ClarityScore"]));
    }
    if (m.find("Color") != m.end() && !m["Color"].empty()) {
      color = make_shared<double>(boost::any_cast<double>(m["Color"]));
    }
    if (m.find("ColorScore") != m.end() && !m["ColorScore"].empty()) {
      colorScore = make_shared<double>(boost::any_cast<double>(m["ColorScore"]));
    }
    if (m.find("CompositionScore") != m.end() && !m["CompositionScore"].empty()) {
      compositionScore = make_shared<double>(boost::any_cast<double>(m["CompositionScore"]));
    }
    if (m.find("Contrast") != m.end() && !m["Contrast"].empty()) {
      contrast = make_shared<double>(boost::any_cast<double>(m["Contrast"]));
    }
    if (m.find("ContrastScore") != m.end() && !m["ContrastScore"].empty()) {
      contrastScore = make_shared<double>(boost::any_cast<double>(m["ContrastScore"]));
    }
    if (m.find("Exposure") != m.end() && !m["Exposure"].empty()) {
      exposure = make_shared<double>(boost::any_cast<double>(m["Exposure"]));
    }
    if (m.find("ExposureScore") != m.end() && !m["ExposureScore"].empty()) {
      exposureScore = make_shared<double>(boost::any_cast<double>(m["ExposureScore"]));
    }
    if (m.find("OverallScore") != m.end() && !m["OverallScore"].empty()) {
      overallScore = make_shared<double>(boost::any_cast<double>(m["OverallScore"]));
    }
  }


  virtual ~ListImagesResponseBodyImagesImageQuality() = default;
};
class ListImagesResponseBodyImagesOCROCRBoundary : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  ListImagesResponseBodyImagesOCROCRBoundary() {}

  explicit ListImagesResponseBodyImagesOCROCRBoundary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListImagesResponseBodyImagesOCROCRBoundary() = default;
};
class ListImagesResponseBodyImagesOCR : public Darabonba::Model {
public:
  shared_ptr<ListImagesResponseBodyImagesOCROCRBoundary> OCRBoundary{};
  shared_ptr<double> OCRConfidence{};
  shared_ptr<string> OCRContents{};

  ListImagesResponseBodyImagesOCR() {}

  explicit ListImagesResponseBodyImagesOCR(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (OCRBoundary) {
      res["OCRBoundary"] = OCRBoundary ? boost::any(OCRBoundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (OCRConfidence) {
      res["OCRConfidence"] = boost::any(*OCRConfidence);
    }
    if (OCRContents) {
      res["OCRContents"] = boost::any(*OCRContents);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OCRBoundary") != m.end() && !m["OCRBoundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["OCRBoundary"].type()) {
        ListImagesResponseBodyImagesOCROCRBoundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OCRBoundary"]));
        OCRBoundary = make_shared<ListImagesResponseBodyImagesOCROCRBoundary>(model1);
      }
    }
    if (m.find("OCRConfidence") != m.end() && !m["OCRConfidence"].empty()) {
      OCRConfidence = make_shared<double>(boost::any_cast<double>(m["OCRConfidence"]));
    }
    if (m.find("OCRContents") != m.end() && !m["OCRContents"].empty()) {
      OCRContents = make_shared<string>(boost::any_cast<string>(m["OCRContents"]));
    }
  }


  virtual ~ListImagesResponseBodyImagesOCR() = default;
};
class ListImagesResponseBodyImagesTags : public Darabonba::Model {
public:
  shared_ptr<double> centricScore{};
  shared_ptr<string> parentTagName{};
  shared_ptr<double> tagConfidence{};
  shared_ptr<long> tagLevel{};
  shared_ptr<string> tagName{};

  ListImagesResponseBodyImagesTags() {}

  explicit ListImagesResponseBodyImagesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (centricScore) {
      res["CentricScore"] = boost::any(*centricScore);
    }
    if (parentTagName) {
      res["ParentTagName"] = boost::any(*parentTagName);
    }
    if (tagConfidence) {
      res["TagConfidence"] = boost::any(*tagConfidence);
    }
    if (tagLevel) {
      res["TagLevel"] = boost::any(*tagLevel);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CentricScore") != m.end() && !m["CentricScore"].empty()) {
      centricScore = make_shared<double>(boost::any_cast<double>(m["CentricScore"]));
    }
    if (m.find("ParentTagName") != m.end() && !m["ParentTagName"].empty()) {
      parentTagName = make_shared<string>(boost::any_cast<string>(m["ParentTagName"]));
    }
    if (m.find("TagConfidence") != m.end() && !m["TagConfidence"].empty()) {
      tagConfidence = make_shared<double>(boost::any_cast<double>(m["TagConfidence"]));
    }
    if (m.find("TagLevel") != m.end() && !m["TagLevel"].empty()) {
      tagLevel = make_shared<long>(boost::any_cast<long>(m["TagLevel"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~ListImagesResponseBodyImagesTags() = default;
};
class ListImagesResponseBodyImages : public Darabonba::Model {
public:
  shared_ptr<ListImagesResponseBodyImagesAddress> address{};
  shared_ptr<string> addressFailReason{};
  shared_ptr<string> addressModifyTime{};
  shared_ptr<string> addressStatus{};
  shared_ptr<string> createTime{};
  shared_ptr<vector<ListImagesResponseBodyImagesCroppingSuggestion>> croppingSuggestion{};
  shared_ptr<string> croppingSuggestionFailReason{};
  shared_ptr<string> croppingSuggestionModifyTime{};
  shared_ptr<string> croppingSuggestionStatus{};
  shared_ptr<string> exif{};
  shared_ptr<string> externalId{};
  shared_ptr<vector<ListImagesResponseBodyImagesFaces>> faces{};
  shared_ptr<string> facesFailReason{};
  shared_ptr<string> facesModifyTime{};
  shared_ptr<string> facesStatus{};
  shared_ptr<long> fileSize{};
  shared_ptr<string> imageFormat{};
  shared_ptr<long> imageHeight{};
  shared_ptr<ListImagesResponseBodyImagesImageQuality> imageQuality{};
  shared_ptr<string> imageQualityFailReason{};
  shared_ptr<string> imageQualityModifyTime{};
  shared_ptr<string> imageQualityStatus{};
  shared_ptr<string> imageTime{};
  shared_ptr<string> imageUri{};
  shared_ptr<long> imageWidth{};
  shared_ptr<string> location{};
  shared_ptr<string> modifyTime{};
  shared_ptr<vector<ListImagesResponseBodyImagesOCR>> OCR{};
  shared_ptr<string> OCRFailReason{};
  shared_ptr<string> OCRModifyTime{};
  shared_ptr<string> OCRStatus{};
  shared_ptr<string> orientation{};
  shared_ptr<string> remarksA{};
  shared_ptr<string> remarksArrayA{};
  shared_ptr<string> remarksArrayB{};
  shared_ptr<string> remarksB{};
  shared_ptr<string> remarksC{};
  shared_ptr<string> remarksD{};
  shared_ptr<string> sourcePosition{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> sourceUri{};
  shared_ptr<vector<ListImagesResponseBodyImagesTags>> tags{};
  shared_ptr<string> tagsFailReason{};
  shared_ptr<string> tagsModifyTime{};
  shared_ptr<string> tagsStatus{};

  ListImagesResponseBodyImages() {}

  explicit ListImagesResponseBodyImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = address ? boost::any(address->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (addressFailReason) {
      res["AddressFailReason"] = boost::any(*addressFailReason);
    }
    if (addressModifyTime) {
      res["AddressModifyTime"] = boost::any(*addressModifyTime);
    }
    if (addressStatus) {
      res["AddressStatus"] = boost::any(*addressStatus);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (croppingSuggestion) {
      vector<boost::any> temp1;
      for(auto item1:*croppingSuggestion){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CroppingSuggestion"] = boost::any(temp1);
    }
    if (croppingSuggestionFailReason) {
      res["CroppingSuggestionFailReason"] = boost::any(*croppingSuggestionFailReason);
    }
    if (croppingSuggestionModifyTime) {
      res["CroppingSuggestionModifyTime"] = boost::any(*croppingSuggestionModifyTime);
    }
    if (croppingSuggestionStatus) {
      res["CroppingSuggestionStatus"] = boost::any(*croppingSuggestionStatus);
    }
    if (exif) {
      res["Exif"] = boost::any(*exif);
    }
    if (externalId) {
      res["ExternalId"] = boost::any(*externalId);
    }
    if (faces) {
      vector<boost::any> temp1;
      for(auto item1:*faces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Faces"] = boost::any(temp1);
    }
    if (facesFailReason) {
      res["FacesFailReason"] = boost::any(*facesFailReason);
    }
    if (facesModifyTime) {
      res["FacesModifyTime"] = boost::any(*facesModifyTime);
    }
    if (facesStatus) {
      res["FacesStatus"] = boost::any(*facesStatus);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (imageFormat) {
      res["ImageFormat"] = boost::any(*imageFormat);
    }
    if (imageHeight) {
      res["ImageHeight"] = boost::any(*imageHeight);
    }
    if (imageQuality) {
      res["ImageQuality"] = imageQuality ? boost::any(imageQuality->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (imageQualityFailReason) {
      res["ImageQualityFailReason"] = boost::any(*imageQualityFailReason);
    }
    if (imageQualityModifyTime) {
      res["ImageQualityModifyTime"] = boost::any(*imageQualityModifyTime);
    }
    if (imageQualityStatus) {
      res["ImageQualityStatus"] = boost::any(*imageQualityStatus);
    }
    if (imageTime) {
      res["ImageTime"] = boost::any(*imageTime);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (imageWidth) {
      res["ImageWidth"] = boost::any(*imageWidth);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (OCR) {
      vector<boost::any> temp1;
      for(auto item1:*OCR){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OCR"] = boost::any(temp1);
    }
    if (OCRFailReason) {
      res["OCRFailReason"] = boost::any(*OCRFailReason);
    }
    if (OCRModifyTime) {
      res["OCRModifyTime"] = boost::any(*OCRModifyTime);
    }
    if (OCRStatus) {
      res["OCRStatus"] = boost::any(*OCRStatus);
    }
    if (orientation) {
      res["Orientation"] = boost::any(*orientation);
    }
    if (remarksA) {
      res["RemarksA"] = boost::any(*remarksA);
    }
    if (remarksArrayA) {
      res["RemarksArrayA"] = boost::any(*remarksArrayA);
    }
    if (remarksArrayB) {
      res["RemarksArrayB"] = boost::any(*remarksArrayB);
    }
    if (remarksB) {
      res["RemarksB"] = boost::any(*remarksB);
    }
    if (remarksC) {
      res["RemarksC"] = boost::any(*remarksC);
    }
    if (remarksD) {
      res["RemarksD"] = boost::any(*remarksD);
    }
    if (sourcePosition) {
      res["SourcePosition"] = boost::any(*sourcePosition);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (sourceUri) {
      res["SourceUri"] = boost::any(*sourceUri);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (tagsFailReason) {
      res["TagsFailReason"] = boost::any(*tagsFailReason);
    }
    if (tagsModifyTime) {
      res["TagsModifyTime"] = boost::any(*tagsModifyTime);
    }
    if (tagsStatus) {
      res["TagsStatus"] = boost::any(*tagsStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      if (typeid(map<string, boost::any>) == m["Address"].type()) {
        ListImagesResponseBodyImagesAddress model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Address"]));
        address = make_shared<ListImagesResponseBodyImagesAddress>(model1);
      }
    }
    if (m.find("AddressFailReason") != m.end() && !m["AddressFailReason"].empty()) {
      addressFailReason = make_shared<string>(boost::any_cast<string>(m["AddressFailReason"]));
    }
    if (m.find("AddressModifyTime") != m.end() && !m["AddressModifyTime"].empty()) {
      addressModifyTime = make_shared<string>(boost::any_cast<string>(m["AddressModifyTime"]));
    }
    if (m.find("AddressStatus") != m.end() && !m["AddressStatus"].empty()) {
      addressStatus = make_shared<string>(boost::any_cast<string>(m["AddressStatus"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CroppingSuggestion") != m.end() && !m["CroppingSuggestion"].empty()) {
      if (typeid(vector<boost::any>) == m["CroppingSuggestion"].type()) {
        vector<ListImagesResponseBodyImagesCroppingSuggestion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CroppingSuggestion"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListImagesResponseBodyImagesCroppingSuggestion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        croppingSuggestion = make_shared<vector<ListImagesResponseBodyImagesCroppingSuggestion>>(expect1);
      }
    }
    if (m.find("CroppingSuggestionFailReason") != m.end() && !m["CroppingSuggestionFailReason"].empty()) {
      croppingSuggestionFailReason = make_shared<string>(boost::any_cast<string>(m["CroppingSuggestionFailReason"]));
    }
    if (m.find("CroppingSuggestionModifyTime") != m.end() && !m["CroppingSuggestionModifyTime"].empty()) {
      croppingSuggestionModifyTime = make_shared<string>(boost::any_cast<string>(m["CroppingSuggestionModifyTime"]));
    }
    if (m.find("CroppingSuggestionStatus") != m.end() && !m["CroppingSuggestionStatus"].empty()) {
      croppingSuggestionStatus = make_shared<string>(boost::any_cast<string>(m["CroppingSuggestionStatus"]));
    }
    if (m.find("Exif") != m.end() && !m["Exif"].empty()) {
      exif = make_shared<string>(boost::any_cast<string>(m["Exif"]));
    }
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      externalId = make_shared<string>(boost::any_cast<string>(m["ExternalId"]));
    }
    if (m.find("Faces") != m.end() && !m["Faces"].empty()) {
      if (typeid(vector<boost::any>) == m["Faces"].type()) {
        vector<ListImagesResponseBodyImagesFaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Faces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListImagesResponseBodyImagesFaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faces = make_shared<vector<ListImagesResponseBodyImagesFaces>>(expect1);
      }
    }
    if (m.find("FacesFailReason") != m.end() && !m["FacesFailReason"].empty()) {
      facesFailReason = make_shared<string>(boost::any_cast<string>(m["FacesFailReason"]));
    }
    if (m.find("FacesModifyTime") != m.end() && !m["FacesModifyTime"].empty()) {
      facesModifyTime = make_shared<string>(boost::any_cast<string>(m["FacesModifyTime"]));
    }
    if (m.find("FacesStatus") != m.end() && !m["FacesStatus"].empty()) {
      facesStatus = make_shared<string>(boost::any_cast<string>(m["FacesStatus"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
    if (m.find("ImageFormat") != m.end() && !m["ImageFormat"].empty()) {
      imageFormat = make_shared<string>(boost::any_cast<string>(m["ImageFormat"]));
    }
    if (m.find("ImageHeight") != m.end() && !m["ImageHeight"].empty()) {
      imageHeight = make_shared<long>(boost::any_cast<long>(m["ImageHeight"]));
    }
    if (m.find("ImageQuality") != m.end() && !m["ImageQuality"].empty()) {
      if (typeid(map<string, boost::any>) == m["ImageQuality"].type()) {
        ListImagesResponseBodyImagesImageQuality model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ImageQuality"]));
        imageQuality = make_shared<ListImagesResponseBodyImagesImageQuality>(model1);
      }
    }
    if (m.find("ImageQualityFailReason") != m.end() && !m["ImageQualityFailReason"].empty()) {
      imageQualityFailReason = make_shared<string>(boost::any_cast<string>(m["ImageQualityFailReason"]));
    }
    if (m.find("ImageQualityModifyTime") != m.end() && !m["ImageQualityModifyTime"].empty()) {
      imageQualityModifyTime = make_shared<string>(boost::any_cast<string>(m["ImageQualityModifyTime"]));
    }
    if (m.find("ImageQualityStatus") != m.end() && !m["ImageQualityStatus"].empty()) {
      imageQualityStatus = make_shared<string>(boost::any_cast<string>(m["ImageQualityStatus"]));
    }
    if (m.find("ImageTime") != m.end() && !m["ImageTime"].empty()) {
      imageTime = make_shared<string>(boost::any_cast<string>(m["ImageTime"]));
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("ImageWidth") != m.end() && !m["ImageWidth"].empty()) {
      imageWidth = make_shared<long>(boost::any_cast<long>(m["ImageWidth"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("OCR") != m.end() && !m["OCR"].empty()) {
      if (typeid(vector<boost::any>) == m["OCR"].type()) {
        vector<ListImagesResponseBodyImagesOCR> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OCR"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListImagesResponseBodyImagesOCR model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        OCR = make_shared<vector<ListImagesResponseBodyImagesOCR>>(expect1);
      }
    }
    if (m.find("OCRFailReason") != m.end() && !m["OCRFailReason"].empty()) {
      OCRFailReason = make_shared<string>(boost::any_cast<string>(m["OCRFailReason"]));
    }
    if (m.find("OCRModifyTime") != m.end() && !m["OCRModifyTime"].empty()) {
      OCRModifyTime = make_shared<string>(boost::any_cast<string>(m["OCRModifyTime"]));
    }
    if (m.find("OCRStatus") != m.end() && !m["OCRStatus"].empty()) {
      OCRStatus = make_shared<string>(boost::any_cast<string>(m["OCRStatus"]));
    }
    if (m.find("Orientation") != m.end() && !m["Orientation"].empty()) {
      orientation = make_shared<string>(boost::any_cast<string>(m["Orientation"]));
    }
    if (m.find("RemarksA") != m.end() && !m["RemarksA"].empty()) {
      remarksA = make_shared<string>(boost::any_cast<string>(m["RemarksA"]));
    }
    if (m.find("RemarksArrayA") != m.end() && !m["RemarksArrayA"].empty()) {
      remarksArrayA = make_shared<string>(boost::any_cast<string>(m["RemarksArrayA"]));
    }
    if (m.find("RemarksArrayB") != m.end() && !m["RemarksArrayB"].empty()) {
      remarksArrayB = make_shared<string>(boost::any_cast<string>(m["RemarksArrayB"]));
    }
    if (m.find("RemarksB") != m.end() && !m["RemarksB"].empty()) {
      remarksB = make_shared<string>(boost::any_cast<string>(m["RemarksB"]));
    }
    if (m.find("RemarksC") != m.end() && !m["RemarksC"].empty()) {
      remarksC = make_shared<string>(boost::any_cast<string>(m["RemarksC"]));
    }
    if (m.find("RemarksD") != m.end() && !m["RemarksD"].empty()) {
      remarksD = make_shared<string>(boost::any_cast<string>(m["RemarksD"]));
    }
    if (m.find("SourcePosition") != m.end() && !m["SourcePosition"].empty()) {
      sourcePosition = make_shared<string>(boost::any_cast<string>(m["SourcePosition"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SourceUri") != m.end() && !m["SourceUri"].empty()) {
      sourceUri = make_shared<string>(boost::any_cast<string>(m["SourceUri"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListImagesResponseBodyImagesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListImagesResponseBodyImagesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListImagesResponseBodyImagesTags>>(expect1);
      }
    }
    if (m.find("TagsFailReason") != m.end() && !m["TagsFailReason"].empty()) {
      tagsFailReason = make_shared<string>(boost::any_cast<string>(m["TagsFailReason"]));
    }
    if (m.find("TagsModifyTime") != m.end() && !m["TagsModifyTime"].empty()) {
      tagsModifyTime = make_shared<string>(boost::any_cast<string>(m["TagsModifyTime"]));
    }
    if (m.find("TagsStatus") != m.end() && !m["TagsStatus"].empty()) {
      tagsStatus = make_shared<string>(boost::any_cast<string>(m["TagsStatus"]));
    }
  }


  virtual ~ListImagesResponseBodyImages() = default;
};
class ListImagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListImagesResponseBodyImages>> images{};
  shared_ptr<string> nextMarker{};
  shared_ptr<string> requestId{};
  shared_ptr<string> setId{};

  ListImagesResponseBody() {}

  explicit ListImagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (nextMarker) {
      res["NextMarker"] = boost::any(*nextMarker);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<ListImagesResponseBodyImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListImagesResponseBodyImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<ListImagesResponseBodyImages>>(expect1);
      }
    }
    if (m.find("NextMarker") != m.end() && !m["NextMarker"].empty()) {
      nextMarker = make_shared<string>(boost::any_cast<string>(m["NextMarker"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
  }


  virtual ~ListImagesResponseBody() = default;
};
class ListImagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListImagesResponseBody> body{};

  ListImagesResponse() {}

  explicit ListImagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListImagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListImagesResponseBody>(model1);
      }
    }
  }


  virtual ~ListImagesResponse() = default;
};
class ListOfficeConversionTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxKeys{};
  shared_ptr<string> project{};

  ListOfficeConversionTaskRequest() {}

  explicit ListOfficeConversionTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (maxKeys) {
      res["MaxKeys"] = boost::any(*maxKeys);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("MaxKeys") != m.end() && !m["MaxKeys"].empty()) {
      maxKeys = make_shared<long>(boost::any_cast<long>(m["MaxKeys"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
  }


  virtual ~ListOfficeConversionTaskRequest() = default;
};
class ListOfficeConversionTaskResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> externalID{};
  shared_ptr<string> finishTime{};
  shared_ptr<string> imageSpec{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<long> pageCount{};
  shared_ptr<long> percent{};
  shared_ptr<string> srcUri{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> tgtType{};
  shared_ptr<string> tgtUri{};

  ListOfficeConversionTaskResponseBodyTasks() {}

  explicit ListOfficeConversionTaskResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (externalID) {
      res["ExternalID"] = boost::any(*externalID);
    }
    if (finishTime) {
      res["FinishTime"] = boost::any(*finishTime);
    }
    if (imageSpec) {
      res["ImageSpec"] = boost::any(*imageSpec);
    }
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (percent) {
      res["Percent"] = boost::any(*percent);
    }
    if (srcUri) {
      res["SrcUri"] = boost::any(*srcUri);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (tgtType) {
      res["TgtType"] = boost::any(*tgtType);
    }
    if (tgtUri) {
      res["TgtUri"] = boost::any(*tgtUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExternalID") != m.end() && !m["ExternalID"].empty()) {
      externalID = make_shared<string>(boost::any_cast<string>(m["ExternalID"]));
    }
    if (m.find("FinishTime") != m.end() && !m["FinishTime"].empty()) {
      finishTime = make_shared<string>(boost::any_cast<string>(m["FinishTime"]));
    }
    if (m.find("ImageSpec") != m.end() && !m["ImageSpec"].empty()) {
      imageSpec = make_shared<string>(boost::any_cast<string>(m["ImageSpec"]));
    }
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("Percent") != m.end() && !m["Percent"].empty()) {
      percent = make_shared<long>(boost::any_cast<long>(m["Percent"]));
    }
    if (m.find("SrcUri") != m.end() && !m["SrcUri"].empty()) {
      srcUri = make_shared<string>(boost::any_cast<string>(m["SrcUri"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TgtType") != m.end() && !m["TgtType"].empty()) {
      tgtType = make_shared<string>(boost::any_cast<string>(m["TgtType"]));
    }
    if (m.find("TgtUri") != m.end() && !m["TgtUri"].empty()) {
      tgtUri = make_shared<string>(boost::any_cast<string>(m["TgtUri"]));
    }
  }


  virtual ~ListOfficeConversionTaskResponseBodyTasks() = default;
};
class ListOfficeConversionTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextMarker{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListOfficeConversionTaskResponseBodyTasks>> tasks{};

  ListOfficeConversionTaskResponseBody() {}

  explicit ListOfficeConversionTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextMarker) {
      res["NextMarker"] = boost::any(*nextMarker);
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
    if (m.find("NextMarker") != m.end() && !m["NextMarker"].empty()) {
      nextMarker = make_shared<string>(boost::any_cast<string>(m["NextMarker"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<ListOfficeConversionTaskResponseBodyTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOfficeConversionTaskResponseBodyTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<ListOfficeConversionTaskResponseBodyTasks>>(expect1);
      }
    }
  }


  virtual ~ListOfficeConversionTaskResponseBody() = default;
};
class ListOfficeConversionTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListOfficeConversionTaskResponseBody> body{};

  ListOfficeConversionTaskResponse() {}

  explicit ListOfficeConversionTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOfficeConversionTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOfficeConversionTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ListOfficeConversionTaskResponse() = default;
};
class ListProjectAPIsRequest : public Darabonba::Model {
public:
  shared_ptr<string> project{};

  ListProjectAPIsRequest() {}

  explicit ListProjectAPIsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
  }


  virtual ~ListProjectAPIsRequest() = default;
};
class ListProjectAPIsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> APIs{};
  shared_ptr<string> project{};
  shared_ptr<string> requestId{};

  ListProjectAPIsResponseBody() {}

  explicit ListProjectAPIsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (APIs) {
      res["APIs"] = boost::any(*APIs);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("APIs") != m.end() && !m["APIs"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["APIs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["APIs"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      APIs = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListProjectAPIsResponseBody() = default;
};
class ListProjectAPIsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListProjectAPIsResponseBody> body{};

  ListProjectAPIsResponse() {}

  explicit ListProjectAPIsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProjectAPIsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProjectAPIsResponseBody>(model1);
      }
    }
  }


  virtual ~ListProjectAPIsResponse() = default;
};
class ListProjectsRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxKeys{};

  ListProjectsRequest() {}

  explicit ListProjectsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (maxKeys) {
      res["MaxKeys"] = boost::any(*maxKeys);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("MaxKeys") != m.end() && !m["MaxKeys"].empty()) {
      maxKeys = make_shared<long>(boost::any_cast<long>(m["MaxKeys"]));
    }
  }


  virtual ~ListProjectsRequest() = default;
};
class ListProjectsResponseBodyProjects : public Darabonba::Model {
public:
  shared_ptr<string> billingType{};
  shared_ptr<long> CU{};
  shared_ptr<string> createTime{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> project{};
  shared_ptr<string> regionId{};
  shared_ptr<string> serviceRole{};
  shared_ptr<string> type{};

  ListProjectsResponseBodyProjects() {}

  explicit ListProjectsResponseBodyProjects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingType) {
      res["BillingType"] = boost::any(*billingType);
    }
    if (CU) {
      res["CU"] = boost::any(*CU);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (serviceRole) {
      res["ServiceRole"] = boost::any(*serviceRole);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingType") != m.end() && !m["BillingType"].empty()) {
      billingType = make_shared<string>(boost::any_cast<string>(m["BillingType"]));
    }
    if (m.find("CU") != m.end() && !m["CU"].empty()) {
      CU = make_shared<long>(boost::any_cast<long>(m["CU"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ServiceRole") != m.end() && !m["ServiceRole"].empty()) {
      serviceRole = make_shared<string>(boost::any_cast<string>(m["ServiceRole"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ListProjectsResponseBodyProjects() = default;
};
class ListProjectsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextMarker{};
  shared_ptr<vector<ListProjectsResponseBodyProjects>> projects{};
  shared_ptr<string> requestId{};

  ListProjectsResponseBody() {}

  explicit ListProjectsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextMarker) {
      res["NextMarker"] = boost::any(*nextMarker);
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
    if (m.find("NextMarker") != m.end() && !m["NextMarker"].empty()) {
      nextMarker = make_shared<string>(boost::any_cast<string>(m["NextMarker"]));
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
class ListSetTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> project{};
  shared_ptr<string> setId{};

  ListSetTagsRequest() {}

  explicit ListSetTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
  }


  virtual ~ListSetTagsRequest() = default;
};
class ListSetTagsResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<long> tagCount{};
  shared_ptr<long> tagLevel{};
  shared_ptr<string> tagName{};

  ListSetTagsResponseBodyTags() {}

  explicit ListSetTagsResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagCount) {
      res["TagCount"] = boost::any(*tagCount);
    }
    if (tagLevel) {
      res["TagLevel"] = boost::any(*tagLevel);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagCount") != m.end() && !m["TagCount"].empty()) {
      tagCount = make_shared<long>(boost::any_cast<long>(m["TagCount"]));
    }
    if (m.find("TagLevel") != m.end() && !m["TagLevel"].empty()) {
      tagLevel = make_shared<long>(boost::any_cast<long>(m["TagLevel"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~ListSetTagsResponseBodyTags() = default;
};
class ListSetTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> setId{};
  shared_ptr<vector<ListSetTagsResponseBodyTags>> tags{};

  ListSetTagsResponseBody() {}

  explicit ListSetTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListSetTagsResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSetTagsResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListSetTagsResponseBodyTags>>(expect1);
      }
    }
  }


  virtual ~ListSetTagsResponseBody() = default;
};
class ListSetTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSetTagsResponseBody> body{};

  ListSetTagsResponse() {}

  explicit ListSetTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSetTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSetTagsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSetTagsResponse() = default;
};
class ListSetsRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<string> project{};

  ListSetsRequest() {}

  explicit ListSetsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
  }


  virtual ~ListSetsRequest() = default;
};
class ListSetsResponseBodySets : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> faceCount{};
  shared_ptr<long> imageCount{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> setId{};
  shared_ptr<string> setName{};
  shared_ptr<long> videoCount{};
  shared_ptr<long> videoLength{};

  ListSetsResponseBodySets() {}

  explicit ListSetsResponseBodySets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (faceCount) {
      res["FaceCount"] = boost::any(*faceCount);
    }
    if (imageCount) {
      res["ImageCount"] = boost::any(*imageCount);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (setName) {
      res["SetName"] = boost::any(*setName);
    }
    if (videoCount) {
      res["VideoCount"] = boost::any(*videoCount);
    }
    if (videoLength) {
      res["VideoLength"] = boost::any(*videoLength);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("FaceCount") != m.end() && !m["FaceCount"].empty()) {
      faceCount = make_shared<long>(boost::any_cast<long>(m["FaceCount"]));
    }
    if (m.find("ImageCount") != m.end() && !m["ImageCount"].empty()) {
      imageCount = make_shared<long>(boost::any_cast<long>(m["ImageCount"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("SetName") != m.end() && !m["SetName"].empty()) {
      setName = make_shared<string>(boost::any_cast<string>(m["SetName"]));
    }
    if (m.find("VideoCount") != m.end() && !m["VideoCount"].empty()) {
      videoCount = make_shared<long>(boost::any_cast<long>(m["VideoCount"]));
    }
    if (m.find("VideoLength") != m.end() && !m["VideoLength"].empty()) {
      videoLength = make_shared<long>(boost::any_cast<long>(m["VideoLength"]));
    }
  }


  virtual ~ListSetsResponseBodySets() = default;
};
class ListSetsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextMarker{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSetsResponseBodySets>> sets{};

  ListSetsResponseBody() {}

  explicit ListSetsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextMarker) {
      res["NextMarker"] = boost::any(*nextMarker);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sets) {
      vector<boost::any> temp1;
      for(auto item1:*sets){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Sets"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextMarker") != m.end() && !m["NextMarker"].empty()) {
      nextMarker = make_shared<string>(boost::any_cast<string>(m["NextMarker"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Sets") != m.end() && !m["Sets"].empty()) {
      if (typeid(vector<boost::any>) == m["Sets"].type()) {
        vector<ListSetsResponseBodySets> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Sets"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSetsResponseBodySets model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sets = make_shared<vector<ListSetsResponseBodySets>>(expect1);
      }
    }
  }


  virtual ~ListSetsResponseBody() = default;
};
class ListSetsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListSetsResponseBody> body{};

  ListSetsResponse() {}

  explicit ListSetsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSetsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSetsResponseBody>(model1);
      }
    }
  }


  virtual ~ListSetsResponse() = default;
};
class ListVideoAudiosRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<string> project{};
  shared_ptr<string> setId{};
  shared_ptr<string> videoUri{};

  ListVideoAudiosRequest() {}

  explicit ListVideoAudiosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (videoUri) {
      res["VideoUri"] = boost::any(*videoUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("VideoUri") != m.end() && !m["VideoUri"].empty()) {
      videoUri = make_shared<string>(boost::any_cast<string>(m["VideoUri"]));
    }
  }


  virtual ~ListVideoAudiosRequest() = default;
};
class ListVideoAudiosResponseBodyAudiosAudioTexts : public Darabonba::Model {
public:
  shared_ptr<double> beginTime{};
  shared_ptr<long> channelId{};
  shared_ptr<double> confidence{};
  shared_ptr<double> emotionValue{};
  shared_ptr<double> endTime{};
  shared_ptr<string> library{};
  shared_ptr<string> person{};
  shared_ptr<double> silenceDuration{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> text{};

  ListVideoAudiosResponseBodyAudiosAudioTexts() {}

  explicit ListVideoAudiosResponseBodyAudiosAudioTexts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (emotionValue) {
      res["EmotionValue"] = boost::any(*emotionValue);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (library) {
      res["Library"] = boost::any(*library);
    }
    if (person) {
      res["Person"] = boost::any(*person);
    }
    if (silenceDuration) {
      res["SilenceDuration"] = boost::any(*silenceDuration);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<double>(boost::any_cast<double>(m["BeginTime"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<long>(boost::any_cast<long>(m["ChannelId"]));
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<double>(boost::any_cast<double>(m["Confidence"]));
    }
    if (m.find("EmotionValue") != m.end() && !m["EmotionValue"].empty()) {
      emotionValue = make_shared<double>(boost::any_cast<double>(m["EmotionValue"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<double>(boost::any_cast<double>(m["EndTime"]));
    }
    if (m.find("Library") != m.end() && !m["Library"].empty()) {
      library = make_shared<string>(boost::any_cast<string>(m["Library"]));
    }
    if (m.find("Person") != m.end() && !m["Person"].empty()) {
      person = make_shared<string>(boost::any_cast<string>(m["Person"]));
    }
    if (m.find("SilenceDuration") != m.end() && !m["SilenceDuration"].empty()) {
      silenceDuration = make_shared<double>(boost::any_cast<double>(m["SilenceDuration"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~ListVideoAudiosResponseBodyAudiosAudioTexts() = default;
};
class ListVideoAudiosResponseBodyAudios : public Darabonba::Model {
public:
  shared_ptr<double> audioDuration{};
  shared_ptr<string> audioFormat{};
  shared_ptr<long> audioRate{};
  shared_ptr<vector<ListVideoAudiosResponseBodyAudiosAudioTexts>> audioTexts{};
  shared_ptr<string> audioTextsFailReason{};
  shared_ptr<string> audioTextsModifyTime{};
  shared_ptr<string> audioTextsStatus{};
  shared_ptr<string> audioUri{};
  shared_ptr<string> createTime{};
  shared_ptr<string> externalId{};
  shared_ptr<long> fileSize{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> processFailReason{};
  shared_ptr<string> processModifyTime{};
  shared_ptr<string> processStatus{};
  shared_ptr<string> remarksA{};
  shared_ptr<string> remarksB{};
  shared_ptr<string> remarksC{};
  shared_ptr<string> remarksD{};
  shared_ptr<string> sourcePosition{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> sourceUri{};

  ListVideoAudiosResponseBodyAudios() {}

  explicit ListVideoAudiosResponseBodyAudios(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioDuration) {
      res["AudioDuration"] = boost::any(*audioDuration);
    }
    if (audioFormat) {
      res["AudioFormat"] = boost::any(*audioFormat);
    }
    if (audioRate) {
      res["AudioRate"] = boost::any(*audioRate);
    }
    if (audioTexts) {
      vector<boost::any> temp1;
      for(auto item1:*audioTexts){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AudioTexts"] = boost::any(temp1);
    }
    if (audioTextsFailReason) {
      res["AudioTextsFailReason"] = boost::any(*audioTextsFailReason);
    }
    if (audioTextsModifyTime) {
      res["AudioTextsModifyTime"] = boost::any(*audioTextsModifyTime);
    }
    if (audioTextsStatus) {
      res["AudioTextsStatus"] = boost::any(*audioTextsStatus);
    }
    if (audioUri) {
      res["AudioUri"] = boost::any(*audioUri);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (externalId) {
      res["ExternalId"] = boost::any(*externalId);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (processFailReason) {
      res["ProcessFailReason"] = boost::any(*processFailReason);
    }
    if (processModifyTime) {
      res["ProcessModifyTime"] = boost::any(*processModifyTime);
    }
    if (processStatus) {
      res["ProcessStatus"] = boost::any(*processStatus);
    }
    if (remarksA) {
      res["RemarksA"] = boost::any(*remarksA);
    }
    if (remarksB) {
      res["RemarksB"] = boost::any(*remarksB);
    }
    if (remarksC) {
      res["RemarksC"] = boost::any(*remarksC);
    }
    if (remarksD) {
      res["RemarksD"] = boost::any(*remarksD);
    }
    if (sourcePosition) {
      res["SourcePosition"] = boost::any(*sourcePosition);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (sourceUri) {
      res["SourceUri"] = boost::any(*sourceUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AudioDuration") != m.end() && !m["AudioDuration"].empty()) {
      audioDuration = make_shared<double>(boost::any_cast<double>(m["AudioDuration"]));
    }
    if (m.find("AudioFormat") != m.end() && !m["AudioFormat"].empty()) {
      audioFormat = make_shared<string>(boost::any_cast<string>(m["AudioFormat"]));
    }
    if (m.find("AudioRate") != m.end() && !m["AudioRate"].empty()) {
      audioRate = make_shared<long>(boost::any_cast<long>(m["AudioRate"]));
    }
    if (m.find("AudioTexts") != m.end() && !m["AudioTexts"].empty()) {
      if (typeid(vector<boost::any>) == m["AudioTexts"].type()) {
        vector<ListVideoAudiosResponseBodyAudiosAudioTexts> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AudioTexts"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVideoAudiosResponseBodyAudiosAudioTexts model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        audioTexts = make_shared<vector<ListVideoAudiosResponseBodyAudiosAudioTexts>>(expect1);
      }
    }
    if (m.find("AudioTextsFailReason") != m.end() && !m["AudioTextsFailReason"].empty()) {
      audioTextsFailReason = make_shared<string>(boost::any_cast<string>(m["AudioTextsFailReason"]));
    }
    if (m.find("AudioTextsModifyTime") != m.end() && !m["AudioTextsModifyTime"].empty()) {
      audioTextsModifyTime = make_shared<string>(boost::any_cast<string>(m["AudioTextsModifyTime"]));
    }
    if (m.find("AudioTextsStatus") != m.end() && !m["AudioTextsStatus"].empty()) {
      audioTextsStatus = make_shared<string>(boost::any_cast<string>(m["AudioTextsStatus"]));
    }
    if (m.find("AudioUri") != m.end() && !m["AudioUri"].empty()) {
      audioUri = make_shared<string>(boost::any_cast<string>(m["AudioUri"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      externalId = make_shared<string>(boost::any_cast<string>(m["ExternalId"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ProcessFailReason") != m.end() && !m["ProcessFailReason"].empty()) {
      processFailReason = make_shared<string>(boost::any_cast<string>(m["ProcessFailReason"]));
    }
    if (m.find("ProcessModifyTime") != m.end() && !m["ProcessModifyTime"].empty()) {
      processModifyTime = make_shared<string>(boost::any_cast<string>(m["ProcessModifyTime"]));
    }
    if (m.find("ProcessStatus") != m.end() && !m["ProcessStatus"].empty()) {
      processStatus = make_shared<string>(boost::any_cast<string>(m["ProcessStatus"]));
    }
    if (m.find("RemarksA") != m.end() && !m["RemarksA"].empty()) {
      remarksA = make_shared<string>(boost::any_cast<string>(m["RemarksA"]));
    }
    if (m.find("RemarksB") != m.end() && !m["RemarksB"].empty()) {
      remarksB = make_shared<string>(boost::any_cast<string>(m["RemarksB"]));
    }
    if (m.find("RemarksC") != m.end() && !m["RemarksC"].empty()) {
      remarksC = make_shared<string>(boost::any_cast<string>(m["RemarksC"]));
    }
    if (m.find("RemarksD") != m.end() && !m["RemarksD"].empty()) {
      remarksD = make_shared<string>(boost::any_cast<string>(m["RemarksD"]));
    }
    if (m.find("SourcePosition") != m.end() && !m["SourcePosition"].empty()) {
      sourcePosition = make_shared<string>(boost::any_cast<string>(m["SourcePosition"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SourceUri") != m.end() && !m["SourceUri"].empty()) {
      sourceUri = make_shared<string>(boost::any_cast<string>(m["SourceUri"]));
    }
  }


  virtual ~ListVideoAudiosResponseBodyAudios() = default;
};
class ListVideoAudiosResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListVideoAudiosResponseBodyAudios>> audios{};
  shared_ptr<string> nextMarker{};
  shared_ptr<string> requestId{};
  shared_ptr<string> setId{};
  shared_ptr<string> videoUri{};

  ListVideoAudiosResponseBody() {}

  explicit ListVideoAudiosResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audios) {
      vector<boost::any> temp1;
      for(auto item1:*audios){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Audios"] = boost::any(temp1);
    }
    if (nextMarker) {
      res["NextMarker"] = boost::any(*nextMarker);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (videoUri) {
      res["VideoUri"] = boost::any(*videoUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Audios") != m.end() && !m["Audios"].empty()) {
      if (typeid(vector<boost::any>) == m["Audios"].type()) {
        vector<ListVideoAudiosResponseBodyAudios> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Audios"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVideoAudiosResponseBodyAudios model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        audios = make_shared<vector<ListVideoAudiosResponseBodyAudios>>(expect1);
      }
    }
    if (m.find("NextMarker") != m.end() && !m["NextMarker"].empty()) {
      nextMarker = make_shared<string>(boost::any_cast<string>(m["NextMarker"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("VideoUri") != m.end() && !m["VideoUri"].empty()) {
      videoUri = make_shared<string>(boost::any_cast<string>(m["VideoUri"]));
    }
  }


  virtual ~ListVideoAudiosResponseBody() = default;
};
class ListVideoAudiosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListVideoAudiosResponseBody> body{};

  ListVideoAudiosResponse() {}

  explicit ListVideoAudiosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVideoAudiosResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVideoAudiosResponseBody>(model1);
      }
    }
  }


  virtual ~ListVideoAudiosResponse() = default;
};
class ListVideoFramesRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<string> project{};
  shared_ptr<string> setId{};
  shared_ptr<string> videoUri{};

  ListVideoFramesRequest() {}

  explicit ListVideoFramesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (videoUri) {
      res["VideoUri"] = boost::any(*videoUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("VideoUri") != m.end() && !m["VideoUri"].empty()) {
      videoUri = make_shared<string>(boost::any_cast<string>(m["VideoUri"]));
    }
  }


  virtual ~ListVideoFramesRequest() = default;
};
class ListVideoFramesResponseBodyFramesFacesEmotionDetails : public Darabonba::Model {
public:
  shared_ptr<double> ANGRY{};
  shared_ptr<double> CALM{};
  shared_ptr<double> DISGUSTED{};
  shared_ptr<double> HAPPY{};
  shared_ptr<double> SAD{};
  shared_ptr<double> SCARED{};
  shared_ptr<double> SURPRISED{};

  ListVideoFramesResponseBodyFramesFacesEmotionDetails() {}

  explicit ListVideoFramesResponseBodyFramesFacesEmotionDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ANGRY) {
      res["ANGRY"] = boost::any(*ANGRY);
    }
    if (CALM) {
      res["CALM"] = boost::any(*CALM);
    }
    if (DISGUSTED) {
      res["DISGUSTED"] = boost::any(*DISGUSTED);
    }
    if (HAPPY) {
      res["HAPPY"] = boost::any(*HAPPY);
    }
    if (SAD) {
      res["SAD"] = boost::any(*SAD);
    }
    if (SCARED) {
      res["SCARED"] = boost::any(*SCARED);
    }
    if (SURPRISED) {
      res["SURPRISED"] = boost::any(*SURPRISED);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ANGRY") != m.end() && !m["ANGRY"].empty()) {
      ANGRY = make_shared<double>(boost::any_cast<double>(m["ANGRY"]));
    }
    if (m.find("CALM") != m.end() && !m["CALM"].empty()) {
      CALM = make_shared<double>(boost::any_cast<double>(m["CALM"]));
    }
    if (m.find("DISGUSTED") != m.end() && !m["DISGUSTED"].empty()) {
      DISGUSTED = make_shared<double>(boost::any_cast<double>(m["DISGUSTED"]));
    }
    if (m.find("HAPPY") != m.end() && !m["HAPPY"].empty()) {
      HAPPY = make_shared<double>(boost::any_cast<double>(m["HAPPY"]));
    }
    if (m.find("SAD") != m.end() && !m["SAD"].empty()) {
      SAD = make_shared<double>(boost::any_cast<double>(m["SAD"]));
    }
    if (m.find("SCARED") != m.end() && !m["SCARED"].empty()) {
      SCARED = make_shared<double>(boost::any_cast<double>(m["SCARED"]));
    }
    if (m.find("SURPRISED") != m.end() && !m["SURPRISED"].empty()) {
      SURPRISED = make_shared<double>(boost::any_cast<double>(m["SURPRISED"]));
    }
  }


  virtual ~ListVideoFramesResponseBodyFramesFacesEmotionDetails() = default;
};
class ListVideoFramesResponseBodyFramesFacesFaceAttributesFaceBoundary : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  ListVideoFramesResponseBodyFramesFacesFaceAttributesFaceBoundary() {}

  explicit ListVideoFramesResponseBodyFramesFacesFaceAttributesFaceBoundary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListVideoFramesResponseBodyFramesFacesFaceAttributesFaceBoundary() = default;
};
class ListVideoFramesResponseBodyFramesFacesFaceAttributesHeadPose : public Darabonba::Model {
public:
  shared_ptr<double> pitch{};
  shared_ptr<double> roll{};
  shared_ptr<double> yaw{};

  ListVideoFramesResponseBodyFramesFacesFaceAttributesHeadPose() {}

  explicit ListVideoFramesResponseBodyFramesFacesFaceAttributesHeadPose(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListVideoFramesResponseBodyFramesFacesFaceAttributesHeadPose() = default;
};
class ListVideoFramesResponseBodyFramesFacesFaceAttributes : public Darabonba::Model {
public:
  shared_ptr<string> beard{};
  shared_ptr<double> beardConfidence{};
  shared_ptr<ListVideoFramesResponseBodyFramesFacesFaceAttributesFaceBoundary> faceBoundary{};
  shared_ptr<string> glasses{};
  shared_ptr<double> glassesConfidence{};
  shared_ptr<ListVideoFramesResponseBodyFramesFacesFaceAttributesHeadPose> headPose{};
  shared_ptr<string> mask{};
  shared_ptr<double> maskConfidence{};

  ListVideoFramesResponseBodyFramesFacesFaceAttributes() {}

  explicit ListVideoFramesResponseBodyFramesFacesFaceAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beard) {
      res["Beard"] = boost::any(*beard);
    }
    if (beardConfidence) {
      res["BeardConfidence"] = boost::any(*beardConfidence);
    }
    if (faceBoundary) {
      res["FaceBoundary"] = faceBoundary ? boost::any(faceBoundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (glasses) {
      res["Glasses"] = boost::any(*glasses);
    }
    if (glassesConfidence) {
      res["GlassesConfidence"] = boost::any(*glassesConfidence);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Beard") != m.end() && !m["Beard"].empty()) {
      beard = make_shared<string>(boost::any_cast<string>(m["Beard"]));
    }
    if (m.find("BeardConfidence") != m.end() && !m["BeardConfidence"].empty()) {
      beardConfidence = make_shared<double>(boost::any_cast<double>(m["BeardConfidence"]));
    }
    if (m.find("FaceBoundary") != m.end() && !m["FaceBoundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceBoundary"].type()) {
        ListVideoFramesResponseBodyFramesFacesFaceAttributesFaceBoundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceBoundary"]));
        faceBoundary = make_shared<ListVideoFramesResponseBodyFramesFacesFaceAttributesFaceBoundary>(model1);
      }
    }
    if (m.find("Glasses") != m.end() && !m["Glasses"].empty()) {
      glasses = make_shared<string>(boost::any_cast<string>(m["Glasses"]));
    }
    if (m.find("GlassesConfidence") != m.end() && !m["GlassesConfidence"].empty()) {
      glassesConfidence = make_shared<double>(boost::any_cast<double>(m["GlassesConfidence"]));
    }
    if (m.find("HeadPose") != m.end() && !m["HeadPose"].empty()) {
      if (typeid(map<string, boost::any>) == m["HeadPose"].type()) {
        ListVideoFramesResponseBodyFramesFacesFaceAttributesHeadPose model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HeadPose"]));
        headPose = make_shared<ListVideoFramesResponseBodyFramesFacesFaceAttributesHeadPose>(model1);
      }
    }
    if (m.find("Mask") != m.end() && !m["Mask"].empty()) {
      mask = make_shared<string>(boost::any_cast<string>(m["Mask"]));
    }
    if (m.find("MaskConfidence") != m.end() && !m["MaskConfidence"].empty()) {
      maskConfidence = make_shared<double>(boost::any_cast<double>(m["MaskConfidence"]));
    }
  }


  virtual ~ListVideoFramesResponseBodyFramesFacesFaceAttributes() = default;
};
class ListVideoFramesResponseBodyFramesFaces : public Darabonba::Model {
public:
  shared_ptr<long> age{};
  shared_ptr<double> attractive{};
  shared_ptr<string> emotion{};
  shared_ptr<double> emotionConfidence{};
  shared_ptr<ListVideoFramesResponseBodyFramesFacesEmotionDetails> emotionDetails{};
  shared_ptr<ListVideoFramesResponseBodyFramesFacesFaceAttributes> faceAttributes{};
  shared_ptr<double> faceConfidence{};
  shared_ptr<string> faceId{};
  shared_ptr<double> faceQuality{};
  shared_ptr<string> gender{};
  shared_ptr<double> genderConfidence{};
  shared_ptr<string> groupId{};

  ListVideoFramesResponseBodyFramesFaces() {}

  explicit ListVideoFramesResponseBodyFramesFaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (age) {
      res["Age"] = boost::any(*age);
    }
    if (attractive) {
      res["Attractive"] = boost::any(*attractive);
    }
    if (emotion) {
      res["Emotion"] = boost::any(*emotion);
    }
    if (emotionConfidence) {
      res["EmotionConfidence"] = boost::any(*emotionConfidence);
    }
    if (emotionDetails) {
      res["EmotionDetails"] = emotionDetails ? boost::any(emotionDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceAttributes) {
      res["FaceAttributes"] = faceAttributes ? boost::any(faceAttributes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (faceConfidence) {
      res["FaceConfidence"] = boost::any(*faceConfidence);
    }
    if (faceId) {
      res["FaceId"] = boost::any(*faceId);
    }
    if (faceQuality) {
      res["FaceQuality"] = boost::any(*faceQuality);
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (genderConfidence) {
      res["GenderConfidence"] = boost::any(*genderConfidence);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Age") != m.end() && !m["Age"].empty()) {
      age = make_shared<long>(boost::any_cast<long>(m["Age"]));
    }
    if (m.find("Attractive") != m.end() && !m["Attractive"].empty()) {
      attractive = make_shared<double>(boost::any_cast<double>(m["Attractive"]));
    }
    if (m.find("Emotion") != m.end() && !m["Emotion"].empty()) {
      emotion = make_shared<string>(boost::any_cast<string>(m["Emotion"]));
    }
    if (m.find("EmotionConfidence") != m.end() && !m["EmotionConfidence"].empty()) {
      emotionConfidence = make_shared<double>(boost::any_cast<double>(m["EmotionConfidence"]));
    }
    if (m.find("EmotionDetails") != m.end() && !m["EmotionDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["EmotionDetails"].type()) {
        ListVideoFramesResponseBodyFramesFacesEmotionDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EmotionDetails"]));
        emotionDetails = make_shared<ListVideoFramesResponseBodyFramesFacesEmotionDetails>(model1);
      }
    }
    if (m.find("FaceAttributes") != m.end() && !m["FaceAttributes"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceAttributes"].type()) {
        ListVideoFramesResponseBodyFramesFacesFaceAttributes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceAttributes"]));
        faceAttributes = make_shared<ListVideoFramesResponseBodyFramesFacesFaceAttributes>(model1);
      }
    }
    if (m.find("FaceConfidence") != m.end() && !m["FaceConfidence"].empty()) {
      faceConfidence = make_shared<double>(boost::any_cast<double>(m["FaceConfidence"]));
    }
    if (m.find("FaceId") != m.end() && !m["FaceId"].empty()) {
      faceId = make_shared<string>(boost::any_cast<string>(m["FaceId"]));
    }
    if (m.find("FaceQuality") != m.end() && !m["FaceQuality"].empty()) {
      faceQuality = make_shared<double>(boost::any_cast<double>(m["FaceQuality"]));
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<string>(boost::any_cast<string>(m["Gender"]));
    }
    if (m.find("GenderConfidence") != m.end() && !m["GenderConfidence"].empty()) {
      genderConfidence = make_shared<double>(boost::any_cast<double>(m["GenderConfidence"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~ListVideoFramesResponseBodyFramesFaces() = default;
};
class ListVideoFramesResponseBodyFramesOCROCRBoundary : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<long> left{};
  shared_ptr<long> top{};
  shared_ptr<long> width{};

  ListVideoFramesResponseBodyFramesOCROCRBoundary() {}

  explicit ListVideoFramesResponseBodyFramesOCROCRBoundary(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListVideoFramesResponseBodyFramesOCROCRBoundary() = default;
};
class ListVideoFramesResponseBodyFramesOCR : public Darabonba::Model {
public:
  shared_ptr<ListVideoFramesResponseBodyFramesOCROCRBoundary> OCRBoundary{};
  shared_ptr<double> OCRConfidence{};
  shared_ptr<string> OCRContents{};

  ListVideoFramesResponseBodyFramesOCR() {}

  explicit ListVideoFramesResponseBodyFramesOCR(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (OCRBoundary) {
      res["OCRBoundary"] = OCRBoundary ? boost::any(OCRBoundary->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (OCRConfidence) {
      res["OCRConfidence"] = boost::any(*OCRConfidence);
    }
    if (OCRContents) {
      res["OCRContents"] = boost::any(*OCRContents);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OCRBoundary") != m.end() && !m["OCRBoundary"].empty()) {
      if (typeid(map<string, boost::any>) == m["OCRBoundary"].type()) {
        ListVideoFramesResponseBodyFramesOCROCRBoundary model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OCRBoundary"]));
        OCRBoundary = make_shared<ListVideoFramesResponseBodyFramesOCROCRBoundary>(model1);
      }
    }
    if (m.find("OCRConfidence") != m.end() && !m["OCRConfidence"].empty()) {
      OCRConfidence = make_shared<double>(boost::any_cast<double>(m["OCRConfidence"]));
    }
    if (m.find("OCRContents") != m.end() && !m["OCRContents"].empty()) {
      OCRContents = make_shared<string>(boost::any_cast<string>(m["OCRContents"]));
    }
  }


  virtual ~ListVideoFramesResponseBodyFramesOCR() = default;
};
class ListVideoFramesResponseBodyFramesTags : public Darabonba::Model {
public:
  shared_ptr<string> parentTagName{};
  shared_ptr<double> tagConfidence{};
  shared_ptr<long> tagLevel{};
  shared_ptr<string> tagName{};

  ListVideoFramesResponseBodyFramesTags() {}

  explicit ListVideoFramesResponseBodyFramesTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parentTagName) {
      res["ParentTagName"] = boost::any(*parentTagName);
    }
    if (tagConfidence) {
      res["TagConfidence"] = boost::any(*tagConfidence);
    }
    if (tagLevel) {
      res["TagLevel"] = boost::any(*tagLevel);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParentTagName") != m.end() && !m["ParentTagName"].empty()) {
      parentTagName = make_shared<string>(boost::any_cast<string>(m["ParentTagName"]));
    }
    if (m.find("TagConfidence") != m.end() && !m["TagConfidence"].empty()) {
      tagConfidence = make_shared<double>(boost::any_cast<double>(m["TagConfidence"]));
    }
    if (m.find("TagLevel") != m.end() && !m["TagLevel"].empty()) {
      tagLevel = make_shared<long>(boost::any_cast<long>(m["TagLevel"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~ListVideoFramesResponseBodyFramesTags() = default;
};
class ListVideoFramesResponseBodyFrames : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> exif{};
  shared_ptr<string> externalId{};
  shared_ptr<vector<ListVideoFramesResponseBodyFramesFaces>> faces{};
  shared_ptr<string> facesFailReason{};
  shared_ptr<string> facesModifyTime{};
  shared_ptr<string> facesStatus{};
  shared_ptr<long> fileSize{};
  shared_ptr<string> imageFormat{};
  shared_ptr<long> imageHeight{};
  shared_ptr<string> imageTime{};
  shared_ptr<string> imageUri{};
  shared_ptr<long> imageWidth{};
  shared_ptr<string> location{};
  shared_ptr<string> modifyTime{};
  shared_ptr<vector<ListVideoFramesResponseBodyFramesOCR>> OCR{};
  shared_ptr<string> OCRFailReason{};
  shared_ptr<string> OCRModifyTime{};
  shared_ptr<string> OCRStatus{};
  shared_ptr<string> orientation{};
  shared_ptr<string> remarksA{};
  shared_ptr<string> remarksB{};
  shared_ptr<string> remarksC{};
  shared_ptr<string> remarksD{};
  shared_ptr<string> sourcePosition{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> sourceUri{};
  shared_ptr<vector<ListVideoFramesResponseBodyFramesTags>> tags{};
  shared_ptr<string> tagsFailReason{};
  shared_ptr<string> tagsModifyTime{};
  shared_ptr<string> tagsStatus{};

  ListVideoFramesResponseBodyFrames() {}

  explicit ListVideoFramesResponseBodyFrames(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (exif) {
      res["Exif"] = boost::any(*exif);
    }
    if (externalId) {
      res["ExternalId"] = boost::any(*externalId);
    }
    if (faces) {
      vector<boost::any> temp1;
      for(auto item1:*faces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Faces"] = boost::any(temp1);
    }
    if (facesFailReason) {
      res["FacesFailReason"] = boost::any(*facesFailReason);
    }
    if (facesModifyTime) {
      res["FacesModifyTime"] = boost::any(*facesModifyTime);
    }
    if (facesStatus) {
      res["FacesStatus"] = boost::any(*facesStatus);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (imageFormat) {
      res["ImageFormat"] = boost::any(*imageFormat);
    }
    if (imageHeight) {
      res["ImageHeight"] = boost::any(*imageHeight);
    }
    if (imageTime) {
      res["ImageTime"] = boost::any(*imageTime);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (imageWidth) {
      res["ImageWidth"] = boost::any(*imageWidth);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (OCR) {
      vector<boost::any> temp1;
      for(auto item1:*OCR){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OCR"] = boost::any(temp1);
    }
    if (OCRFailReason) {
      res["OCRFailReason"] = boost::any(*OCRFailReason);
    }
    if (OCRModifyTime) {
      res["OCRModifyTime"] = boost::any(*OCRModifyTime);
    }
    if (OCRStatus) {
      res["OCRStatus"] = boost::any(*OCRStatus);
    }
    if (orientation) {
      res["Orientation"] = boost::any(*orientation);
    }
    if (remarksA) {
      res["RemarksA"] = boost::any(*remarksA);
    }
    if (remarksB) {
      res["RemarksB"] = boost::any(*remarksB);
    }
    if (remarksC) {
      res["RemarksC"] = boost::any(*remarksC);
    }
    if (remarksD) {
      res["RemarksD"] = boost::any(*remarksD);
    }
    if (sourcePosition) {
      res["SourcePosition"] = boost::any(*sourcePosition);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (sourceUri) {
      res["SourceUri"] = boost::any(*sourceUri);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (tagsFailReason) {
      res["TagsFailReason"] = boost::any(*tagsFailReason);
    }
    if (tagsModifyTime) {
      res["TagsModifyTime"] = boost::any(*tagsModifyTime);
    }
    if (tagsStatus) {
      res["TagsStatus"] = boost::any(*tagsStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Exif") != m.end() && !m["Exif"].empty()) {
      exif = make_shared<string>(boost::any_cast<string>(m["Exif"]));
    }
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      externalId = make_shared<string>(boost::any_cast<string>(m["ExternalId"]));
    }
    if (m.find("Faces") != m.end() && !m["Faces"].empty()) {
      if (typeid(vector<boost::any>) == m["Faces"].type()) {
        vector<ListVideoFramesResponseBodyFramesFaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Faces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVideoFramesResponseBodyFramesFaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faces = make_shared<vector<ListVideoFramesResponseBodyFramesFaces>>(expect1);
      }
    }
    if (m.find("FacesFailReason") != m.end() && !m["FacesFailReason"].empty()) {
      facesFailReason = make_shared<string>(boost::any_cast<string>(m["FacesFailReason"]));
    }
    if (m.find("FacesModifyTime") != m.end() && !m["FacesModifyTime"].empty()) {
      facesModifyTime = make_shared<string>(boost::any_cast<string>(m["FacesModifyTime"]));
    }
    if (m.find("FacesStatus") != m.end() && !m["FacesStatus"].empty()) {
      facesStatus = make_shared<string>(boost::any_cast<string>(m["FacesStatus"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
    if (m.find("ImageFormat") != m.end() && !m["ImageFormat"].empty()) {
      imageFormat = make_shared<string>(boost::any_cast<string>(m["ImageFormat"]));
    }
    if (m.find("ImageHeight") != m.end() && !m["ImageHeight"].empty()) {
      imageHeight = make_shared<long>(boost::any_cast<long>(m["ImageHeight"]));
    }
    if (m.find("ImageTime") != m.end() && !m["ImageTime"].empty()) {
      imageTime = make_shared<string>(boost::any_cast<string>(m["ImageTime"]));
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("ImageWidth") != m.end() && !m["ImageWidth"].empty()) {
      imageWidth = make_shared<long>(boost::any_cast<long>(m["ImageWidth"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("OCR") != m.end() && !m["OCR"].empty()) {
      if (typeid(vector<boost::any>) == m["OCR"].type()) {
        vector<ListVideoFramesResponseBodyFramesOCR> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OCR"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVideoFramesResponseBodyFramesOCR model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        OCR = make_shared<vector<ListVideoFramesResponseBodyFramesOCR>>(expect1);
      }
    }
    if (m.find("OCRFailReason") != m.end() && !m["OCRFailReason"].empty()) {
      OCRFailReason = make_shared<string>(boost::any_cast<string>(m["OCRFailReason"]));
    }
    if (m.find("OCRModifyTime") != m.end() && !m["OCRModifyTime"].empty()) {
      OCRModifyTime = make_shared<string>(boost::any_cast<string>(m["OCRModifyTime"]));
    }
    if (m.find("OCRStatus") != m.end() && !m["OCRStatus"].empty()) {
      OCRStatus = make_shared<string>(boost::any_cast<string>(m["OCRStatus"]));
    }
    if (m.find("Orientation") != m.end() && !m["Orientation"].empty()) {
      orientation = make_shared<string>(boost::any_cast<string>(m["Orientation"]));
    }
    if (m.find("RemarksA") != m.end() && !m["RemarksA"].empty()) {
      remarksA = make_shared<string>(boost::any_cast<string>(m["RemarksA"]));
    }
    if (m.find("RemarksB") != m.end() && !m["RemarksB"].empty()) {
      remarksB = make_shared<string>(boost::any_cast<string>(m["RemarksB"]));
    }
    if (m.find("RemarksC") != m.end() && !m["RemarksC"].empty()) {
      remarksC = make_shared<string>(boost::any_cast<string>(m["RemarksC"]));
    }
    if (m.find("RemarksD") != m.end() && !m["RemarksD"].empty()) {
      remarksD = make_shared<string>(boost::any_cast<string>(m["RemarksD"]));
    }
    if (m.find("SourcePosition") != m.end() && !m["SourcePosition"].empty()) {
      sourcePosition = make_shared<string>(boost::any_cast<string>(m["SourcePosition"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SourceUri") != m.end() && !m["SourceUri"].empty()) {
      sourceUri = make_shared<string>(boost::any_cast<string>(m["SourceUri"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListVideoFramesResponseBodyFramesTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVideoFramesResponseBodyFramesTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListVideoFramesResponseBodyFramesTags>>(expect1);
      }
    }
    if (m.find("TagsFailReason") != m.end() && !m["TagsFailReason"].empty()) {
      tagsFailReason = make_shared<string>(boost::any_cast<string>(m["TagsFailReason"]));
    }
    if (m.find("TagsModifyTime") != m.end() && !m["TagsModifyTime"].empty()) {
      tagsModifyTime = make_shared<string>(boost::any_cast<string>(m["TagsModifyTime"]));
    }
    if (m.find("TagsStatus") != m.end() && !m["TagsStatus"].empty()) {
      tagsStatus = make_shared<string>(boost::any_cast<string>(m["TagsStatus"]));
    }
  }


  virtual ~ListVideoFramesResponseBodyFrames() = default;
};
class ListVideoFramesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListVideoFramesResponseBodyFrames>> frames{};
  shared_ptr<string> nextMarker{};
  shared_ptr<string> requestId{};
  shared_ptr<string> setId{};
  shared_ptr<string> videoUri{};

  ListVideoFramesResponseBody() {}

  explicit ListVideoFramesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (frames) {
      vector<boost::any> temp1;
      for(auto item1:*frames){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Frames"] = boost::any(temp1);
    }
    if (nextMarker) {
      res["NextMarker"] = boost::any(*nextMarker);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (videoUri) {
      res["VideoUri"] = boost::any(*videoUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Frames") != m.end() && !m["Frames"].empty()) {
      if (typeid(vector<boost::any>) == m["Frames"].type()) {
        vector<ListVideoFramesResponseBodyFrames> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Frames"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVideoFramesResponseBodyFrames model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        frames = make_shared<vector<ListVideoFramesResponseBodyFrames>>(expect1);
      }
    }
    if (m.find("NextMarker") != m.end() && !m["NextMarker"].empty()) {
      nextMarker = make_shared<string>(boost::any_cast<string>(m["NextMarker"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("VideoUri") != m.end() && !m["VideoUri"].empty()) {
      videoUri = make_shared<string>(boost::any_cast<string>(m["VideoUri"]));
    }
  }


  virtual ~ListVideoFramesResponseBody() = default;
};
class ListVideoFramesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListVideoFramesResponseBody> body{};

  ListVideoFramesResponse() {}

  explicit ListVideoFramesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVideoFramesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVideoFramesResponseBody>(model1);
      }
    }
  }


  virtual ~ListVideoFramesResponse() = default;
};
class ListVideoTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> marker{};
  shared_ptr<long> maxKeys{};
  shared_ptr<string> project{};
  shared_ptr<string> taskType{};

  ListVideoTasksRequest() {}

  explicit ListVideoTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (maxKeys) {
      res["MaxKeys"] = boost::any(*maxKeys);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (taskType) {
      res["TaskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("MaxKeys") != m.end() && !m["MaxKeys"].empty()) {
      maxKeys = make_shared<long>(boost::any_cast<long>(m["MaxKeys"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("TaskType") != m.end() && !m["TaskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["TaskType"]));
    }
  }


  virtual ~ListVideoTasksRequest() = default;
};
class ListVideoTasksResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> notifyEndpoint{};
  shared_ptr<string> notifyTopicName{};
  shared_ptr<string> parameters{};
  shared_ptr<long> progress{};
  shared_ptr<string> result{};
  shared_ptr<string> startTime{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskType{};

  ListVideoTasksResponseBodyTasks() {}

  explicit ListVideoTasksResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (notifyEndpoint) {
      res["NotifyEndpoint"] = boost::any(*notifyEndpoint);
    }
    if (notifyTopicName) {
      res["NotifyTopicName"] = boost::any(*notifyTopicName);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (result) {
      res["Result"] = boost::any(*result);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("NotifyEndpoint") != m.end() && !m["NotifyEndpoint"].empty()) {
      notifyEndpoint = make_shared<string>(boost::any_cast<string>(m["NotifyEndpoint"]));
    }
    if (m.find("NotifyTopicName") != m.end() && !m["NotifyTopicName"].empty()) {
      notifyTopicName = make_shared<string>(boost::any_cast<string>(m["NotifyTopicName"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
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
  }


  virtual ~ListVideoTasksResponseBodyTasks() = default;
};
class ListVideoTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextMarker{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListVideoTasksResponseBodyTasks>> tasks{};

  ListVideoTasksResponseBody() {}

  explicit ListVideoTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextMarker) {
      res["NextMarker"] = boost::any(*nextMarker);
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
    if (m.find("NextMarker") != m.end() && !m["NextMarker"].empty()) {
      nextMarker = make_shared<string>(boost::any_cast<string>(m["NextMarker"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<ListVideoTasksResponseBodyTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVideoTasksResponseBodyTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<ListVideoTasksResponseBodyTasks>>(expect1);
      }
    }
  }


  virtual ~ListVideoTasksResponseBody() = default;
};
class ListVideoTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListVideoTasksResponseBody> body{};

  ListVideoTasksResponse() {}

  explicit ListVideoTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVideoTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVideoTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListVideoTasksResponse() = default;
};
class ListVideosRequest : public Darabonba::Model {
public:
  shared_ptr<string> createTimeStart{};
  shared_ptr<string> marker{};
  shared_ptr<string> project{};
  shared_ptr<string> setId{};

  ListVideosRequest() {}

  explicit ListVideosRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTimeStart) {
      res["CreateTimeStart"] = boost::any(*createTimeStart);
    }
    if (marker) {
      res["Marker"] = boost::any(*marker);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTimeStart") != m.end() && !m["CreateTimeStart"].empty()) {
      createTimeStart = make_shared<string>(boost::any_cast<string>(m["CreateTimeStart"]));
    }
    if (m.find("Marker") != m.end() && !m["Marker"].empty()) {
      marker = make_shared<string>(boost::any_cast<string>(m["Marker"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
  }


  virtual ~ListVideosRequest() = default;
};
class ListVideosResponseBodyVideosVideoTags : public Darabonba::Model {
public:
  shared_ptr<string> parentTagName{};
  shared_ptr<double> tagConfidence{};
  shared_ptr<long> tagLevel{};
  shared_ptr<string> tagName{};

  ListVideosResponseBodyVideosVideoTags() {}

  explicit ListVideosResponseBodyVideosVideoTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parentTagName) {
      res["ParentTagName"] = boost::any(*parentTagName);
    }
    if (tagConfidence) {
      res["TagConfidence"] = boost::any(*tagConfidence);
    }
    if (tagLevel) {
      res["TagLevel"] = boost::any(*tagLevel);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParentTagName") != m.end() && !m["ParentTagName"].empty()) {
      parentTagName = make_shared<string>(boost::any_cast<string>(m["ParentTagName"]));
    }
    if (m.find("TagConfidence") != m.end() && !m["TagConfidence"].empty()) {
      tagConfidence = make_shared<double>(boost::any_cast<double>(m["TagConfidence"]));
    }
    if (m.find("TagLevel") != m.end() && !m["TagLevel"].empty()) {
      tagLevel = make_shared<long>(boost::any_cast<long>(m["TagLevel"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~ListVideosResponseBodyVideosVideoTags() = default;
};
class ListVideosResponseBodyVideos : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> externalId{};
  shared_ptr<long> fileSize{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> processFailReason{};
  shared_ptr<string> processModifyTime{};
  shared_ptr<string> processStatus{};
  shared_ptr<string> remarksA{};
  shared_ptr<string> remarksB{};
  shared_ptr<string> remarksC{};
  shared_ptr<string> remarksD{};
  shared_ptr<string> sourcePosition{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> sourceUri{};
  shared_ptr<double> videoDuration{};
  shared_ptr<string> videoFormat{};
  shared_ptr<long> videoFrames{};
  shared_ptr<long> videoHeight{};
  shared_ptr<vector<ListVideosResponseBodyVideosVideoTags>> videoTags{};
  shared_ptr<string> videoTagsFailReason{};
  shared_ptr<string> videoTagsModifyTime{};
  shared_ptr<string> videoTagsStatus{};
  shared_ptr<string> videoUri{};
  shared_ptr<long> videoWidth{};

  ListVideosResponseBodyVideos() {}

  explicit ListVideosResponseBodyVideos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (externalId) {
      res["ExternalId"] = boost::any(*externalId);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (processFailReason) {
      res["ProcessFailReason"] = boost::any(*processFailReason);
    }
    if (processModifyTime) {
      res["ProcessModifyTime"] = boost::any(*processModifyTime);
    }
    if (processStatus) {
      res["ProcessStatus"] = boost::any(*processStatus);
    }
    if (remarksA) {
      res["RemarksA"] = boost::any(*remarksA);
    }
    if (remarksB) {
      res["RemarksB"] = boost::any(*remarksB);
    }
    if (remarksC) {
      res["RemarksC"] = boost::any(*remarksC);
    }
    if (remarksD) {
      res["RemarksD"] = boost::any(*remarksD);
    }
    if (sourcePosition) {
      res["SourcePosition"] = boost::any(*sourcePosition);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (sourceUri) {
      res["SourceUri"] = boost::any(*sourceUri);
    }
    if (videoDuration) {
      res["VideoDuration"] = boost::any(*videoDuration);
    }
    if (videoFormat) {
      res["VideoFormat"] = boost::any(*videoFormat);
    }
    if (videoFrames) {
      res["VideoFrames"] = boost::any(*videoFrames);
    }
    if (videoHeight) {
      res["VideoHeight"] = boost::any(*videoHeight);
    }
    if (videoTags) {
      vector<boost::any> temp1;
      for(auto item1:*videoTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VideoTags"] = boost::any(temp1);
    }
    if (videoTagsFailReason) {
      res["VideoTagsFailReason"] = boost::any(*videoTagsFailReason);
    }
    if (videoTagsModifyTime) {
      res["VideoTagsModifyTime"] = boost::any(*videoTagsModifyTime);
    }
    if (videoTagsStatus) {
      res["VideoTagsStatus"] = boost::any(*videoTagsStatus);
    }
    if (videoUri) {
      res["VideoUri"] = boost::any(*videoUri);
    }
    if (videoWidth) {
      res["VideoWidth"] = boost::any(*videoWidth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      externalId = make_shared<string>(boost::any_cast<string>(m["ExternalId"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ProcessFailReason") != m.end() && !m["ProcessFailReason"].empty()) {
      processFailReason = make_shared<string>(boost::any_cast<string>(m["ProcessFailReason"]));
    }
    if (m.find("ProcessModifyTime") != m.end() && !m["ProcessModifyTime"].empty()) {
      processModifyTime = make_shared<string>(boost::any_cast<string>(m["ProcessModifyTime"]));
    }
    if (m.find("ProcessStatus") != m.end() && !m["ProcessStatus"].empty()) {
      processStatus = make_shared<string>(boost::any_cast<string>(m["ProcessStatus"]));
    }
    if (m.find("RemarksA") != m.end() && !m["RemarksA"].empty()) {
      remarksA = make_shared<string>(boost::any_cast<string>(m["RemarksA"]));
    }
    if (m.find("RemarksB") != m.end() && !m["RemarksB"].empty()) {
      remarksB = make_shared<string>(boost::any_cast<string>(m["RemarksB"]));
    }
    if (m.find("RemarksC") != m.end() && !m["RemarksC"].empty()) {
      remarksC = make_shared<string>(boost::any_cast<string>(m["RemarksC"]));
    }
    if (m.find("RemarksD") != m.end() && !m["RemarksD"].empty()) {
      remarksD = make_shared<string>(boost::any_cast<string>(m["RemarksD"]));
    }
    if (m.find("SourcePosition") != m.end() && !m["SourcePosition"].empty()) {
      sourcePosition = make_shared<string>(boost::any_cast<string>(m["SourcePosition"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SourceUri") != m.end() && !m["SourceUri"].empty()) {
      sourceUri = make_shared<string>(boost::any_cast<string>(m["SourceUri"]));
    }
    if (m.find("VideoDuration") != m.end() && !m["VideoDuration"].empty()) {
      videoDuration = make_shared<double>(boost::any_cast<double>(m["VideoDuration"]));
    }
    if (m.find("VideoFormat") != m.end() && !m["VideoFormat"].empty()) {
      videoFormat = make_shared<string>(boost::any_cast<string>(m["VideoFormat"]));
    }
    if (m.find("VideoFrames") != m.end() && !m["VideoFrames"].empty()) {
      videoFrames = make_shared<long>(boost::any_cast<long>(m["VideoFrames"]));
    }
    if (m.find("VideoHeight") != m.end() && !m["VideoHeight"].empty()) {
      videoHeight = make_shared<long>(boost::any_cast<long>(m["VideoHeight"]));
    }
    if (m.find("VideoTags") != m.end() && !m["VideoTags"].empty()) {
      if (typeid(vector<boost::any>) == m["VideoTags"].type()) {
        vector<ListVideosResponseBodyVideosVideoTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VideoTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVideosResponseBodyVideosVideoTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videoTags = make_shared<vector<ListVideosResponseBodyVideosVideoTags>>(expect1);
      }
    }
    if (m.find("VideoTagsFailReason") != m.end() && !m["VideoTagsFailReason"].empty()) {
      videoTagsFailReason = make_shared<string>(boost::any_cast<string>(m["VideoTagsFailReason"]));
    }
    if (m.find("VideoTagsModifyTime") != m.end() && !m["VideoTagsModifyTime"].empty()) {
      videoTagsModifyTime = make_shared<string>(boost::any_cast<string>(m["VideoTagsModifyTime"]));
    }
    if (m.find("VideoTagsStatus") != m.end() && !m["VideoTagsStatus"].empty()) {
      videoTagsStatus = make_shared<string>(boost::any_cast<string>(m["VideoTagsStatus"]));
    }
    if (m.find("VideoUri") != m.end() && !m["VideoUri"].empty()) {
      videoUri = make_shared<string>(boost::any_cast<string>(m["VideoUri"]));
    }
    if (m.find("VideoWidth") != m.end() && !m["VideoWidth"].empty()) {
      videoWidth = make_shared<long>(boost::any_cast<long>(m["VideoWidth"]));
    }
  }


  virtual ~ListVideosResponseBodyVideos() = default;
};
class ListVideosResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextMarker{};
  shared_ptr<string> requestId{};
  shared_ptr<string> setId{};
  shared_ptr<vector<ListVideosResponseBodyVideos>> videos{};

  ListVideosResponseBody() {}

  explicit ListVideosResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextMarker) {
      res["NextMarker"] = boost::any(*nextMarker);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (videos) {
      vector<boost::any> temp1;
      for(auto item1:*videos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Videos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextMarker") != m.end() && !m["NextMarker"].empty()) {
      nextMarker = make_shared<string>(boost::any_cast<string>(m["NextMarker"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("Videos") != m.end() && !m["Videos"].empty()) {
      if (typeid(vector<boost::any>) == m["Videos"].type()) {
        vector<ListVideosResponseBodyVideos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Videos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVideosResponseBodyVideos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        videos = make_shared<vector<ListVideosResponseBodyVideos>>(expect1);
      }
    }
  }


  virtual ~ListVideosResponseBody() = default;
};
class ListVideosResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListVideosResponseBody> body{};

  ListVideosResponse() {}

  explicit ListVideosResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVideosResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVideosResponseBody>(model1);
      }
    }
  }


  virtual ~ListVideosResponse() = default;
};
class OpenImmServiceRequest : public Darabonba::Model {
public:
  shared_ptr<long> ownerId{};

  OpenImmServiceRequest() {}

  explicit OpenImmServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~OpenImmServiceRequest() = default;
};
class OpenImmServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  OpenImmServiceResponseBody() {}

  explicit OpenImmServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OpenImmServiceResponseBody() = default;
};
class OpenImmServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<OpenImmServiceResponseBody> body{};

  OpenImmServiceResponse() {}

  explicit OpenImmServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenImmServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenImmServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenImmServiceResponse() = default;
};
class PutProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> project{};
  shared_ptr<string> serviceRole{};

  PutProjectRequest() {}

  explicit PutProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (serviceRole) {
      res["ServiceRole"] = boost::any(*serviceRole);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("ServiceRole") != m.end() && !m["ServiceRole"].empty()) {
      serviceRole = make_shared<string>(boost::any_cast<string>(m["ServiceRole"]));
    }
  }


  virtual ~PutProjectRequest() = default;
};
class PutProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> billingType{};
  shared_ptr<long> CU{};
  shared_ptr<string> createTime{};
  shared_ptr<string> endpoint{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> project{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceRole{};
  shared_ptr<string> type{};

  PutProjectResponseBody() {}

  explicit PutProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingType) {
      res["BillingType"] = boost::any(*billingType);
    }
    if (CU) {
      res["CU"] = boost::any(*CU);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceRole) {
      res["ServiceRole"] = boost::any(*serviceRole);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingType") != m.end() && !m["BillingType"].empty()) {
      billingType = make_shared<string>(boost::any_cast<string>(m["BillingType"]));
    }
    if (m.find("CU") != m.end() && !m["CU"].empty()) {
      CU = make_shared<long>(boost::any_cast<long>(m["CU"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceRole") != m.end() && !m["ServiceRole"].empty()) {
      serviceRole = make_shared<string>(boost::any_cast<string>(m["ServiceRole"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~PutProjectResponseBody() = default;
};
class PutProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PutProjectResponseBody> body{};

  PutProjectResponse() {}

  explicit PutProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PutProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PutProjectResponseBody>(model1);
      }
    }
  }


  virtual ~PutProjectResponse() = default;
};
class RefreshOfficeEditTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> project{};
  shared_ptr<string> refreshToken{};

  RefreshOfficeEditTokenRequest() {}

  explicit RefreshOfficeEditTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (project) {
      res["Project"] = boost::any(*project);
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
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("RefreshToken") != m.end() && !m["RefreshToken"].empty()) {
      refreshToken = make_shared<string>(boost::any_cast<string>(m["RefreshToken"]));
    }
  }


  virtual ~RefreshOfficeEditTokenRequest() = default;
};
class RefreshOfficeEditTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> accessTokenExpiredTime{};
  shared_ptr<string> refreshToken{};
  shared_ptr<string> refreshTokenExpiredTime{};
  shared_ptr<string> requestId{};

  RefreshOfficeEditTokenResponseBody() {}

  explicit RefreshOfficeEditTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RefreshOfficeEditTokenResponseBody() = default;
};
class RefreshOfficeEditTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RefreshOfficeEditTokenResponseBody> body{};

  RefreshOfficeEditTokenResponse() {}

  explicit RefreshOfficeEditTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefreshOfficeEditTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefreshOfficeEditTokenResponseBody>(model1);
      }
    }
  }


  virtual ~RefreshOfficeEditTokenResponse() = default;
};
class RefreshOfficePreviewTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> project{};
  shared_ptr<string> refreshToken{};

  RefreshOfficePreviewTokenRequest() {}

  explicit RefreshOfficePreviewTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (project) {
      res["Project"] = boost::any(*project);
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
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("RefreshToken") != m.end() && !m["RefreshToken"].empty()) {
      refreshToken = make_shared<string>(boost::any_cast<string>(m["RefreshToken"]));
    }
  }


  virtual ~RefreshOfficePreviewTokenRequest() = default;
};
class RefreshOfficePreviewTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> accessTokenExpiredTime{};
  shared_ptr<string> refreshToken{};
  shared_ptr<string> refreshTokenExpiredTime{};
  shared_ptr<string> requestId{};

  RefreshOfficePreviewTokenResponseBody() {}

  explicit RefreshOfficePreviewTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RefreshOfficePreviewTokenResponseBody() = default;
};
class RefreshOfficePreviewTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RefreshOfficePreviewTokenResponseBody> body{};

  RefreshOfficePreviewTokenResponse() {}

  explicit RefreshOfficePreviewTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefreshOfficePreviewTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefreshOfficePreviewTokenResponseBody>(model1);
      }
    }
  }


  virtual ~RefreshOfficePreviewTokenResponse() = default;
};
class RefreshWebofficeTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> project{};
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
    if (project) {
      res["Project"] = boost::any(*project);
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
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("RefreshToken") != m.end() && !m["RefreshToken"].empty()) {
      refreshToken = make_shared<string>(boost::any_cast<string>(m["RefreshToken"]));
    }
  }


  virtual ~RefreshWebofficeTokenRequest() = default;
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
class UpdateFaceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> externalId{};
  shared_ptr<string> groupCoverFaceId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> project{};
  shared_ptr<string> remarksA{};
  shared_ptr<string> remarksArrayA{};
  shared_ptr<string> remarksArrayB{};
  shared_ptr<string> remarksB{};
  shared_ptr<string> remarksC{};
  shared_ptr<string> remarksD{};
  shared_ptr<string> resetItems{};
  shared_ptr<string> setId{};

  UpdateFaceGroupRequest() {}

  explicit UpdateFaceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalId) {
      res["ExternalId"] = boost::any(*externalId);
    }
    if (groupCoverFaceId) {
      res["GroupCoverFaceId"] = boost::any(*groupCoverFaceId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (remarksA) {
      res["RemarksA"] = boost::any(*remarksA);
    }
    if (remarksArrayA) {
      res["RemarksArrayA"] = boost::any(*remarksArrayA);
    }
    if (remarksArrayB) {
      res["RemarksArrayB"] = boost::any(*remarksArrayB);
    }
    if (remarksB) {
      res["RemarksB"] = boost::any(*remarksB);
    }
    if (remarksC) {
      res["RemarksC"] = boost::any(*remarksC);
    }
    if (remarksD) {
      res["RemarksD"] = boost::any(*remarksD);
    }
    if (resetItems) {
      res["ResetItems"] = boost::any(*resetItems);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      externalId = make_shared<string>(boost::any_cast<string>(m["ExternalId"]));
    }
    if (m.find("GroupCoverFaceId") != m.end() && !m["GroupCoverFaceId"].empty()) {
      groupCoverFaceId = make_shared<string>(boost::any_cast<string>(m["GroupCoverFaceId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("RemarksA") != m.end() && !m["RemarksA"].empty()) {
      remarksA = make_shared<string>(boost::any_cast<string>(m["RemarksA"]));
    }
    if (m.find("RemarksArrayA") != m.end() && !m["RemarksArrayA"].empty()) {
      remarksArrayA = make_shared<string>(boost::any_cast<string>(m["RemarksArrayA"]));
    }
    if (m.find("RemarksArrayB") != m.end() && !m["RemarksArrayB"].empty()) {
      remarksArrayB = make_shared<string>(boost::any_cast<string>(m["RemarksArrayB"]));
    }
    if (m.find("RemarksB") != m.end() && !m["RemarksB"].empty()) {
      remarksB = make_shared<string>(boost::any_cast<string>(m["RemarksB"]));
    }
    if (m.find("RemarksC") != m.end() && !m["RemarksC"].empty()) {
      remarksC = make_shared<string>(boost::any_cast<string>(m["RemarksC"]));
    }
    if (m.find("RemarksD") != m.end() && !m["RemarksD"].empty()) {
      remarksD = make_shared<string>(boost::any_cast<string>(m["RemarksD"]));
    }
    if (m.find("ResetItems") != m.end() && !m["ResetItems"].empty()) {
      resetItems = make_shared<string>(boost::any_cast<string>(m["ResetItems"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
  }


  virtual ~UpdateFaceGroupRequest() = default;
};
class UpdateFaceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> setId{};

  UpdateFaceGroupResponseBody() {}

  explicit UpdateFaceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
  }


  virtual ~UpdateFaceGroupResponseBody() = default;
};
class UpdateFaceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateFaceGroupResponseBody> body{};

  UpdateFaceGroupResponse() {}

  explicit UpdateFaceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFaceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFaceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFaceGroupResponse() = default;
};
class UpdateImageRequestFaces : public Darabonba::Model {
public:
  shared_ptr<string> faceId{};
  shared_ptr<string> groupId{};

  UpdateImageRequestFaces() {}

  explicit UpdateImageRequestFaces(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceId) {
      res["FaceId"] = boost::any(*faceId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceId") != m.end() && !m["FaceId"].empty()) {
      faceId = make_shared<string>(boost::any_cast<string>(m["FaceId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~UpdateImageRequestFaces() = default;
};
class UpdateImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> externalId{};
  shared_ptr<vector<UpdateImageRequestFaces>> faces{};
  shared_ptr<string> imageUri{};
  shared_ptr<string> project{};
  shared_ptr<string> remarksA{};
  shared_ptr<string> remarksArrayA{};
  shared_ptr<string> remarksArrayB{};
  shared_ptr<string> remarksB{};
  shared_ptr<string> remarksC{};
  shared_ptr<string> remarksD{};
  shared_ptr<string> setId{};
  shared_ptr<string> sourcePosition{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> sourceUri{};

  UpdateImageRequest() {}

  explicit UpdateImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalId) {
      res["ExternalId"] = boost::any(*externalId);
    }
    if (faces) {
      vector<boost::any> temp1;
      for(auto item1:*faces){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Faces"] = boost::any(temp1);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (remarksA) {
      res["RemarksA"] = boost::any(*remarksA);
    }
    if (remarksArrayA) {
      res["RemarksArrayA"] = boost::any(*remarksArrayA);
    }
    if (remarksArrayB) {
      res["RemarksArrayB"] = boost::any(*remarksArrayB);
    }
    if (remarksB) {
      res["RemarksB"] = boost::any(*remarksB);
    }
    if (remarksC) {
      res["RemarksC"] = boost::any(*remarksC);
    }
    if (remarksD) {
      res["RemarksD"] = boost::any(*remarksD);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (sourcePosition) {
      res["SourcePosition"] = boost::any(*sourcePosition);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (sourceUri) {
      res["SourceUri"] = boost::any(*sourceUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      externalId = make_shared<string>(boost::any_cast<string>(m["ExternalId"]));
    }
    if (m.find("Faces") != m.end() && !m["Faces"].empty()) {
      if (typeid(vector<boost::any>) == m["Faces"].type()) {
        vector<UpdateImageRequestFaces> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Faces"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateImageRequestFaces model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faces = make_shared<vector<UpdateImageRequestFaces>>(expect1);
      }
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("RemarksA") != m.end() && !m["RemarksA"].empty()) {
      remarksA = make_shared<string>(boost::any_cast<string>(m["RemarksA"]));
    }
    if (m.find("RemarksArrayA") != m.end() && !m["RemarksArrayA"].empty()) {
      remarksArrayA = make_shared<string>(boost::any_cast<string>(m["RemarksArrayA"]));
    }
    if (m.find("RemarksArrayB") != m.end() && !m["RemarksArrayB"].empty()) {
      remarksArrayB = make_shared<string>(boost::any_cast<string>(m["RemarksArrayB"]));
    }
    if (m.find("RemarksB") != m.end() && !m["RemarksB"].empty()) {
      remarksB = make_shared<string>(boost::any_cast<string>(m["RemarksB"]));
    }
    if (m.find("RemarksC") != m.end() && !m["RemarksC"].empty()) {
      remarksC = make_shared<string>(boost::any_cast<string>(m["RemarksC"]));
    }
    if (m.find("RemarksD") != m.end() && !m["RemarksD"].empty()) {
      remarksD = make_shared<string>(boost::any_cast<string>(m["RemarksD"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("SourcePosition") != m.end() && !m["SourcePosition"].empty()) {
      sourcePosition = make_shared<string>(boost::any_cast<string>(m["SourcePosition"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SourceUri") != m.end() && !m["SourceUri"].empty()) {
      sourceUri = make_shared<string>(boost::any_cast<string>(m["SourceUri"]));
    }
  }


  virtual ~UpdateImageRequest() = default;
};
class UpdateImageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> externalId{};
  shared_ptr<string> facesShrink{};
  shared_ptr<string> imageUri{};
  shared_ptr<string> project{};
  shared_ptr<string> remarksA{};
  shared_ptr<string> remarksArrayA{};
  shared_ptr<string> remarksArrayB{};
  shared_ptr<string> remarksB{};
  shared_ptr<string> remarksC{};
  shared_ptr<string> remarksD{};
  shared_ptr<string> setId{};
  shared_ptr<string> sourcePosition{};
  shared_ptr<string> sourceType{};
  shared_ptr<string> sourceUri{};

  UpdateImageShrinkRequest() {}

  explicit UpdateImageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (externalId) {
      res["ExternalId"] = boost::any(*externalId);
    }
    if (facesShrink) {
      res["Faces"] = boost::any(*facesShrink);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (remarksA) {
      res["RemarksA"] = boost::any(*remarksA);
    }
    if (remarksArrayA) {
      res["RemarksArrayA"] = boost::any(*remarksArrayA);
    }
    if (remarksArrayB) {
      res["RemarksArrayB"] = boost::any(*remarksArrayB);
    }
    if (remarksB) {
      res["RemarksB"] = boost::any(*remarksB);
    }
    if (remarksC) {
      res["RemarksC"] = boost::any(*remarksC);
    }
    if (remarksD) {
      res["RemarksD"] = boost::any(*remarksD);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (sourcePosition) {
      res["SourcePosition"] = boost::any(*sourcePosition);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (sourceUri) {
      res["SourceUri"] = boost::any(*sourceUri);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      externalId = make_shared<string>(boost::any_cast<string>(m["ExternalId"]));
    }
    if (m.find("Faces") != m.end() && !m["Faces"].empty()) {
      facesShrink = make_shared<string>(boost::any_cast<string>(m["Faces"]));
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("RemarksA") != m.end() && !m["RemarksA"].empty()) {
      remarksA = make_shared<string>(boost::any_cast<string>(m["RemarksA"]));
    }
    if (m.find("RemarksArrayA") != m.end() && !m["RemarksArrayA"].empty()) {
      remarksArrayA = make_shared<string>(boost::any_cast<string>(m["RemarksArrayA"]));
    }
    if (m.find("RemarksArrayB") != m.end() && !m["RemarksArrayB"].empty()) {
      remarksArrayB = make_shared<string>(boost::any_cast<string>(m["RemarksArrayB"]));
    }
    if (m.find("RemarksB") != m.end() && !m["RemarksB"].empty()) {
      remarksB = make_shared<string>(boost::any_cast<string>(m["RemarksB"]));
    }
    if (m.find("RemarksC") != m.end() && !m["RemarksC"].empty()) {
      remarksC = make_shared<string>(boost::any_cast<string>(m["RemarksC"]));
    }
    if (m.find("RemarksD") != m.end() && !m["RemarksD"].empty()) {
      remarksD = make_shared<string>(boost::any_cast<string>(m["RemarksD"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("SourcePosition") != m.end() && !m["SourcePosition"].empty()) {
      sourcePosition = make_shared<string>(boost::any_cast<string>(m["SourcePosition"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("SourceUri") != m.end() && !m["SourceUri"].empty()) {
      sourceUri = make_shared<string>(boost::any_cast<string>(m["SourceUri"]));
    }
  }


  virtual ~UpdateImageShrinkRequest() = default;
};
class UpdateImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> externalId{};
  shared_ptr<string> imageUri{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> remarksA{};
  shared_ptr<string> remarksArrayA{};
  shared_ptr<string> remarksArrayB{};
  shared_ptr<string> remarksB{};
  shared_ptr<string> remarksC{};
  shared_ptr<string> remarksD{};
  shared_ptr<string> requestId{};
  shared_ptr<string> setId{};

  UpdateImageResponseBody() {}

  explicit UpdateImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (externalId) {
      res["ExternalId"] = boost::any(*externalId);
    }
    if (imageUri) {
      res["ImageUri"] = boost::any(*imageUri);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (remarksA) {
      res["RemarksA"] = boost::any(*remarksA);
    }
    if (remarksArrayA) {
      res["RemarksArrayA"] = boost::any(*remarksArrayA);
    }
    if (remarksArrayB) {
      res["RemarksArrayB"] = boost::any(*remarksArrayB);
    }
    if (remarksB) {
      res["RemarksB"] = boost::any(*remarksB);
    }
    if (remarksC) {
      res["RemarksC"] = boost::any(*remarksC);
    }
    if (remarksD) {
      res["RemarksD"] = boost::any(*remarksD);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExternalId") != m.end() && !m["ExternalId"].empty()) {
      externalId = make_shared<string>(boost::any_cast<string>(m["ExternalId"]));
    }
    if (m.find("ImageUri") != m.end() && !m["ImageUri"].empty()) {
      imageUri = make_shared<string>(boost::any_cast<string>(m["ImageUri"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RemarksA") != m.end() && !m["RemarksA"].empty()) {
      remarksA = make_shared<string>(boost::any_cast<string>(m["RemarksA"]));
    }
    if (m.find("RemarksArrayA") != m.end() && !m["RemarksArrayA"].empty()) {
      remarksArrayA = make_shared<string>(boost::any_cast<string>(m["RemarksArrayA"]));
    }
    if (m.find("RemarksArrayB") != m.end() && !m["RemarksArrayB"].empty()) {
      remarksArrayB = make_shared<string>(boost::any_cast<string>(m["RemarksArrayB"]));
    }
    if (m.find("RemarksB") != m.end() && !m["RemarksB"].empty()) {
      remarksB = make_shared<string>(boost::any_cast<string>(m["RemarksB"]));
    }
    if (m.find("RemarksC") != m.end() && !m["RemarksC"].empty()) {
      remarksC = make_shared<string>(boost::any_cast<string>(m["RemarksC"]));
    }
    if (m.find("RemarksD") != m.end() && !m["RemarksD"].empty()) {
      remarksD = make_shared<string>(boost::any_cast<string>(m["RemarksD"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
  }


  virtual ~UpdateImageResponseBody() = default;
};
class UpdateImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateImageResponseBody> body{};

  UpdateImageResponse() {}

  explicit UpdateImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateImageResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateImageResponse() = default;
};
class UpdateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<long> newCU{};
  shared_ptr<string> newServiceRole{};
  shared_ptr<string> project{};

  UpdateProjectRequest() {}

  explicit UpdateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newCU) {
      res["NewCU"] = boost::any(*newCU);
    }
    if (newServiceRole) {
      res["NewServiceRole"] = boost::any(*newServiceRole);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewCU") != m.end() && !m["NewCU"].empty()) {
      newCU = make_shared<long>(boost::any_cast<long>(m["NewCU"]));
    }
    if (m.find("NewServiceRole") != m.end() && !m["NewServiceRole"].empty()) {
      newServiceRole = make_shared<string>(boost::any_cast<string>(m["NewServiceRole"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
  }


  virtual ~UpdateProjectRequest() = default;
};
class UpdateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> CU{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> project{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serviceRole{};
  shared_ptr<string> type{};

  UpdateProjectResponseBody() {}

  explicit UpdateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (CU) {
      res["CU"] = boost::any(*CU);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serviceRole) {
      res["ServiceRole"] = boost::any(*serviceRole);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CU") != m.end() && !m["CU"].empty()) {
      CU = make_shared<long>(boost::any_cast<long>(m["CU"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServiceRole") != m.end() && !m["ServiceRole"].empty()) {
      serviceRole = make_shared<string>(boost::any_cast<string>(m["ServiceRole"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
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
class UpdateSetRequest : public Darabonba::Model {
public:
  shared_ptr<string> project{};
  shared_ptr<string> setId{};
  shared_ptr<string> setName{};

  UpdateSetRequest() {}

  explicit UpdateSetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (project) {
      res["Project"] = boost::any(*project);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (setName) {
      res["SetName"] = boost::any(*setName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Project") != m.end() && !m["Project"].empty()) {
      project = make_shared<string>(boost::any_cast<string>(m["Project"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("SetName") != m.end() && !m["SetName"].empty()) {
      setName = make_shared<string>(boost::any_cast<string>(m["SetName"]));
    }
  }


  virtual ~UpdateSetRequest() = default;
};
class UpdateSetResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> setId{};
  shared_ptr<string> setName{};

  UpdateSetResponseBody() {}

  explicit UpdateSetResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (setId) {
      res["SetId"] = boost::any(*setId);
    }
    if (setName) {
      res["SetName"] = boost::any(*setName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SetId") != m.end() && !m["SetId"].empty()) {
      setId = make_shared<string>(boost::any_cast<string>(m["SetId"]));
    }
    if (m.find("SetName") != m.end() && !m["SetName"].empty()) {
      setName = make_shared<string>(boost::any_cast<string>(m["SetName"]));
    }
  }


  virtual ~UpdateSetResponseBody() = default;
};
class UpdateSetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateSetResponseBody> body{};

  UpdateSetResponse() {}

  explicit UpdateSetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSetResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSetResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSetResponse() = default;
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
  CompareImageFacesResponse compareImageFacesWithOptions(shared_ptr<CompareImageFacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CompareImageFacesResponse compareImageFaces(shared_ptr<CompareImageFacesRequest> request);
  ConvertOfficeFormatResponse convertOfficeFormatWithOptions(shared_ptr<ConvertOfficeFormatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConvertOfficeFormatResponse convertOfficeFormat(shared_ptr<ConvertOfficeFormatRequest> request);
  CreateGrabFrameTaskResponse createGrabFrameTaskWithOptions(shared_ptr<CreateGrabFrameTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGrabFrameTaskResponse createGrabFrameTask(shared_ptr<CreateGrabFrameTaskRequest> request);
  CreateGroupFacesJobResponse createGroupFacesJobWithOptions(shared_ptr<CreateGroupFacesJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGroupFacesJobResponse createGroupFacesJob(shared_ptr<CreateGroupFacesJobRequest> request);
  CreateImageProcessTaskResponse createImageProcessTaskWithOptions(shared_ptr<CreateImageProcessTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateImageProcessTaskResponse createImageProcessTask(shared_ptr<CreateImageProcessTaskRequest> request);
  CreateMediaComplexTaskResponse createMediaComplexTaskWithOptions(shared_ptr<CreateMediaComplexTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMediaComplexTaskResponse createMediaComplexTask(shared_ptr<CreateMediaComplexTaskRequest> request);
  CreateMergeFaceGroupsJobResponse createMergeFaceGroupsJobWithOptions(shared_ptr<CreateMergeFaceGroupsJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateMergeFaceGroupsJobResponse createMergeFaceGroupsJob(shared_ptr<CreateMergeFaceGroupsJobRequest> request);
  CreateOfficeConversionTaskResponse createOfficeConversionTaskWithOptions(shared_ptr<CreateOfficeConversionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOfficeConversionTaskResponse createOfficeConversionTask(shared_ptr<CreateOfficeConversionTaskRequest> request);
  CreateSetResponse createSetWithOptions(shared_ptr<CreateSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSetResponse createSet(shared_ptr<CreateSetRequest> request);
  CreateVideoAbstractTaskResponse createVideoAbstractTaskWithOptions(shared_ptr<CreateVideoAbstractTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVideoAbstractTaskResponse createVideoAbstractTask(shared_ptr<CreateVideoAbstractTaskRequest> request);
  CreateVideoAnalyseTaskResponse createVideoAnalyseTaskWithOptions(shared_ptr<CreateVideoAnalyseTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVideoAnalyseTaskResponse createVideoAnalyseTask(shared_ptr<CreateVideoAnalyseTaskRequest> request);
  CreateVideoCompressTaskResponse createVideoCompressTaskWithOptions(shared_ptr<CreateVideoCompressTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVideoCompressTaskResponse createVideoCompressTask(shared_ptr<CreateVideoCompressTaskRequest> request);
  CreateVideoProduceTaskResponse createVideoProduceTaskWithOptions(shared_ptr<CreateVideoProduceTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVideoProduceTaskResponse createVideoProduceTask(shared_ptr<CreateVideoProduceTaskRequest> request);
  DecodeBlindWatermarkResponse decodeBlindWatermarkWithOptions(shared_ptr<DecodeBlindWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DecodeBlindWatermarkResponse decodeBlindWatermark(shared_ptr<DecodeBlindWatermarkRequest> request);
  DeleteImageResponse deleteImageWithOptions(shared_ptr<DeleteImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteImageResponse deleteImage(shared_ptr<DeleteImageRequest> request);
  DeleteImageJobResponse deleteImageJobWithOptions(shared_ptr<DeleteImageJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteImageJobResponse deleteImageJob(shared_ptr<DeleteImageJobRequest> request);
  DeleteOfficeConversionTaskResponse deleteOfficeConversionTaskWithOptions(shared_ptr<DeleteOfficeConversionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteOfficeConversionTaskResponse deleteOfficeConversionTask(shared_ptr<DeleteOfficeConversionTaskRequest> request);
  DeleteProjectResponse deleteProjectWithOptions(shared_ptr<DeleteProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteProjectResponse deleteProject(shared_ptr<DeleteProjectRequest> request);
  DeleteSetResponse deleteSetWithOptions(shared_ptr<DeleteSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSetResponse deleteSet(shared_ptr<DeleteSetRequest> request);
  DeleteVideoResponse deleteVideoWithOptions(shared_ptr<DeleteVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVideoResponse deleteVideo(shared_ptr<DeleteVideoRequest> request);
  DeleteVideoTaskResponse deleteVideoTaskWithOptions(shared_ptr<DeleteVideoTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVideoTaskResponse deleteVideoTask(shared_ptr<DeleteVideoTaskRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions();
  DetectImageBodiesResponse detectImageBodiesWithOptions(shared_ptr<DetectImageBodiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectImageBodiesResponse detectImageBodies(shared_ptr<DetectImageBodiesRequest> request);
  DetectImageFacesResponse detectImageFacesWithOptions(shared_ptr<DetectImageFacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectImageFacesResponse detectImageFaces(shared_ptr<DetectImageFacesRequest> request);
  DetectImageQRCodesResponse detectImageQRCodesWithOptions(shared_ptr<DetectImageQRCodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectImageQRCodesResponse detectImageQRCodes(shared_ptr<DetectImageQRCodesRequest> request);
  DetectImageTagsResponse detectImageTagsWithOptions(shared_ptr<DetectImageTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectImageTagsResponse detectImageTags(shared_ptr<DetectImageTagsRequest> request);
  DetectQRCodesResponse detectQRCodesWithOptions(shared_ptr<DetectQRCodesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectQRCodesResponse detectQRCodes(shared_ptr<DetectQRCodesRequest> request);
  EncodeBlindWatermarkResponse encodeBlindWatermarkWithOptions(shared_ptr<EncodeBlindWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EncodeBlindWatermarkResponse encodeBlindWatermark(shared_ptr<EncodeBlindWatermarkRequest> request);
  FindImagesResponse findImagesWithOptions(shared_ptr<FindImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FindImagesResponse findImages(shared_ptr<FindImagesRequest> request);
  FindSimilarFacesResponse findSimilarFacesWithOptions(shared_ptr<FindSimilarFacesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FindSimilarFacesResponse findSimilarFaces(shared_ptr<FindSimilarFacesRequest> request);
  GetContentKeyResponse getContentKeyWithOptions(shared_ptr<GetContentKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetContentKeyResponse getContentKey(shared_ptr<GetContentKeyRequest> request);
  GetDRMLicenseResponse getDRMLicenseWithOptions(shared_ptr<GetDRMLicenseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDRMLicenseResponse getDRMLicense(shared_ptr<GetDRMLicenseRequest> request);
  GetImageResponse getImageWithOptions(shared_ptr<GetImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetImageResponse getImage(shared_ptr<GetImageRequest> request);
  GetImageCroppingSuggestionsResponse getImageCroppingSuggestionsWithOptions(shared_ptr<GetImageCroppingSuggestionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetImageCroppingSuggestionsResponse getImageCroppingSuggestions(shared_ptr<GetImageCroppingSuggestionsRequest> request);
  GetImageQualityResponse getImageQualityWithOptions(shared_ptr<GetImageQualityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetImageQualityResponse getImageQuality(shared_ptr<GetImageQualityRequest> request);
  GetMediaMetaResponse getMediaMetaWithOptions(shared_ptr<GetMediaMetaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMediaMetaResponse getMediaMeta(shared_ptr<GetMediaMetaRequest> request);
  GetOfficeConversionTaskResponse getOfficeConversionTaskWithOptions(shared_ptr<GetOfficeConversionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOfficeConversionTaskResponse getOfficeConversionTask(shared_ptr<GetOfficeConversionTaskRequest> request);
  GetOfficeEditURLResponse getOfficeEditURLWithOptions(shared_ptr<GetOfficeEditURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOfficeEditURLResponse getOfficeEditURL(shared_ptr<GetOfficeEditURLRequest> request);
  GetOfficePreviewURLResponse getOfficePreviewURLWithOptions(shared_ptr<GetOfficePreviewURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOfficePreviewURLResponse getOfficePreviewURL(shared_ptr<GetOfficePreviewURLRequest> request);
  GetProjectResponse getProjectWithOptions(shared_ptr<GetProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProjectResponse getProject(shared_ptr<GetProjectRequest> request);
  GetSetResponse getSetWithOptions(shared_ptr<GetSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetSetResponse getSet(shared_ptr<GetSetRequest> request);
  GetVideoResponse getVideoWithOptions(shared_ptr<GetVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVideoResponse getVideo(shared_ptr<GetVideoRequest> request);
  GetVideoTaskResponse getVideoTaskWithOptions(shared_ptr<GetVideoTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVideoTaskResponse getVideoTask(shared_ptr<GetVideoTaskRequest> request);
  GetWebofficeURLResponse getWebofficeURLWithOptions(shared_ptr<GetWebofficeURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWebofficeURLResponse getWebofficeURL(shared_ptr<GetWebofficeURLRequest> request);
  IndexImageResponse indexImageWithOptions(shared_ptr<IndexImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IndexImageResponse indexImage(shared_ptr<IndexImageRequest> request);
  IndexVideoResponse indexVideoWithOptions(shared_ptr<IndexVideoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IndexVideoResponse indexVideo(shared_ptr<IndexVideoRequest> request);
  ListFaceGroupsResponse listFaceGroupsWithOptions(shared_ptr<ListFaceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFaceGroupsResponse listFaceGroups(shared_ptr<ListFaceGroupsRequest> request);
  ListImagesResponse listImagesWithOptions(shared_ptr<ListImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListImagesResponse listImages(shared_ptr<ListImagesRequest> request);
  ListOfficeConversionTaskResponse listOfficeConversionTaskWithOptions(shared_ptr<ListOfficeConversionTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOfficeConversionTaskResponse listOfficeConversionTask(shared_ptr<ListOfficeConversionTaskRequest> request);
  ListProjectAPIsResponse listProjectAPIsWithOptions(shared_ptr<ListProjectAPIsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectAPIsResponse listProjectAPIs(shared_ptr<ListProjectAPIsRequest> request);
  ListProjectsResponse listProjectsWithOptions(shared_ptr<ListProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProjectsResponse listProjects(shared_ptr<ListProjectsRequest> request);
  ListSetTagsResponse listSetTagsWithOptions(shared_ptr<ListSetTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSetTagsResponse listSetTags(shared_ptr<ListSetTagsRequest> request);
  ListSetsResponse listSetsWithOptions(shared_ptr<ListSetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSetsResponse listSets(shared_ptr<ListSetsRequest> request);
  ListVideoAudiosResponse listVideoAudiosWithOptions(shared_ptr<ListVideoAudiosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVideoAudiosResponse listVideoAudios(shared_ptr<ListVideoAudiosRequest> request);
  ListVideoFramesResponse listVideoFramesWithOptions(shared_ptr<ListVideoFramesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVideoFramesResponse listVideoFrames(shared_ptr<ListVideoFramesRequest> request);
  ListVideoTasksResponse listVideoTasksWithOptions(shared_ptr<ListVideoTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVideoTasksResponse listVideoTasks(shared_ptr<ListVideoTasksRequest> request);
  ListVideosResponse listVideosWithOptions(shared_ptr<ListVideosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVideosResponse listVideos(shared_ptr<ListVideosRequest> request);
  OpenImmServiceResponse openImmServiceWithOptions(shared_ptr<OpenImmServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenImmServiceResponse openImmService(shared_ptr<OpenImmServiceRequest> request);
  PutProjectResponse putProjectWithOptions(shared_ptr<PutProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PutProjectResponse putProject(shared_ptr<PutProjectRequest> request);
  RefreshOfficeEditTokenResponse refreshOfficeEditTokenWithOptions(shared_ptr<RefreshOfficeEditTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshOfficeEditTokenResponse refreshOfficeEditToken(shared_ptr<RefreshOfficeEditTokenRequest> request);
  RefreshOfficePreviewTokenResponse refreshOfficePreviewTokenWithOptions(shared_ptr<RefreshOfficePreviewTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshOfficePreviewTokenResponse refreshOfficePreviewToken(shared_ptr<RefreshOfficePreviewTokenRequest> request);
  RefreshWebofficeTokenResponse refreshWebofficeTokenWithOptions(shared_ptr<RefreshWebofficeTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshWebofficeTokenResponse refreshWebofficeToken(shared_ptr<RefreshWebofficeTokenRequest> request);
  UpdateFaceGroupResponse updateFaceGroupWithOptions(shared_ptr<UpdateFaceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFaceGroupResponse updateFaceGroup(shared_ptr<UpdateFaceGroupRequest> request);
  UpdateImageResponse updateImageWithOptions(shared_ptr<UpdateImageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateImageResponse updateImage(shared_ptr<UpdateImageRequest> request);
  UpdateProjectResponse updateProjectWithOptions(shared_ptr<UpdateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProjectResponse updateProject(shared_ptr<UpdateProjectRequest> request);
  UpdateSetResponse updateSetWithOptions(shared_ptr<UpdateSetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSetResponse updateSet(shared_ptr<UpdateSetRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Imm20170906

#endif
