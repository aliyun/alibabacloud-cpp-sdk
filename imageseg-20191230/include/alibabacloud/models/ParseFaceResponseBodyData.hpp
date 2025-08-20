// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARSEFACERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_PARSEFACERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ParseFaceResponseBodyDataElements.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageseg20191230
{
namespace Models
{
  class ParseFaceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ParseFaceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Elements, elements_);
      DARABONBA_PTR_TO_JSON(OriginImageURL, originImageURL_);
    };
    friend void from_json(const Darabonba::Json& j, ParseFaceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Elements, elements_);
      DARABONBA_PTR_FROM_JSON(OriginImageURL, originImageURL_);
    };
    ParseFaceResponseBodyData() = default ;
    ParseFaceResponseBodyData(const ParseFaceResponseBodyData &) = default ;
    ParseFaceResponseBodyData(ParseFaceResponseBodyData &&) = default ;
    ParseFaceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ParseFaceResponseBodyData() = default ;
    ParseFaceResponseBodyData& operator=(const ParseFaceResponseBodyData &) = default ;
    ParseFaceResponseBodyData& operator=(ParseFaceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elements_ != nullptr
        && this->originImageURL_ != nullptr; };
    // elements Field Functions 
    bool hasElements() const { return this->elements_ != nullptr;};
    void deleteElements() { this->elements_ = nullptr;};
    inline const vector<Models::ParseFaceResponseBodyDataElements> & elements() const { DARABONBA_PTR_GET_CONST(elements_, vector<Models::ParseFaceResponseBodyDataElements>) };
    inline vector<Models::ParseFaceResponseBodyDataElements> elements() { DARABONBA_PTR_GET(elements_, vector<Models::ParseFaceResponseBodyDataElements>) };
    inline ParseFaceResponseBodyData& setElements(const vector<Models::ParseFaceResponseBodyDataElements> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
    inline ParseFaceResponseBodyData& setElements(vector<Models::ParseFaceResponseBodyDataElements> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


    // originImageURL Field Functions 
    bool hasOriginImageURL() const { return this->originImageURL_ != nullptr;};
    void deleteOriginImageURL() { this->originImageURL_ = nullptr;};
    inline string originImageURL() const { DARABONBA_PTR_GET_DEFAULT(originImageURL_, "") };
    inline ParseFaceResponseBodyData& setOriginImageURL(string originImageURL) { DARABONBA_PTR_SET_VALUE(originImageURL_, originImageURL) };


  protected:
    std::shared_ptr<vector<Models::ParseFaceResponseBodyDataElements>> elements_ = nullptr;
    std::shared_ptr<string> originImageURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imageseg20191230
#endif
