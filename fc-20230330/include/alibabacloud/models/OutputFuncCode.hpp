// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OUTPUTFUNCCODE_HPP_
#define ALIBABACLOUD_MODELS_OUTPUTFUNCCODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class OutputFuncCode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OutputFuncCode& obj) { 
      DARABONBA_PTR_TO_JSON(checksum, checksum_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, OutputFuncCode& obj) { 
      DARABONBA_PTR_FROM_JSON(checksum, checksum_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    OutputFuncCode() = default ;
    OutputFuncCode(const OutputFuncCode &) = default ;
    OutputFuncCode(OutputFuncCode &&) = default ;
    OutputFuncCode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OutputFuncCode() = default ;
    OutputFuncCode& operator=(const OutputFuncCode &) = default ;
    OutputFuncCode& operator=(OutputFuncCode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checksum_ == nullptr
        && this->url_ == nullptr; };
    // checksum Field Functions 
    bool hasChecksum() const { return this->checksum_ != nullptr;};
    void deleteChecksum() { this->checksum_ = nullptr;};
    inline string getChecksum() const { DARABONBA_PTR_GET_DEFAULT(checksum_, "") };
    inline OutputFuncCode& setChecksum(string checksum) { DARABONBA_PTR_SET_VALUE(checksum_, checksum) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline OutputFuncCode& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    shared_ptr<string> checksum_ {};
    shared_ptr<string> url_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
