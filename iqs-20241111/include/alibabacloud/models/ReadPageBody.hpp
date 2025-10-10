// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READPAGEBODY_HPP_
#define ALIBABACLOUD_MODELS_READPAGEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ReadPageBodyReadability.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class ReadPageBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadPageBody& obj) { 
      DARABONBA_PTR_TO_JSON(formats, formats_);
      DARABONBA_PTR_TO_JSON(location, location_);
      DARABONBA_PTR_TO_JSON(maxAge, maxAge_);
      DARABONBA_PTR_TO_JSON(pageTimeout, pageTimeout_);
      DARABONBA_PTR_TO_JSON(readability, readability_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ReadPageBody& obj) { 
      DARABONBA_PTR_FROM_JSON(formats, formats_);
      DARABONBA_PTR_FROM_JSON(location, location_);
      DARABONBA_PTR_FROM_JSON(maxAge, maxAge_);
      DARABONBA_PTR_FROM_JSON(pageTimeout, pageTimeout_);
      DARABONBA_PTR_FROM_JSON(readability, readability_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    ReadPageBody() = default ;
    ReadPageBody(const ReadPageBody &) = default ;
    ReadPageBody(ReadPageBody &&) = default ;
    ReadPageBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadPageBody() = default ;
    ReadPageBody& operator=(const ReadPageBody &) = default ;
    ReadPageBody& operator=(ReadPageBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->formats_ != nullptr
        && this->location_ != nullptr && this->maxAge_ != nullptr && this->pageTimeout_ != nullptr && this->readability_ != nullptr && this->timeout_ != nullptr
        && this->url_ != nullptr; };
    // formats Field Functions 
    bool hasFormats() const { return this->formats_ != nullptr;};
    void deleteFormats() { this->formats_ = nullptr;};
    inline const vector<string> & formats() const { DARABONBA_PTR_GET_CONST(formats_, vector<string>) };
    inline vector<string> formats() { DARABONBA_PTR_GET(formats_, vector<string>) };
    inline ReadPageBody& setFormats(const vector<string> & formats) { DARABONBA_PTR_SET_VALUE(formats_, formats) };
    inline ReadPageBody& setFormats(vector<string> && formats) { DARABONBA_PTR_SET_RVALUE(formats_, formats) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline ReadPageBody& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // maxAge Field Functions 
    bool hasMaxAge() const { return this->maxAge_ != nullptr;};
    void deleteMaxAge() { this->maxAge_ = nullptr;};
    inline int32_t maxAge() const { DARABONBA_PTR_GET_DEFAULT(maxAge_, 0) };
    inline ReadPageBody& setMaxAge(int32_t maxAge) { DARABONBA_PTR_SET_VALUE(maxAge_, maxAge) };


    // pageTimeout Field Functions 
    bool hasPageTimeout() const { return this->pageTimeout_ != nullptr;};
    void deletePageTimeout() { this->pageTimeout_ = nullptr;};
    inline int32_t pageTimeout() const { DARABONBA_PTR_GET_DEFAULT(pageTimeout_, 0) };
    inline ReadPageBody& setPageTimeout(int32_t pageTimeout) { DARABONBA_PTR_SET_VALUE(pageTimeout_, pageTimeout) };


    // readability Field Functions 
    bool hasReadability() const { return this->readability_ != nullptr;};
    void deleteReadability() { this->readability_ = nullptr;};
    inline const ReadPageBodyReadability & readability() const { DARABONBA_PTR_GET_CONST(readability_, ReadPageBodyReadability) };
    inline ReadPageBodyReadability readability() { DARABONBA_PTR_GET(readability_, ReadPageBodyReadability) };
    inline ReadPageBody& setReadability(const ReadPageBodyReadability & readability) { DARABONBA_PTR_SET_VALUE(readability_, readability) };
    inline ReadPageBody& setReadability(ReadPageBodyReadability && readability) { DARABONBA_PTR_SET_RVALUE(readability_, readability) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline ReadPageBody& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ReadPageBody& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<vector<string>> formats_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<int32_t> maxAge_ = nullptr;
    std::shared_ptr<int32_t> pageTimeout_ = nullptr;
    std::shared_ptr<ReadPageBodyReadability> readability_ = nullptr;
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
