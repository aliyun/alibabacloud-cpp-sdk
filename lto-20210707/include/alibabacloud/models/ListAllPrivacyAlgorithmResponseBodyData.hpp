// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLPRIVACYALGORITHMRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTALLPRIVACYALGORITHMRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListAllPrivacyAlgorithmResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllPrivacyAlgorithmResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AlgImplList, algImplList_);
      DARABONBA_PTR_TO_JSON(AlgType, algType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllPrivacyAlgorithmResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlgImplList, algImplList_);
      DARABONBA_PTR_FROM_JSON(AlgType, algType_);
    };
    ListAllPrivacyAlgorithmResponseBodyData() = default ;
    ListAllPrivacyAlgorithmResponseBodyData(const ListAllPrivacyAlgorithmResponseBodyData &) = default ;
    ListAllPrivacyAlgorithmResponseBodyData(ListAllPrivacyAlgorithmResponseBodyData &&) = default ;
    ListAllPrivacyAlgorithmResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllPrivacyAlgorithmResponseBodyData() = default ;
    ListAllPrivacyAlgorithmResponseBodyData& operator=(const ListAllPrivacyAlgorithmResponseBodyData &) = default ;
    ListAllPrivacyAlgorithmResponseBodyData& operator=(ListAllPrivacyAlgorithmResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algImplList_ == nullptr
        && return this->algType_ == nullptr; };
    // algImplList Field Functions 
    bool hasAlgImplList() const { return this->algImplList_ != nullptr;};
    void deleteAlgImplList() { this->algImplList_ = nullptr;};
    inline const vector<string> & algImplList() const { DARABONBA_PTR_GET_CONST(algImplList_, vector<string>) };
    inline vector<string> algImplList() { DARABONBA_PTR_GET(algImplList_, vector<string>) };
    inline ListAllPrivacyAlgorithmResponseBodyData& setAlgImplList(const vector<string> & algImplList) { DARABONBA_PTR_SET_VALUE(algImplList_, algImplList) };
    inline ListAllPrivacyAlgorithmResponseBodyData& setAlgImplList(vector<string> && algImplList) { DARABONBA_PTR_SET_RVALUE(algImplList_, algImplList) };


    // algType Field Functions 
    bool hasAlgType() const { return this->algType_ != nullptr;};
    void deleteAlgType() { this->algType_ = nullptr;};
    inline string algType() const { DARABONBA_PTR_GET_DEFAULT(algType_, "") };
    inline ListAllPrivacyAlgorithmResponseBodyData& setAlgType(string algType) { DARABONBA_PTR_SET_VALUE(algType_, algType) };


  protected:
    std::shared_ptr<vector<string>> algImplList_ = nullptr;
    std::shared_ptr<string> algType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
