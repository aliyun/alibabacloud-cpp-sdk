// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ARTIFACTCODE_HPP_
#define ALIBABACLOUD_MODELS_ARTIFACTCODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class ArtifactCode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ArtifactCode& obj) { 
      DARABONBA_PTR_TO_JSON(checksum, checksum_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ArtifactCode& obj) { 
      DARABONBA_PTR_FROM_JSON(checksum, checksum_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    ArtifactCode() = default ;
    ArtifactCode(const ArtifactCode &) = default ;
    ArtifactCode(ArtifactCode &&) = default ;
    ArtifactCode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ArtifactCode() = default ;
    ArtifactCode& operator=(const ArtifactCode &) = default ;
    ArtifactCode& operator=(ArtifactCode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->checksum_ != nullptr
        && this->url_ != nullptr; };
    // checksum Field Functions 
    bool hasChecksum() const { return this->checksum_ != nullptr;};
    void deleteChecksum() { this->checksum_ = nullptr;};
    inline string checksum() const { DARABONBA_PTR_GET_DEFAULT(checksum_, "") };
    inline ArtifactCode& setChecksum(string checksum) { DARABONBA_PTR_SET_VALUE(checksum_, checksum) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ArtifactCode& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> checksum_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
