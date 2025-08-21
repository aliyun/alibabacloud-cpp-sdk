// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOLLECTORRESPONSEBODYRESULTCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOLLECTORRESPONSEBODYRESULTCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class UpdateCollectorResponseBodyResultConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCollectorResponseBodyResultConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCollectorResponseBodyResultConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
    };
    UpdateCollectorResponseBodyResultConfigs() = default ;
    UpdateCollectorResponseBodyResultConfigs(const UpdateCollectorResponseBodyResultConfigs &) = default ;
    UpdateCollectorResponseBodyResultConfigs(UpdateCollectorResponseBodyResultConfigs &&) = default ;
    UpdateCollectorResponseBodyResultConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCollectorResponseBodyResultConfigs() = default ;
    UpdateCollectorResponseBodyResultConfigs& operator=(const UpdateCollectorResponseBodyResultConfigs &) = default ;
    UpdateCollectorResponseBodyResultConfigs& operator=(UpdateCollectorResponseBodyResultConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->fileName_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateCollectorResponseBodyResultConfigs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline UpdateCollectorResponseBodyResultConfigs& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


  protected:
    // The content of the configuration file.
    std::shared_ptr<string> content_ = nullptr;
    // The name of the configuration file.
    std::shared_ptr<string> fileName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
