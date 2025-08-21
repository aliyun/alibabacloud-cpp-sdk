// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDICTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDICTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListDictsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDictsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(analyzerType, analyzerType_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListDictsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(analyzerType, analyzerType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ListDictsRequest() = default ;
    ListDictsRequest(const ListDictsRequest &) = default ;
    ListDictsRequest(ListDictsRequest &&) = default ;
    ListDictsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDictsRequest() = default ;
    ListDictsRequest& operator=(const ListDictsRequest &) = default ;
    ListDictsRequest& operator=(ListDictsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->analyzerType_ != nullptr
        && this->name_ != nullptr; };
    // analyzerType Field Functions 
    bool hasAnalyzerType() const { return this->analyzerType_ != nullptr;};
    void deleteAnalyzerType() { this->analyzerType_ = nullptr;};
    inline string analyzerType() const { DARABONBA_PTR_GET_DEFAULT(analyzerType_, "") };
    inline ListDictsRequest& setAnalyzerType(string analyzerType) { DARABONBA_PTR_SET_VALUE(analyzerType_, analyzerType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDictsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The type of the dictionary. Valid values:
    // 
    // *   IK: IK dictionary after a standard update
    // *   IK_HOT: IK dictionary after a rolling update
    // *   SYNONYMS: synonym dictionary
    // *   ALIWS: Alibaba Cloud dictionary
    // 
    // This parameter is required.
    std::shared_ptr<string> analyzerType_ = nullptr;
    // The name of the dictionary file.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
