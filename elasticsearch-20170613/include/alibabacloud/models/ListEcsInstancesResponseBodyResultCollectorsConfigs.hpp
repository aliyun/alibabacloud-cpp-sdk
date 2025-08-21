// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTECSINSTANCESRESPONSEBODYRESULTCOLLECTORSCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_LISTECSINSTANCESRESPONSEBODYRESULTCOLLECTORSCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListEcsInstancesResponseBodyResultCollectorsConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEcsInstancesResponseBodyResultCollectorsConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(fileName, fileName_);
    };
    friend void from_json(const Darabonba::Json& j, ListEcsInstancesResponseBodyResultCollectorsConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(fileName, fileName_);
    };
    ListEcsInstancesResponseBodyResultCollectorsConfigs() = default ;
    ListEcsInstancesResponseBodyResultCollectorsConfigs(const ListEcsInstancesResponseBodyResultCollectorsConfigs &) = default ;
    ListEcsInstancesResponseBodyResultCollectorsConfigs(ListEcsInstancesResponseBodyResultCollectorsConfigs &&) = default ;
    ListEcsInstancesResponseBodyResultCollectorsConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEcsInstancesResponseBodyResultCollectorsConfigs() = default ;
    ListEcsInstancesResponseBodyResultCollectorsConfigs& operator=(const ListEcsInstancesResponseBodyResultCollectorsConfigs &) = default ;
    ListEcsInstancesResponseBodyResultCollectorsConfigs& operator=(ListEcsInstancesResponseBodyResultCollectorsConfigs &&) = default ;
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
    inline ListEcsInstancesResponseBodyResultCollectorsConfigs& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ListEcsInstancesResponseBodyResultCollectorsConfigs& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


  protected:
    // The name of the file.
    std::shared_ptr<string> content_ = nullptr;
    // The information about the extended parameter.
    std::shared_ptr<string> fileName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
