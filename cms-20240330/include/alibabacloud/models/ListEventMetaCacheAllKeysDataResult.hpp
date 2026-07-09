// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTMETACACHEALLKEYSDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTMETACACHEALLKEYSDATARESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListEventMetaCacheAllKeysDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventMetaCacheAllKeysDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(annotation, annotation_);
      DARABONBA_PTR_TO_JSON(label, label_);
      DARABONBA_PTR_TO_JSON(resourceTag, resourceTag_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventMetaCacheAllKeysDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(annotation, annotation_);
      DARABONBA_PTR_FROM_JSON(label, label_);
      DARABONBA_PTR_FROM_JSON(resourceTag, resourceTag_);
    };
    ListEventMetaCacheAllKeysDataResult() = default ;
    ListEventMetaCacheAllKeysDataResult(const ListEventMetaCacheAllKeysDataResult &) = default ;
    ListEventMetaCacheAllKeysDataResult(ListEventMetaCacheAllKeysDataResult &&) = default ;
    ListEventMetaCacheAllKeysDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventMetaCacheAllKeysDataResult() = default ;
    ListEventMetaCacheAllKeysDataResult& operator=(const ListEventMetaCacheAllKeysDataResult &) = default ;
    ListEventMetaCacheAllKeysDataResult& operator=(ListEventMetaCacheAllKeysDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->annotation_ == nullptr
        && this->label_ == nullptr && this->resourceTag_ == nullptr; };
    // annotation Field Functions 
    bool hasAnnotation() const { return this->annotation_ != nullptr;};
    void deleteAnnotation() { this->annotation_ = nullptr;};
    inline const vector<string> & getAnnotation() const { DARABONBA_PTR_GET_CONST(annotation_, vector<string>) };
    inline vector<string> getAnnotation() { DARABONBA_PTR_GET(annotation_, vector<string>) };
    inline ListEventMetaCacheAllKeysDataResult& setAnnotation(const vector<string> & annotation) { DARABONBA_PTR_SET_VALUE(annotation_, annotation) };
    inline ListEventMetaCacheAllKeysDataResult& setAnnotation(vector<string> && annotation) { DARABONBA_PTR_SET_RVALUE(annotation_, annotation) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline const vector<string> & getLabel() const { DARABONBA_PTR_GET_CONST(label_, vector<string>) };
    inline vector<string> getLabel() { DARABONBA_PTR_GET(label_, vector<string>) };
    inline ListEventMetaCacheAllKeysDataResult& setLabel(const vector<string> & label) { DARABONBA_PTR_SET_VALUE(label_, label) };
    inline ListEventMetaCacheAllKeysDataResult& setLabel(vector<string> && label) { DARABONBA_PTR_SET_RVALUE(label_, label) };


    // resourceTag Field Functions 
    bool hasResourceTag() const { return this->resourceTag_ != nullptr;};
    void deleteResourceTag() { this->resourceTag_ = nullptr;};
    inline const vector<string> & getResourceTag() const { DARABONBA_PTR_GET_CONST(resourceTag_, vector<string>) };
    inline vector<string> getResourceTag() { DARABONBA_PTR_GET(resourceTag_, vector<string>) };
    inline ListEventMetaCacheAllKeysDataResult& setResourceTag(const vector<string> & resourceTag) { DARABONBA_PTR_SET_VALUE(resourceTag_, resourceTag) };
    inline ListEventMetaCacheAllKeysDataResult& setResourceTag(vector<string> && resourceTag) { DARABONBA_PTR_SET_RVALUE(resourceTag_, resourceTag) };


  protected:
    // annotation类型的Key列表
    shared_ptr<vector<string>> annotation_ {};
    // label类型的Key列表
    shared_ptr<vector<string>> label_ {};
    // resource.tag类型的Key列表
    shared_ptr<vector<string>> resourceTag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
