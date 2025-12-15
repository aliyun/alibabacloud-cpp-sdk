// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYCLUSTERSUSERS_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERSRESPONSEBODYCLUSTERSUSERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class ListClustersResponseBodyClustersUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClustersResponseBodyClustersUsers& obj) { 
      DARABONBA_PTR_TO_JSON(NormalCounts, normalCounts_);
      DARABONBA_PTR_TO_JSON(SudoCounts, sudoCounts_);
    };
    friend void from_json(const Darabonba::Json& j, ListClustersResponseBodyClustersUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(NormalCounts, normalCounts_);
      DARABONBA_PTR_FROM_JSON(SudoCounts, sudoCounts_);
    };
    ListClustersResponseBodyClustersUsers() = default ;
    ListClustersResponseBodyClustersUsers(const ListClustersResponseBodyClustersUsers &) = default ;
    ListClustersResponseBodyClustersUsers(ListClustersResponseBodyClustersUsers &&) = default ;
    ListClustersResponseBodyClustersUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClustersResponseBodyClustersUsers() = default ;
    ListClustersResponseBodyClustersUsers& operator=(const ListClustersResponseBodyClustersUsers &) = default ;
    ListClustersResponseBodyClustersUsers& operator=(ListClustersResponseBodyClustersUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->normalCounts_ == nullptr
        && return this->sudoCounts_ == nullptr; };
    // normalCounts Field Functions 
    bool hasNormalCounts() const { return this->normalCounts_ != nullptr;};
    void deleteNormalCounts() { this->normalCounts_ = nullptr;};
    inline int32_t normalCounts() const { DARABONBA_PTR_GET_DEFAULT(normalCounts_, 0) };
    inline ListClustersResponseBodyClustersUsers& setNormalCounts(int32_t normalCounts) { DARABONBA_PTR_SET_VALUE(normalCounts_, normalCounts) };


    // sudoCounts Field Functions 
    bool hasSudoCounts() const { return this->sudoCounts_ != nullptr;};
    void deleteSudoCounts() { this->sudoCounts_ = nullptr;};
    inline int32_t sudoCounts() const { DARABONBA_PTR_GET_DEFAULT(sudoCounts_, 0) };
    inline ListClustersResponseBodyClustersUsers& setSudoCounts(int32_t sudoCounts) { DARABONBA_PTR_SET_VALUE(sudoCounts_, sudoCounts) };


  protected:
    // The number of ordinary users.
    std::shared_ptr<int32_t> normalCounts_ = nullptr;
    // The number of administrators.
    std::shared_ptr<int32_t> sudoCounts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
