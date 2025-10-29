// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READPAGESCRAPEBODY_HPP_
#define ALIBABACLOUD_MODELS_READPAGESCRAPEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ReadPageScrapeBodyReadability.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class ReadPageScrapeBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadPageScrapeBody& obj) { 
      DARABONBA_PTR_TO_JSON(formats, formats_);
      DARABONBA_PTR_TO_JSON(location, location_);
      DARABONBA_PTR_TO_JSON(maxAge, maxAge_);
      DARABONBA_PTR_TO_JSON(pageTimeout, pageTimeout_);
      DARABONBA_PTR_TO_JSON(readability, readability_);
      DARABONBA_PTR_TO_JSON(timeout, timeout_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ReadPageScrapeBody& obj) { 
      DARABONBA_PTR_FROM_JSON(formats, formats_);
      DARABONBA_PTR_FROM_JSON(location, location_);
      DARABONBA_PTR_FROM_JSON(maxAge, maxAge_);
      DARABONBA_PTR_FROM_JSON(pageTimeout, pageTimeout_);
      DARABONBA_PTR_FROM_JSON(readability, readability_);
      DARABONBA_PTR_FROM_JSON(timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    ReadPageScrapeBody() = default ;
    ReadPageScrapeBody(const ReadPageScrapeBody &) = default ;
    ReadPageScrapeBody(ReadPageScrapeBody &&) = default ;
    ReadPageScrapeBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadPageScrapeBody() = default ;
    ReadPageScrapeBody& operator=(const ReadPageScrapeBody &) = default ;
    ReadPageScrapeBody& operator=(ReadPageScrapeBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->formats_ == nullptr
        && return this->location_ == nullptr && return this->maxAge_ == nullptr && return this->pageTimeout_ == nullptr && return this->readability_ == nullptr && return this->timeout_ == nullptr
        && return this->url_ == nullptr; };
    // formats Field Functions 
    bool hasFormats() const { return this->formats_ != nullptr;};
    void deleteFormats() { this->formats_ = nullptr;};
    inline const vector<string> & formats() const { DARABONBA_PTR_GET_CONST(formats_, vector<string>) };
    inline vector<string> formats() { DARABONBA_PTR_GET(formats_, vector<string>) };
    inline ReadPageScrapeBody& setFormats(const vector<string> & formats) { DARABONBA_PTR_SET_VALUE(formats_, formats) };
    inline ReadPageScrapeBody& setFormats(vector<string> && formats) { DARABONBA_PTR_SET_RVALUE(formats_, formats) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline ReadPageScrapeBody& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // maxAge Field Functions 
    bool hasMaxAge() const { return this->maxAge_ != nullptr;};
    void deleteMaxAge() { this->maxAge_ = nullptr;};
    inline int32_t maxAge() const { DARABONBA_PTR_GET_DEFAULT(maxAge_, 0) };
    inline ReadPageScrapeBody& setMaxAge(int32_t maxAge) { DARABONBA_PTR_SET_VALUE(maxAge_, maxAge) };


    // pageTimeout Field Functions 
    bool hasPageTimeout() const { return this->pageTimeout_ != nullptr;};
    void deletePageTimeout() { this->pageTimeout_ = nullptr;};
    inline int32_t pageTimeout() const { DARABONBA_PTR_GET_DEFAULT(pageTimeout_, 0) };
    inline ReadPageScrapeBody& setPageTimeout(int32_t pageTimeout) { DARABONBA_PTR_SET_VALUE(pageTimeout_, pageTimeout) };


    // readability Field Functions 
    bool hasReadability() const { return this->readability_ != nullptr;};
    void deleteReadability() { this->readability_ = nullptr;};
    inline const ReadPageScrapeBodyReadability & readability() const { DARABONBA_PTR_GET_CONST(readability_, ReadPageScrapeBodyReadability) };
    inline ReadPageScrapeBodyReadability readability() { DARABONBA_PTR_GET(readability_, ReadPageScrapeBodyReadability) };
    inline ReadPageScrapeBody& setReadability(const ReadPageScrapeBodyReadability & readability) { DARABONBA_PTR_SET_VALUE(readability_, readability) };
    inline ReadPageScrapeBody& setReadability(ReadPageScrapeBodyReadability && readability) { DARABONBA_PTR_SET_RVALUE(readability_, readability) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline ReadPageScrapeBody& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ReadPageScrapeBody& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<vector<string>> formats_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<int32_t> maxAge_ = nullptr;
    std::shared_ptr<int32_t> pageTimeout_ = nullptr;
    std::shared_ptr<ReadPageScrapeBodyReadability> readability_ = nullptr;
    std::shared_ptr<int32_t> timeout_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
