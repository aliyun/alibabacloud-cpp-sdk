// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPDUBBOTRANSCODERMOTHEDMAPLISTPARAMMAPSLIST_HPP_
#define ALIBABACLOUD_MODELS_HTTPDUBBOTRANSCODERMOTHEDMAPLISTPARAMMAPSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpDubboTranscoderMothedMapListParamMapsList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpDubboTranscoderMothedMapListParamMapsList& obj) { 
      DARABONBA_PTR_TO_JSON(extractKey, extractKey_);
      DARABONBA_PTR_TO_JSON(extractKeySpec, extractKeySpec_);
      DARABONBA_PTR_TO_JSON(mappingType, mappingType_);
    };
    friend void from_json(const Darabonba::Json& j, HttpDubboTranscoderMothedMapListParamMapsList& obj) { 
      DARABONBA_PTR_FROM_JSON(extractKey, extractKey_);
      DARABONBA_PTR_FROM_JSON(extractKeySpec, extractKeySpec_);
      DARABONBA_PTR_FROM_JSON(mappingType, mappingType_);
    };
    HttpDubboTranscoderMothedMapListParamMapsList() = default ;
    HttpDubboTranscoderMothedMapListParamMapsList(const HttpDubboTranscoderMothedMapListParamMapsList &) = default ;
    HttpDubboTranscoderMothedMapListParamMapsList(HttpDubboTranscoderMothedMapListParamMapsList &&) = default ;
    HttpDubboTranscoderMothedMapListParamMapsList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpDubboTranscoderMothedMapListParamMapsList() = default ;
    HttpDubboTranscoderMothedMapListParamMapsList& operator=(const HttpDubboTranscoderMothedMapListParamMapsList &) = default ;
    HttpDubboTranscoderMothedMapListParamMapsList& operator=(HttpDubboTranscoderMothedMapListParamMapsList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extractKey_ == nullptr
        && return this->extractKeySpec_ == nullptr && return this->mappingType_ == nullptr; };
    // extractKey Field Functions 
    bool hasExtractKey() const { return this->extractKey_ != nullptr;};
    void deleteExtractKey() { this->extractKey_ = nullptr;};
    inline string extractKey() const { DARABONBA_PTR_GET_DEFAULT(extractKey_, "") };
    inline HttpDubboTranscoderMothedMapListParamMapsList& setExtractKey(string extractKey) { DARABONBA_PTR_SET_VALUE(extractKey_, extractKey) };


    // extractKeySpec Field Functions 
    bool hasExtractKeySpec() const { return this->extractKeySpec_ != nullptr;};
    void deleteExtractKeySpec() { this->extractKeySpec_ = nullptr;};
    inline string extractKeySpec() const { DARABONBA_PTR_GET_DEFAULT(extractKeySpec_, "") };
    inline HttpDubboTranscoderMothedMapListParamMapsList& setExtractKeySpec(string extractKeySpec) { DARABONBA_PTR_SET_VALUE(extractKeySpec_, extractKeySpec) };


    // mappingType Field Functions 
    bool hasMappingType() const { return this->mappingType_ != nullptr;};
    void deleteMappingType() { this->mappingType_ = nullptr;};
    inline string mappingType() const { DARABONBA_PTR_GET_DEFAULT(mappingType_, "") };
    inline HttpDubboTranscoderMothedMapListParamMapsList& setMappingType(string mappingType) { DARABONBA_PTR_SET_VALUE(mappingType_, mappingType) };


  protected:
    std::shared_ptr<string> extractKey_ = nullptr;
    std::shared_ptr<string> extractKeySpec_ = nullptr;
    std::shared_ptr<string> mappingType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
